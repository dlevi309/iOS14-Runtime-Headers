/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMAutoLowLightVideoCommand : CAMCaptureCommand {

	BOOL _autoLowLightVideoEnabled;

}

@property (getter=isAutoLowLightVideoEnabled,nonatomic,readonly) BOOL autoLowLightVideoEnabled;              //@synthesize autoLowLightVideoEnabled=_autoLowLightVideoEnabled - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(BOOL)isAutoLowLightVideoEnabled;
-(id)initWithAutoLowLightVideoEnabled:(BOOL)arg1 ;
@end

