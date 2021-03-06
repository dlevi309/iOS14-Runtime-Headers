/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureDevice.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSDictionary, NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceControlRequestQueue, AVWeakReference, NSMutableArray, NSMutableDictionary, AVCaptureSystemPressureState, NSData;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _fcsAttributes;
	NSObject*<OS_dispatch_queue> _devicePropsQueue;
	NSString* _fcsUID;
	long long _position;
	NSString* _localizedName;
	NSArray* _formats;
	AVCaptureDeviceFormat* _activeFormat;
	AVCaptureDeviceFormat* _activeDepthDataFormat;
	NSString* _activeSessionPreset;
	SCD_Struct_AV0 _activeDepthDataMinFrameDuration;
	SCD_Struct_AV0 _videoMinFrameDurationOverride;
	id _videoMinFrameDurationOverrideOwner;
	SCD_Struct_AV0 _activeMinFrameDuration;
	BOOL _activeMinFrameDurationSetByClient;
	SCD_Struct_AV0 _activeMaxFrameDuration;
	BOOL _activeMaxFrameDurationSetByClient;
	BOOL _cachesFigCaptureSourceConfigurationChanges;
	long long _focusMode;
	CGPoint _focusPointOfInterest;
	float _lensPositionKVO;
	BOOL _adjustingFocus;
	long long _autoFocusRangeRestriction;
	BOOL _smoothAutoFocusEnabled;
	BOOL _cameraOption9;
	BOOL _cameraOption10;
	CGRect _cameraFaceResult29;
	BOOL _cameraFaceResult30;
	long long _exposureMode;
	SCD_Struct_AV0 _exposureDurationKVO;
	float _ISOKVO;
	float _exposureTargetBias;
	float _exposureTargetOffsetKVO;
	CGPoint _exposurePointOfInterest;
	SCD_Struct_AV0 _activeMaxExposureDuration;
	SCD_Struct_AV0 _activeMaxExposureDurationClientOverride;
	BOOL _adjustingExposure;
	BOOL _waitingForExposureAdjustmentBeforeLocking;
	long long _wbMode;
	SCD_Struct_AV35 _deviceWhiteBalanceGainsKVO;
	SCD_Struct_AV35 _grayWorldDeviceWhiteBalanceGainsKVO;
	BOOL _adjustingWB;
	unsigned long long _wbCalibrationCount;
	SCD_Struct_AV26* _wbCalibrationTemperatures;
	double* _wbCalibrationMatrices;
	double _wbLastPredictedTemp;
	double _wbSeedTemp;
	BOOL _wbSeedEnabled;
	unsigned long long _wbTemperatureIterations;
	BOOL _providesStortorgetMetadata;
	BOOL _automaticallyAdjustsImageControlMode;
	AVCaptureDeviceControlRequestQueue* _manualFocusControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _biasedExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualWhiteBalanceControlRequests;
	SCD_Struct_AV0 _lastCustomExposureDuration;
	float _lastCustomExposureISO;
	long long _imageControlMode;
	long long _flashMode;
	BOOL _avcaptureDeviceAutoFlashEnabled;
	BOOL _photoOutputFlashSceneEnabled;
	BOOL _flashActive;
	BOOL _flashSceneDetectedForPhotoOutput;
	long long _digitalFlashMode;
	NSDictionary* _digitalFlashSceneForPhotoOutput;
	BOOL _flashAvailable;
	long long _torchMode;
	BOOL _torchActive;
	float _torchLevel;
	BOOL _torchAvailable;
	BOOL _isConnected;
	BOOL _isSuspended;
	BOOL _subjectMonitoringEnabled;
	BOOL _faceDetectionDrivenImageProcessingEnabled;
	CGRect _faceRectangle;
	int _faceRectangleAngle;
	BOOL _automaticallyAdjustsVideoHDREnabled;
	BOOL _videoHDREnabled;
	BOOL _videoHDRSuspended;
	BOOL _HDRSceneDetectedForPhotoOutput;
	BOOL _isStillImageStabilizationScene;
	long long _activeColorSpace;
	float _videoZoomFactor;
	float _videoZoomRampTarget;
	int _videoZoomRampCounter;
	float _videoZoomRampAcceleration;
	double _minAvailableVideoZoomFactor;
	double _maxAvailableVideoZoomFactor;
	BOOL _depthDataDeliveryEnabled;
	BOOL _cameraCalibrationDataDeliveryEnabled;
	long long _shallowDepthOfFieldEffectStatus;
	NSString* _bravoCameraSelectionBehavior;
	AVWeakReference* _weakReference;
	NSMutableArray* _captureSourceSupportedMetadata;
	NSDictionary* _supportedOptionalFaceDetectionFeatures;
	BOOL _eyeDetectionEnabled;
	BOOL _eyeClosedDetectionEnabled;
	BOOL _smileDetectionEnabled;
	NSArray* _availableBoxedMetadataFormatDescriptions;
	NSDictionary* _sessionPresetCompressionSettings;
	NSDictionary* _h264EncoderLimitations;
	NSDictionary* _hevcEncoderSettings;
	NSObject*<OS_dispatch_queue> _observedHighFrequencyPropertiesQueue;
	NSMutableDictionary* _observedHighFrequencyPropertyCounts;
	NSMutableDictionary* _propertyToFigCaptureSourcePropertyMap;
	NSObject*<OS_dispatch_semaphore> _serverConnectionDiedSemaphore;
	NSMutableDictionary* _cachedFigCaptureSourceProperties;
	AVCaptureSystemPressureState* _systemPressureState;
	int _highestSystemPressureLevelEncountered;
	BOOL _lowLightVideoCaptureEnabled;
	BOOL _spatialOverCaptureEnabled;
	BOOL _nonDestructiveCropEnabled;
	long long _nonDestructiveCropAspectRatio;
	BOOL _geometricDistortionCorrectionEnabled;
	BOOL _globalToneMappingEnabled;
	BOOL _variableFrameRateVideoCaptureEnabled;
	long long _timeOfFlightProjectorMode;
	NSData* _cameraPoseMatrix;
	unsigned long long _degradedCaptureQualityFactors;
	BOOL _degradedCaptureQualityFactorsNeedInitialization;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_devicesWithPriorRegisteredDevices:(id)arg1 ;
