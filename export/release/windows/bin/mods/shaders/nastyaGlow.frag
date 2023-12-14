#pragma header

uniform vec2 croppedUV;
uniform vec2 croppedUVSIZE;
uniform float pubAlpha = 0.1;
uniform float alpha = 0.4;

void shutUp()
{
    vec4 toUse = texture2D(bitmap, openfl_TextureCoordv);

    vec2 uv = openfl_TextureCoordv;

    float alpha = pubAlpha;
    toUse.b = 0;
    if(toUse.a > 0.5 && (uv.x > croppedUV.x) && (uv.x < (croppedUV.x)+(croppedUVSIZE.x)) && (uv.y > croppedUV.y) && (uv.y < croppedUV.y+croppedUVSIZE.y)){


        toUse.b = (uv.y-croppedUV.y)*10;
        toUse.r = 1;//-(uv.y-croppedUV.y)*10;
        toUse.g = (uv.y-croppedUV.y)*10;
        alpha = (((uv.y-croppedUV.y)*10)*alpha);
    }else{
        alpha = 0;
    }


    gl_FragColor = vec4(toUse.r-(1-alpha),toUse.g-(1-alpha),toUse.b-(1-alpha),0);//toUse;//toUse;
}

void main()
{
    vec4 texture = texture2D(bitmap, openfl_TextureCoordv);

    vec2 uv = openfl_TextureCoordv;

    bool isInFrame = ((uv.x > croppedUV.x) && (uv.x < croppedUV.x+croppedUVSIZE.x) && (uv.y > croppedUV.y) && (uv.y < croppedUV.y+croppedUVSIZE.y));

    vec2 realuv = (uv-croppedUV)*10;


    if(texture.a >0.5 && isInFrame){
        texture.b = ((realuv.y));
        texture.g = ((realuv.y))+0.5;
        texture.r = 1;
        texture.rgb = 1 - texture.rgb;
        texture.r = texture.b;
        texture.a = 1-((realuv.y));

        if(texture.r > 1)
            texture.r = 1;

        texture.rgba = texture.rgba - vec4(1-alpha);
    }


    gl_FragColor = texture;
}