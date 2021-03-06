/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <libobjc.A.dylib/OFViewControllerTransitioningContext.h>

@protocol OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning;
@class OFUIViewController, OFUIView, NSString;

@interface _OFViewControllerTransitionContext : NSObject <OFViewControllerTransitioningContext> {

	OFUIViewController* _fromViewController;
	OFUIViewController* _toViewController;
	OFUIView* _containerView;
	double _progress;
	double _progressVelocity;
	double _lastUpdateTimestamp;
	long long _state;
	struct {
		unsigned interactorImplementsCompletionSpeed : 1;
		unsigned interactorImplementsCompletionCurve : 1;
		unsigned isCurrentlyInteractive;
		unsigned transitionWasCancelled : 1;
		unsigned transitionIsCompleting : 1;
	}  _flags;
	BOOL _isRubberBanding;
	BOOL _doEaseIn;
	BOOL _doEaseOut;
	id<OFViewControllerAnimatedTransitioning> _animator;
	id<OFViewControllerInteractiveTransitioning> _interactor;
	/*^block*/id _interactiveUpdateHandler;
	/*^block*/id _willCompleteHandler;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) BOOL isInFlight; 
@property (assign,nonatomic) BOOL doEaseIn;                                                //@synthesize doEaseIn=_doEaseIn - In the implementation block
@property (assign,nonatomic) BOOL doEaseOut;                                               //@synthesize doEaseOut=_doEaseOut - In the implementation block
@property (assign,nonatomic) BOOL isRubberBanding;                                         //@synthesize isRubberBanding=_isRubberBanding - In the implementation block
@property (nonatomic,copy) id interactiveUpdateHandler;                                    //@synthesize interactiveUpdateHandler=_interactiveUpdateHandler - In the implementation block
@property (readonly) id<OFViewControllerAnimatedTransitioning> animator;                   //@synthesize animator=_animator - In the implementation block
@property (readonly) id<OFViewControllerInteractiveTransitioning> interactor;              //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,copy) id willCompleteHandler;                                         //@synthesize willCompleteHandler=_willCompleteHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) double progressVelocity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<OFViewControllerAnimatedTransitioning>)animator;
-(void)completeTransition:(BOOL)arg1 ;
-(BOOL)initiallyInteractive;
-(double)progress;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)isInFlight;
-(id)completionHandler;
-(BOOL)isInteractive;
-(id)containerView;
-(void)updateInteractiveTransition:(double)arg1 ;
-(BOOL)isCompleting;
-(void)startInteractiveTransition;
-(BOOL)wasCancelled;
-(void)setIsInFlight:(BOOL)arg1 ;
-(id)toViewController;
-(id)fromViewController;
-(id<OFViewControllerInteractiveTransitioning>)interactor;
-(void)dealloc;
-(void)setIsRubberBanding:(BOOL)arg1 ;
-(BOOL)isRubberBanding;
-(void)finishInteractiveTransitionWithVelocity:(double)arg1 ;
-(void)cancelInteractiveTransitionWithVelocity:(double)arg1 ;
-(void)setDoEaseIn:(BOOL)arg1 ;
-(void)setDoEaseOut:(BOOL)arg1 ;
-(void)setInteractiveUpdateHandler:(id)arg1 ;
-(void)setProgressVelocity:(double)arg1 ;
-(double)progressVelocity;
-(id)initWithContainerView:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 animator:(id)arg4 interactor:(id)arg5 ;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1 ;
-(BOOL)doEaseIn;
-(BOOL)doEaseOut;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2 ;
-(void)setIsCompleting:(BOOL)arg1 ;
-(id)interactiveUpdateHandler;
-(id)willCompleteHandler;
-(void)setWillCompleteHandler:(id)arg1 ;
@end

