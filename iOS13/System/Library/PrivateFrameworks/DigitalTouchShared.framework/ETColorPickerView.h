/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/DTSColorPicker.h>
#import <libobjc.A.dylib/DTSColorWheelDelegate.h>

@protocol ETColorPickerViewDelegate;
@class UIView, ETPaletteCircleView, UITapGestureRecognizer, ETColorWheelView, NSString;

@interface ETColorPickerView : DTSColorPicker <DTSColorWheelDelegate> {

	UIView* _contentView;
	ETPaletteCircleView* _collapsedSelectedCircle;
	UITapGestureRecognizer* _presentTapGestureRecognizer;
	CGRect _expandedFrame;
	CGRect _collapsedFrame;
	ETColorWheelView* _colorWheelView;
	BOOL _dismissingColorPicker;
	double _selectedCircleRotationAngle;
	BOOL _isExpanded;
	id<ETColorPickerViewDelegate> _presentationDelegate;

}

@property (assign,nonatomic) BOOL isExpanded;                                                        //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic,__weak) id<ETColorPickerViewDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)setPresentationDelegate:(id<ETColorPickerViewDelegate>)arg1 ;
-(id<ETColorPickerViewDelegate>)presentationDelegate;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDimmed:(BOOL)arg1 ;
-(void)paletteCircleTapped:(id)arg1 ;
-(void)showColorWheel;
-(void)presentTapReceived:(id)arg1 ;
-(void)layoutPaletteCircles;
-(void)_dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isCenterCircle:(unsigned long long)arg1 ;
-(void)_addRotationAnimationFromAngle:(double)arg1 toAngle:(double)arg2 ;
-(void)animateToGray;
-(void)animateToSelectedColor;
-(void)fadeoutPaletterCirclesInPairs;
-(void)transformSelectionMarkerToPickerCircleWithCompletion:(/*^block*/id)arg1 ;
-(void)movePaletteCircleTowardsViewCenter:(id)arg1 distance:(double)arg2 ;
-(void)movePalettCircleToOriginalLayoutPosition:(id)arg1 ;
-(id)paletteCircleAnimationPairs;
-(void)fadeoutPaletteCircle:(id)arg1 delay:(double)arg2 ;
-(void)fadeinPaletteCircle:(id)arg1 delay:(double)arg2 ;
-(void)fadeinPaletterCirclesInPairs;
-(void)transformPickerCircleToSelectionMarkerWithCompletion:(/*^block*/id)arg1 ;
-(void)colorWheel:(id)arg1 willPickColor:(id)arg2 ;
-(void)colorWheel:(id)arg1 didPickColor:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collapsedFrame:(CGRect)arg2 ;
-(void)animateOffscreen;
-(void)animateOnscreen;
@end

