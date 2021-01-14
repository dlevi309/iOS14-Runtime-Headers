/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKit-Structs.h>
#import <GLKit/GLKEffectProperty.h>

@class GLKEffectPropertyTransform;

@interface GLKEffectPropertyLight : GLKEffectProperty {

	unsigned char _enabled;
	GLKVector4 _position;
	GLKVector4 _ambientColor;
	GLKVector4 _diffuseColor;
	GLKVector4 _specularColor;
	GLKVector3 _spotDirection;
	float _spotExponent;
	float _spotCutoff;
	float _constantAttenuation;
	float _linearAttenuation;
	float _quadraticAttenuation;
	GLKEffectPropertyTransform* _transform;
	unsigned char _positionEyeStale;
	unsigned char _firstLight;
	float _spotCutoffDegrees;
	int _positionEyeLoc;
	int _ambientLoc;
	int _diffuseLoc;
	int _specularLoc;
	int _normalizedSpotDirectionEyeLoc;
	int _spotExponentLoc;
	int _spotCutoffLoc;
	int _constantAttenuationLoc;
	int _linearAttenuationLoc;
	int _quadraticAttenuationLoc;
	int _normalizeLoc;
	int _ambientTermLoc;
	int _lightIndex;
	int _lightingType;
	unsigned long long* _effectDirtyUniforms;
	GLKVector3 _normalizedSpotDirectionEye;
	GLKVector4 _positionEye;
	GLKBigInt_s _allVshMasks;
	GLKBigInt_s _allFshMasks;

}

