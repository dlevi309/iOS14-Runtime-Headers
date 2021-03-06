/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBViewMorphAnimatorObserver.h>

@protocol SBPIPMorphAnimatorControllerDelegate;
@class NSUUID, SBViewMorphAnimator, SBPIPMorphAnimatorDataSource, SBPIPContainerViewController, NSString;

@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver> {

	NSUUID* _uuid;
	SBViewMorphAnimator* _viewMorphAnimator;
	SBPIPMorphAnimatorDataSource* _viewMorphAnimatorDataSource;
	SBPIPContainerViewController* _pictureInPictureContainerViewController;
	id<SBPIPMorphAnimatorControllerDelegate> _delegate;
	/*^block*/id _setupCompletionBlock;
	/*^block*/id _animatorWaitingForExternalAnimationActionBlock;
	long long _startedSourceAnimations;
	long long _completedTargetAnimations;

}

@property (assign,nonatomic) long long startedSourceAnimations;                                                          //@synthesize startedSourceAnimations=_startedSourceAnimations - In the implementation block
@property (assign,nonatomic) long long completedTargetAnimations;                                                        //@synthesize completedTargetAnimations=_completedTargetAnimations - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) SBViewMorphAnimator * viewMorphAnimator;                                                  //@synthesize viewMorphAnimator=_viewMorphAnimator - In the implementation block
@property (nonatomic,readonly) SBPIPMorphAnimatorDataSource * viewMorphAnimatorDataSource;                               //@synthesize viewMorphAnimatorDataSource=_viewMorphAnimatorDataSource - In the implementation block
@property (assign,nonatomic,__weak) SBPIPContainerViewController * pictureInPictureContainerViewController;              //@synthesize pictureInPictureContainerViewController=_pictureInPictureContainerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBPIPMorphAnimatorControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id setupCompletionBlock;                                                                      //@synthesize setupCompletionBlock=_setupCompletionBlock - In the implementation block
@property (nonatomic,copy) id animatorWaitingForExternalAnimationActionBlock;                                            //@synthesize animatorWaitingForExternalAnimationActionBlock=_animatorWaitingForExternalAnimationActionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)uuid;
-(id)init;
-(void)interrupt;
-(id<SBPIPMorphAnimatorControllerDelegate>)delegate;
-(void)setDelegate:(id<SBPIPMorphAnimatorControllerDelegate>)arg1 ;
-(void)cancel;
-(void)_terminate;
-(SBViewMorphAnimator *)viewMorphAnimator;
-(void)willStartSourceAnimations:(unsigned long long)arg1 ;
-(void)willRemoveTargeMatchMoveAnimationAtFrame:(CGRect)arg1 withinSourceFrame:(CGRect)arg2 ;
-(void)didEndSourceAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)didEndTargetAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)animatorWasInterrupted:(id)arg1 ;
-(long long)startedSourceAnimations;
-(void)setStartedSourceAnimations:(long long)arg1 ;
-(long long)completedTargetAnimations;
-(void)setCompletedTargetAnimations:(long long)arg1 ;
-(int)targetProcessIdentifier;
-(id)scenePersistenceIdentifier;
-(void)_performAnimatorWaitingForExternalAnimationActionBlock;
-(BOOL)_isWaitingForExternalAnimationCompletion;
-(id)initWithTargetProcessIdentifier:(int)arg1 uuid:(id)arg2 scenePersistenceIdentifier:(id)arg3 direction:(long long)arg4 gestureInitiated:(BOOL)arg5 ;
-(void)setPictureInPictureContainerViewController:(SBPIPContainerViewController *)arg1 ;
-(void)setAnimatorWaitingForExternalAnimationActionBlock:(id)arg1 ;
-(SBPIPMorphAnimatorDataSource *)viewMorphAnimatorDataSource;
-(SBPIPContainerViewController *)pictureInPictureContainerViewController;
-(id)setupCompletionBlock;
-(void)setSetupCompletionBlock:(id)arg1 ;
-(id)animatorWaitingForExternalAnimationActionBlock;
@end

