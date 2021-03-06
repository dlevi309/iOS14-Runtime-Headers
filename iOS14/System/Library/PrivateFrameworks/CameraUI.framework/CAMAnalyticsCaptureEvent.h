/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMAnalyticsEvent.h>

@interface CAMAnalyticsCaptureEvent : CAMAnalyticsEvent {

	BOOL __isStillDuringVideo;
	long long __captureMode;
	long long __captureDevice;
	long long __captureDevicePosition;
	long long __captureVideoConfiguration;
	long long __lightingEffectType;
	long long __mediaType;

}

@property (nonatomic,readonly) long long _captureMode;                            //@synthesize _captureMode=__captureMode - In the implementation block
@property (nonatomic,readonly) long long _captureDevice;                          //@synthesize _captureDevice=__captureDevice - In the implementation block
@property (nonatomic,readonly) long long _captureDevicePosition;                  //@synthesize _captureDevicePosition=__captureDevicePosition - In the implementation block
@property (nonatomic,readonly) long long _captureVideoConfiguration;              //@synthesize _captureVideoConfiguration=__captureVideoConfiguration - In the implementation block
@property (assign,nonatomic) long long _lightingEffectType;                       //@synthesize _lightingEffectType=__lightingEffectType - In the implementation block
@property (assign,nonatomic) long long _mediaType;                                //@synthesize _mediaType=__mediaType - In the implementation block
@property (assign,nonatomic) BOOL _isStillDuringVideo;                            //@synthesize _isStillDuringVideo=__isStillDuringVideo - In the implementation block
-(id)initWithEvent:(id)arg1 ;
-(id)eventName;
-(long long)_mediaType;
-(long long)_captureDevice;
-(id)initWithGraphConfiguration:(id)arg1 ;
-(long long)_captureMode;
-(void)populateFromStillImageCaptureResponse:(id)arg1 ;
-(void)populateZoomFactor:(float)arg1 ;
-(void)populateFromVideoCaptureResponse:(id)arg1 ;
-(void)populateDuration:(long long)arg1 ;
-(void)populateFromStillImageCaptureRequest:(id)arg1 burst:(BOOL)arg2 ;
-(void)populateFromVideoCaptureRequest:(id)arg1 ;
-(void)populateFromPanoramaCaptureRequest:(id)arg1 ;
-(void)populatePanoramaDirection:(long long)arg1 ;
-(void)populateDesiredFlashMode:(long long)arg1 desiredLivePhotoMode:(long long)arg2 desiredHDRMode:(long long)arg3 timerDuration:(long long)arg4 ;
-(void)populateDesiredTorchMode:(long long)arg1 ;
-(void)populateExposureSliderBias:(float)arg1 exposureTapAndBias:(float)arg2 totalExposureBias:(float)arg3 ;
-(void)populatePortraitStatus:(long long)arg1 lightingEffectIntensity:(double)arg2 apertureValue:(double)arg3 ;
-(void)populateDesiredNightModeControlMode:(unsigned long long)arg1 resolvedNightModeControlMode:(unsigned long long)arg2 resolvedNightModeMode:(long long)arg3 ;
-(void)populateForTimelapseCaptureOrientation:(long long)arg1 captureMirrored:(BOOL)arg2 origin:(long long)arg3 pressType:(long long)arg4 zoomInteractionType:(long long)arg5 startDate:(id)arg6 ;
-(void)populatePanoramaInstruction:(long long)arg1 ;
-(long long)_captureVideoConfiguration;
-(void)populateFromPanoramaCaptureNotification:(long long)arg1 ;
-(long long)_lightingEffectType;
-(long long)_captureDevicePosition;
-(BOOL)_isStillDuringVideo;
-(void)set_mediaType:(long long)arg1 ;
-(void)_populateFromCaptureRequest:(id)arg1 ;
-(void)set_isStillDuringVideo:(BOOL)arg1 ;
-(void)set_lightingEffectType:(long long)arg1 ;
-(id)_zoomRangeStringForZoomFactor:(float)arg1 ;
-(id)_defaultRangeStringForValue:(float)arg1 lowerBound:(float)arg2 upperBound:(float)arg3 defaultValue:(float)arg4 ;
-(id)_durationRangeStringForDuration:(double)arg1 ;
-(void)populateAEAFLocked:(BOOL)arg1 ;
@end

