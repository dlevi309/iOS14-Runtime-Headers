/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKTiledCanvasViewDelegate.h>
#import <libobjc.A.dylib/PKTextInputDebugStateReporting.h>

@protocol PKTextInputCanvasControllerDelegate, PKTextInputCanvasControllerChangeObserver;
@class NSMutableSet, NSMutableDictionary, PKStroke, UIColor, PKTiledCanvasView, PKTextInputFloatingBackgroundView, NSSet, NSString;

@interface PKTextInputCanvasController : NSObject <PKTiledCanvasViewDelegate, PKTextInputDebugStateReporting> {

	NSMutableSet* _recentlyRemovedStrokeIDs;
	BOOL _useSlidingCanvas;
	vector<CGPoint, std::__1::allocator<CGPoint> >* _currentStrokePoints;
	NSMutableDictionary* _strokeColorForStrokeUUID;
	PKStroke* _currentStroke;
	BOOL _wantsCanvasVisible;
	BOOL _wantsCanvasViewLoaded;
	id<PKTextInputCanvasControllerDelegate> _delegate;
	id<PKTextInputCanvasControllerChangeObserver> _changeObserver;
	UIColor* _strokeColor;
	PKTiledCanvasView* __canvasView;
	PKTextInputFloatingBackgroundView* __floatingBackgroundView;
	CGRect _floatingBackgroundRect;

}

@property (nonatomic,retain) PKTiledCanvasView * _canvasView;                                                  //@synthesize _canvasView=__canvasView - In the implementation block
@property (nonatomic,retain) PKTextInputFloatingBackgroundView * _floatingBackgroundView;                      //@synthesize _floatingBackgroundView=__floatingBackgroundView - In the implementation block
@property (setter=_setStrokeColor:,nonatomic,retain) UIColor * strokeColor;                                    //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputCanvasControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputCanvasControllerChangeObserver> changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (assign,nonatomic) BOOL wantsCanvasVisible;                                                          //@synthesize wantsCanvasVisible=_wantsCanvasVisible - In the implementation block
@property (assign,nonatomic) BOOL wantsCanvasViewLoaded;                                                       //@synthesize wantsCanvasViewLoaded=_wantsCanvasViewLoaded - In the implementation block
@property (nonatomic,readonly) UIColor * defaultStrokeColor; 
@property (nonatomic,readonly) BOOL isDrawing; 
@property (nonatomic,readonly) BOOL canvasHasVisibleStrokes; 
@property (nonatomic,readonly) PKStroke * inProgressStroke; 
@property (nonatomic,readonly) CGRect renderedStrokesBounds; 
@property (nonatomic,readonly) NSSet * recentlyRemovedStrokeIDs; 
@property (assign,nonatomic) CGRect floatingBackgroundRect;                                                    //@synthesize floatingBackgroundRect=_floatingBackgroundRect - In the implementation block
@property (nonatomic,readonly) id<UICoordinateSpace> canvasCoordinateSpace; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)prewarmFutureCanvasesIfNecessary;
+(id)defaultInkWithColor:(id)arg1 ;
-(UIColor *)strokeColor;
-(id)init;
-(id<PKTextInputCanvasControllerDelegate>)delegate;
-(id<PKTextInputCanvasControllerChangeObserver>)changeObserver;
-(id)_containerView;
-(void)_updateCanvasView;
-(void)setDelegate:(id<PKTextInputCanvasControllerDelegate>)arg1 ;
-(PKTiledCanvasView *)_canvasView;
-(BOOL)isDrawing;
-(void)setChangeObserver:(id<PKTextInputCanvasControllerChangeObserver>)arg1 ;
-(void)dealloc;
-(void)reportDebugStateDescription:(/*^block*/id)arg1 ;
-(void)canvasViewDidBeginDrawing:(id)arg1 ;
-(void)canvasViewDidEndDrawing:(id)arg1 ;
-(void)canvasView:(id)arg1 beganStroke:(id)arg2 ;
-(void)canvasView:(id)arg1 endedStroke:(id)arg2 ;
-(void)canvasView:(id)arg1 cancelledStroke:(id)arg2 ;
-(BOOL)wantsCanvasVisible;
-(void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2 ;
-(void)canvasView:(id)arg1 drawingDidChange:(id)arg2 ;
-(void)canvasViewDrawingMoved:(id)arg1 withTouch:(id)arg2 ;
-(void)canvasViewDidFinishAnimatingStrokes:(id)arg1 ;
-(void)canvasViewHasVisibleStrokesChanged:(id)arg1 ;
-(id)canvasViewTouchView:(id)arg1 ;
-(void)canvasView:(id)arg1 didPresentWithCanvasOffset:(CGPoint)arg2 ;
-(BOOL)canvasViewShouldDisableShapeRecognition:(id)arg1 ;
-(void)replayCanvasViewDrawingMoved:(id)arg1 inputPoint:(SCD_Struct_PK6)arg2 ;
-(id)canvasView:(id)arg1 inkForStroke:(id)arg2 ;
-(CGRect)renderedStrokesBounds;
-(void)removeStuckStrokesAndSimulateCrashIfNecessary;
-(BOOL)canvasHasVisibleStrokes;
-(void)setWantsCanvasViewLoaded:(BOOL)arg1 ;
-(void)setWantsCanvasVisible:(BOOL)arg1 ;
-(UIColor *)defaultStrokeColor;
-(void)reloadPreferredStrokeColor;
-(id<UICoordinateSpace>)canvasCoordinateSpace;
-(CGRect)convertRect:(CGRect)arg1 toCanvasFromCoordinateSpace:(id)arg2 ;
-(void)_setStrokeColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateCanvasViewInkAnimated:(BOOL)arg1 ;
-(void)_trackRecentlyRemovedStrokes:(id)arg1 ;
-(void)_updateFloatingBackground;
-(CGRect)floatingBackgroundRect;
-(PKTextInputFloatingBackgroundView *)_floatingBackgroundView;
-(void)set_floatingBackgroundView:(PKTextInputFloatingBackgroundView *)arg1 ;
-(CGRect)convertCanvasRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(void)_recordColorForStroke:(id)arg1 ;
-(BOOL)wantsCanvasViewLoaded;
-(void)set_canvasView:(PKTiledCanvasView *)arg1 ;
-(void)_clearRecordedColorForStroke:(id)arg1 ;
-(void)_updateCanvasViewOffsetFromTouch:(id)arg1 ;
-(void)_canvasViewDrawingMoved:(id)arg1 withTouch:(id)arg2 inputPoint:(SCD_Struct_PK6)arg3 ;
-(void)_setStrokeColor:(id)arg1 ;
-(PKStroke *)inProgressStroke;
-(NSSet *)recentlyRemovedStrokeIDs;
-(id)_resolvedDynamicColorForCurrentWindowScene:(id)arg1 ;
-(void)removeStrokes:(id)arg1 animationDuration:(double)arg2 ;
-(void)animateAndRemoveStrokes:(id)arg1 destinationFrame:(CGRect)arg2 animationDuration:(double)arg3 useImpreciseAnimation:(BOOL)arg4 ;
-(void)setFloatingBackgroundRect:(CGRect)arg1 ;
@end

