/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/SXFullscreenImageViewDelegate.h>
#import <libobjc.A.dylib/SXItemizedScrollViewDataSource.h>
#import <libobjc.A.dylib/SXItemizedScrollViewDelegate.h>
#import <libobjc.A.dylib/SXFullscreenCaptionViewDelegate.h>
#import <libobjc.A.dylib/SXFullscreenNavigationBarViewDelegate.h>
#import <libobjc.A.dylib/SXDragManagerDataSource.h>
#import <libobjc.A.dylib/SXFullscreenCanvasViewControllerDelegate.h>

@protocol SXFullscreenCanvasShowable, SXFullscreenCaptionViewFactory;
@class UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UIView, SXFullscreenCanvasViewController, SXItemizedScrollView, SXFullscreenNavigationBarView, SXFullscreenCaptionView, SXDragManager, UIColor, NSString;

@interface SXFullscreenCanvasController : NSObject <UIGestureRecognizerDelegate, UIScrollViewDelegate, SXFullscreenImageViewDelegate, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate, SXFullscreenCaptionViewDelegate, SXFullscreenNavigationBarViewDelegate, SXDragManagerDataSource, SXFullscreenCanvasViewControllerDelegate> {

	BOOL _isFullscreen;
	BOOL _isTransitioning;
	BOOL _rotationIsActive;
	BOOL _panIsActive;
	BOOL _pinchIsActive;
	BOOL _verticalSwipingIsActive;
	BOOL _isStoppingVerticalSwiping;
	BOOL _orientationChangeIsInterupting;
	BOOL _lessTouchesAreInterupting;
	BOOL _isSupressingColorSettings;
	int _previousExpansionMode;
	id<SXFullscreenCanvasShowable> _showable;
	unsigned long long _sharingPolicy;
	id<SXFullscreenCaptionViewFactory> _captionViewFactory;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	UITapGestureRecognizer* _openTapGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIView* _backgroundView;
	UIView* _gestureView;
	unsigned long long _totalActiveGestureRecognizers;
	double _currentRotation;
	double _currentScale;
	unsigned long long _currentViewIndex;
	UIView* _currentView;
	SXFullscreenCanvasViewController* _canvasViewController;
	SXItemizedScrollView* _itemizedScrollView;
	SXFullscreenNavigationBarView* _navigationBarView;
	SXFullscreenCaptionView* _captionView;
	SXDragManager* _dragManager;
	CGPoint _currentTranslation;
	CGPoint _startingAnchorPoint;
	CGRect _currentOriginFrame;
	CGRect _currentDestinationFrame;

}

