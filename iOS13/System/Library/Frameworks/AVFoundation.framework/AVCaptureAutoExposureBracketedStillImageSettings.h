/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {

	float _exposureTargetBias;

}

@property (readonly) float exposureTargetBias;              //@synthesize exposureTargetBias=_exposureTargetBias - In the implementation block
+(id)autoExposureSettingsWithExposureTargetBias:(float)arg1 ;
-(id)description;
-(id)debugDescription;
-(float)exposureTargetBias;
-(id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1 ;
@end

