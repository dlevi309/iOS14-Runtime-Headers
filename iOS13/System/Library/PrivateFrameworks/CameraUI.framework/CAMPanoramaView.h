/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CAMPanoramaViewDelegate;
@class CAMPanoramaPreviewView, UIView, CAMPanoramaArrowView, CAMPanoramaLevelView, CAMPanoramaLabel, NSString, CAMPanoramaPaintingStatus;

@interface CAMPanoramaView : UIView {

	BOOL _painting;
	BOOL __currentlyShowingMoveInstructions;
	BOOL __currentlyMovingTooFast;
	long long _direction;
	id<CAMPanoramaViewDelegate> _delegate;
	CAMPanoramaPreviewView* _previewView;
	long long _layoutStyle;
	double _currentOrientedAcceleration;
	UIView* __stripBackgroundView;
	UIView* __stripContainerView;
	UIView* __maskingView;
	CAMPanoramaArrowView* __arrowView;
	CAMPanoramaLevelView* __levelView;
	CAMPanoramaLabel* __instructionLabel;
	NSString* __speedString;
	NSString* __moveUpString;
	NSString* __moveDownString;
	NSString* __arrowString;
	NSString* __instructionString;
	CAMPanoramaPaintingStatus* __currentPaintingStatus;
	double __initialPaintingAcceleration;
	double __currentPaintingAcceleration;
	double* __previousSpeeds;
	double __currentAverageSpeed;
	unsigned long long __arrowUpdateFrame;
	CGSize _panoramaCaptureSize;
	CGPoint __initialArrowCenter;
	CGRect __lastLayoutBounds;

}

