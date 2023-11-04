package;

import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

			if(!StringTools.endsWith (rootPath, "/")) {

				rootPath += "/";

			}

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_pixel_otf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_vcr_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"ah","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("videos", library);
		Assets.libraryPaths["songs"] = rootPath + "manifest/songs.json";
		Assets.libraryPaths["shared"] = rootPath + "manifest/shared.json";
		data = '{"name":null,"assets":"aoy4:pathy34:assets%2Ffonts%2Ffonts-go-here.txty4:sizezy4:typey4:TEXTy2:idR1y7:preloadtgoR2i14656R3y4:FONTy9:classNamey31:__ASSET__assets_fonts_pixel_otfR5y26:assets%2Ffonts%2Fpixel.otfR6tgoR2i75864R3R7R8y29:__ASSET__assets_fonts_vcr_ttfR5y24:assets%2Ffonts%2Fvcr.ttfR6tgoR0y34:assets%2Fcharacters%2Fbf-dead.jsonR2i764R3R4R5R13R6tgoR0y29:assets%2Fcharacters%2Fbf.jsonR2i2654R3R4R5R14R6tgoR0y43:assets%2Fdata%2Fblammed%2Fblammed-easy.jsonR2i8488R3R4R5R15R6tgoR0y43:assets%2Fdata%2Fblammed%2Fblammed-hard.jsonR2i12097R3R4R5R16R6tgoR0y38:assets%2Fdata%2Fblammed%2Fblammed.jsonR2i9687R3R4R5R17R6tgoR0y37:assets%2Fdata%2Fblammed%2Fevents.jsonR2i11319R3R4R5R18R6tgoR0y44:assets%2Fdata%2Fbopeebo%2Fbopeebo-boobs.jsonR2i4140R3R4R5R19R6tgoR0y43:assets%2Fdata%2Fbopeebo%2Fbopeebo-easy.jsonR2i9987R3R4R5R20R6tgoR0y43:assets%2Fdata%2Fbopeebo%2Fbopeebo-hard.jsonR2i4140R3R4R5R21R6tgoR0y38:assets%2Fdata%2Fbopeebo%2Fbopeebo.jsonR2i10391R3R4R5R22R6tgoR0y37:assets%2Fdata%2Fbopeebo%2Fevents.jsonR2i5392R3R4R5R23R6tgoR0y33:assets%2Fdata%2FcharacterList.txtR2i278R3R4R5R24R6tgoR0y39:assets%2Fdata%2Fcocoa%2Fcocoa-easy.jsonR2i7062R3R4R5R25R6tgoR0y39:assets%2Fdata%2Fcocoa%2Fcocoa-hard.jsonR2i10443R3R4R5R26R6tgoR0y34:assets%2Fdata%2Fcocoa%2Fcocoa.jsonR2i8278R3R4R5R27R6tgoR0y35:assets%2Fdata%2Fcocoa%2Fevents.jsonR2i3644R3R4R5R28R6tgoR0y49:assets%2Fdata%2Fdad-battle%2Fdad-battle-easy.jsonR2i7937R3R4R5R29R6tgoR0y49:assets%2Fdata%2Fdad-battle%2Fdad-battle-hard.jsonR2i9756R3R4R5R30R6tgoR0y44:assets%2Fdata%2Fdad-battle%2Fdad-battle.jsonR2i8913R3R4R5R31R6tgoR0y40:assets%2Fdata%2Fdad-battle%2Fevents.jsonR2i2861R3R4R5R32R6tgoR0y34:assets%2Fdata%2Fdata-goes-here.txtR2zR3R4R5R33R6tgoR0y41:assets%2Fdata%2Feggnog%2Feggnog-easy.jsonR2i9239R3R4R5R34R6tgoR0y41:assets%2Fdata%2Feggnog%2Feggnog-hard.jsonR2i11689R3R4R5R35R6tgoR0y36:assets%2Fdata%2Feggnog%2Feggnog.jsonR2i10333R3R4R5R36R6tgoR0y36:assets%2Fdata%2Feggnog%2Fevents.jsonR2i4881R3R4R5R37R6tgoR0y35:assets%2Fdata%2Ffresh%2Fevents.jsonR2i3201R3R4R5R38R6tgoR0y39:assets%2Fdata%2Ffresh%2Ffresh-easy.jsonR2i5857R3R4R5R39R6tgoR0y39:assets%2Fdata%2Ffresh%2Ffresh-hard.jsonR2i6905R3R4R5R40R6tgoR0y34:assets%2Fdata%2Ffresh%2Ffresh.jsonR2i6493R3R4R5R41R6tgoR0y37:assets%2Fdata%2Fguns%2Fguns-easy.jsonR2i15146R3R4R5R42R6tgoR0y37:assets%2Fdata%2Fguns%2Fguns-hard.jsonR2i23500R3R4R5R43R6tgoR0y32:assets%2Fdata%2Fguns%2Fguns.jsonR2i20620R3R4R5R44R6tgoR0y34:assets%2Fdata%2Fhigh%2Fevents.jsonR2i4558R3R4R5R45R6tgoR0y37:assets%2Fdata%2Fhigh%2Fhigh-easy.jsonR2i8563R3R4R5R46R6tgoR0y37:assets%2Fdata%2Fhigh%2Fhigh-hard.jsonR2i11553R3R4R5R47R6tgoR0y32:assets%2Fdata%2Fhigh%2Fhigh.jsonR2i9757R3R4R5R48R6tgoR0y29:assets%2Fdata%2FintroText.txtR2i2403R3R4R5R49R6tgoR0y29:assets%2Fdata%2Fmain-view.xmlR2i125R3R4R5R50R6tgoR0y34:assets%2Fdata%2Fmilf%2Fevents.jsonR2i7488R3R4R5R51R6tgoR0y37:assets%2Fdata%2Fmilf%2Fmilf-easy.jsonR2i13522R3R4R5R52R6tgoR0y37:assets%2Fdata%2Fmilf%2Fmilf-hard.jsonR2i18135R3R4R5R53R6tgoR0y32:assets%2Fdata%2Fmilf%2Fmilf.jsonR2i15192R3R4R5R54R6tgoR0y43:assets%2Fdata%2Fmonster%2Fmonster-easy.jsonR2i12175R3R4R5R55R6tgoR0y43:assets%2Fdata%2Fmonster%2Fmonster-hard.jsonR2i14163R3R4R5R56R6tgoR0y38:assets%2Fdata%2Fmonster%2Fmonster.jsonR2i13445R3R4R5R57R6tgoR0y41:assets%2Fdata%2Fphilly-nice%2Fevents.jsonR2i5191R3R4R5R58R6tgoR0y51:assets%2Fdata%2Fphilly-nice%2Fphilly-nice-easy.jsonR2i8067R3R4R5R59R6tgoR0y51:assets%2Fdata%2Fphilly-nice%2Fphilly-nice-hard.jsonR2i12556R3R4R5R60R6tgoR0y46:assets%2Fdata%2Fphilly-nice%2Fphilly-nice.jsonR2i10103R3R4R5R61R6tgoR0y37:assets%2Fdata%2Fpico%2Fpico-easy.jsonR2i6089R3R4R5R62R6tgoR0y37:assets%2Fdata%2Fpico%2Fpico-hard.jsonR2i8768R3R4R5R63R6tgoR0y32:assets%2Fdata%2Fpico%2Fpico.jsonR2i7493R3R4R5R64R6tgoR0y34:assets%2Fdata%2Fridge%2Fridge.jsonR2i34473R3R4R5R65R6tgoR0y35:assets%2Fdata%2Froses%2Fevents.jsonR2i9251R3R4R5R66R6tgoR0y39:assets%2Fdata%2Froses%2Froses-easy.jsonR2i6725R3R4R5R67R6tgoR0y39:assets%2Fdata%2Froses%2Froses-hard.jsonR2i10432R3R4R5R68R6tgoR0y34:assets%2Fdata%2Froses%2Froses.jsonR2i8609R3R4R5R69R6tgoR0y41:assets%2Fdata%2Froses%2FrosesDialogue.txtR2i155R3R4R5R70R6tgoR0y43:assets%2Fdata%2Fsatin-panties%2Fevents.jsonR2i3177R3R4R5R71R6tgoR0y55:assets%2Fdata%2Fsatin-panties%2Fsatin-panties-easy.jsonR2i8817R3R4R5R72R6tgoR0y55:assets%2Fdata%2Fsatin-panties%2Fsatin-panties-hard.jsonR2i12704R3R4R5R73R6tgoR0y50:assets%2Fdata%2Fsatin-panties%2Fsatin-panties.jsonR2i10725R3R4R5R74R6tgoR0y41:assets%2Fdata%2Fsenpai%2Fsenpai-easy.jsonR2i9027R3R4R5R75R6tgoR0y41:assets%2Fdata%2Fsenpai%2Fsenpai-hard.jsonR2i10778R3R4R5R76R6tgoR0y36:assets%2Fdata%2Fsenpai%2Fsenpai.jsonR2i10016R3R4R5R77R6tgoR0y43:assets%2Fdata%2Fsenpai%2FsenpaiDialogue.txtR2i164R3R4R5R78R6tgoR0y34:assets%2Fdata%2Fsmash%2Fsmash.jsonR2i25986R3R4R5R79R6tgoR0y39:assets%2Fdata%2Fsouth%2Fsouth-easy.jsonR2i8435R3R4R5R80R6tgoR0y39:assets%2Fdata%2Fsouth%2Fsouth-hard.jsonR2i10170R3R4R5R81R6tgoR0y34:assets%2Fdata%2Fsouth%2Fsouth.jsonR2i10097R3R4R5R82R6tgoR0y33:assets%2Fdata%2FspecialThanks.txtR2i322R3R4R5R83R6tgoR0y45:assets%2Fdata%2Fspookeez%2Fspookeez-easy.jsonR2i7965R3R4R5R84R6tgoR0y45:assets%2Fdata%2Fspookeez%2Fspookeez-hard.jsonR2i9429R3R4R5R85R6tgoR0y40:assets%2Fdata%2Fspookeez%2Fspookeez.jsonR2i8875R3R4R5R86R6tgoR0y29:assets%2Fdata%2FstageList.txtR2i69R3R4R5R87R6tgoR0y36:assets%2Fdata%2Fstress%2Fevents.jsonR2i800R3R4R5R88R6tgoR0y41:assets%2Fdata%2Fstress%2Fpicospeaker.jsonR2i18286R3R4R5R89R6tgoR0y41:assets%2Fdata%2Fstress%2Fstress-easy.jsonR2i36543R3R4R5R90R6tgoR0y41:assets%2Fdata%2Fstress%2Fstress-hard.jsonR2i58817R3R4R5R91R6tgoR0y36:assets%2Fdata%2Fstress%2Fstress.jsonR2i50271R3R4R5R92R6tgoR0y32:assets%2Fdata%2Ftest%2Ftest.jsonR2i12411R3R4R5R93R6tgoR0y36:assets%2Fdata%2Fthorns%2Fevents.jsonR2i8161R3R4R5R94R6tgoR0y41:assets%2Fdata%2Fthorns%2Fthorns-easy.jsonR2i10437R3R4R5R95R6tgoR0y41:assets%2Fdata%2Fthorns%2Fthorns-hard.jsonR2i15444R3R4R5R96R6tgoR0y36:assets%2Fdata%2Fthorns%2Fthorns.jsonR2i12691R3R4R5R97R6tgoR0y43:assets%2Fdata%2Fthorns%2FthornsDialogue.txtR2i309R3R4R5R98R6tgoR0y38:assets%2Fdata%2Ftutorial%2Fevents.jsonR2i2702R3R4R5R99R6tgoR0y45:assets%2Fdata%2Ftutorial%2Ftutorial-easy.jsonR2i5739R3R4R5R100R6tgoR0y45:assets%2Fdata%2Ftutorial%2Ftutorial-hard.jsonR2i6335R3R4R5R101R6tgoR0y40:assets%2Fdata%2Ftutorial%2Ftutorial.jsonR2i5739R3R4R5R102R6tgoR0y33:assets%2Fdata%2Fugh%2Fevents.jsonR2i1473R3R4R5R103R6tgoR0y35:assets%2Fdata%2Fugh%2Fugh-easy.jsonR2i8550R3R4R5R104R6tgoR0y35:assets%2Fdata%2Fugh%2Fugh-hard.jsonR2i12496R3R4R5R105R6tgoR0y30:assets%2Fdata%2Fugh%2Fugh.jsonR2i11354R3R4R5R106R6tgoR0y47:assets%2Fdata%2Fwinter-horrorland%2Fevents.jsonR2i6197R3R4R5R107R6tgoR0y63:assets%2Fdata%2Fwinter-horrorland%2Fwinter-horrorland-easy.jsonR2i11846R3R4R5R108R6tgoR0y63:assets%2Fdata%2Fwinter-horrorland%2Fwinter-horrorland-hard.jsonR2i14558R3R4R5R109R6tgoR0y58:assets%2Fdata%2Fwinter-horrorland%2Fwinter-horrorland.jsonR2i12808R3R4R5R110R6tgoR0y45:assets%2Fimages%2Fachievements%2Fdebugger.pngR2i7554R3y5:IMAGER5R111R6tgoR0y54:assets%2Fimages%2Fachievements%2Ffriday_night_play.pngR2i7661R3R112R5R113R6tgoR0y41:assets%2Fimages%2Fachievements%2Fhype.pngR2i23694R3R112R5R114R6tgoR0y54:assets%2Fimages%2Fachievements%2Flockedachievement.pngR2i1709R3R112R5R115R6tgoR0y48:assets%2Fimages%2Fachievements%2Foversinging.pngR2i19900R3R112R5R116R6tgoR0y56:assets%2Fimages%2Fachievements%2Froadkill_enthusiast.pngR2i5996R3R112R5R117R6tgoR0y44:assets%2Fimages%2Fachievements%2Ftoastie.pngR2i3094R3R112R5R118R6tgoR0y45:assets%2Fimages%2Fachievements%2Ftwo_keys.pngR2i27127R3R112R5R119R6tgoR0y43:assets%2Fimages%2Fachievements%2Fur_bad.pngR2i22017R3R112R5R120R6tgoR0y44:assets%2Fimages%2Fachievements%2Fur_good.pngR2i3467R3R112R5R121R6tgoR0y49:assets%2Fimages%2Fachievements%2Fweek1_nomiss.pngR2i20155R3R112R5R122R6tgoR0y49:assets%2Fimages%2Fachievements%2Fweek2_nomiss.pngR2i9304R3R112R5R123R6tgoR0y49:assets%2Fimages%2Fachievements%2Fweek3_nomiss.pngR2i21984R3R112R5R124R6tgoR0y49:assets%2Fimages%2Fachievements%2Fweek4_nomiss.pngR2i13430R3R112R5R125R6tgoR0y49:assets%2Fimages%2Fachievements%2Fweek5_nomiss.pngR2i21894R3R112R5R126R6tgoR0y49:assets%2Fimages%2Fachievements%2Fweek6_nomiss.pngR2i552R3R112R5R127R6tgoR0y49:assets%2Fimages%2Fachievements%2Fweek7_nomiss.pngR2i7249R3R112R5R128R6tgoR0y30:assets%2Fimages%2Falphabet.pngR2i358406R3R112R5R129R6tgoR0y30:assets%2Fimages%2Falphabet.xmlR2i106732R3R4R5R130R6tgoR0y33:assets%2Fimages%2FalphabetOld.pngR2i90070R3R112R5R131R6tgoR0y33:assets%2Fimages%2FalphabetOld.xmlR2i52694R3R4R5R132R6tgoR0y42:assets%2Fimages%2Falphabet_playstation.pngR2i2717R3R112R5R133R6tgoR0y42:assets%2Fimages%2Falphabet_playstation.xmlR2i1222R3R4R5R134R6tgoR0y45:assets%2Fimages%2Fcampaign_menu_UI_assets.pngR2i3044R3R112R5R135R6tgoR0y45:assets%2Fimages%2Fcampaign_menu_UI_assets.xmlR2i607R3R4R5R136R6tgoR0y33:assets%2Fimages%2Fchart_quant.pngR2i3143R3R112R5R137R6tgoR0y33:assets%2Fimages%2Fchart_quant.xmlR2i1044R3R4R5R138R6tgoR0y34:assets%2Fimages%2Fcheckboxanim.pngR2i16546R3R112R5R139R6tgoR0y34:assets%2Fimages%2Fcheckboxanim.xmlR2i2001R3R4R5R140R6tgoR0y36:assets%2Fimages%2Fcontrollertype.pngR2i2153R3R112R5R141R6tgoR0y34:assets%2Fimages%2Fcredits%2Fbb.pngR2i5485R3R112R5R142R6tgoR0y39:assets%2Fimages%2Fcredits%2Fdiscord.pngR2i1510R3R112R5R143R6tgoR0y40:assets%2Fimages%2Fcredits%2Fevilsk8r.pngR2i7497R3R112R5R144R6tgoR0y38:assets%2Fimages%2Fcredits%2Fflicky.pngR2i6462R3R112R5R145R6tgoR0y36:assets%2Fimages%2Fcredits%2Fkade.pngR2i9684R3R112R5R146R6tgoR0y43:assets%2Fimages%2Fcredits%2Fkawaisprite.pngR2i3953R3R112R5R147R6tgoR0y38:assets%2Fimages%2Fcredits%2Fkeoiki.pngR2i3918R3R112R5R148R6tgoR0y42:assets%2Fimages%2Fcredits%2Fmastereric.pngR2i11899R3R112R5R149R6tgoR0y44:assets%2Fimages%2Fcredits%2Fmissing_icon.pngR2i4039R3R112R5R150R6tgoR0y45:assets%2Fimages%2Fcredits%2Fninjamuffin99.pngR2i5850R3R112R5R151R6tgoR0y45:assets%2Fimages%2Fcredits%2Fphantomarcade.pngR2i9615R3R112R5R152R6tgoR0y37:assets%2Fimages%2Fcredits%2Fproxy.pngR2i7645R3R112R5R153R6tgoR0y39:assets%2Fimages%2Fcredits%2Friveren.pngR2i8283R3R112R5R154R6tgoR0y43:assets%2Fimages%2Fcredits%2Fshadowmario.pngR2i3679R3R112R5R155R6tgoR0y37:assets%2Fimages%2Fcredits%2Fshubs.pngR2i6829R3R112R5R156R6tgoR0y38:assets%2Fimages%2Fcredits%2Fsmokey.pngR2i9145R3R112R5R157R6tgoR0y38:assets%2Fimages%2Fcredits%2Fsqirra.pngR2i8258R3R112R5R158R6tgoR0y45:assets%2Fimages%2Fcredits%2Fsuperpowers04.pngR2i11585R3R112R5R159R6tgoR0y34:assets%2Fimages%2Fcry_about_it.pngR2i380631R3R112R5R160R6tgoR0y36:assets%2Fimages%2Fdialogue%2Fbf.jsonR2i1062R3R4R5R161R6tgoR0y36:assets%2Fimages%2Fdialogue%2Fgf.jsonR2i869R3R4R5R162R6tgoR0y28:assets%2Fimages%2Ffunkay.pngR2i135548R3R112R5R163R6tgoR0y35:assets%2Fimages%2FgfDanceTitle.jsonR2i133R3R4R5R164R6tgoR0y34:assets%2Fimages%2FgfDanceTitle.pngR2i745426R3R112R5R165R6tgoR0y34:assets%2Fimages%2FgfDanceTitle.xmlR2i4294R3R4R5R166R6tgoR0y30:assets%2Fimages%2Fhahadumb.pngR2i16097R3R112R5R167R6tgoR0y27:assets%2Fimages%2FhugeW.pngR2i18069R3R112R5R168R6tgoR0y39:assets%2Fimages%2Ficons%2Ficon-face.pngR2i3549R3R112R5R169R6tgoR0y26:assets%2Fimages%2Flogo.pngR2i86924R3R112R5R170R6tgoR0y32:assets%2Fimages%2FlogoBumpin.pngR2i578147R3R112R5R171R6tgoR0y32:assets%2Fimages%2FlogoBumpin.xmlR2i2197R3R4R5R172R6tgoR0y44:assets%2Fimages%2Fmainmenu%2Fmenu_awards.pngR2i28858R3R112R5R173R6tgoR0y44:assets%2Fimages%2Fmainmenu%2Fmenu_awards.xmlR2i1397R3R4R5R174R6tgoR0y45:assets%2Fimages%2Fmainmenu%2Fmenu_credits.pngR2i28734R3R112R5R175R6tgoR0y45:assets%2Fimages%2Fmainmenu%2Fmenu_credits.xmlR2i1402R3R4R5R176R6tgoR0y44:assets%2Fimages%2Fmainmenu%2Fmenu_donate.pngR2i24842R3R112R5R177R6tgoR0y44:assets%2Fimages%2Fmainmenu%2Fmenu_donate.xmlR2i1392R3R4R5R178R6tgoR0y46:assets%2Fimages%2Fmainmenu%2Fmenu_freeplay.pngR2i30316R3R112R5R179R6tgoR0y46:assets%2Fimages%2Fmainmenu%2Fmenu_freeplay.xmlR2i1416R3R4R5R180R6tgoR0y42:assets%2Fimages%2Fmainmenu%2Fmenu_mods.pngR2i22741R3R112R5R181R6tgoR0y42:assets%2Fimages%2Fmainmenu%2Fmenu_mods.xmlR2i1661R3R4R5R182R6tgoR0y45:assets%2Fimages%2Fmainmenu%2Fmenu_options.pngR2i27299R3R112R5R183R6tgoR0y45:assets%2Fimages%2Fmainmenu%2Fmenu_options.xmlR2i1349R3R4R5R184R6tgoR0y48:assets%2Fimages%2Fmainmenu%2Fmenu_story_mode.pngR2i54659R3R112R5R185R6tgoR0y48:assets%2Fimages%2Fmainmenu%2Fmenu_story_mode.xmlR2i1461R3R4R5R186R6tgoR0y54:assets%2Fimages%2Fmenubackgrounds%2Fmenu_christmas.pngR2i16696R3R112R5R187R6tgoR0y54:assets%2Fimages%2Fmenubackgrounds%2Fmenu_halloween.pngR2i7474R3R112R5R188R6tgoR0y49:assets%2Fimages%2Fmenubackgrounds%2Fmenu_limo.pngR2i6842R3R112R5R189R6tgoR0y51:assets%2Fimages%2Fmenubackgrounds%2Fmenu_philly.pngR2i19689R3R112R5R190R6tgoR0y51:assets%2Fimages%2Fmenubackgrounds%2Fmenu_school.pngR2i1963R3R112R5R191R6tgoR0y50:assets%2Fimages%2Fmenubackgrounds%2Fmenu_stage.pngR2i21287R3R112R5R192R6tgoR0y49:assets%2Fimages%2Fmenubackgrounds%2Fmenu_tank.pngR2i21289R3R112R5R193R6tgoR0y28:assets%2Fimages%2FmenuBG.pngR2i474435R3R112R5R194R6tgoR0y32:assets%2Fimages%2FmenuBGBlue.pngR2i454823R3R112R5R195R6tgoR0y35:assets%2Fimages%2FmenuBGMagenta.pngR2i446604R3R112R5R196R6tgoR0y42:assets%2Fimages%2Fmenucharacters%2Fbf.jsonR2i135R3R4R5R197R6tgoR0y43:assets%2Fimages%2Fmenucharacters%2Fdad.jsonR2i136R3R4R5R198R6tgoR0y42:assets%2Fimages%2Fmenucharacters%2Fgf.jsonR2i135R3R4R5R199R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2FMenu_BF.pngR2i231974R3R112R5R200R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2FMenu_BF.xmlR2i5627R3R4R5R201R6tgoR0y47:assets%2Fimages%2Fmenucharacters%2FMenu_Dad.pngR2i111851R3R112R5R202R6tgoR0y47:assets%2Fimages%2Fmenucharacters%2FMenu_Dad.xmlR2i2134R3R4R5R203R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2FMenu_GF.pngR2i314273R3R112R5R204R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2FMenu_GF.xmlR2i3837R3R4R5R205R6tgoR0y47:assets%2Fimages%2Fmenucharacters%2FMenu_Mom.pngR2i152414R3R112R5R206R6tgoR0y47:assets%2Fimages%2Fmenucharacters%2FMenu_Mom.xmlR2i2132R3R4R5R207R6tgoR0y51:assets%2Fimages%2Fmenucharacters%2FMenu_Parents.pngR2i335745R3R112R5R208R6tgoR0y51:assets%2Fimages%2Fmenucharacters%2FMenu_Parents.xmlR2i2207R3R4R5R209R6tgoR0y48:assets%2Fimages%2Fmenucharacters%2FMenu_Pico.pngR2i109825R3R112R5R210R6tgoR0y48:assets%2Fimages%2Fmenucharacters%2FMenu_Pico.xmlR2i2161R3R4R5R211R6tgoR0y50:assets%2Fimages%2Fmenucharacters%2FMenu_Senpai.pngR2i64463R3R112R5R212R6tgoR0y50:assets%2Fimages%2Fmenucharacters%2FMenu_Senpai.xmlR2i1367R3R4R5R213R6tgoR0y55:assets%2Fimages%2Fmenucharacters%2FMenu_Spooky_Kids.pngR2i80071R3R112R5R214R6tgoR0y55:assets%2Fimages%2Fmenucharacters%2FMenu_Spooky_Kids.xmlR2i2564R3R4R5R215R6tgoR0y51:assets%2Fimages%2Fmenucharacters%2FMenu_Tankman.pngR2i117065R3R112R5R216R6tgoR0y51:assets%2Fimages%2Fmenucharacters%2FMenu_Tankman.xmlR2i2183R3R4R5R217R6tgoR0y43:assets%2Fimages%2Fmenucharacters%2Fmom.jsonR2i134R3R4R5R218R6tgoR0y57:assets%2Fimages%2Fmenucharacters%2Fparents-christmas.jsonR2i144R3R4R5R219R6tgoR0y44:assets%2Fimages%2Fmenucharacters%2Fpico.jsonR2i138R3R4R5R220R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2Fsenpai.jsonR2i142R3R4R5R221R6tgoR0y46:assets%2Fimages%2Fmenucharacters%2Fspooky.jsonR2i151R3R4R5R222R6tgoR0y47:assets%2Fimages%2Fmenucharacters%2Ftankman.jsonR2i143R3R4R5R223R6tgoR0y31:assets%2Fimages%2FmenuDesat.pngR2i215613R3R112R5R224R6tgoR0y45:assets%2Fimages%2Fmenudifficulties%2Feasy.pngR2i3453R3R112R5R225R6tgoR0y45:assets%2Fimages%2Fmenudifficulties%2Fhard.pngR2i3880R3R112R5R226R6tgoR0y47:assets%2Fimages%2Fmenudifficulties%2Fnormal.pngR2i4853R3R112R5R227R6tgoR0y33:assets%2Fimages%2FMenu_Tracks.pngR2i1254R3R112R5R228R6tgoR0y37:assets%2Fimages%2Fnewgrounds_logo.pngR2i40016R3R112R5R229R6tgoR0y26:assets%2Fimages%2Fnum0.pngR2i1816R3R112R5R230R6tgoR0y26:assets%2Fimages%2Fnum1.pngR2i1639R3R112R5R231R6tgoR0y26:assets%2Fimages%2Fnum2.pngR2i1985R3R112R5R232R6tgoR0y26:assets%2Fimages%2Fnum3.pngR2i1990R3R112R5R233R6tgoR0y26:assets%2Fimages%2Fnum4.pngR2i1955R3R112R5R234R6tgoR0y26:assets%2Fimages%2Fnum5.pngR2i2023R3R112R5R235R6tgoR0y26:assets%2Fimages%2Fnum6.pngR2i2082R3R112R5R236R6tgoR0y26:assets%2Fimages%2Fnum7.pngR2i1881R3R112R5R237R6tgoR0y26:assets%2Fimages%2Fnum8.pngR2i2024R3R112R5R238R6tgoR0y26:assets%2Fimages%2Fnum9.pngR2i1851R3R112R5R239R6tgoR0y42:assets%2Fimages%2Fstorymenu%2Ftutorial.pngR2i7056R3R112R5R240R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek1.pngR2i6261R3R112R5R241R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek2.pngR2i6517R3R112R5R242R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek3.pngR2i7148R3R112R5R243R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek4.pngR2i6262R3R112R5R244R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek5.pngR2i6440R3R112R5R245R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek6.pngR2i8979R3R112R5R246R6tgoR0y39:assets%2Fimages%2Fstorymenu%2Fweek7.pngR2i7349R3R112R5R247R6tgoR0y32:assets%2Fimages%2FtitleEnter.pngR2i26291R3R112R5R248R6tgoR0y32:assets%2Fimages%2FtitleEnter.xmlR2i527R3R4R5R249R6tgoR0y32:assets%2Fimages%2FunknownMod.pngR2i2387R3R112R5R250R6tgoR2i2309657R3y5:MUSICR5y31:assets%2Fmusic%2FfreakyMenu.mp3y9:pathGroupaR252hR6tgoR2i2402257R3R251R5y31:assets%2Fmusic%2FoffsetSong.mp3R253aR254hR6tgoR2i17762R3R251R5y32:assets%2Fsounds%2FcancelMenu.mp3R253aR255hR6tgoR2i91950R3R251R5y33:assets%2Fsounds%2FconfirmMenu.mp3R253aR256hR6tgoR2i9155R3R251R5y34:assets%2Fsounds%2Fintro1-pixel.mp3R253aR257hR6tgoR2i9912R3R251R5y34:assets%2Fsounds%2Fintro2-pixel.mp3R253aR258hR6tgoR2i9128R3R251R5y34:assets%2Fsounds%2Fintro3-pixel.mp3R253aR259hR6tgoR2i21651R3R251R5y35:assets%2Fsounds%2FintroGo-pixel.mp3R253aR260hR6tgoR2i17762R3R251R5y32:assets%2Fsounds%2FscrollMenu.mp3R253aR261hR6tgoR0y30:assets%2Fweeks%2Ftutorial.jsonR2i294R3R4R5R262R6tgoR0y27:assets%2Fweeks%2Fweek1.jsonR2i390R3R4R5R263R6tgoR0y27:assets%2Fweeks%2Fweek2.jsonR2i392R3R4R5R264R6tgoR0y27:assets%2Fweeks%2Fweek3.jsonR2i377R3R4R5R265R6tgoR0y27:assets%2Fweeks%2Fweek4.jsonR2i390R3R4R5R266R6tgoR0y27:assets%2Fweeks%2Fweek5.jsonR2i418R3R4R5R267R6tgoR0y27:assets%2Fweeks%2Fweek6.jsonR2i429R3R4R5R268R6tgoR0y27:assets%2Fweeks%2Fweek7.jsonR2i538R3R4R5R269R6tgoR0y29:assets%2Fweeks%2FweekList.txtR2i57R3R4R5R270R6tgoR0y21:do%20NOT%20readme.txtR2i4417R3R4R5R271R6tgoR2i2114R3R251R5y26:flixel%2Fsounds%2Fbeep.mp3R253aR272y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R251R5y28:flixel%2Fsounds%2Fflixel.mp3R253aR274y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i5794R3y5:SOUNDR5R273R253aR272R273hgoR2i33629R3R276R5R275R253aR274R275hgoR2i15744R3R7R8y35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R7R8y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i519R3R112R5R281R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i3280R3R112R5R282R6tgoR0y34:flixel%2Fflixel-ui%2Fimg%2Fbox.pngR2i912R3R112R5R283R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fbutton.pngR2i433R3R112R5R284R6tgoR0y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_down.pngR2i446R3R112R5R285R6tgoR0y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_left.pngR2i459R3R112R5R286R6tgoR0y49:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_right.pngR2i511R3R112R5R287R6tgoR0y46:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_up.pngR2i493R3R112R5R288R6tgoR0y42:flixel%2Fflixel-ui%2Fimg%2Fbutton_thin.pngR2i247R3R112R5R289R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Fbutton_toggle.pngR2i534R3R112R5R290R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fcheck_box.pngR2i922R3R112R5R291R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Fcheck_mark.pngR2i946R3R112R5R292R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fchrome.pngR2i253R3R112R5R293R6tgoR0y42:flixel%2Fflixel-ui%2Fimg%2Fchrome_flat.pngR2i212R3R112R5R294R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_inset.pngR2i192R3R112R5R295R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_light.pngR2i214R3R112R5R296R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Fdropdown_mark.pngR2i156R3R112R5R297R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Ffinger_big.pngR2i1724R3R112R5R298R6tgoR0y43:flixel%2Fflixel-ui%2Fimg%2Ffinger_small.pngR2i294R3R112R5R299R6tgoR0y38:flixel%2Fflixel-ui%2Fimg%2Fhilight.pngR2i129R3R112R5R300R6tgoR0y36:flixel%2Fflixel-ui%2Fimg%2Finvis.pngR2i128R3R112R5R301R6tgoR0y41:flixel%2Fflixel-ui%2Fimg%2Fminus_mark.pngR2i136R3R112R5R302R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fplus_mark.pngR2i147R3R112R5R303R6tgoR0y36:flixel%2Fflixel-ui%2Fimg%2Fradio.pngR2i191R3R112R5R304R6tgoR0y40:flixel%2Fflixel-ui%2Fimg%2Fradio_dot.pngR2i153R3R112R5R305R6tgoR0y37:flixel%2Fflixel-ui%2Fimg%2Fswatch.pngR2i185R3R112R5R306R6tgoR0y34:flixel%2Fflixel-ui%2Fimg%2Ftab.pngR2i201R3R112R5R307R6tgoR0y39:flixel%2Fflixel-ui%2Fimg%2Ftab_back.pngR2i210R3R112R5R308R6tgoR0y44:flixel%2Fflixel-ui%2Fimg%2Ftooltip_arrow.pngR2i18509R3R112R5R309R6tgoR0y39:flixel%2Fflixel-ui%2Fxml%2Fdefaults.xmlR2i1263R3R4R5R310R6tgoR0y53:flixel%2Fflixel-ui%2Fxml%2Fdefault_loading_screen.xmlR2i1953R3R4R5R311R6tgoR0y44:flixel%2Fflixel-ui%2Fxml%2Fdefault_popup.xmlR2i1848R3R4R5R312R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("videos");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("videos");
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_fonts_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_pixel_otf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_vcr_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_bf_dead_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_characters_bf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_blammed_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_boobs_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_characterlist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dad_battle_dad_battle_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dad_battle_dad_battle_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dad_battle_dad_battle_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_dad_battle_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_fresh_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_guns_guns_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_guns_guns_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_guns_guns_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_high_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_high_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_high_high_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_introtext_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_main_view_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_milf_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_monster_monster_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_monster_monster_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_monster_monster_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_philly_nice_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_philly_nice_philly_nice_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_philly_nice_philly_nice_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_philly_nice_philly_nice_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_ridge_ridge_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_roses_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_roses_rosesdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpaidialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_smash_smash_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_south_south_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_south_south_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_south_south_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_specialthanks_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stagelist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stress_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stress_picospeaker_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stress_stress_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stress_stress_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_stress_stress_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_test_test_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_thorns_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thornsdialogue_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_ugh_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_ugh_ugh_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_ugh_ugh_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_ugh_ugh_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_events_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_easy_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_hard_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_debugger_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_friday_night_play_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_hype_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_lockedachievement_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_oversinging_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_roadkill_enthusiast_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_toastie_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_two_keys_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_ur_bad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_ur_good_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week1_nomiss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week2_nomiss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week3_nomiss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week4_nomiss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week5_nomiss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week6_nomiss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week7_nomiss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabetold_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabetold_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_playstation_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_playstation_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_chart_quant_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_chart_quant_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_checkboxanim_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_checkboxanim_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_controllertype_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_bb_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_discord_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_evilsk8r_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_flicky_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_kade_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_kawaisprite_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_keoiki_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_mastereric_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_missing_icon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_ninjamuffin99_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_phantomarcade_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_proxy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_riveren_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_shadowmario_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_shubs_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_smokey_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_sqirra_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_credits_superpowers04_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_cry_about_it_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dialogue_bf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_dialogue_gf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_funkay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_hahadumb_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_hugew_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_face_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_awards_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_awards_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_credits_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_credits_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_donate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_donate_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_freeplay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_freeplay_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_mods_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_mods_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_options_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_options_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_story_mode_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_story_mode_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_christmas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_halloween_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_limo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_philly_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_school_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_stage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_tank_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubgblue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menubgmagenta_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_bf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_dad_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_gf_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_bf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_bf_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_dad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_dad_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_gf_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_gf_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_mom_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_mom_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_parents_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_parents_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_pico_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_pico_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_senpai_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_senpai_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_spooky_kids_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_spooky_kids_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_tankman_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_tankman_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_mom_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_parents_christmas_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_pico_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_senpai_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_spooky_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_tankman_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menudesat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_easy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_hard_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_normal_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_menu_tracks_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_newgrounds_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_num9_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_tutorial_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_unknownmod_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_freakymenu_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_offsetsong_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_cancelmenu_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_confirmmenu_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro1_pixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro2_pixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_intro3_pixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_introgo_pixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_scrollmenu_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_tutorial_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_week1_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_week2_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_week3_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_week4_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_week5_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_week6_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_week7_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_weeks_weeklist_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_blammed_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_blammed_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_bopeebo_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_bopeebo_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_cocoa_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_cocoa_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_dad_battle_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_dad_battle_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_eggnog_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_eggnog_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_fresh_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_fresh_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_guns_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_guns_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_high_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_high_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_milf_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_milf_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_monster_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_monster_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_philly_nice_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_philly_nice_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_pico_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_pico_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_roses_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_roses_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_satin_panties_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_satin_panties_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_senpai_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_senpai_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_south_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_south_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_spookeez_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_spookeez_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_stress_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_stress_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_test_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_test_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_thorns_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_thorns_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_tutorial_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_ugh_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_ugh_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_winter_horrorland_inst_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_songs_winter_horrorland_voices_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_bad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_dead_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_dead_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_combo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_bf_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_bf_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_gf_dialogue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_gf_dialogue_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_eventarrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_go_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_good_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_grafix_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_healthbar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_colorwheel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_copy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_note_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_notepixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_palette_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_paste_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_list_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_chip_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_chip_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_future_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_future_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_list_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_diamond_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_diamond_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_diamond_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_electric_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_electric_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_electric_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_sparkles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_sparkles_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_sparkles_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_vanilla_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_vanilla_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_vanilla_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_bad_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_combo_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_date_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_good_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assets_chip_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assets_future_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assetsends_chip_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assetsends_future_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assetsends_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num0_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num1_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num2_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num3_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num4_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num5_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num6_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num7_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num8_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num9_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_ready_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_set_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_shit_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_sick_pixel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_ready_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_set_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_shit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_sick_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_images_timebar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_breakfast_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameover_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameoverend_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_music_tea_time_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_text_box_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise3_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_clicktext_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_dialogue_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_dialogueclose_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_fnf_loss_sfx_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_3_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_4_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_hitsound_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro3_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_introgo_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_metronome_tick_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote1_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote2_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote3_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_soundtest_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__do_not_readme_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_videos_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_songs_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_shared_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/fonts/fonts-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_fonts_fonts_go_here_txt extends haxe.io.Bytes {}
@:keep @:font("export/release/html5/obj/webfont/pixel.otf") @:noCompletion #if display private #end class __ASSET__assets_fonts_pixel_otf extends lime.text.Font {}
@:keep @:font("export/release/html5/obj/webfont/vcr.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_vcr_ttf extends lime.text.Font {}
@:keep @:file("assets/preload/characters/bf-dead.json") @:noCompletion #if display private #end class __ASSET__assets_characters_bf_dead_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/characters/bf.json") @:noCompletion #if display private #end class __ASSET__assets_characters_bf_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/blammed/blammed-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/blammed/blammed-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/blammed/blammed.json") @:noCompletion #if display private #end class __ASSET__assets_data_blammed_blammed_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/blammed/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_blammed_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/bopeebo/bopeebo-boobs.json") @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_boobs_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/bopeebo/bopeebo-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/bopeebo/bopeebo-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/bopeebo/bopeebo.json") @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_bopeebo_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/bopeebo/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_bopeebo_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/characterList.txt") @:noCompletion #if display private #end class __ASSET__assets_data_characterlist_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/cocoa/cocoa-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/cocoa/cocoa-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/cocoa/cocoa.json") @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_cocoa_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/cocoa/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_cocoa_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/dad-battle/dad-battle-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_dad_battle_dad_battle_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/dad-battle/dad-battle-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_dad_battle_dad_battle_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/dad-battle/dad-battle.json") @:noCompletion #if display private #end class __ASSET__assets_data_dad_battle_dad_battle_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/dad-battle/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_dad_battle_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/eggnog/eggnog-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/eggnog/eggnog-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/eggnog/eggnog.json") @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_eggnog_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/eggnog/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_eggnog_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/fresh/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_fresh_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/fresh/fresh-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/fresh/fresh-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/fresh/fresh.json") @:noCompletion #if display private #end class __ASSET__assets_data_fresh_fresh_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/guns/guns-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_guns_guns_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/guns/guns-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_guns_guns_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/guns/guns.json") @:noCompletion #if display private #end class __ASSET__assets_data_guns_guns_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/high/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_high_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/high/high-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_high_high_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/high/high-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_high_high_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/high/high.json") @:noCompletion #if display private #end class __ASSET__assets_data_high_high_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/introText.txt") @:noCompletion #if display private #end class __ASSET__assets_data_introtext_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/main-view.xml") @:noCompletion #if display private #end class __ASSET__assets_data_main_view_xml extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/milf/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_milf_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/milf/milf-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/milf/milf-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/milf/milf.json") @:noCompletion #if display private #end class __ASSET__assets_data_milf_milf_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/monster/monster-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_monster_monster_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/monster/monster-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_monster_monster_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/monster/monster.json") @:noCompletion #if display private #end class __ASSET__assets_data_monster_monster_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/philly-nice/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_philly_nice_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/philly-nice/philly-nice-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_philly_nice_philly_nice_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/philly-nice/philly-nice-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_philly_nice_philly_nice_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/philly-nice/philly-nice.json") @:noCompletion #if display private #end class __ASSET__assets_data_philly_nice_philly_nice_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/pico/pico-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/pico/pico-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/pico/pico.json") @:noCompletion #if display private #end class __ASSET__assets_data_pico_pico_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/ridge/ridge.json") @:noCompletion #if display private #end class __ASSET__assets_data_ridge_ridge_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/roses/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_roses_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/roses/roses-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/roses/roses-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/roses/roses.json") @:noCompletion #if display private #end class __ASSET__assets_data_roses_roses_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/roses/rosesDialogue.txt") @:noCompletion #if display private #end class __ASSET__assets_data_roses_rosesdialogue_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/satin-panties/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/satin-panties/satin-panties-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/satin-panties/satin-panties-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/satin-panties/satin-panties.json") @:noCompletion #if display private #end class __ASSET__assets_data_satin_panties_satin_panties_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/senpai/senpai-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/senpai/senpai-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/senpai/senpai.json") @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpai_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/senpai/senpaiDialogue.txt") @:noCompletion #if display private #end class __ASSET__assets_data_senpai_senpaidialogue_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/smash/smash.json") @:noCompletion #if display private #end class __ASSET__assets_data_smash_smash_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/south/south-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_south_south_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/south/south-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_south_south_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/south/south.json") @:noCompletion #if display private #end class __ASSET__assets_data_south_south_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/specialThanks.txt") @:noCompletion #if display private #end class __ASSET__assets_data_specialthanks_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/spookeez/spookeez-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/spookeez/spookeez-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/spookeez/spookeez.json") @:noCompletion #if display private #end class __ASSET__assets_data_spookeez_spookeez_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/stageList.txt") @:noCompletion #if display private #end class __ASSET__assets_data_stagelist_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/stress/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_stress_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/stress/picospeaker.json") @:noCompletion #if display private #end class __ASSET__assets_data_stress_picospeaker_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/stress/stress-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_stress_stress_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/stress/stress-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_stress_stress_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/stress/stress.json") @:noCompletion #if display private #end class __ASSET__assets_data_stress_stress_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/test/test.json") @:noCompletion #if display private #end class __ASSET__assets_data_test_test_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/thorns/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_thorns_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/thorns/thorns-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/thorns/thorns-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/thorns/thorns.json") @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thorns_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/thorns/thornsDialogue.txt") @:noCompletion #if display private #end class __ASSET__assets_data_thorns_thornsdialogue_txt extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/tutorial/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/tutorial/tutorial-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/tutorial/tutorial-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/tutorial/tutorial.json") @:noCompletion #if display private #end class __ASSET__assets_data_tutorial_tutorial_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/ugh/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_ugh_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/ugh/ugh-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_ugh_ugh_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/ugh/ugh-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_ugh_ugh_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/ugh/ugh.json") @:noCompletion #if display private #end class __ASSET__assets_data_ugh_ugh_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/winter-horrorland/events.json") @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_events_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/winter-horrorland/winter-horrorland-easy.json") @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_easy_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/winter-horrorland/winter-horrorland-hard.json") @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_hard_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/data/winter-horrorland/winter-horrorland.json") @:noCompletion #if display private #end class __ASSET__assets_data_winter_horrorland_winter_horrorland_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/achievements/debugger.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_debugger_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/friday_night_play.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_friday_night_play_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/hype.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_hype_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/lockedachievement.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_lockedachievement_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/oversinging.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_oversinging_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/roadkill_enthusiast.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_roadkill_enthusiast_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/toastie.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_toastie_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/two_keys.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_two_keys_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/ur_bad.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_ur_bad_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/ur_good.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_ur_good_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/week1_nomiss.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week1_nomiss_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/week2_nomiss.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week2_nomiss_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/week3_nomiss.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week3_nomiss_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/week4_nomiss.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week4_nomiss_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/week5_nomiss.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week5_nomiss_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/week6_nomiss.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week6_nomiss_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/achievements/week7_nomiss.png") @:noCompletion #if display private #end class __ASSET__assets_images_achievements_week7_nomiss_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/alphabet.png") @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/alphabet.xml") @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/alphabetOld.png") @:noCompletion #if display private #end class __ASSET__assets_images_alphabetold_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/alphabetOld.xml") @:noCompletion #if display private #end class __ASSET__assets_images_alphabetold_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/alphabet_playstation.png") @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_playstation_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/alphabet_playstation.xml") @:noCompletion #if display private #end class __ASSET__assets_images_alphabet_playstation_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/campaign_menu_UI_assets.png") @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/campaign_menu_UI_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_images_campaign_menu_ui_assets_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/chart_quant.png") @:noCompletion #if display private #end class __ASSET__assets_images_chart_quant_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/chart_quant.xml") @:noCompletion #if display private #end class __ASSET__assets_images_chart_quant_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/checkboxanim.png") @:noCompletion #if display private #end class __ASSET__assets_images_checkboxanim_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/checkboxanim.xml") @:noCompletion #if display private #end class __ASSET__assets_images_checkboxanim_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/controllertype.png") @:noCompletion #if display private #end class __ASSET__assets_images_controllertype_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/bb.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_bb_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/discord.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_discord_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/evilsk8r.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_evilsk8r_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/flicky.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_flicky_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/kade.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_kade_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/kawaisprite.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_kawaisprite_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/keoiki.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_keoiki_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/mastereric.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_mastereric_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/missing_icon.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_missing_icon_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/ninjamuffin99.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_ninjamuffin99_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/phantomarcade.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_phantomarcade_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/proxy.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_proxy_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/riveren.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_riveren_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/shadowmario.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_shadowmario_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/shubs.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_shubs_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/smokey.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_smokey_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/sqirra.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_sqirra_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/credits/superpowers04.png") @:noCompletion #if display private #end class __ASSET__assets_images_credits_superpowers04_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/cry_about_it.png") @:noCompletion #if display private #end class __ASSET__assets_images_cry_about_it_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/dialogue/bf.json") @:noCompletion #if display private #end class __ASSET__assets_images_dialogue_bf_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/dialogue/gf.json") @:noCompletion #if display private #end class __ASSET__assets_images_dialogue_gf_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/funkay.png") @:noCompletion #if display private #end class __ASSET__assets_images_funkay_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/gfDanceTitle.json") @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/gfDanceTitle.png") @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/gfDanceTitle.xml") @:noCompletion #if display private #end class __ASSET__assets_images_gfdancetitle_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/hahadumb.png") @:noCompletion #if display private #end class __ASSET__assets_images_hahadumb_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/hugeW.png") @:noCompletion #if display private #end class __ASSET__assets_images_hugew_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/icons/icon-face.png") @:noCompletion #if display private #end class __ASSET__assets_images_icons_icon_face_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/logo.png") @:noCompletion #if display private #end class __ASSET__assets_images_logo_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/logoBumpin.png") @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/logoBumpin.xml") @:noCompletion #if display private #end class __ASSET__assets_images_logobumpin_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_awards.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_awards_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_awards.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_awards_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_credits.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_credits_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_credits.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_credits_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_donate.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_donate_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_donate.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_donate_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_freeplay.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_freeplay_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_freeplay.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_freeplay_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_mods.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_mods_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_mods.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_mods_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_options.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_options_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_options.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_options_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/mainmenu/menu_story_mode.png") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_story_mode_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/mainmenu/menu_story_mode.xml") @:noCompletion #if display private #end class __ASSET__assets_images_mainmenu_menu_story_mode_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_christmas.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_christmas_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_halloween.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_halloween_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_limo.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_limo_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_philly.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_philly_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_school.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_school_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_stage.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_stage_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menubackgrounds/menu_tank.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubackgrounds_menu_tank_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menuBG.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubg_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menuBGBlue.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubgblue_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menuBGMagenta.png") @:noCompletion #if display private #end class __ASSET__assets_images_menubgmagenta_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/bf.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_bf_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/dad.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_dad_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/gf.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_gf_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_BF.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_bf_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_BF.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_bf_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Dad.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_dad_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Dad.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_dad_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_GF.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_gf_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_GF.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_gf_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Mom.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_mom_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Mom.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_mom_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Parents.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_parents_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Parents.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_parents_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Pico.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_pico_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Pico.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_pico_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Senpai.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_senpai_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Senpai.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_senpai_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Spooky_Kids.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_spooky_kids_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Spooky_Kids.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_spooky_kids_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menucharacters/Menu_Tankman.png") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_tankman_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/menucharacters/Menu_Tankman.xml") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_menu_tankman_xml extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/mom.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_mom_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/parents-christmas.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_parents_christmas_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/pico.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_pico_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/senpai.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_senpai_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/spooky.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_spooky_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/images/menucharacters/tankman.json") @:noCompletion #if display private #end class __ASSET__assets_images_menucharacters_tankman_json extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/menuDesat.png") @:noCompletion #if display private #end class __ASSET__assets_images_menudesat_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menudifficulties/easy.png") @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_easy_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menudifficulties/hard.png") @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_hard_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/menudifficulties/normal.png") @:noCompletion #if display private #end class __ASSET__assets_images_menudifficulties_normal_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/Menu_Tracks.png") @:noCompletion #if display private #end class __ASSET__assets_images_menu_tracks_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/newgrounds_logo.png") @:noCompletion #if display private #end class __ASSET__assets_images_newgrounds_logo_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num0.png") @:noCompletion #if display private #end class __ASSET__assets_images_num0_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num1.png") @:noCompletion #if display private #end class __ASSET__assets_images_num1_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num2.png") @:noCompletion #if display private #end class __ASSET__assets_images_num2_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num3.png") @:noCompletion #if display private #end class __ASSET__assets_images_num3_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num4.png") @:noCompletion #if display private #end class __ASSET__assets_images_num4_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num5.png") @:noCompletion #if display private #end class __ASSET__assets_images_num5_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num6.png") @:noCompletion #if display private #end class __ASSET__assets_images_num6_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num7.png") @:noCompletion #if display private #end class __ASSET__assets_images_num7_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num8.png") @:noCompletion #if display private #end class __ASSET__assets_images_num8_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/num9.png") @:noCompletion #if display private #end class __ASSET__assets_images_num9_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/tutorial.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_tutorial_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week1.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week1_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week2.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week2_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week3.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week3_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week4.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week4_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week5.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week5_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week6.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week6_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/storymenu/week7.png") @:noCompletion #if display private #end class __ASSET__assets_images_storymenu_week7_png extends lime.graphics.Image {}
@:keep @:image("assets/preload/images/titleEnter.png") @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/images/titleEnter.xml") @:noCompletion #if display private #end class __ASSET__assets_images_titleenter_xml extends haxe.io.Bytes {}
@:keep @:image("assets/preload/images/unknownMod.png") @:noCompletion #if display private #end class __ASSET__assets_images_unknownmod_png extends lime.graphics.Image {}
@:keep @:file("assets/preload/music/freakyMenu.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_freakymenu_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/music/offsetSong.mp3") @:noCompletion #if display private #end class __ASSET__assets_music_offsetsong_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/cancelMenu.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_cancelmenu_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/confirmMenu.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_confirmmenu_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/intro1-pixel.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro1_pixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/intro2-pixel.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro2_pixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/intro3-pixel.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_intro3_pixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/introGo-pixel.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_introgo_pixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/sounds/scrollMenu.mp3") @:noCompletion #if display private #end class __ASSET__assets_sounds_scrollmenu_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/tutorial.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_tutorial_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/week1.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_week1_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/week2.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_week2_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/week3.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_week3_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/week4.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_week4_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/week5.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_week5_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/week6.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_week6_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/week7.json") @:noCompletion #if display private #end class __ASSET__assets_weeks_week7_json extends haxe.io.Bytes {}
@:keep @:file("assets/preload/weeks/weekList.txt") @:noCompletion #if display private #end class __ASSET__assets_weeks_weeklist_txt extends haxe.io.Bytes {}
@:keep @:file("assets/songs/blammed/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_blammed_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/blammed/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_blammed_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/bopeebo/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_bopeebo_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/bopeebo/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_bopeebo_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/cocoa/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_cocoa_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/cocoa/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_cocoa_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/dad-battle/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_dad_battle_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/dad-battle/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_dad_battle_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/eggnog/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_eggnog_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/eggnog/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_eggnog_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/fresh/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_fresh_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/fresh/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_fresh_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/guns/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_guns_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/guns/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_guns_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/high/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_high_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/high/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_high_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/milf/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_milf_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/milf/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_milf_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/monster/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_monster_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/monster/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_monster_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/philly-nice/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_philly_nice_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/philly-nice/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_philly_nice_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/pico/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_pico_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/pico/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_pico_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/roses/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_roses_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/roses/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_roses_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/satin-panties/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_satin_panties_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/satin-panties/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_satin_panties_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/senpai/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_senpai_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/senpai/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_senpai_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/south/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_south_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/south/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_south_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/spookeez/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_spookeez_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/spookeez/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_spookeez_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/stress/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_stress_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/stress/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_stress_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/test/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_test_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/test/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_test_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/thorns/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_thorns_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/thorns/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_thorns_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/tutorial/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_tutorial_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/ugh/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_ugh_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/ugh/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_ugh_voices_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/winter-horrorland/Inst.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_winter_horrorland_inst_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/songs/winter-horrorland/Voices.mp3") @:noCompletion #if display private #end class __ASSET__assets_songs_winter_horrorland_voices_mp3 extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/bad.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_bad_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/characters/BOYFRIEND.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/BOYFRIEND.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/characters/BOYFRIEND_DEAD.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_dead_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/characters/BOYFRIEND_DEAD.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_characters_boyfriend_dead_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/combo.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_combo_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/dialogue/BF_Dialogue.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_bf_dialogue_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/dialogue/BF_Dialogue.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_bf_dialogue_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/dialogue/GF_Dialogue.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_gf_dialogue_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/dialogue/GF_Dialogue.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_dialogue_gf_dialogue_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/eventArrow.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_eventarrow_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/go.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_go_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/good.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_good_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/grafix.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_grafix_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/healthBar.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_healthbar_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/images-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteColorMenu/colorWheel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_colorwheel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/noteColorMenu/copy.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_copy_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/noteColorMenu/note.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_note_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/noteColorMenu/notePixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_notepixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/noteColorMenu/palette.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_palette_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/noteColorMenu/paste.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notecolormenu_paste_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSkins/list.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_list_txt extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteSkins/NOTE_assets-chip.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_chip_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSkins/NOTE_assets-chip.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_chip_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteSkins/NOTE_assets-future.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_future_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSkins/NOTE_assets-future.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_future_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteSkins/NOTE_assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSkins/NOTE_assets.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_noteskins_note_assets_xml extends haxe.io.Bytes {}
@:keep @:file("assets/shared/images/noteSplashes/list.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_list_txt extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteSplashes/noteSplashes-diamond.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_diamond_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes-diamond.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_diamond_txt extends haxe.io.Bytes {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes-diamond.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_diamond_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteSplashes/noteSplashes-electric.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_electric_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes-electric.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_electric_txt extends haxe.io.Bytes {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes-electric.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_electric_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteSplashes/noteSplashes-sparkles.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_sparkles_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes-sparkles.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_sparkles_txt extends haxe.io.Bytes {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes-sparkles.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_sparkles_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteSplashes/noteSplashes-vanilla.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_vanilla_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes-vanilla.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_vanilla_txt extends haxe.io.Bytes {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes-vanilla.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_vanilla_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/noteSplashes/noteSplashes.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_txt extends haxe.io.Bytes {}
@:keep @:file("assets/shared/images/noteSplashes/noteSplashes.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_notesplashes_notesplashes_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/pixelUI/bad-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_bad_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/combo-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_combo_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/date-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_date_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/good-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_good_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/noteSkins/NOTE_assets-chip.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assets_chip_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/noteSkins/NOTE_assets-future.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assets_future_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/noteSkins/NOTE_assets.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assets_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/noteSkins/NOTE_assetsENDS-chip.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assetsends_chip_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/noteSkins/NOTE_assetsENDS-future.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assetsends_future_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/noteSkins/NOTE_assetsENDS.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_noteskins_note_assetsends_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num0-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num0_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num1-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num1_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num2-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num2_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num3-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num3_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num4-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num4_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num5-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num5_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num6-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num6_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num7-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num7_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num8-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num8_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/num9-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_num9_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/ready-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_ready_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/set-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_set_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/shit-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_shit_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/pixelUI/sick-pixel.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_pixelui_sick_pixel_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/ready.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_ready_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/set.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_set_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/shit.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_shit_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/sick.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_sick_png extends lime.graphics.Image {}
@:keep @:image("assets/shared/images/speech_bubble.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/images/speech_bubble.xml") @:noCompletion #if display private #end class __ASSET__assets_shared_images_speech_bubble_xml extends haxe.io.Bytes {}
@:keep @:image("assets/shared/images/timeBar.png") @:noCompletion #if display private #end class __ASSET__assets_shared_images_timebar_png extends lime.graphics.Image {}
@:keep @:file("assets/shared/music/breakfast.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_music_breakfast_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/music/gameOver.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameover_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/music/gameOverEnd.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_music_gameoverend_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/music/tea-time.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_music_tea_time_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/ANGRY.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/ANGRY_TEXT_BOX.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_angry_text_box_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/badnoise1.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/badnoise2.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/badnoise3.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_badnoise3_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/clickText.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_clicktext_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/dialogue.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_dialogue_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/dialogueClose.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_dialogueclose_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/fnf_loss_sfx.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_fnf_loss_sfx_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/GF_1.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/GF_2.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/GF_3.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_3_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/GF_4.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_gf_4_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/hitsound.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_hitsound_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/intro1.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/intro2.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/intro3.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_intro3_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/introGo.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_introgo_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/Metronome_Tick.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_metronome_tick_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/missnote1.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote1_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/missnote2.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote2_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/missnote3.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_missnote3_mp3 extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/shared/sounds/soundTest.mp3") @:noCompletion #if display private #end class __ASSET__assets_shared_sounds_soundtest_mp3 extends haxe.io.Bytes {}
@:keep @:file("art/readme.txt") @:noCompletion #if display private #end class __ASSET__do_not_readme_txt extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,2,2/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,2,2/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,2,2/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/5,2,2/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/release/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/release/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,2,2/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/5,2,2/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/box.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_box_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_down.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_down_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_left.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_left_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_right.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_right_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_arrow_up.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_arrow_up_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_thin.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_thin_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/button_toggle.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_button_toggle_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/check_box.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_box_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/check_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_check_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome_flat.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_flat_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome_inset.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_inset_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/chrome_light.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_chrome_light_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/dropdown_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_dropdown_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/finger_big.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_big_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/finger_small.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_finger_small_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/hilight.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_hilight_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/invis.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_invis_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/minus_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_minus_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/plus_mark.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_plus_mark_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/radio.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/radio_dot.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_radio_dot_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/swatch.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_swatch_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/tab.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/tab_back.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tab_back_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/images/tooltip_arrow.png") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_img_tooltip_arrow_png extends lime.graphics.Image {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/xml/defaults.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_defaults_xml extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/xml/default_loading_screen.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_loading_screen_xml extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel-ui/2,5,0/assets/xml/default_popup.xml") @:noCompletion #if display private #end class __ASSET__flixel_flixel_ui_xml_default_popup_xml extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_videos_json extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__assets_fonts_pixel_otf') @:noCompletion #if display private #end class __ASSET__assets_fonts_pixel_otf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/pixel"; #else ascender = 1125; descender = -250; height = 1375; numGlyphs = 262; underlinePosition = -143; underlineThickness = 20; unitsPerEM = 1000; #end name = "Pixel Arial 11 Bold"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_vcr_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_vcr_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/vcr"; #else ascender = 1800; descender = 0; height = 2000; numGlyphs = 204; underlinePosition = -292; underlineThickness = 150; unitsPerEM = 2048; #end name = "VCR OSD Mono"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__assets_fonts_pixel_otf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_pixel_otf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_pixel_otf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_vcr_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_vcr_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_vcr_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__assets_fonts_pixel_otf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_pixel_otf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_pixel_otf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_vcr_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_vcr_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_vcr_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end

#end