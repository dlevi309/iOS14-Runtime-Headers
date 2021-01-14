/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCGamepadEvent.h>

@class NSString;

@interface _GCGamepadEventImpl : NSObject <_GCGamepadEvent> {

	SCD_Struct_GC18 _data;

}

@property (assign,nonatomic) float dpadUpValue; 
@property (assign,nonatomic) float dpadDownValue; 
@property (assign,nonatomic) float dpadLeftValue; 
@property (assign,nonatomic) float dpadRightValue; 
@property (assign,nonatomic) float buttonAValue; 
@property (assign,nonatomic) float buttonBValue; 
@property (assign,nonatomic) float buttonXValue; 
@property (assign,nonatomic) float buttonYValue; 
@property (assign,nonatomic) float buttonLeftShoulder; 
@property (assign,nonatomic) float buttonRightShoulder; 
@property (assign,nonatomic) float leftThumbstickUp; 
@property (assign,nonatomic) float leftThumbstickDown; 
@property (assign,nonatomic) float leftThumbstickLeft; 
@property (assign,nonatomic) float leftThumbstickRight; 
@property (assign,nonatomic) float rightThumbstickUp; 
@property (assign,nonatomic) float rightThumbstickDown; 
@property (assign,nonatomic) float rightThumbstickLeft; 
@property (assign,nonatomic) float rightThumbstickRight; 
@property (assign,nonatomic) float leftTrigger; 
@property (assign,nonatomic) float rightTrigger; 
@property (assign,nonatomic) float leftThumbstickButton; 
@property (assign,nonatomic) float rightThumbstickButton; 
@property (assign,nonatomic) float buttonHome; 
@property (assign,nonatomic) float buttonMenu; 
@property (assign,nonatomic) float buttonOptions; 
@property (assign,nonatomic) float buttonSpecial0; 
@property (assign,nonatomic) float buttonSpecial1; 
@property (assign,nonatomic) float buttonSpecial2; 
@property (assign,nonatomic) float buttonSpecial3; 
@property (assign,nonatomic) float buttonSpecial4; 
@property (assign,nonatomic) float buttonSpecial5; 
@property (assign,nonatomic) float buttonSpecial6; 
@property (assign,nonatomic) float buttonSpecial7; 
@property (assign,nonatomic) float buttonSpecial8; 
@property (assign,nonatomic) float buttonSpecial9; 
@property (assign,nonatomic) float buttonSpecial10; 
@property (assign,nonatomic) float buttonSpecial11; 
@property (assign,nonatomic) float buttonSpecial12; 
@property (assign,nonatomic) float buttonSpecial13; 
@property (assign,nonatomic) float buttonSpecial14; 
@property (assign,nonatomic) float buttonSpecial15; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)leftThumbstickButton;
-(float)rightThumbstickButton;
-(float)buttonHome;
-(NSString *)debugDescription;
-(void)setButtonMenu:(float)arg1 ;
-(float)leftTrigger;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)rightTrigger;
-(float)buttonMenu;
-(float)buttonOptions;
-(BOOL)hasValidValueForElement:(long long)arg1 ;
-(float)floatValueForElement:(long long)arg1 ;
-(float)dpadUpValue;
-(void)setDpadUpValue:(float)arg1 ;
-(float)dpadDownValue;
-(void)setDpadDownValue:(float)arg1 ;
-(float)dpadLeftValue;
-(void)setDpadLeftValue:(float)arg1 ;
-(float)dpadRightValue;
-(void)setDpadRightValue:(float)arg1 ;
-(float)buttonAValue;
-(void)setButtonAValue:(float)arg1 ;
-(float)buttonBValue;
-(void)setButtonBValue:(float)arg1 ;
-(float)buttonXValue;
-(void)setButtonXValue:(float)arg1 ;
-(float)buttonYValue;
-(void)setButtonYValue:(float)arg1 ;
-(float)buttonLeftShoulder;
-(void)setButtonLeftShoulder:(float)arg1 ;
-(float)buttonRightShoulder;
-(void)setButtonRightShoulder:(float)arg1 ;
-(float)leftThumbstickUp;
-(void)setLeftThumbstickUp:(float)arg1 ;
-(float)leftThumbstickDown;
-(void)setLeftThumbstickDown:(float)arg1 ;
-(float)leftThumbstickLeft;
-(void)setLeftThumbstickLeft:(float)arg1 ;
-(float)leftThumbstickRight;
-(void)setLeftThumbstickRight:(float)arg1 ;
-(float)rightThumbstickUp;
-(void)setRightThumbstickUp:(float)arg1 ;
-(float)rightThumbstickDown;
-(void)setRightThumbstickDown:(float)arg1 ;
-(float)rightThumbstickLeft;
-(void)setRightThumbstickLeft:(float)arg1 ;
-(float)rightThumbstickRight;
-(void)setRightThumbstickRight:(float)arg1 ;
-(void)setLeftTrigger:(float)arg1 ;
-(void)setRightTrigger:(float)arg1 ;
-(void)setLeftThumbstickButton:(float)arg1 ;
-(void)setRightThumbstickButton:(float)arg1 ;
-(void)setButtonHome:(float)arg1 ;
-(void)setButtonOptions:(float)arg1 ;
-(float)buttonSpecial0;
-(void)setButtonSpecial0:(float)arg1 ;
-(float)buttonSpecial1;
-(void)setButtonSpecial1:(float)arg1 ;
-(float)buttonSpecial2;
-(void)setButtonSpecial2:(float)arg1 ;
-(float)buttonSpecial3;
-(void)setButtonSpecial3:(float)arg1 ;
-(float)buttonSpecial4;
-(void)setButtonSpecial4:(float)arg1 ;
-(float)buttonSpecial5;
-(void)setButtonSpecial5:(float)arg1 ;
-(float)buttonSpecial6;
-(void)setButtonSpecial6:(float)arg1 ;
-(float)buttonSpecial7;
-(void)setButtonSpecial7:(float)arg1 ;
-(float)buttonSpecial8;
-(void)setButtonSpecial8:(float)arg1 ;
-(float)buttonSpecial9;
-(void)setButtonSpecial9:(float)arg1 ;
-(float)buttonSpecial10;
-(void)setButtonSpecial10:(float)arg1 ;
-(float)buttonSpecial11;
-(void)setButtonSpecial11:(float)arg1 ;
-(float)buttonSpecial12;
-(void)setButtonSpecial12:(float)arg1 ;
-(float)buttonSpecial13;
-(void)setButtonSpecial13:(float)arg1 ;
-(float)buttonSpecial14;
-(void)setButtonSpecial14:(float)arg1 ;
-(float)buttonSpecial15;
-(void)setButtonSpecial15:(float)arg1 ;
-(id)initWithGameControllerInputs:(float)arg1 validMask:(unsigned long long)arg2 ;
-(id)initWithGamepadEvent:(id)arg1 ;
@end
