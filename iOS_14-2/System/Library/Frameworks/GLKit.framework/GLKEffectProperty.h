/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/


#import <GLKit/GLKit-Structs.h>
@class GLKEffect;

@interface GLKEffectProperty : NSObject {

	int _location;
	char* _nameString;
	GLKEffectPropertyPrv* _prv;
	unsigned char _masksInitialized;
	char* _vshSource;
	char* _fshSource;
	unsigned long long _dirtyUniforms;
	GLKEffect* _effect;

}

@property (assign,nonatomic) int location;                                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) char* nameString;                              //@synthesize nameString=_nameString - In the implementation block
@property (assign,nonatomic) char* vshSource;                               //@synthesize vshSource=_vshSource - In the implementation block
@property (assign,nonatomic) char* fshSource;                               //@synthesize fshSource=_fshSource - In the implementation block
@property (assign,nonatomic) unsigned long long dirtyUniforms;              //@synthesize dirtyUniforms=_dirtyUniforms - In the implementation block
@property (assign,nonatomic) unsigned char masksInitialized;                //@synthesize masksInitialized=_masksInitialized - In the implementation block
@property (assign,nonatomic) GLKEffect * effect;                            //@synthesize effect=_effect - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
+(void)logSetMasksWithLabel:(id)arg1 obj:(id)arg2 typeStr:(id)arg3 ;
-(void)setEffect:(GLKEffect *)arg1 ;
-(GLKEffect *)effect;
-(id)init;
-(void)bind;
-(int)location;
-(void)setLocation:(int)arg1 ;
-(char*)nameString;
-(GLKBigInt_s*)fshMask;
-(GLKBigInt_s*)vshMask;
-(void)dealloc;
-(void)dirtyAllUniforms;
-(void)setDirtyUniforms:(unsigned long long)arg1 ;
-(unsigned long long)dirtyUniforms;
-(BOOL)includeVshShaderTextForRootNode:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg1 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(void)setMasksInitialized:(unsigned char)arg1 ;
-(unsigned char)masksInitialized;
-(void)setNameString:(char*)arg1 ;
-(void)setVSHSource:(char*)arg1 ;
-(void)setFSHSource:(char*)arg1 ;
-(void)setMasks;
-(char*)vshSource;
-(void)setVshSource:(char*)arg1 ;
-(char*)fshSource;
-(void)setFshSource:(char*)arg1 ;
@end
