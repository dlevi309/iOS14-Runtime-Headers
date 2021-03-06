/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@protocol NSObjectNSCopying;
@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _imageCropAndScaleOption;
	id<NSObject><NSCopying> _modelCachingIdentifier;

}

@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;                //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> modelCachingIdentifier;              //@synthesize modelCachingIdentifier=_modelCachingIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(void)updateWithPropertiesOfModel:(id)arg1 ;
-(id<NSObject><NSCopying>)modelCachingIdentifier;
-(void)setModelCachingIdentifier:(id<NSObject><NSCopying>)arg1 ;
@end

