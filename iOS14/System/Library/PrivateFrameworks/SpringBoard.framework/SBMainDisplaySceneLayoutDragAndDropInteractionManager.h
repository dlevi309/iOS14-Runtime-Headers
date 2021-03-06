/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/SBApplicationDropSessionSceneProviding.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKit/UIDragInteractionDelegate_ForWebKitOnly.h>
#import <libobjc.A.dylib/SBDragAndDropAppActivationWorkspaceTransactionDelegate.h>

@protocol SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate, UIDragSession;
@class SBFluidSwitcherViewController, SBMainDisplaySceneLayoutViewController, UIDropInteraction, SBDragAndDropAppActivationWorkspaceTransaction, NSMapTable, SBWindowDragInteraction, NSString;

@interface SBMainDisplaySceneLayoutDragAndDropInteractionManager : NSObject <BSTransactionObserver, SBApplicationDropSessionSceneProviding, UIDropInteractionDelegate_Private, UIDragInteractionDelegate_Private, UIDragInteractionDelegate_ForWebKitOnly, SBDragAndDropAppActivationWorkspaceTransactionDelegate> {

	BOOL _windowDragHandledByDruid;
	SBFluidSwitcherViewController* _mainSwitcherContentController;
	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;
	id<SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate> _delegate;
	UIDropInteraction* _dropInteraction;
	SBDragAndDropAppActivationWorkspaceTransaction* _activeTransaction;
	NSMapTable* _activeDropSessions;
	SBWindowDragInteraction* _windowDragInteraction;
	id<UIDragSession> _windowDragSession;
	/*^block*/id _windowDragSessionPrepareCompletionBlock;
	NSString* _windowDragSceneIdentifier;

}

@property (nonatomic,__weak,readonly) SBFluidSwitcherViewController * mainSwitcherContentController;                           //@synthesize mainSwitcherContentController=_mainSwitcherContentController - In the implementation block
@property (nonatomic,__weak,readonly) SBMainDisplaySceneLayoutViewController * sceneLayoutViewController;                      //@synthesize sceneLayoutViewController=_sceneLayoutViewController - In the implementation block
@property (nonatomic,__weak,readonly) id<SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                                              //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (nonatomic,retain) SBDragAndDropAppActivationWorkspaceTransaction * activeTransaction;                               //@synthesize activeTransaction=_activeTransaction - In the implementation block
@property (nonatomic,retain) NSMapTable * activeDropSessions;                                                                  //@synthesize activeDropSessions=_activeDropSessions - In the implementation block
@property (nonatomic,retain) SBWindowDragInteraction * windowDragInteraction;                                                  //@synthesize windowDragInteraction=_windowDragInteraction - In the implementation block
@property (nonatomic,retain) id<UIDragSession> windowDragSession;                                                              //@synthesize windowDragSession=_windowDragSession - In the implementation block
@property (nonatomic,copy) id windowDragSessionPrepareCompletionBlock;                                                         //@synthesize windowDragSessionPrepareCompletionBlock=_windowDragSessionPrepareCompletionBlock - In the implementation block
@property (nonatomic,retain) NSString * windowDragSceneIdentifier;                                                             //@synthesize windowDragSceneIdentifier=_windowDragSceneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL windowDragHandledByDruid;                                                                    //@synthesize windowDragHandledByDruid=_windowDragHandledByDruid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(UIDropInteraction *)dropInteraction;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2 ;
-(SBMainDisplaySceneLayoutViewController *)sceneLayoutViewController;
-(id)_requiredContextIDsForDragSessionInView:(id)arg1 ;
-(id)newSceneIdentityForApplication:(id)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(id)_dragInteraction:(id)arg1 customSpringAnimationBehaviorForCancellingItem:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(id<SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate>)delegate;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(SBFluidSwitcherViewController *)mainSwitcherContentController;
-(id)_dropInteraction:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1 ;
-(id)initWithMainSwitcherContentController:(id)arg1 sceneLayoutViewController:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(void)_dragInteraction:(id)arg1 prepareForSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)preferredSceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 preferNewScene:(BOOL)arg3 ;
-(id)mostRecentSceneIdentityExcludingLiveScenesForApplication:(id)arg1 ;
-(SBDragAndDropAppActivationWorkspaceTransaction *)activeTransaction;
-(void)_beginTrackingDropSessionIfNeeded:(id)arg1 ;
-(void)_windowDragSessionDidEnd;
-(BOOL)_anyActiveAndVisibleSceneEntityMatches:(/*^block*/id)arg1 ;
-(id)_activeAndVisibleSceneIdentifiersForApplication:(id)arg1 ;
-(NSMapTable *)activeDropSessions;
-(void)_dismissInlineAppExposeIfNeeded;
-(BOOL)_workspaceWouldAllowTransitionToApplication:(id)arg1 ;
-(void)setActiveTransaction:(SBDragAndDropAppActivationWorkspaceTransaction *)arg1 ;
-(BOOL)isApplicationActiveAndVisible:(id)arg1 ;
-(void)dragAndDropTransaction:(id)arg1 didBeginGesture:(id)arg2 ;
-(void)dragAndDropTransaction:(id)arg1 didUpdateGesture:(id)arg2 ;
-(void)dragAndDropTransaction:(id)arg1 didEndGesture:(id)arg2 ;
-(BOOL)shouldBeginWindowDragGesture;
-(void)handleWindowDragGestureRecognizer:(id)arg1 ;
-(void)setActiveDropSessions:(NSMapTable *)arg1 ;
-(SBWindowDragInteraction *)windowDragInteraction;
-(void)setWindowDragInteraction:(SBWindowDragInteraction *)arg1 ;
-(id<UIDragSession>)windowDragSession;
-(void)setWindowDragSession:(id<UIDragSession>)arg1 ;
-(id)windowDragSessionPrepareCompletionBlock;
-(void)setWindowDragSessionPrepareCompletionBlock:(id)arg1 ;
-(NSString *)windowDragSceneIdentifier;
-(void)setWindowDragSceneIdentifier:(NSString *)arg1 ;
-(BOOL)windowDragHandledByDruid;
-(void)setWindowDragHandledByDruid:(BOOL)arg1 ;
@end

