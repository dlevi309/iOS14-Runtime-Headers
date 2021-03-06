/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@interface SBCameraHardwareButtonSettings : PTSettings {

	BOOL _shutterButtonShouldUsePocketDetection;
	double _shutterButtonLongPressTimeout;
	double _shutterButtonLongPressCancellationTimeout;

}

@property (assign,nonatomic) double shutterButtonLongPressTimeout;                          //@synthesize shutterButtonLongPressTimeout=_shutterButtonLongPressTimeout - In the implementation block
@property (assign,nonatomic) double shutterButtonLongPressCancellationTimeout;              //@synthesize shutterButtonLongPressCancellationTimeout=_shutterButtonLongPressCancellationTimeout - In the implementation block
@property (assign,nonatomic) BOOL shutterButtonShouldUsePocketDetection;                    //@synthesize shutterButtonShouldUsePocketDetection=_shutterButtonShouldUsePocketDetection - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)shutterButtonLongPressTimeout;
-(double)shutterButtonLongPressCancellationTimeout;
-(BOOL)shutterButtonShouldUsePocketDetection;
-(void)setShutterButtonLongPressTimeout:(double)arg1 ;
-(void)setShutterButtonLongPressCancellationTimeout:(double)arg1 ;
-(void)setShutterButtonShouldUsePocketDetection:(BOOL)arg1 ;
@end

