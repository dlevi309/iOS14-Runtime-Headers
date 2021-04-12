/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageBasedTechnique.h>

@protocol OS_dispatch_queue;
@class ARImageScalingTechnique, NSMutableDictionary, ARImageCroppingTechnique, ARMLIntermediateDownScalingResultData, ARMLImageDownScalingResultData, NSObject;

@interface ARMLImageDownScalingTechnique : ARImageBasedTechnique {

	ARImageScalingTechnique* _imageScalingTechnique;
	ARImageScalingTechnique* _mattingImageScalingTechnique;
	NSMutableDictionary* _imageRotationStrategyToTechniqueLUT;
	ARImageCroppingTechnique* _imageCroppingTechnique;
	vImageCVImageFormatRef _cvImageFormatRef;
	CVPixelBufferPoolRef _bgraPixelBufferPool;
	CVPixelBufferPoolRef _bgraMattingPixelBufferPool;
	int _lockedOrientation;
	ARMLIntermediateDownScalingResultData* _intermediateDownSamplingResultData;
	ARMLImageDownScalingResultData* _downSamplingResultData;
	BOOL _enableDoubleMLResolutionForIPad;
	NSObject*<OS_dispatch_queue> _processingQueue;
	double _resultLatency;
	BOOL _deterministic;
	BOOL _centerCropImage;
	BOOL _resizeUltraWideImage;
	BOOL _saveIntermediateScaleResultData;
	/*^block*/id _wideRotationStrategy;
	/*^block*/id _ultrawideRotationStrategy;
	CGSize _imageSize;

}

@property (assign,nonatomic) BOOL centerCropImage;                              //@synthesize centerCropImage=_centerCropImage - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                                //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) BOOL resizeUltraWideImage;                         //@synthesize resizeUltraWideImage=_resizeUltraWideImage - In the implementation block
@property (assign,nonatomic) BOOL saveIntermediateScaleResultData;              //@synthesize saveIntermediateScaleResultData=_saveIntermediateScaleResultData - In the implementation block
@property (nonatomic,copy) id wideRotationStrategy;                             //@synthesize wideRotationStrategy=_wideRotationStrategy - In the implementation block
@property (nonatomic,copy) id ultrawideRotationStrategy;                        //@synthesize ultrawideRotationStrategy=_ultrawideRotationStrategy - In the implementation block
-(CGSize)imageSize;
-(id)processData:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(void)prepare:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)_fullDescription;
-(id)_convertImageColorSpace:(id)arg1 pPoolToUse:(_CVPixelBufferPool*)arg2 ;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(BOOL)centerCropImage;
-(BOOL)saveIntermediateScaleResultData;
-(id)_downscaledResultDataFromImageData:(id)arg1 croppedRect:(CGRect)arg2 updateIntermediateSamplingResult:(BOOL)arg3 ;
-(id)_scaleImageDataForNeuralNetwork:(id)arg1 scaledSize:(CGSize)arg2 ;
-(long long)_getDeviceOrientation;
-(id)_rotateImageDataForNeuralNetwork:(id)arg1 deviceOrientation:(long long)arg2 pRegionOfInterest:(CGSize*)arg3 pRotationOfResultTensor:(long long*)arg4 ;
-(id)wideRotationStrategy;
-(id)ultrawideRotationStrategy;
-(/*^block*/id)defaultRotationStrategy;
-(id)initWithSize:(CGSize)arg1 requiredTimeInterval:(double)arg2 ;
-(void)lockOrientation:(long long)arg1 ;
-(void)setCenterCropImage:(BOOL)arg1 ;
-(BOOL)resizeUltraWideImage;
-(void)setResizeUltraWideImage:(BOOL)arg1 ;
-(void)setSaveIntermediateScaleResultData:(BOOL)arg1 ;
-(void)setWideRotationStrategy:(id)arg1 ;
-(void)setUltrawideRotationStrategy:(id)arg1 ;
@end
