/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@protocol NURegionPolicy, NUScalePolicy, NUExtentPolicy, NUMutableImage;
@class NUColorSpace, NUPixelFormat, NSString;

@interface NUImageRenderRequest : NURenderRequest <NUTimeBased> {

	NUColorSpace* _colorSpace;
	id<NURegionPolicy> _regionPolicy;
	id<NUScalePolicy> _scalePolicy;
	id<NUExtentPolicy> _extentPolicy;
	NUPixelFormat* _pixelFormat;
	id<NUMutableImage> _targetImage;
	SCD_Struct_NU7 _tileSize;
	SCD_Struct_NU7 _borderSize;

}

@property (retain) id<NUMutableImage> targetImage;                   //@synthesize targetImage=_targetImage - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;              //@synthesize colorSpace=_colorSpace - In the implementation block
@property (retain) id<NURegionPolicy> regionPolicy;                  //@synthesize regionPolicy=_regionPolicy - In the implementation block
@property (retain) id<NUScalePolicy> scalePolicy;                    //@synthesize scalePolicy=_scalePolicy - In the implementation block
@property (retain) id<NUExtentPolicy> extentPolicy;                  //@synthesize extentPolicy=_extentPolicy - In the implementation block
@property (retain) NUPixelFormat * pixelFormat;                      //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign) SCD_Struct_NU7 tileSize;                          //@synthesize tileSize=_tileSize - In the implementation block
@property (assign) SCD_Struct_NU7 borderSize;                        //@synthesize borderSize=_borderSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_NU7)tileSize;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)setTileSize:(SCD_Struct_NU7)arg1 ;
-(NUPixelFormat *)pixelFormat;
-(id<NUMutableImage>)targetImage;
-(void)setTargetImage:(id<NUMutableImage>)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)setPixelFormat:(NUPixelFormat *)arg1 ;
-(NSString *)description;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
-(SCD_Struct_NU7)borderSize;
-(id<NUExtentPolicy>)extentPolicy;
-(id<NURegionPolicy>)regionPolicy;
-(void)setRegionPolicy:(id<NURegionPolicy>)arg1 ;
-(void)setExtentPolicy:(id<NUExtentPolicy>)arg1 ;
-(void)setBorderSize:(SCD_Struct_NU7)arg1 ;
@end