+(id)_newFigCaptureSources;
+(BOOL)_cameraAccessIsEnabled;
+(id)_devices;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)_reconnectDevices:(id)arg1 ;
-(void)_setTorchAvailable:(BOOL)arg1 ;
-(float)videoZoomRampAcceleration;
-(void)setNonDestructiveCropEnabled:(BOOL)arg1 ;
-(BOOL)isTorchAvailable;
-(void)_setFlashActive:(BOOL)arg1 ;
-(OpaqueCMClockRef)deviceClock;
-(BOOL)isRampingVideoZoom;
-(void)setImageControlMode:(long long)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(float)timeLapseCaptureRate;
-(void)setFlashMode:(long long)arg1 ;
-(BOOL)isSpatialOverCaptureEnabled;
-(void)setVideoZoomRampAcceleration:(float)arg1 ;
-(long long)imageControlMode;
-(void)_setTorchActive:(BOOL)arg1 ;
-(void)setSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isTorchActive;
-(void)setVariableFrameRateVideoCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isAutoRedEyeReductionSupported;
-(void)setDigitalFlashMode:(long long)arg1 ;
-(void)setGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(BOOL)isConnected;
-(long long)flashMode;
-(void)setTorchMode:(long long)arg1 ;
-(CGPoint)exposurePointOfInterest;
-(void)setLowLightVideoCaptureEnabled:(BOOL)arg1 ;
-(void)setVideoZoomFactor:(double)arg1 ;
-(id)localizedName;
-(long long)position;
-(double)dualCameraSwitchOverVideoZoomFactor;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(id)deviceType;
-(SCD_Struct_AV26)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV35)arg1 ;
-(int)figCaptureSourceDeviceType;
-(void)_setFlashAvailable:(BOOL)arg1 ;
-(BOOL)isPreviewQualityAdjustedPhotoFilterRenderingSupported;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV35)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setTorchLevel:(float)arg1 ;
-(BOOL)isObjectDetectionSupported;
-(void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(id)modelID;
-(BOOL)isLockingFocusWithCustomLensPositionSupported;
-(void)setActiveMaxExposureDuration:(SCD_Struct_AV0)arg1 ;
-(id)manufacturer;
-(BOOL)isGlobalToneMappingEnabled;
-(float)maxWhiteBalanceGain;
-(id)activeFormat;
-(BOOL)isFaceDetectionDuringVideoPreviewSupported;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)uniqueID;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(unsigned long long)degradedCaptureQualityFactors;
-(long long)timeOfFlightBankCount;
-(BOOL)isHEVCPreferred;
-(void)setTimeLapseCaptureRate:(float)arg1 ;
-(BOOL)isFaceDetectionSupported;
-(void)setVideoHDRSuspended:(BOOL)arg1 ;
-(id)init;
-(int)_setActiveVideoMaxFrameDurationInternal:(SCD_Struct_AV0)arg1 ;
-(BOOL)isAdjustingWhiteBalance;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)arg1 ;
-(void)_setMinAvailableVideoZoomFactor:(double)arg1 ;
-(void)_drainManualControlRequestQueues;
-(BOOL)isHEIFSupported;
-(void)_setImageControlMode:(long long)arg1 ;
-(void)_setActiveFormat:(id)arg1 resetVideoZoomFactorAndMinMaxFrameDurations:(BOOL)arg2 sessionPreset:(id)arg3 ;
-(double)_whiteBalanceTemperatureForMixingFactor:(double)arg1 ;
-(BOOL)smileDetectionEnabled;
-(void)setActiveDepthDataMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)_setVideoZoomFactor:(double)arg1 ;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(BOOL)isVideoHDREnabled;
-(BOOL)_isAppleManufacturer;
-(long long)nonDestructiveCropAspectRatio;
-(id)supportedMetadataObjectIdentifiers;
-(void)setTimeOfFlightProjectorMode:(long long)arg1 ;
-(float)lensPosition;
-(double)_whiteBalanceMixingFactorForTemperature:(double)arg1 ;
-(double)_predictedTempForGains:(SCD_Struct_AV35)arg1 ;
-(BOOL)isSmoothAutoFocusEnabled;
-(void)_restoreFigCaptureSourceProperties;
-(void)setProvidesStortorgetMetadata:(BOOL)arg1 ;
-(long long)torchMode;
-(BOOL)isExposurePointOfInterestSupported;
-(void)resetVideoMinFrameDurationOverrideForOwner:(id)arg1 ;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1 ;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(BOOL)isStillImageStabilizationScene;
-(void)_setPhotoSettingsForSceneMonitoring:(id)arg1 ;
-(double)videoZoomFactor;
-(int)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 cacheOnly:(BOOL)arg3 ;
-(int)minMacroblocksForHighProfileAbove30fps;
-(float)exposureTargetBias;
-(float)ISODigitalThreshold;
-(int)_setExposureWithMode:(long long)arg1 duration:(SCD_Struct_AV0)arg2 ISO:(float)arg3 requestID:(int)arg4 newMaxFrameDuration:(SCD_Struct_AV0*)arg5 ;
-(void)_setAdjustingWhiteBalance:(BOOL)arg1 ;
-(void)_setGlobalToneMappingEnabledInternal:(BOOL)arg1 ;
-(void)setActiveDepthDataFormat:(id)arg1 ;
-(BOOL)isSISSupported;
-(BOOL)eyeClosedDetectionEnabled;
-(void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(BOOL)isTorchModeSupported:(long long)arg1 ;
-(id)_digitalFlashExposureTimes;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)autoFocusRangeRestriction;
-(id)constituentDeviceWithDeviceType:(id)arg1 ;
-(BOOL)automaticallyAdjustsVideoHDREnabled;
-(id)formats;
-(id)_copyFormatsArray;
-(BOOL)isFlashAvailable;
-(BOOL)isLowLightVideoCaptureEnabled;
-(BOOL)isConstituentPhotoCalibrationDataSupported;
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(void)setVideoMinFrameDurationOverride:(SCD_Struct_AV0)arg1 forOwner:(id)arg2 ;
-(SCD_Struct_AV35)_deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV26)arg1 temperature:(double)arg2 ;
-(void)cancelVideoZoomRamp;
-(CGRect)faceRectangle;
-(void)_setHDRSceneDetectedForPhotoOutput:(BOOL)arg1 ;
-(BOOL)isFocusPointOfInterestSupported;
-(id)cameraPoseMatrix;
-(void)setSmileDetectionEnabled:(BOOL)arg1 ;
-(double)minAvailableVideoZoomFactor;
-(long long)timeOfFlightProjectorMode;
-(BOOL)_isDepthDataDeliveryEnabled;
-(BOOL)isGeometricDistortionCorrectionEnabled;
-(void)setFocusMode:(long long)arg1 ;
-(long long)_digitalFlashStatus;
-(BOOL)usesQuantizationScalingMatrix_H264_Steep_16_48;
-(BOOL)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
-(BOOL)isLensStabilizationSupported;
-(SCD_Struct_AV0)exposureDuration;
-(void)_reconnectToFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_setFlashSceneDetectedForPhotoOutput:(BOOL)arg1 ;
-(id)virtualDeviceSwitchOverVideoZoomFactors;
-(void)_setAdjustingExposure:(BOOL)arg1 ;
-(id)deviceFormatForSessionPreset:(id)arg1 videoFormat:(unsigned)arg2 ;
-(long long)focusMode;
-(BOOL)_hasKeyValueObserversForHighFrequencyProperty:(id)arg1 ;
-(BOOL)isExposureModeSupported:(long long)arg1 ;
-(BOOL)isFlashModeSupported:(long long)arg1 ;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(SCD_Struct_AV0)activeMaxExposureDurationClientOverride;
-(id)_recommendedFrameRateRangeForVideoFormat:(id)arg1 depthFormat:(id)arg2 figSystemPressureLevel:(int)arg3 ;
-(int)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 ;
-(id)bravoCameraSelectionBehavior;
-(BOOL)hasFlash;
-(BOOL)eyeDetectionEnabled;
-(void)setSmoothAutoFocusEnabled:(BOOL)arg1 ;
-(float)exposureTargetOffset;
-(BOOL)isVideoStabilizationSupported;
-(void)_setDigitalFlashModeInternal:(long long)arg1 ;
-(int)powerConsumptionAt30FPSForOISMode:(int)arg1 ;
-(SCD_Struct_AV0)activeVideoMinFrameDuration;
-(int)_setActiveVideoMinFrameDurationInternal:(SCD_Struct_AV0)arg1 ;
-(BOOL)providesStortorgetMetadata;
-(long long)whiteBalanceMode;
-(BOOL)hevcAllowBFramesForHighCTUCountAndHighResolution;
-(void)setActiveColorSpace:(long long)arg1 ;
-(SCD_Struct_AV35)deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV26)arg1 ;
-(void)_setMaxAvailableVideoZoomFactor:(double)arg1 ;
-(BOOL)isAdjustingExposure;
-(BOOL)isFlashSceneDetectedForPhotoOutput;
-(BOOL)isActiveVideoMaxFrameDurationSet;
-(BOOL)hasTorch;
-(SCD_Struct_AV26)_chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV35)arg1 atMix:(double)arg2 ;
-(float)maxExposureTargetBias;
-(SCD_Struct_AV0)activeMaxExposureDuration;
-(void)_setVideoHDREnabled:(BOOL)arg1 ;
-(BOOL)isDiagnosticsTestSupported:(id)arg1 ;
-(BOOL)isFocusModeSupported:(long long)arg1 ;
-(BOOL)isHEVCRelaxedAverageBitRateTargetSupported;
-(void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(id)activeDepthDataFormat;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(BOOL)appliesSessionPresetMaxIntegrationTimeOverrideToActiveFormat;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_AV0)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(SCD_Struct_AV0)activeDepthDataMinFrameDuration;
-(BOOL)_isHighDynamicRangeScene;
-(void)_setDigitalFlashSceneForPhotoOutput:(id)arg1 ;
-(BOOL)lockForConfiguration:(id*)arg1 ;
-(SCD_Struct_AV35)deviceWhiteBalanceGainsForTemperatureAndTintValues:(SCD_Struct_AV26)arg1 ;
-(void)_incrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(BOOL)_isBravoVariant;
-(void)_setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isFaceDetectionDrivenImageProcessingEnabled;
-(void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)arg1 ;
-(id)_getFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(int)_setFocusWithMode:(long long)arg1 lensPosition:(float)arg2 requestID:(int)arg3 ;
-(BOOL)isSmoothAutoFocusSupported;
-(BOOL)isWhiteBalanceModeSupported:(long long)arg1 ;
-(BOOL)_isFlashScene;
-(BOOL)isGeometricDistortionCorrectionSupported;
-(float)focalLength;
-(BOOL)isLockedForConfiguration;
-(void)_setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)_isStillImageStabilizationScene;
-(long long)activeColorSpace;
-(int)minMacroblocksForHighProfileUpTo30fps;
-(void)setEyeClosedDetectionEnabled:(BOOL)arg1 ;
-(void)unlockForConfiguration;
-(BOOL)isHDRSceneDetectedForPhotoOutput;
-(void)setNonDestructiveCropAspectRatio:(long long)arg1 ;
-(BOOL)isHEVCMemoryUsageMinimizationSupported;
-(float)ISO;
-(BOOL)isActiveVideoMinFrameDurationSet;
-(id)_supportedOptionalFaceDetectionFeaturesDictionary;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(BOOL)hasMediaType:(id)arg1 ;
-(id)availableBoxedMetadataFormatDescriptions;
-(void)setVideoHDREnabled:(BOOL)arg1 ;
-(BOOL)isSmileDetectionSupported;
-(void)setAutoFocusRangeRestriction:(long long)arg1 ;
-(BOOL)isVariableFrameRateVideoCaptureEnabled;
-(double)maxAvailableVideoZoomFactor;
-(BOOL)isAutoFocusRangeRestrictionSupported;
-(BOOL)hevcAllowBFramesForHighCTUCount;
-(BOOL)isImageControlModeSupported:(long long)arg1 ;
-(BOOL)isNonDestructiveCropEnabled;
-(SCD_Struct_AV22)maxH264PhotoDimensions;
-(int)_setTorchMode:(long long)arg1 withLevel:(float)arg2 ;
-(SCD_Struct_AV35)deviceWhiteBalanceGains;
-(void)_updateFigCaptureSourceObserverCounts;
-(BOOL)isEyeClosedDetectionSupported;
-(void)_checkTCCAccess;
-(BOOL)isEyeDetectionSupported;
-(BOOL)isMachineReadableCodeDetectionSupported;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(BOOL)_ensureWhiteBalanceCalibrationUnpacked;
-(long long)digitalFlashMode;
-(BOOL)isTimeOfFlightProjectorModeSupported:(long long)arg1 ;
-(BOOL)automaticallyAdjustsImageControlMode;
-(id)_faceDetectionConfigurationDictionary;
-(id)systemPressureState;
-(int)hevcTurboModeVersion;
-(BOOL)isCameraIntrinsicMatrixDeliverySupported;
-(void)setGlobalToneMappingEnabled:(BOOL)arg1 ;
-(float)minExposureTargetBias;
-(void)setExposureMode:(long long)arg1 ;
-(void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2 ;
-(float)torchLevel;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 allowSendingWorkToMainThread:(BOOL)arg2 ;
-(int)faceRectangleAngle;
-(BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)_handleManualControlCompletionForRequestQueue:(id)arg1 withPayload:(id)arg2 ;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(BOOL)_isWBSeedEnabled;
-(void)_resetVideoHDRSuspended;
-(BOOL)cachesFigCaptureSourceConfigurationChanges;
-(BOOL)isHEVCSupported;
-(SCD_Struct_AV35)grayWorldDeviceWhiteBalanceGains;
-(BOOL)isFlashActive;
-(BOOL)supportsMultiCamCaptureWithDevice:(id)arg1 ;
-(int)_setWhiteBalanceWithMode:(long long)arg1 gains:(SCD_Struct_AV35)arg2 requestID:(int)arg3 ;
-(int)_orderInDevicesArray;
-(id)runDiagnosticsWithTestType:(id)arg1 ;
-(void)_setWBSeedEnabled:(BOOL)arg1 ;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(void)_setShallowDepthOfFieldEffectStatus:(long long)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(long long)exposureMode;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SCD_Struct_AV0)activeVideoMaxFrameDuration;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(CGPoint)focusPointOfInterest;
-(BOOL)isWideColorSupported;
-(unsigned long long)_wbTemperatureIterations;
-(SCD_Struct_AV26)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV35)arg1 ;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(long long)shallowDepthOfFieldEffectStatus;
-(int)_setFaceDetectionFeatureEnabled:(BOOL)arg1 enabledState:(BOOL*)arg2 ;
-(void)_setBravoCameraSelectionBehavior:(id)arg1 ;
-(float)lensAperture;
-(BOOL)isVideoHDRSuspended;
-(void)_setIsStillImageStabilizationScene:(BOOL)arg1 ;
-(SCD_Struct_AV22)maxH264VideoDimensions;
-(void)_decrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 duration:(double)arg3 rampType:(int)arg4 ;
-(void)_setAdjustingFocus:(BOOL)arg1 ;
-(id)digitalFlashSceneForPhotoOutput;
-(void)_initDegradedCaptureQualityFactors;
-(void)_drainManualControlRequestQueue:(id)arg1 ;
-(void)dealloc;
-(BOOL)isAdjustingFocus;
-(void)setEyeDetectionEnabled:(BOOL)arg1 ;
-(BOOL)isSubjectAreaChangeMonitoringEnabled;
-(void)setActiveFormat:(id)arg1 ;
@end

