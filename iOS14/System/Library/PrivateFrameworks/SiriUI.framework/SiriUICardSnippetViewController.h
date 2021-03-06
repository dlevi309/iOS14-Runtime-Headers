/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <SiriUI/_SiriUICardLoaderDelegate.h>
#import <SiriUI/SiriUICardLoadingObserver.h>
#import <SiriUI/SiriUIModalContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/CRKCardPresentationDelegate.h>
#import <SiriUI/SiriUICardSnippetViewDataSource.h>
#import <SiriUI/SiriUICardSnippetViewDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>
#import <SiriUI/SiriUISizeClassConfiguring.h>

@protocol OS_dispatch_group, CRKCardViewControlling;
@class SACardSnippet, NSMutableDictionary, NSObject, _SiriUICardLoader, NSTimer, NSString, SiriUIModalContainerViewController, UIViewController, CRKCardPresentation, SiriUICardSnippetView;

@interface SiriUICardSnippetViewController : SiriUISnippetViewController <_SiriUICardLoaderDelegate, SiriUICardLoadingObserver, SiriUIModalContainerViewControllerDelegate, CRKCardPresentationDelegate, SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate, CRKCardViewControllerDelegate, SiriUISizeClassConfiguring> {

	SACardSnippet* _snippet;
	CGSize _contentSize;
	NSMutableDictionary* _referenceableCommandsByIdentifierMap;
	NSMutableDictionary* _referenceableSnippetsByIdentifierMap;
	NSObject*<OS_dispatch_group> _cardLoadingGroup;
	SACardSnippet* _newlyLoadedCardSnippet;
	_SiriUICardLoader* _cardLoader;
	/*^block*/id _cardLoadingCompletionhandler;
	NSTimer* _cardLoadingTimer;
	BOOL _isCardLoading;
	long long _sizeClass;
	NSString* _feedbackEngagementInstrumentationIdentifier;
	SiriUIModalContainerViewController* _presentedModalContainerViewController;
	UIViewController*<CRKCardViewControlling> _cardViewController;
	CRKCardPresentation* _cardPresentation;

}

@property (setter=_setCardViewController:,getter=_cardViewController,nonatomic,retain) UIViewController*<CRKCardViewControlling> cardViewController;              //@synthesize cardViewController=_cardViewController - In the implementation block
@property (setter=_setCardPresentation:,getter=_cardPresentation,nonatomic,retain) CRKCardPresentation * cardPresentation;                                        //@synthesize cardPresentation=_cardPresentation - In the implementation block
@property (nonatomic,retain) SiriUICardSnippetView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
+(void)initialize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)desiredHeight;
-(id)requestContext;
-(id)snippet;
-(void)setSnippet:(id)arg1 ;
-(void)setNavigating:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)_cardViewController;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)isNavigating;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)cardLoadingMonitor:(id)arg1 didReceiveCardSnippet:(id)arg2 ;
-(BOOL)usePlatterStyle;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(void)siriWillBeginScrolling;
-(void)siriDidScrollVisible:(BOOL)arg1 ;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg1 ;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(BOOL)arg2 ;
-(void)siriDidReceiveViewsWithDialogPhase:(id)arg1 ;
-(void)_addCardViewControllerAsChildViewController:(id)arg1 ;
-(void)_navigationButtonTapped:(id)arg1 ;
-(void)_updateContentSizeAndNotifyDelegateIfNecessary:(BOOL)arg1 ;
-(void)_logCardRelationshipIdentifiedForCompactCard:(id)arg1 fullCard:(id)arg2 snippet:(id)arg3 ;
-(BOOL)logContentsIfApplicable;
-(id)_instrumentationManager;
-(void)_addNextCardTo:(id)arg1 fullCard:(id)arg2 ;
-(void)_removeBottomKeylineFromCard:(id)arg1 ;
-(void)_forwardProgressEvent:(unsigned long long)arg1 toCardViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setCardViewController:(id)arg1 ;
-(void)willCancel;
-(void)_forwardProgressEventToCardViewController:(unsigned long long)arg1 ;
-(void)_removeCardViewControllerFromParentViewController:(id)arg1 ;
-(void)willConfirm;
-(void)_insertCardViewController:(id)arg1 ;
-(void)_populateCommand:(id)arg1 withInstrumentationTurn:(id)arg2 ;
-(void)_instrumentCardSectionInteractionForId:(id)arg1 previousTurn:(id)arg2 ;
-(void)_validateCardSectionForParsecFeedbackDelivery:(id)arg1 validHandler:(/*^block*/id)arg2 ;
-(id)_analytics;
-(id)_metricsContextOfEventsForCardSection:(id)arg1 inCard:(id)arg2 ;
-(id)_metricsContextOfEventsForCard:(id)arg1 ;
-(void)_validateCardForParsecFeedbackDelivery:(id)arg1 validHandler:(/*^block*/id)arg2 ;
-(void)_beginMonitoringForNextCardWithBlock:(/*^block*/id)arg1 ;
-(Class)transparentHeaderViewClass;
-(BOOL)cardLoader:(id)arg1 shouldLoadCard:(id)arg2 ;
-(BOOL)cardLoader:(id)arg1 loadCard:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)modalContainerViewControllerViewWillDisappear:(id)arg1 ;
-(void)modalContainerViewControllerViewDidDisappear:(id)arg1 ;
-(double)boundingWidthForPresentation:(id)arg1 ;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(id)sashItemForCardSnippetView:(id)arg1 ;
-(id)localeForCardSnippetView:(id)arg1 ;
-(double)preferredContentHeight;
-(void)cardSnippetViewSashWasTapped:(id)arg1 ;
-(void)cardSectionView:(id)arg1 willProcessEngagementFeedback:(id)arg2 ;
-(void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2 ;
-(void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2 ;
-(void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2 ;
-(void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2 ;
-(void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3 ;
-(void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3 ;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(void)cardViewControllerBoundsDidChange:(id)arg1 ;
-(void)cardViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2 ;
-(CGSize)cardViewController:(id)arg1 boundingSizeForCardSectionViewController:(id)arg2 ;
-(unsigned long long)navigationIndexOfCardViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 forCardViewController:(id)arg2 ;
-(void)cardViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(BOOL)performReferentialCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(BOOL)performNextCardCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(BOOL)performPunchoutCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(BOOL)performBeganEditingCommand:(id)arg1 forCardViewController:(id)arg2 ;
-(void)configureContentWithSizeClass:(long long)arg1 ;
-(UIEdgeInsets)defaultViewInsets;
-(BOOL)isIndicatingActivity;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(double)desiredHeightForTransparentHeaderView;
-(id)_cardPresentation;
-(void)_setCardPresentation:(id)arg1 ;
@end

