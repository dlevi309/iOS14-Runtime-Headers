/*
* Generated on Thursday, January 14, 2021 at 2:21:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CKAudioControllerDelegate.h>
#import <libobjc.A.dylib/CKLocationShareBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKLocationSharingDelegate.h>
#import <libobjc.A.dylib/CKVideoPlayerBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKTitledImageBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewDelegate.h>
#import <libobjc.A.dylib/CKMovieBalloonViewDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/IMStateLoggable.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/CKFullScreenEffectManagerDelegate.h>
#import <libobjc.A.dylib/CKPluginPlaybackManagerDelegate.h>
#import <libobjc.A.dylib/CKAssociatedMessageTranscriptCellDelegate.h>
#import <libobjc.A.dylib/CKTranscriptBalloonSelectionManagerDelegate.h>
#import <libobjc.A.dylib/CKTranscriptBalloonSelectionManagerDataSource.h>
#import <libobjc.A.dylib/CKBalloonViewDelegate.h>
#import <UIKit/UICollectionViewDelegate_Private.h>
#import <libobjc.A.dylib/CKCoreTranscriptControllerProtocol.h>
#import <libobjc.A.dylib/CKSendAnimationManagerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol CKTranscriptCollectionViewControllerDelegate, CKGradientReferenceView, OS_dispatch_group, UIDragInteractionDelegate, CKFullscreenEffectView;
@class NSString, CKConversation, IMChat, CKTranscriptCollectionView, NSArray, NSIndexSet, CKImpactEffectManager, CKFullScreenEffectManager, UITapGestureRecognizer, NSIndexPath, UIView, NSObject, CKAudioController, NSDictionary, CKPluginPlaybackManager, NSMutableSet, IMStateCaptureAssistant, CKTranscriptBalloonSelectionManager;

@interface CKTranscriptCollectionViewController : CKViewController <CKAudioControllerDelegate, CKLocationShareBalloonViewDelegate, CKLocationSharingDelegate, CKVideoPlayerBalloonViewDelegate, CKTitledImageBalloonViewDelegate, CKTranscriptCollectionViewDelegate, CKMovieBalloonViewDelegate, CNAvatarViewDelegate, IMStateLoggable, UICollectionViewDelegateFlowLayout, CKFullScreenEffectManagerDelegate, CKPluginPlaybackManagerDelegate, CKAssociatedMessageTranscriptCellDelegate, CKTranscriptBalloonSelectionManagerDelegate, CKTranscriptBalloonSelectionManagerDataSource, CKBalloonViewDelegate, UICollectionViewDelegate_Private, CKCoreTranscriptControllerProtocol, CKSendAnimationManagerDelegate, UICollectionViewDataSource> {

	NSIndexPath* _itemIndexPathToHighlight;
	BOOL _isInline;
	BOOL _initialLoad;
	BOOL _shouldLoadDefaultConversationViewingMessageCountOnAppear;
	BOOL _transitionedFromComposing;
	BOOL _transitioningFromComposing;
	BOOL _transcriptUpdateAnimated;
	BOOL _allowsPluginPlayback;
	BOOL _isPerformingRegenerateOrReloadOnlyUpdate;
	BOOL _peeking;
	BOOL _isLoadingMoreMessages;
	BOOL _sizedFullTranscript;
	BOOL _shouldUseOpaqueMask;
	BOOL _filterAllButFirstMessage;
	BOOL _playedLastImpactEffectForTransitionFromComposing;
	NSArray* _chatItems;
	CKConversation* _conversation;
	NSArray* _associatedChatItems;
	double _balloonMaxWidth;
	id<CKTranscriptCollectionViewControllerDelegate> _delegate;
	UIView*<CKGradientReferenceView> _gradientReferenceView;
	NSObject*<OS_dispatch_group> _updateAnimationGroup;
	NSIndexSet* _hiddenItems;
	NSIndexSet* _hiddenAssociatedItems;
	NSIndexSet* _hiddenBalloonViews;
	CKImpactEffectManager* _impactEffectManager;
	CKFullScreenEffectManager* _fullscreenEffectManager;
	double _pluginPlaybackDelay;
	NSString* ___CurrentTestName;
	long long _contentAnimationPauseReasons;
	id<UIDragInteractionDelegate> _dragInteractionDelegate;
	UITapGestureRecognizer* _loggingTapGestureRecognizer;
	NSArray* _notifications;
	NSString* _transcriptIdentifier;
	CKTranscriptCollectionView* _collectionView;
	CKAudioController* _audioController;
	NSDictionary* _pluginSnapshots;
	CKPluginPlaybackManager* _pluginPlaybackManager;
	NSString* _speakerTransferGUID;
	UIView*<CKFullscreenEffectView> _topEffectView;
	NSMutableSet* _currentEffectDecorationViews;
	UIView* _snapshotOfPluginBeingReplacedByBreadcrumb;
	NSString* _mostRecentlyTouchedPlugin;
	/*^block*/id _transcriptUpdateCompletion;
	IMStateCaptureAssistant* _stateCaptureAssistant;
	CKTranscriptBalloonSelectionManager* _selectionManager;
	CGPoint _peekSampleTranslation;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,copy) NSArray * notifications;                                                                //@synthesize notifications=_notifications - In the implementation block