@property (nonatomic,readonly) UIView * _stripBackgroundView;                                                                                                             //@synthesize _stripBackgroundView=__stripBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * _stripContainerView;                                                                                                              //@synthesize _stripContainerView=__stripContainerView - In the implementation block
@property (nonatomic,readonly) UIView * _maskingView;                                                                                                                     //@synthesize _maskingView=__maskingView - In the implementation block
@property (nonatomic,readonly) CAMPanoramaArrowView * _arrowView;                                                                                                         //@synthesize _arrowView=__arrowView - In the implementation block
@property (nonatomic,readonly) CAMPanoramaLevelView * _levelView;                                                                                                         //@synthesize _levelView=__levelView - In the implementation block
@property (nonatomic,readonly) CAMPanoramaLabel * _instructionLabel;                                                                                                      //@synthesize _instructionLabel=__instructionLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * _speedString;                                                                                                              //@synthesize _speedString=__speedString - In the implementation block
@property (nonatomic,copy,readonly) NSString * _moveUpString;                                                                                                             //@synthesize _moveUpString=__moveUpString - In the implementation block
@property (nonatomic,copy,readonly) NSString * _moveDownString;                                                                                                           //@synthesize _moveDownString=__moveDownString - In the implementation block
@property (nonatomic,copy,readonly) NSString * _arrowString;                                                                                                              //@synthesize _arrowString=__arrowString - In the implementation block
@property (nonatomic,copy,readonly) NSString * _instructionString;                                                                                                        //@synthesize _instructionString=__instructionString - In the implementation block
@property (assign,setter=_setInitialArrowCenter:,nonatomic) CGPoint _initialArrowCenter;                                                                                  //@synthesize _initialArrowCenter=__initialArrowCenter - In the implementation block
@property (assign,setter=_setLastLayoutBounds:,nonatomic) CGRect _lastLayoutBounds;                                                                                       //@synthesize _lastLayoutBounds=__lastLayoutBounds - In the implementation block
@property (assign,setter=_setPainting:,getter=isPainting,nonatomic) BOOL painting;                                                                                        //@synthesize painting=_painting - In the implementation block
@property (setter=_setCurrentPaintingStatus:,nonatomic,retain) CAMPanoramaPaintingStatus * _currentPaintingStatus;                                                        //@synthesize _currentPaintingStatus=__currentPaintingStatus - In the implementation block
@property (assign,setter=_setCurrentOrientedAcceleration:,nonatomic) double currentOrientedAcceleration;                                                                  //@synthesize currentOrientedAcceleration=_currentOrientedAcceleration - In the implementation block
@property (assign,setter=_setInitialPaintingAcceleration:,nonatomic) double _initialPaintingAcceleration;                                                                 //@synthesize _initialPaintingAcceleration=__initialPaintingAcceleration - In the implementation block
@property (assign,setter=_setCurrentPaintingAcceleration:,nonatomic) double _currentPaintingAcceleration;                                                                 //@synthesize _currentPaintingAcceleration=__currentPaintingAcceleration - In the implementation block
@property (assign,setter=_setCurrentlyShowingMoveInstructions:,getter=_isCurrentlyShowingMoveInstructions,nonatomic) BOOL _currentlyShowingMoveInstructions;              //@synthesize _currentlyShowingMoveInstructions=__currentlyShowingMoveInstructions - In the implementation block
@property (nonatomic,readonly) double* _previousSpeeds;                                                                                                                   //@synthesize _previousSpeeds=__previousSpeeds - In the implementation block
@property (assign,setter=_setCurrentlyMovingTooFast:,getter=_isCurrentlyMovingTooFast,nonatomic) BOOL _currentlyMovingTooFast;                                            //@synthesize _currentlyMovingTooFast=__currentlyMovingTooFast - In the implementation block
@property (assign,setter=_setCurrentAverageSpeed:,nonatomic) double _currentAverageSpeed;                                                                                 //@synthesize _currentAverageSpeed=__currentAverageSpeed - In the implementation block
@property (assign,setter=_setArrowUpdateFrame:,nonatomic) unsigned long long _arrowUpdateFrame;                                                                           //@synthesize _arrowUpdateFrame=__arrowUpdateFrame - In the implementation block
@property (assign,nonatomic) long long direction;                                                                                                                         //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic,__weak) id<CAMPanoramaViewDelegate> delegate;                                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CAMPanoramaPreviewView * previewView;                                                                                                      //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,readonly) UIView * instructionView; 
@property (assign,nonatomic) long long layoutStyle;                                                                                                                       //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) CGSize panoramaCaptureSize;                                                                                                                  //@synthesize panoramaCaptureSize=_panoramaCaptureSize - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<CAMPanoramaViewDelegate>)delegate;
-(void)setDelegate:(id<CAMPanoramaViewDelegate>)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(CAMPanoramaArrowView *)_arrowView;
-(CAMPanoramaPreviewView *)previewView;
-(CGRect)_lastLayoutBounds;
-(CAMPanoramaLabel *)_instructionLabel;
-(UIView *)_maskingView;
-(void)updateToContentSize:(id)arg1 ;
-(CGSize)panoramaCaptureSize;
-(void)setDirection:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setPanoramaCaptureSize:(CGSize)arg1 ;
-(void)startProcessingPanorama;
-(void)finishedProcessingPanorama;
-(CAMPanoramaLevelView *)_levelView;
-(UIView *)instructionView;
-(void)startPainting;
-(void)stopPainting;
-(id)initWithPanoramaPreviewView:(id)arg1 layoutStyle:(long long)arg2 ;
-(void)_setPainting:(BOOL)arg1 ;
-(void)updatePaintingWithStatus:(id)arg1 ;
-(double)currentOrientedAcceleration;
-(void)updateOrientedAcceleration:(double)arg1 ;
-(BOOL)isPainting;
-(UIView *)_stripBackgroundView;
-(UIView *)_stripContainerView;
-(CAMPanoramaPaintingStatus *)_currentPaintingStatus;
-(CGRect)_frameForArrowViewWithDirection:(long long)arg1 offset:(double)arg2 ;
-(double)_currentAverageSpeed;
-(CGPoint)_initialArrowCenter;
-(BOOL)_isCurrentlyShowingMoveInstructions;
-(void)_showMoveUpInstructions;
-(void)_showMoveDownInstructions;
-(void)_showMoveUpInstructionsAfterDelay;
-(void)_showMoveDownInstructionsAfterDelay;
-(void)_cancelDelayedMoveInstructions;
-(void)_hideInstructionLabel;
-(void)_setLastLayoutBounds:(CGRect)arg1 ;
-(double)_initialPaintingAcceleration;
-(double)_currentPaintingAcceleration;
-(void)_resetPaintingUIAnimated:(BOOL)arg1 ;
-(void)_setArrowUpdateFrame:(unsigned long long)arg1 ;
-(void)_setInitialPaintingAcceleration:(double)arg1 ;
-(void)_setCurrentPaintingAcceleration:(double)arg1 ;
-(void)_setInitialArrowCenter:(CGPoint)arg1 ;
-(void)_showArrowInstructions;
-(void)_hideArrowInstructionsAfterDelay;
-(void)_setCurrentlyShowingMoveInstructions:(BOOL)arg1 ;
-(void)_setCurrentlyMovingTooFast:(BOOL)arg1 ;
-(void)_showSpeedInstructions;
-(void)_hideSpeedInstructionsAfterDelay;
-(unsigned long long)_arrowUpdateFrame;
-(void)_setCurrentAverageSpeed:(double)arg1 ;
-(void)_setCurrentPaintingStatus:(id)arg1 ;
-(void)_setCurrentOrientedAcceleration:(double)arg1 ;
-(void)_updateInstructionLabelText:(id)arg1 ;
-(BOOL)_isCurrentlyMovingTooFast;
-(NSString *)_speedString;
-(NSString *)_moveUpString;
-(NSString *)_moveDownString;
-(NSString *)_arrowString;
-(NSString *)_instructionString;
-(double*)_previousSpeeds;
@end