@property (assign,nonatomic) _GLKVector4 positionEye;                              //@synthesize positionEye=_positionEye - In the implementation block
@property (assign,nonatomic) _GLKVector3 normalizedSpotDirectionEye;               //@synthesize normalizedSpotDirectionEye=_normalizedSpotDirectionEye - In the implementation block
@property (assign,nonatomic) float spotCutoffDegrees;                              //@synthesize spotCutoffDegrees=_spotCutoffDegrees - In the implementation block
@property (assign,nonatomic) int positionEyeLoc;                                   //@synthesize positionEyeLoc=_positionEyeLoc - In the implementation block
@property (assign,nonatomic) int ambientLoc;                                       //@synthesize ambientLoc=_ambientLoc - In the implementation block
@property (assign,nonatomic) int diffuseLoc;                                       //@synthesize diffuseLoc=_diffuseLoc - In the implementation block
@property (assign,nonatomic) int specularLoc;                                      //@synthesize specularLoc=_specularLoc - In the implementation block
@property (assign,nonatomic) int normalizedSpotDirectionEyeLoc;                    //@synthesize normalizedSpotDirectionEyeLoc=_normalizedSpotDirectionEyeLoc - In the implementation block
@property (assign,nonatomic) int spotExponentLoc;                                  //@synthesize spotExponentLoc=_spotExponentLoc - In the implementation block
@property (assign,nonatomic) int spotCutoffLoc;                                    //@synthesize spotCutoffLoc=_spotCutoffLoc - In the implementation block
@property (assign,nonatomic) int constantAttenuationLoc;                           //@synthesize constantAttenuationLoc=_constantAttenuationLoc - In the implementation block
@property (assign,nonatomic) int linearAttenuationLoc;                             //@synthesize linearAttenuationLoc=_linearAttenuationLoc - In the implementation block
@property (assign,nonatomic) int quadraticAttenuationLoc;                          //@synthesize quadraticAttenuationLoc=_quadraticAttenuationLoc - In the implementation block
@property (assign,nonatomic) int normalizeLoc;                                     //@synthesize normalizeLoc=_normalizeLoc - In the implementation block
@property (assign,nonatomic) int ambientTermLoc;                                   //@synthesize ambientTermLoc=_ambientTermLoc - In the implementation block
@property (assign,nonatomic) int lightIndex;                                       //@synthesize lightIndex=_lightIndex - In the implementation block
@property (assign,nonatomic) unsigned long long* effectDirtyUniforms;              //@synthesize effectDirtyUniforms=_effectDirtyUniforms - In the implementation block
@property (assign,nonatomic) int lightingType;                                     //@synthesize lightingType=_lightingType - In the implementation block
@property (assign,nonatomic) unsigned char positionEyeStale;                       //@synthesize positionEyeStale=_positionEyeStale - In the implementation block
@property (nonatomic,readonly) unsigned char isSpot; 
@property (nonatomic,readonly) unsigned char isAttenuated; 
@property (assign,nonatomic) unsigned char firstLight;                             //@synthesize firstLight=_firstLight - In the implementation block
@property (nonatomic,readonly) GLKBigInt_s allVshMasks;                            //@synthesize allVshMasks=_allVshMasks - In the implementation block
@property (nonatomic,readonly) GLKBigInt_s allFshMasks;                            //@synthesize allFshMasks=_allFshMasks - In the implementation block
@property (assign,nonatomic) unsigned char enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) _GLKVector4 position;                                 //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) _GLKVector4 ambientColor;                             //@synthesize ambientColor=_ambientColor - In the implementation block
@property (assign,nonatomic) _GLKVector4 diffuseColor;                             //@synthesize diffuseColor=_diffuseColor - In the implementation block
@property (assign,nonatomic) _GLKVector4 specularColor;                            //@synthesize specularColor=_specularColor - In the implementation block
@property (assign,nonatomic) _GLKVector3 spotDirection;                            //@synthesize spotDirection=_spotDirection - In the implementation block
@property (assign,nonatomic) float spotExponent;                                   //@synthesize spotExponent=_spotExponent - In the implementation block
@property (assign,nonatomic) float spotCutoff;                                     //@synthesize spotCutoff=_spotCutoff - In the implementation block
@property (assign,nonatomic) float constantAttenuation;                            //@synthesize constantAttenuation=_constantAttenuation - In the implementation block
@property (assign,nonatomic) float linearAttenuation;                              //@synthesize linearAttenuation=_linearAttenuation - In the implementation block
@property (assign,nonatomic) float quadraticAttenuation;                           //@synthesize quadraticAttenuation=_quadraticAttenuation - In the implementation block
@property (nonatomic,retain) GLKEffectPropertyTransform * transform;               //@synthesize transform=_transform - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(unsigned char)enabled;
-(_GLKVector4)position;
-(void)bind;
-(void)setEnabled:(unsigned char)arg1 ;
-(void)setTransform:(GLKEffectPropertyTransform *)arg1 ;
-(GLKEffectPropertyTransform *)transform;
-(unsigned char)isSpot;
-(id)description;
-(int)lightingType;
-(void)setPosition:(_GLKVector4)arg1 ;
-(void)setLightingType:(int)arg1 ;
-(void)dealloc;
-(id)initWithTransform:(id)arg1 lightingType:(int)arg2 firstLight:(unsigned char)arg3 ;
-(void)dirtyAllUniforms;
-(unsigned char)isAttenuated;
-(void)setEffectDirtyUniforms:(unsigned long long*)arg1 ;
-(void)setLightIndex:(int)arg1 ;
-(BOOL)includeVshShaderTextForRootNode:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg1 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(_GLKVector4)ambientColor;
-(int)ambientTermLoc;
-(void)setGLDefaults;
-(void)setAmbientColor:(_GLKVector4)arg1 ;
-(void)setDiffuseColor:(_GLKVector4)arg1 ;
-(void)setSpecularColor:(_GLKVector4)arg1 ;
-(float)constantAttenuation;
-(float)linearAttenuation;
-(float)quadraticAttenuation;
-(void)setSpotDirection:(_GLKVector3)arg1 ;
-(void)setNormalize:(unsigned char)arg1 ;
-(void)setSpotExponent:(float)arg1 ;
-(void)setQuadraticAttenuation:(float)arg1 ;
-(void)setLinearAttenuation:(float)arg1 ;
-(void)setConstantAttenuation:(float)arg1 ;
-(void)setSpotCutoff:(float)arg1 ;
-(float)spotCutoff;
-(_GLKVector4)positionEye;
-(void)setPositionEye:(_GLKVector4)arg1 ;
-(_GLKVector4)diffuseColor;
-(_GLKVector4)specularColor;
-(_GLKVector3)spotDirection;
-(_GLKVector3)normalizedSpotDirectionEye;
-(void)setNormalizedSpotDirectionEye:(_GLKVector3)arg1 ;
-(float)spotExponent;
-(float)spotCutoffDegrees;
-(void)setSpotCutoffDegrees:(float)arg1 ;
-(unsigned long long*)effectDirtyUniforms;
-(unsigned char)positionEyeStale;
-(void)setPositionEyeStale:(unsigned char)arg1 ;
-(int)positionEyeLoc;
-(void)setPositionEyeLoc:(int)arg1 ;
-(int)ambientLoc;
-(void)setAmbientLoc:(int)arg1 ;
-(int)diffuseLoc;
-(void)setDiffuseLoc:(int)arg1 ;
-(int)specularLoc;
-(void)setSpecularLoc:(int)arg1 ;
-(int)normalizedSpotDirectionEyeLoc;
-(void)setNormalizedSpotDirectionEyeLoc:(int)arg1 ;
-(int)spotExponentLoc;
-(void)setSpotExponentLoc:(int)arg1 ;
-(int)spotCutoffLoc;
-(void)setSpotCutoffLoc:(int)arg1 ;
-(int)constantAttenuationLoc;
-(void)setConstantAttenuationLoc:(int)arg1 ;
-(int)linearAttenuationLoc;
-(void)setLinearAttenuationLoc:(int)arg1 ;
-(int)quadraticAttenuationLoc;
-(void)setQuadraticAttenuationLoc:(int)arg1 ;
-(int)normalizeLoc;
-(void)setNormalizeLoc:(int)arg1 ;
-(void)setAmbientTermLoc:(int)arg1 ;
-(int)lightIndex;
-(unsigned char)firstLight;
-(void)setFirstLight:(unsigned char)arg1 ;
-(GLKBigInt_s)allVshMasks;
-(GLKBigInt_s)allFshMasks;
@end
