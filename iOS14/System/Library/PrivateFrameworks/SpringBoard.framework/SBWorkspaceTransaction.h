/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransaction.h>

@class SBUIAnimationController, SBWorkspaceTransitionRequest, SBSceneManager, SBSceneLayoutViewController, SBLayoutStateTransitionCoordinator, FBSDisplayIdentity, FBSDisplayConfiguration;

@interface SBWorkspaceTransaction : SBTransaction {

	SBUIAnimationController* _suggestedAnimationController;
	SBWorkspaceTransitionRequest* _transitionRequestForPendingInterruption;
	SBSceneManager* _sceneManager;
	BOOL _clearsCompletionAsynchronously;
	SBWorkspaceTransitionRequest* _transitionRequest;
	SBSceneLayoutViewController* _layoutController;
	SBLayoutStateTransitionCoordinator* _layoutStateTransitionCoordinator;

}

@property (nonatomic,readonly) SBLayoutStateTransitionCoordinator * layoutStateTransitionCoordinator;              //@synthesize layoutStateTransitionCoordinator=_layoutStateTransitionCoordinator - In the implementation block
@property (nonatomic,readonly) SBSceneManager * sceneManager;                                                      //@synthesize sceneManager=_sceneManager - In the implementation block
@property (assign,nonatomic) BOOL clearsCompletionAsynchronously;                                                  //@synthesize clearsCompletionAsynchronously=_clearsCompletionAsynchronously - In the implementation block
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,readonly) SBWorkspaceTransitionRequest * transitionRequest;                                   //@synthesize transitionRequest=_transitionRequest - In the implementation block
@property (nonatomic,readonly) SBSceneLayoutViewController * layoutController;                                     //@synthesize layoutController=_layoutController - In the implementation block
@property (nonatomic,retain) SBUIAnimationController * suggestedAnimationController;                               //@synthesize suggestedAnimationController=_suggestedAnimationController - In the implementation block
-(SBSceneManager *)sceneManager;
-(id)init;
-(void)_didComplete;
-(FBSDisplayConfiguration *)displayConfiguration;
-(id)_customizedDescriptionProperties;
-(FBSDisplayIdentity *)displayIdentity;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(SBSceneLayoutViewController *)layoutController;
-(SBWorkspaceTransitionRequest *)transitionRequest;
-(SBLayoutStateTransitionCoordinator *)layoutStateTransitionCoordinator;
-(BOOL)_isInterruptingForTransitionRequest;
-(void)interruptForTransitionRequest:(id)arg1 ;
-(BOOL)clearsCompletionAsynchronously;
-(void)setSuggestedAnimationController:(SBUIAnimationController *)arg1 ;
-(id)_transitionRequestForInterruption;
-(void)_willInterruptForTransitionRequest:(id)arg1 ;
-(void)_didInterruptForTransitionRequest:(id)arg1 ;
-(void)_performDeviceCoherencyCheck;
-(id)_childWorkspaceTransactions;
-(void)keepAliveForAsyncBlock:(/*^block*/id)arg1 ;
-(SBUIAnimationController *)suggestedAnimationController;
-(void)setClearsCompletionAsynchronously:(BOOL)arg1 ;
@end