@property (nonatomic,readonly) unsigned long long sharingPolicy;                                     //@synthesize sharingPolicy=_sharingPolicy - In the implementation block
@property (nonatomic,readonly) id<SXFullscreenCaptionViewFactory> captionViewFactory;                //@synthesize captionViewFactory=_captionViewFactory - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                        //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                    //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIRotationGestureRecognizer * rotationGestureRecognizer;              //@synthesize rotationGestureRecognizer=_rotationGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * openTapGestureRecognizer;                    //@synthesize openTapGestureRecognizer=_openTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * gestureView;                                                 //@synthesize gestureView=_gestureView - In the implementation block
@property (nonatomic,readonly) BOOL rotationIsActive;                                                //@synthesize rotationIsActive=_rotationIsActive - In the implementation block
@property (nonatomic,readonly) BOOL panIsActive;                                                     //@synthesize panIsActive=_panIsActive - In the implementation block
@property (nonatomic,readonly) BOOL pinchIsActive;                                                   //@synthesize pinchIsActive=_pinchIsActive - In the implementation block
@property (nonatomic,readonly) BOOL verticalSwipingIsActive;                                         //@synthesize verticalSwipingIsActive=_verticalSwipingIsActive - In the implementation block
@property (nonatomic,readonly) BOOL isStoppingVerticalSwiping;                                       //@synthesize isStoppingVerticalSwiping=_isStoppingVerticalSwiping - In the implementation block
@property (nonatomic,readonly) unsigned long long totalActiveGestureRecognizers;                     //@synthesize totalActiveGestureRecognizers=_totalActiveGestureRecognizers - In the implementation block
@property (nonatomic,readonly) double currentRotation;                                               //@synthesize currentRotation=_currentRotation - In the implementation block
@property (nonatomic,readonly) double currentScale;                                                  //@synthesize currentScale=_currentScale - In the implementation block
@property (nonatomic,readonly) CGPoint currentTranslation;                                           //@synthesize currentTranslation=_currentTranslation - In the implementation block
@property (nonatomic,readonly) CGPoint startingAnchorPoint;                                          //@synthesize startingAnchorPoint=_startingAnchorPoint - In the implementation block
@property (assign,nonatomic) BOOL isFullscreen;                                                      //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) BOOL orientationChangeIsInterupting;                                    //@synthesize orientationChangeIsInterupting=_orientationChangeIsInterupting - In the implementation block
@property (assign,nonatomic) BOOL lessTouchesAreInterupting;                                         //@synthesize lessTouchesAreInterupting=_lessTouchesAreInterupting - In the implementation block
@property (assign,nonatomic) unsigned long long currentViewIndex;                                    //@synthesize currentViewIndex=_currentViewIndex - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                                   //@synthesize currentView=_currentView - In the implementation block
@property (assign,nonatomic) CGRect currentOriginFrame;                                              //@synthesize currentOriginFrame=_currentOriginFrame - In the implementation block
@property (assign,nonatomic) CGRect currentDestinationFrame;                                         //@synthesize currentDestinationFrame=_currentDestinationFrame - In the implementation block
@property (nonatomic,retain) SXFullscreenCanvasViewController * canvasViewController;                //@synthesize canvasViewController=_canvasViewController - In the implementation block
@property (nonatomic,retain) SXItemizedScrollView * itemizedScrollView;                              //@synthesize itemizedScrollView=_itemizedScrollView - In the implementation block
@property (nonatomic,retain) SXFullscreenNavigationBarView * navigationBarView;                      //@synthesize navigationBarView=_navigationBarView - In the implementation block
@property (nonatomic,retain) SXFullscreenCaptionView * captionView;                                  //@synthesize captionView=_captionView - In the implementation block
@property (assign,nonatomic) int previousExpansionMode;                                              //@synthesize previousExpansionMode=_previousExpansionMode - In the implementation block
@property (assign,nonatomic) BOOL isSupressingColorSettings;                                         //@synthesize isSupressingColorSettings=_isSupressingColorSettings - In the implementation block
@property (nonatomic,retain) SXDragManager * dragManager;                                            //@synthesize dragManager=_dragManager - In the implementation block
@property (nonatomic,__weak,readonly) id<SXFullscreenCanvasShowable> showable;                       //@synthesize showable=_showable - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,readonly) unsigned long long activeViewIndex; 
@property (nonatomic,readonly) BOOL isTransitioning;                                                 //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setup;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(BOOL)isFullscreen;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(UIView *)backgroundView;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(SXFullscreenCanvasViewController *)canvasViewController;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(CGPoint)currentTranslation;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(BOOL)isTransitioning;
-(SXDragManager *)dragManager;
-(UIRotationGestureRecognizer *)rotationGestureRecognizer;
-(void)handleTap:(id)arg1 ;
-(double)currentRotation;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(id<SXFullscreenCanvasShowable>)showable;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)updateTransform;
-(void)dismiss;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(void)fullscreenCanvasViewController:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)fullScreenCanvasViewControllerWantsToDismiss:(id)arg1 ;
-(id<SXFullscreenCaptionViewFactory>)captionViewFactory;
-(id)initWithShowable:(id)arg1 captionViewFactory:(id)arg2 sharingPolicy:(unsigned long long)arg3 ;
-(BOOL)captionView:(id)arg1 tapGestureRecognizerShouldBegin:(id)arg2 ;
-(id)viewForDragManager:(id)arg1 ;
-(id)dragManager:(id)arg1 dragableAtLocation:(CGPoint)arg2 ;
-(void)setDragManager:(SXDragManager *)arg1 ;
-(void)fullScreenImageViewDidStartZooming:(id)arg1 ;
-(void)fullScreenImageViewDidStopZooming:(id)arg1 ;
-(double)currentScale;
-(unsigned long long)activeViewIndex;
-(CGSize)fitSizeForRect:(CGRect)arg1 ;
-(void)presentFullscreenWithIndex:(unsigned long long)arg1 ;
-(void)fullscreenNavigationBarViewDoneButtonPressed:(id)arg1 ;
-(UIView *)gestureView;
-(BOOL)otherInteractivityGestureShouldBegin:(id)arg1 ;
-(void)stopSupressingColorSettings;
-(SXItemizedScrollView *)itemizedScrollView;
-(void)startTransitionToFullScreen:(BOOL)arg1 controllable:(BOOL)arg2 ;
-(void)didEndTransitionFromFullScreen:(BOOL)arg1 toFullScreen:(BOOL)arg2 ;
-(void)goToOriginalFromFullScreenAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)willStartTransformingWithGestureRecognizer:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setItemizedScrollView:(SXItemizedScrollView *)arg1 ;
-(void)setupScrollViewIfNeededWithActiveIndex:(unsigned long long)arg1 ;
-(void)transferGestureViewToView:(id)arg1 ;
-(SXFullscreenCaptionView *)captionView;
-(void)changeCaptionViewForViewWithIndex:(unsigned long long)arg1 expanded:(BOOL)arg2 animated:(BOOL)arg3 ;
-(SXFullscreenNavigationBarView *)navigationBarView;
-(unsigned long long)currentViewIndex;
-(void)setupGestureRecognizersInView:(id)arg1 ;
-(unsigned long long)sharingPolicy;
-(void)handleOpenTapGesture:(id)arg1 ;
-(UITapGestureRecognizer *)openTapGestureRecognizer;
-(void)handlePinchGestureRecognizer:(id)arg1 ;
-(void)handleRotationGestureRecognizer:(id)arg1 ;
-(BOOL)verticalSwipingIsActive;
-(BOOL)isStoppingVerticalSwiping;
-(BOOL)panIsActive;
-(void)stopTransformingCancelled:(BOOL)arg1 ;
-(void)setLessTouchesAreInterupting:(BOOL)arg1 ;
-(void)setOrientationChangeIsInterupting:(BOOL)arg1 ;
-(BOOL)pinchIsActive;
-(BOOL)rotationIsActive;
-(void)startVerticalSwiping;
-(void)stopVerticalSwipingDismissed:(BOOL)arg1 lastVelocity:(CGPoint)arg2 ;
-(void)handleGestureRecognizer:(id)arg1 ;
-(void)goToFullScreenFromOriginalAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setCurrentViewIndex:(unsigned long long)arg1 ;
-(long long)viewIndexForPoint:(CGPoint)arg1 ;
-(CGPoint)calculateAnchorPointFromBounds:(CGRect)arg1 andPoint:(CGPoint)arg2 ;
-(UIView *)currentView;
-(void)transferCurrentViewToCanvas;
-(CGPoint)startingAnchorPoint;
-(void)setCaptionView:(SXFullscreenCaptionView *)arg1 ;
-(void)setNavigationBarView:(SXFullscreenNavigationBarView *)arg1 ;
-(void)setupKeyCommandsForCanvasViewController:(id)arg1 ;
-(void)removeScaleAndTranslationFromCurrentView;
-(void)goToFullScreenFromFullScreenAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)goToOriginalFromOriginalAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)didFinishFullscreenActiveIndex:(unsigned long long)arg1 ;
-(void)transferCurrentViewToOriginalView;
-(void)goToOriginalFromVerticalSwipingWithVelocity:(CGPoint)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CGRect)currentDestinationFrame;
-(BOOL)isSupressingColorSettings;
-(void)setIsSupressingColorSettings:(BOOL)arg1 ;
-(CGRect)currentOriginFrame;
-(void)startSupressingColorSettings;
-(unsigned long long)totalActiveGestureRecognizers;
-(void)transformViewToSize:(CGSize)arg1 ;
-(unsigned long long)numberOfViewsInItemizedScrollView:(id)arg1 ;
-(CGRect)itemizedScrollView:(id)arg1 frameForViewAtIndex:(unsigned long long)arg2 ;
-(id)itemizedScrollView:(id)arg1 viewAtIndex:(unsigned long long)arg2 ;
-(void)itemizedScrollView:(id)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2 ;
-(void)itemizedScrollView:(id)arg1 willShowViewWithIndex:(unsigned long long)arg2 ;
-(void)itemizedScrollView:(id)arg1 didHideViewWithIndex:(unsigned long long)arg2 ;
-(BOOL)comparePoint:(CGPoint)arg1 withPoint:(CGPoint)arg2 maxDelta:(double)arg3 ;
-(BOOL)orientationChangeIsInterupting;
-(BOOL)lessTouchesAreInterupting;
-(void)setCurrentView:(UIView *)arg1 ;
-(void)setCurrentOriginFrame:(CGRect)arg1 ;
-(void)setCurrentDestinationFrame:(CGRect)arg1 ;
-(void)setCanvasViewController:(SXFullscreenCanvasViewController *)arg1 ;
-(int)previousExpansionMode;
-(void)setPreviousExpansionMode:(int)arg1 ;
@end
