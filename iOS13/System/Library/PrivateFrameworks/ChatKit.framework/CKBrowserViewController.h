/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKBrowserViewControllerProtocol.h>

@protocol CKBrowserViewControllerSendDelegate;
@class NSObject, IMBalloonPlugin, NSString, IMBalloonPluginDataSource, UIViewController, UIView, CKBrowserDragManager, NSArray, NSData, NSNumber;

@interface CKBrowserViewController : UIViewController <CKBrowserViewControllerProtocol> {

	long long _previousConsumer;
	BOOL _isiMessage;
	BOOL _isPrimaryViewController;
	BOOL _isTransitioningToExpandedPresentation;
	NSObject*<CKBrowserViewControllerSendDelegate> _sendDelegate;
	IMBalloonPlugin* _balloonPlugin;
	NSString* _conversationID;
	IMBalloonPluginDataSource* _balloonPluginDataSource;
	UIViewController* _presentationViewController;
	long long _currentBrowserConsumer;
	UIView* _dragTargetView;
	CKBrowserDragManager* _browserDragManager;

}

@property (assign,nonatomic) BOOL isTransitioningToExpandedPresentation;                                                  //@synthesize isTransitioningToExpandedPresentation=_isTransitioningToExpandedPresentation - In the implementation block
@property (assign,nonatomic,__weak) UIView * dragTargetView;                                                              //@synthesize dragTargetView=_dragTargetView - In the implementation block
@property (nonatomic,retain) CKBrowserDragManager * browserDragManager;                                                   //@synthesize browserDragManager=_browserDragManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * presentationViewController;                                               //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKBrowserViewControllerSendDelegate> sendDelegate;                          //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,readonly) IMBalloonPlugin * balloonPlugin;                                                           //@synthesize balloonPlugin=_balloonPlugin - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * balloonPluginDataSource;                                         //@synthesize balloonPluginDataSource=_balloonPluginDataSource - In the implementation block
@property (assign,nonatomic) BOOL isiMessage;                                                                             //@synthesize isiMessage=_isiMessage - In the implementation block
@property (assign,nonatomic) NSString * conversationID;                                                                   //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,readonly) BOOL wantsDarkUI; 
@property (nonatomic,readonly) BOOL wantsOpaqueUI; 
@property (nonatomic,readonly) BOOL supportsQuickView; 
@property (nonatomic,readonly) BOOL shouldSuppressEntryView; 
@property (assign,nonatomic) BOOL isPrimaryViewController;                                                                //@synthesize isPrimaryViewController=_isPrimaryViewController - In the implementation block
@property (getter=isDismissing,nonatomic,readonly) BOOL dismissing; 
@property (nonatomic,readonly) BOOL mayBeKeptInViewHierarchy; 
@property (nonatomic,readonly) long long browserPresentationStyle; 
@property (nonatomic,readonly) BOOL shouldShowChatChrome; 
@property (nonatomic,readonly) BOOL inExpandedPresentation; 
@property (nonatomic,readonly) BOOL inFullScreenModalPresentation; 
@property (nonatomic,retain) NSString * sender; 
@property (nonatomic,retain) NSArray * recipients; 
@property (nonatomic,readonly) BOOL wasExpandedPresentation; 
@property (nonatomic,retain) NSData * conversationEngramID; 
@property (nonatomic,readonly) unsigned long long badgeValue; 
@property (assign,nonatomic) long long currentBrowserConsumer;                                                            //@synthesize currentBrowserConsumer=_currentBrowserConsumer - In the implementation block
@property (nonatomic,readonly) UIViewController * remoteViewController; 
@property (nonatomic,readonly) CGRect horizontalSwipeExclusionRect; 
@property (nonatomic,readonly) BOOL canReplaceDataSource; 
@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,readonly) long long parentModalPresentationStyle; 
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate; 
+(id)currentPPTTestName;
+(BOOL)supportsMessagesAppExtendedLaunchTest;
-(BOOL)isLoaded;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateContentOverlayInsetsForSelfAndChildren;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(BOOL)isDismissing;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(IMBalloonPluginDataSource *)balloonPluginDataSource;
-(IMBalloonPlugin *)balloonPlugin;
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithBalloonPlugin:(id)arg1 ;
-(void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(id)initWithBalloonPlugin:(id)arg1 pluginPayloads:(id)arg2 ;
-(BOOL)shouldShowChatChrome;
-(BOOL)isPrimaryViewController;
-(void)setIsPrimaryViewController:(BOOL)arg1 ;
-(UIViewController *)presentationViewController;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(NSObject*<CKBrowserViewControllerSendDelegate>)sendDelegate;
-(void)setSendDelegate:(NSObject*<CKBrowserViewControllerSendDelegate>)arg1 ;
-(BOOL)isiMessage;
-(void)setIsiMessage:(BOOL)arg1 ;
-(long long)browserPresentationStyle;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(BOOL)supportsQuickView;
-(BOOL)mayBeKeptInViewHierarchy;
-(BOOL)shouldSuppressEntryView;
-(BOOL)inExpandedPresentation;
-(BOOL)inFullScreenModalPresentation;
-(void)beginDisablingUserInteraction;
-(void)endDisablingUserInteraction;
-(void)viewWillTransitionToExpandedPresentation;
-(void)viewDidTransitionToExpandedPresentation;
-(void)viewWillTransitionToCompactPresentation;
-(void)viewDidTransitionToCompactPresentation;
-(BOOL)wasExpandedPresentation;
-(CKBrowserDragManager *)browserDragManager;
-(long long)currentBrowserConsumer;
-(void)setCurrentBrowserConsumer:(long long)arg1 ;
-(void)setDragTargetView:(UIView *)arg1 ;
-(void)tearDownRemoteViewIfNeeded;
-(void)finishedPPTTestNamed:(id)arg1 isCKLaunchTest:(BOOL)arg2 ;
-(BOOL)inCompactPresentation;
-(void)setIsTransitioningToExpandedPresentation:(BOOL)arg1 ;
-(void)finishedPPTTestNamed:(id)arg1 ;
-(void)startPPTTestNamed:(id)arg1 ;
-(UIView *)dragTargetView;
-(void)setBrowserDragManager:(CKBrowserDragManager *)arg1 ;
-(BOOL)isTransitioningToExpandedPresentation;
@end