@property (nonatomic,retain) NSString * transcriptIdentifier;                                                      //@synthesize transcriptIdentifier=_transcriptIdentifier - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                        //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKTranscriptCollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy) NSArray * chatItems;                                                                    //@synthesize chatItems=_chatItems - In the implementation block
@property (nonatomic,copy) NSArray * associatedChatItems;                                                          //@synthesize associatedChatItems=_associatedChatItems - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> updateAnimationGroup;                                    //@synthesize updateAnimationGroup=_updateAnimationGroup - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;                                                  //@synthesize audioController=_audioController - In the implementation block
@property (assign,nonatomic) double balloonMaxWidth;                                                               //@synthesize balloonMaxWidth=_balloonMaxWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                            //@synthesize marginInsets=_marginInsets - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginSnapshots;                                                       //@synthesize pluginSnapshots=_pluginSnapshots - In the implementation block
@property (nonatomic,retain) CKPluginPlaybackManager * pluginPlaybackManager;                                      //@synthesize pluginPlaybackManager=_pluginPlaybackManager - In the implementation block
@property (assign,nonatomic) BOOL isPerformingRegenerateOrReloadOnlyUpdate;                                        //@synthesize isPerformingRegenerateOrReloadOnlyUpdate=_isPerformingRegenerateOrReloadOnlyUpdate - In the implementation block
@property (assign,nonatomic) CGPoint peekSampleTranslation;                                                        //@synthesize peekSampleTranslation=_peekSampleTranslation - In the implementation block
@property (assign,getter=isPeeking,nonatomic) BOOL peeking;                                                        //@synthesize peeking=_peeking - In the implementation block
@property (assign,nonatomic) BOOL isLoadingMoreMessages;                                                           //@synthesize isLoadingMoreMessages=_isLoadingMoreMessages - In the implementation block
@property (nonatomic,copy) NSString * speakerTransferGUID;                                                         //@synthesize speakerTransferGUID=_speakerTransferGUID - In the implementation block
@property (assign,nonatomic) BOOL sizedFullTranscript;                                                             //@synthesize sizedFullTranscript=_sizedFullTranscript - In the implementation block
@property (assign,nonatomic) BOOL shouldUseOpaqueMask;                                                             //@synthesize shouldUseOpaqueMask=_shouldUseOpaqueMask - In the implementation block
@property (nonatomic,retain) UIView*<CKFullscreenEffectView> topEffectView;                                        //@synthesize topEffectView=_topEffectView - In the implementation block
@property (nonatomic,retain) NSMutableSet * currentEffectDecorationViews;                                          //@synthesize currentEffectDecorationViews=_currentEffectDecorationViews - In the implementation block
@property (assign,nonatomic) BOOL filterAllButFirstMessage;                                                        //@synthesize filterAllButFirstMessage=_filterAllButFirstMessage - In the implementation block
@property (assign,nonatomic) BOOL playedLastImpactEffectForTransitionFromComposing;                                //@synthesize playedLastImpactEffectForTransitionFromComposing=_playedLastImpactEffectForTransitionFromComposing - In the implementation block
@property (nonatomic,retain) UIView * snapshotOfPluginBeingReplacedByBreadcrumb;                                   //@synthesize snapshotOfPluginBeingReplacedByBreadcrumb=_snapshotOfPluginBeingReplacedByBreadcrumb - In the implementation block
@property (assign,nonatomic) NSString * mostRecentlyTouchedPlugin;                                                 //@synthesize mostRecentlyTouchedPlugin=_mostRecentlyTouchedPlugin - In the implementation block
@property (nonatomic,copy) id transcriptUpdateCompletion;                                                          //@synthesize transcriptUpdateCompletion=_transcriptUpdateCompletion - In the implementation block
@property (nonatomic,retain) IMStateCaptureAssistant * stateCaptureAssistant;                                      //@synthesize stateCaptureAssistant=_stateCaptureAssistant - In the implementation block
@property (nonatomic,readonly) CKTranscriptBalloonSelectionManager * selectionManager;                             //@synthesize selectionManager=_selectionManager - In the implementation block
@property (getter=isShowingTranscriptTimestamps,nonatomic,readonly) BOOL showingTranscriptTimestamps; 
@property (nonatomic,readonly) IMChat * chat; 
@property (nonatomic,readonly) BOOL isInline;                                                                      //@synthesize isInline=_isInline - In the implementation block
@property (nonatomic,readonly) NSArray * imChatItems; 
@property (assign,nonatomic,__weak) id<CKTranscriptCollectionViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView;                               //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenItems;                                                               //@synthesize hiddenItems=_hiddenItems - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenAssociatedItems;                                                     //@synthesize hiddenAssociatedItems=_hiddenAssociatedItems - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenBalloonViews;                                                        //@synthesize hiddenBalloonViews=_hiddenBalloonViews - In the implementation block
@property (assign,getter=isInitialLoad,nonatomic) BOOL initialLoad;                                                //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadDefaultConversationViewingMessageCountOnAppear;                        //@synthesize shouldLoadDefaultConversationViewingMessageCountOnAppear=_shouldLoadDefaultConversationViewingMessageCountOnAppear - In the implementation block
@property (nonatomic,retain) CKImpactEffectManager * impactEffectManager;                                          //@synthesize impactEffectManager=_impactEffectManager - In the implementation block
@property (nonatomic,retain) CKFullScreenEffectManager * fullscreenEffectManager;                                  //@synthesize fullscreenEffectManager=_fullscreenEffectManager - In the implementation block
@property (assign,nonatomic) BOOL transitionedFromComposing;                                                       //@synthesize transitionedFromComposing=_transitionedFromComposing - In the implementation block
@property (assign,nonatomic) BOOL transitioningFromComposing;                                                      //@synthesize transitioningFromComposing=_transitioningFromComposing - In the implementation block
@property (assign,getter=isTranscriptUpdateAnimated,nonatomic) BOOL transcriptUpdateAnimated;                      //@synthesize transcriptUpdateAnimated=_transcriptUpdateAnimated - In the implementation block
@property (assign,nonatomic) BOOL allowsPluginPlayback;                                                            //@synthesize allowsPluginPlayback=_allowsPluginPlayback - In the implementation block
@property (assign,nonatomic) double pluginPlaybackDelay;                                                           //@synthesize pluginPlaybackDelay=_pluginPlaybackDelay - In the implementation block
@property (setter=__setCurrentTestName:,nonatomic,retain) NSString * __CurrentTestName;                            //@synthesize __CurrentTestName=___CurrentTestName - In the implementation block
@property (assign,nonatomic) long long contentAnimationPauseReasons;                                               //@synthesize contentAnimationPauseReasons=_contentAnimationPauseReasons - In the implementation block
@property (assign,nonatomic,__weak) id<UIDragInteractionDelegate> dragInteractionDelegate;                         //@synthesize dragInteractionDelegate=_dragInteractionDelegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * loggingTapGestureRecognizer;                                 //@synthesize loggingTapGestureRecognizer=_loggingTapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)chatItemsDidChangeNotification;
-(id)_collectionView:(id)arg1 accessoriesForContextMenuWithConfiguration:(id)arg2 layoutAnchor:(SCD_Struct_CK6)arg3 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isInitialLoad;
-(id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(CKTranscriptBalloonSelectionManager *)selectionManager;
-(void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(IMChat *)chat;
-(id)_collectionView:(id)arg1 styleForContextMenuWithConfiguration:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)balloonViewLongTouched:(id)arg1 ;
-(void)balloonViewShowInlineReply:(id)arg1 ;
-(void)balloonViewTapped:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)balloonViewDoubleTapped:(id)arg1 ;
-(BOOL)_canUseOpaqueMask;
-(void)_indicesOfTranscriptPluginChatItemRemoveAndInsertedWithoutFading:(id)arg1 inserted:(id)arg2 removed:(id)arg3 outInsertIndices:(id*)arg4 outRemoveIndices:(id*)arg5 ;
-(void)setCollectionView:(CKTranscriptCollectionView *)arg1 ;
-(id)sharingMenu;
-(void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(void)locationShareBalloonViewIgnoreButtonTapped:(id)arg1 ;
-(unsigned long long)_indexOfBreadcrumbReplacingTranscriptPluginInChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 outIndexOfReplacedPlugin:(unsigned long long*)arg4 outIndexOfNewPlugin:(unsigned long long*)arg5 ;
-(BOOL)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2 ;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 balloonMaxWidth:(double)arg3 marginInsets:(UIEdgeInsets)arg4 ;
-(void)setShouldLoadDefaultConversationViewingMessageCountOnAppear:(BOOL)arg1 ;
-(void)balloonViewSelected:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)balloonViewTextViewDidChangeSelection:(id)arg1 selectedText:(id)arg2 textView:(id)arg3 ;
-(void)liveBalloonTouched:(id)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 userDidDragOutsideBalloonWithPoint:(CGPoint)arg2 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)balloonViewShouldCopyToPasteboard:(id)arg1 ;
-(void)balloonView:(id)arg1 willInsertPluginViewAsSubview:(id)arg2 ;
-(id)parentViewControllerForReusableVideoPlayer:(id)arg1 ;
-(id)videoPlayerReusePool;
-(id<CKTranscriptCollectionViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)transferUpdated:(id)arg1 ;
-(CKTranscriptCollectionView *)collectionView;
-(id)cellForChatItem:(id)arg1 ;
-(void)printTranscript;
-(void)copySelectedChatItemsToPasteboard;
-(void)setDragInteractionDelegate:(id<UIDragInteractionDelegate>)arg1 ;
-(BOOL)balloonTextViewIsSelected;
-(void)setConversation:(CKConversation *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(double)balloonMaxWidth;
-(void)parentControllerDidBecomeActive;
-(id)selectedItems;
-(void)setSelectedItems:(id)arg1 ;
-(void)performResumeDeferredSetup;
-(NSObject*<OS_dispatch_group>)updateAnimationGroup;
-(CKImpactEffectManager *)impactEffectManager;
-(void)sizeFullTranscriptIfNecessary;
-(void)highlightItemAtIndexPathWhenDisplayed:(id)arg1 autoDismiss:(BOOL)arg2 ;
-(void)raiseGestureRecognized:(id)arg1 ;
-(BOOL)isPeeking;
-(BOOL)isVisiblePlugin:(id)arg1 ;
-(BOOL)hasRecentTouchForSendingPlugin:(id)arg1 ;
-(void)clearRecentPluginTouch;
-(void)setScrollAnchor:(double)arg1 ;
-(void)loadMessagesIfNeededSkipValidation;
-(void)setTranscriptIdentifier:(NSString *)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)selectedChatItems;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(NSArray *)chatItems;
-(BOOL)canRaiseToTalk;
-(void)setAllowsPluginPlayback:(BOOL)arg1 ;
-(void)stopPluginPlayback;
-(void)setTranscriptUpdateAnimated:(BOOL)arg1 ;
-(void)startPluginPlaybackAfterDelay:(double)arg1 ;
-(void)installedAppsChanged:(id)arg1 ;
-(void)stopPlayingAudio;
-(void)deselectAllBalloons;
-(BOOL)canRaiseToListen;
-(NSArray *)imChatItems;
-(void)addContentAnimationPauseReasons:(long long)arg1 ;
-(void)removeContentAnimationPauseReasons:(long long)arg1 ;
-(void)__raiseGestureRecognized:(id)arg1 ;
-(CKFullScreenEffectManager *)fullscreenEffectManager;
-(void)selectChatItem:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id)cellForAssociatedChatItem:(id)arg1 ;
-(void)balloonViewTitleTapped:(id)arg1 ;
-(void)setHiddenBalloonViews:(NSIndexSet *)arg1 ;
-(void)verticallyScrollTranscriptByAmount:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(void)setDelegate:(id<CKTranscriptCollectionViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setHiddenItems:(NSIndexSet *)arg1 ;
-(CKConversation *)conversation;
-(id)transcriptBackgroundColor;
-(void)setHiddenAssociatedItems:(NSIndexSet *)arg1 ;
-(id)associatedChatItemForGUID:(id)arg1 ;
-(id)chatItemForGUID:(id)arg1 ;
-(void)updateTargetAlphaForVisibleChatItems;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)setPeeking:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)isInline;
-(void)reloadData;
-(void)setInitialLoad:(BOOL)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(BOOL)wantsDrawerLayout;
-(NSIndexSet *)hiddenItems;
-(void)previewDidChange:(id)arg1 ;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 notifications:(id)arg3 balloonMaxWidth:(double)arg4 marginInsets:(UIEdgeInsets)arg5 ;
-(void)chatItemsDidChange:(id)arg1 ;
-(void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)loadEarlierMessagesForConversation;
-(void)loadRecentMessagesForConversation;
-(id)overrideCurrentFrameMapForLayout:(id)arg1 ;
-(id)overrideTargetFrameMapForLayout:(id)arg1 ;
-(NSString *)transcriptIdentifier;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)balloonViewForChatItem:(id)arg1 ;
-(void)hideTranscriptTimestampsIfNeeded;
-(id)selectedBalloonViews;
-(void)deleteSelectedItems:(id)arg1 ;
-(void)updateTranscript:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isShowingTranscriptTimestamps;
-(void)showTrascriptTimestamps;
-(NSArray *)associatedChatItems;
-(void)pluginPlaybackManagerDidStopPlayback:(id)arg1 ;
-(UITapGestureRecognizer *)loggingTapGestureRecognizer;
-(void)__handleLoggingTapped:(id)arg1 ;
-(void)setLoggingTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)_shouldShowUILogging;
-(BOOL)_shouldShowInternalUILogging;
-(id)_remoteLogDumpButtonTitle;
-(void)_performRemoteLogDump;
-(id)_localLogDumpButtonTitle;
-(void)_performLocalLogDump;
-(void)_showLoggingAlertIfNecessary;
-(void)_setupLoggingTapGestureRecognizer;
-(void)_tearDownLoggingTapGestureRecognizer;
-(void)prepareForSuspend;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)stopFullscreenEffect;
-(void)effectManager:(id)arg1 didStartEffect:(id)arg2 ;
-(void)effectManager:(id)arg1 didStopEffect:(id)arg2 ;
-(void)setNotifications:(NSArray *)arg1 ;
-(void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)chatForSendAnimationManager:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)collectionViewControllerForImpactEffectManager:(id)arg1 ;
-(void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2 ;
-(void)sendAnimationManagerDidStopAnimation:(id)arg1 context:(id)arg2 ;
-(void)_releaseActiveBalloonControllers;
-(BOOL)shouldLoadDefaultConversationViewingMessageCountOnAppear;
-(void)scrollToTopOfLastBubbleCellAnimated:(BOOL)arg1 ;
-(void)setChatItems:(NSArray *)arg1 ;
-(void)setStateCaptureAssistant:(IMStateCaptureAssistant *)arg1 ;
-(CKAudioController *)audioController;
-(void)_tearDownLiveBubbles;
-(IMStateCaptureAssistant *)stateCaptureAssistant;
-(void)updateEffectViewMessageRects;
-(double)pluginPlaybackDelay;
-(BOOL)_allowsEffectAutoPlayback;
-(void)_replayLastImpactEffectIfNotFromMe;
-(void)_prewarmBalloonControllers;
-(void)_prewarmMediaPreviews;
-(void)_prewarmTranscriptAssetsIfNecessary;
-(void)repromptLastBlackholeFailureIfNotPrompted;
-(void)setBalloonMaxWidth:(double)arg1 ;
-(void)setShouldUseOpaqueMask:(BOOL)arg1 ;
-(id)chatItemWithNotification:(id)arg1 ;
-(id)chatItemsWithNotifications:(id)arg1 ;
-(id)chatItemsWithIMChatItems:(id)arg1 ;
-(void)setSizedFullTranscript:(BOOL)arg1 ;
-(BOOL)sizedFullTranscript;
-(void)_refreshLocationsForRecipientsIfNecessary;
-(void)transferRestored:(id)arg1 ;
-(void)setUpdateAnimationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)snapshotDidChange:(id)arg1 ;
-(void)locationStringDidChange:(id)arg1 ;
-(void)addressBookChanged:(id)arg1 ;
-(void)snapshotTaken:(id)arg1 ;
-(void)multiwayCallStateChanged:(id)arg1 ;
-(void)connectivityChanged:(id)arg1 ;
-(void)chatItemIsFilteredChanged:(id)arg1 ;
-(void)setImpactEffectManager:(CKImpactEffectManager *)arg1 ;
-(void)setIsPerformingRegenerateOrReloadOnlyUpdate:(BOOL)arg1 ;
-(void)_highlightCell:(id)arg1 autoDismiss:(BOOL)arg2 ;
-(void)setTransitioningFromComposing:(BOOL)arg1 ;
-(void)configureAssociatedCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)reconfigureVisibleSpeakerButtonCells;
-(void)setTranscriptUpdateCompletion:(id)arg1 ;
-(UIView*<CKFullscreenEffectView>)topEffectView;
-(UIEdgeInsets)marginInsets;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(id)chatItemForCell:(id)arg1 ;
-(NSString *)mostRecentlyTouchedPlugin;
-(void)setMostRecentlyTouchedPlugin:(NSString *)arg1 ;
-(void)setPeekSampleTranslation:(CGPoint)arg1 ;
-(void)_collectionViewDidRestAsync:(BOOL)arg1 ;
-(void)cullCellSubviews;
-(CKPluginPlaybackManager *)pluginPlaybackManager;
-(void)_deferredStartPlayback;
-(BOOL)allowsPluginPlayback;
-(void)_startPlaybackWithIndexPaths:(id)arg1 ;
-(void)setPluginPlaybackManager:(CKPluginPlaybackManager *)arg1 ;
-(void)loadMessagesIfNeeded;
-(CGPoint)peekSampleTranslation;
-(NSMutableSet *)currentEffectDecorationViews;
-(void)_updateEffectViewMessageRect:(id)arg1 effect:(id)arg2 ;
-(id)collectionViewLayout;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)indexPathForBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)_searchForSelectedBalloonHack;
-(void)selectRangeWithIndexPath:(id)arg1 ;
-(id)balloonViewForIndexPath:(id)arg1 ;
-(void)_handleAssociatedMessageCellTapEvent:(id)arg1 isDoubleTap:(BOOL)arg2 ;
-(id)balloonPluginForViewController:(id)arg1 ;
-(NSString *)__CurrentTestName;
-(void)setSpeakerTransferGUID:(NSString *)arg1 ;
-(void)setTopEffectView:(UIView*<CKFullscreenEffectView>)arg1 ;
-(BOOL)isPerformingRegenerateOrReloadOnlyUpdate;
-(double)_balloonHorizontalOffsetForParentChatItem:(id)arg1 contentAlignmentRect:(CGRect)arg2 responsibleChatItems:(id*)arg3 individualOffsets:(id*)arg4 ;
-(UIView *)snapshotOfPluginBeingReplacedByBreadcrumb;
-(void)touchUpInsideCellFailureButton:(id)arg1 ;
-(void)touchUpInsideCellStatusButton:(id)arg1 ;
-(void)touchUpInsideCellReportSpamButton:(id)arg1 ;
-(BOOL)shouldUseOpaqueMask;
-(void)configureSpeakerButtonCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id<UIDragInteractionDelegate>)dragInteractionDelegate;
-(long long)contentAnimationPauseReasons;
-(void)_hideBalloonViewIfNecessaryForCell:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)transitioningFromComposing;
-(NSDictionary *)pluginSnapshots;
-(NSIndexSet *)hiddenBalloonViews;
-(id)chatItemWithIMChatItem:(id)arg1 traitCollection:(id)arg2 ;
-(void)updateTranscriptChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 reload:(id)arg4 regenerate:(id)arg5 animated:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)shouldPresentHawkingPromptForMessage:(id)arg1 ;
-(void)setChatItems:(id)arg1 removedAssociatedIndexes:(id*)arg2 insertedAssociatedIndexes:(id*)arg3 ;
-(void)_updatePluginPlaybackManagerForInsertedChatItems:(id)arg1 ;
-(void)_indicesOfReplyChatItemsToInsertWithoutFading:(id)arg1 inserted:(id)arg2 outInsertIndices:(id*)arg3 ;
-(void)startFullscreenEffectIfNeededForChatItem:(id)arg1 ;
-(void)loadView;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setSnapshotOfPluginBeingReplacedByBreadcrumb:(UIView *)arg1 ;
-(NSString *)speakerTransferGUID;
-(void)_diffAssociatedItemsWithOldAssociatedItems:(id)arg1 removedAssociatedIndexes:(id*)arg2 insertedAssociatedIndexes:(id*)arg3 ;
-(void)setAssociatedChatItems:(NSArray *)arg1 ;
-(BOOL)isLoadingMoreMessages;
-(void)setIsLoadingMoreMessages:(BOOL)arg1 ;
-(void)_loadMessagesIfNeeded;
-(void)loadEarlierMessages;
-(void)loadRecentMessages;
-(id)hawkingFailurePromptMessageForHandle:(id)arg1 ;
-(void)presentHawkingPromptForMessage:(id)arg1 ;
-(void)_downgradeMessageAtIndexPath:(id)arg1 andDowngradeChat:(BOOL)arg2 ;
-(void)_resendMessageAtIndexPath:(id)arg1 ;
-(void)_downgradeMessageAtIndexPath:(id)arg1 ;
-(void)_launchTapToRadar;
-(void)updateLastAddressedHandleID:(id)arg1 lastAddressedSIMID:(id)arg2 ;
-(void)updateAnimationPaused;
-(CGRect)convertedBoundsToCullFromView:(id)arg1 ;
-(id)lastMessagePartChatItem;
-(id)makeHawkingPromptForMessage:(id)arg1 toRecipient:(id)arg2 fromSender:(id)arg3 withSMSOption:(BOOL)arg4 ;
-(void)_downgradeMessage:(id)arg1 andDowngradeChat:(BOOL)arg2 ;
-(BOOL)playedLastImpactEffectForTransitionFromComposing;
-(BOOL)transitionedFromComposing;
-(void)setPlayedLastImpactEffectForTransitionFromComposing:(BOOL)arg1 ;
-(id)stateDictionaryForDiagnosticsRequest;
-(void)_logVisibleChatItems;
-(id)printableViewController;
-(BOOL)isTranscriptUpdateAnimated;
-(id)transcriptUpdateCompletion;
-(void)updateTranscriptChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 reload:(id)arg4 regenerate:(id)arg5 animated:(BOOL)arg6 checkFiltered:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(void)touchUpInsideCellSpeakerButton:(id)arg1 ;
-(void)_resizingStart:(id)arg1 ;
-(id)alertTitleForDelete;
-(id)alertMessageForDelete;
-(void)_selectChatItemGuid:(id)arg1 selectionState:(id)arg2 ;
-(void)_deselectChatItemGuid:(id)arg1 ;
-(id)_chatItemForGUID:(id)arg1 ;
-(void)audioControllerDidPause:(id)arg1 ;
-(void)_addAttachmentsToProvidersArray:(id)arg1 forChatItems:(id)arg2 ;
-(BOOL)_selectedChatItemsHaveMultipleSenders:(id)arg1 ;
-(NSIndexSet *)hiddenAssociatedItems;
-(id)_itemProviderForSelectedChatItemsWithMultipleSenders:(id)arg1 ;
-(id)_itemProviderForSelectedChatItemsWithSingleSender:(id)arg1 ;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioControllerPlayingDidChange:(id)arg1 ;
-(void)collectionViewDidInset:(id)arg1 ;
-(void)tuConversationBalloonJoinButtonTapped:(id)arg1 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioControllerDidStop:(id)arg1 ;
-(void)locationShareBalloonViewShareButtonTapped:(id)arg1 ;
-(void)locationSharingClient:(id)arg1 showShareLocationMenuWithBalloonPluginView:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 isEditableItemAtIndexPath:(id)arg2 ;
-(void)collectionViewWillScroll:(id)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)collectionViewWillProgrammaticallyScroll:(id)arg1 animated:(BOOL)arg2 ;
-(void)collectionViewWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)associatedMessageTranscriptCellLongTouched:(id)arg1 ;
-(void)_downgradeMessage:(id)arg1 ;
-(void)associatedMessageTranscriptCellDoubleTapped:(id)arg1 ;
-(void)selectionManager:(id)arg1 didAddChatItem:(id)arg2 selectionState:(id)arg3 ;
-(void)_resizingEnd:(id)arg1 ;
-(void)selectionManager:(id)arg1 didRemoveChatItem:(id)arg2 ;
-(void)selectionManagerDidRemoveAllSelectedChatItems:(id)arg1 ;
-(void)setPluginPlaybackDelay:(double)arg1 ;
-(id)selectionManagerChatItems:(id)arg1 ;
-(void)endHoldingUpdatesAfterQuicklookCancelsDismiss;
-(void)setFullscreenEffectManager:(CKFullScreenEffectManager *)arg1 ;
-(void)setTransitionedFromComposing:(BOOL)arg1 ;
-(void)__setCurrentTestName:(id)arg1 ;
-(void)setContentAnimationPauseReasons:(long long)arg1 ;
-(void)collectionViewLayoutRestingDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 chatItemForItemAtIndexPath:(id)arg3 ;
-(void)setPluginSnapshots:(NSDictionary *)arg1 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 chatItemForSupplementaryViewAtIndexPath:(id)arg3 ;
-(void)collectionViewLayout:(id)arg1 sizeDidChange:(CGSize)arg2 ;
-(id)currentEffectForCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)liveViewController:(id)arg1 requestPresentationStyle:(unsigned long long)arg2 ;
-(NSArray *)notifications;
-(void)liveViewController:(id)arg1 stagePayload:(id)arg2 skipShelf:(BOOL)arg3 allowAllCommits:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)messagePartForBalloonView:(id)arg1 ;
-(void)liveViewController:(id)arg1 stageSticker:(id)arg2 skipShelf:(BOOL)arg3 allowAllCommits:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)selectSingleBalloonView:(id)arg1 ;
-(id)liveViewControllerContextIdentifier:(id)arg1 ;
-(BOOL)_pluginChatItem:(id)arg1 hasControllerConformingToProtocol:(id)arg2 ;
-(void)collectionView:(id)arg1 didRecognizePanGestureWithPoint:(CGPoint)arg2 ;
-(void)setCurrentEffectDecorationViews:(NSMutableSet *)arg1 ;
-(BOOL)filterAllButFirstMessage;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)setFilterAllButFirstMessage:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)invalidateChatItemLayoutWithBalloonMaxWidth:(double)arg1 marginInsets:(UIEdgeInsets)arg2 traitCollection:(id)arg3 ;
@end

