package backend;

class InternetConnection
{
    private static inline var ENDPOINT:String = 'http://www.google.com';

    public function new() 
    {
        throw 'Should not be instantiated';
    }

    /**
    * Checks to see if the internet is connected
    * by polling google for a response code
    * 
    * Catch error to deal with potential firewalls
    * 
    * @param callback
    * @return
    */
    #if js
    public static function isAvailable(?callback:Bool->Void):Void
    #else
    public static function isAvailable(?callback:Bool->Void)
    #end
    {
        var isAvailable:Bool = false;

        try {
            var http = new haxe.Http(ENDPOINT);

            trace("making request to " + ENDPOINT);

            http.onError = function(status) {
                if (callback != null) {
                    callback(false);
                }
                isAvailable = false;
                trace(status);
            };

            http.onStatus = function(status) {
                if (callback != null) {
                    callback(true);
                }
                isAvailable = true;
                trace(status);
            };

            http.request(false);

            #if !js
            return isAvailable;
            #end

        } catch (e) {
            return false;
        }
    }
}