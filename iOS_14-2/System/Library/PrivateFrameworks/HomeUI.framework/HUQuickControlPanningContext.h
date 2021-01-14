/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@interface HUQuickControlPanningContext : NSObject {

	BOOL _requiresSomeMovementBeforeActivation;
	double _initialSliderValue;
	double _verticalDragCoefficient;
	CGRect _controlFrame;

}

@property (assign,nonatomic) CGRect controlFrame;                                    //@synthesize controlFrame=_controlFrame - In the implementation block
@property (assign,nonatomic) double initialSliderValue;                              //@synthesize initialSliderValue=_initialSliderValue - In the implementation block
@property (assign,nonatomic) double verticalDragCoefficient;                         //@synthesize verticalDragCoefficient=_verticalDragCoefficient - In the implementation block
@property (assign,nonatomic) BOOL requiresSomeMovementBeforeActivation;              //@synthesize requiresSomeMovementBeforeActivation=_requiresSomeMovementBeforeActivation - In the implementation block
-(id)init;
-(CGRect)controlFrame;
-(void)assertConfigurationIsValid;
-(void)setControlFrame:(CGRect)arg1 ;
-(void)setInitialSliderValue:(double)arg1 ;
-(void)setVerticalDragCoefficient:(double)arg1 ;
-(void)setRequiresSomeMovementBeforeActivation:(BOOL)arg1 ;
-(double)initialSliderValue;
-(double)verticalDragCoefficient;
-(BOOL)requiresSomeMovementBeforeActivation;
@end
