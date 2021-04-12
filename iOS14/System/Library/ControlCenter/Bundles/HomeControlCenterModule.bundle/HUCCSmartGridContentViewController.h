/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <HomeControlCenterModule/HomeControlCenterModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUCCGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUCCSmartGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUCCDashboardContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUCCSmartGridPropertyAnimatorDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@protocol HUCCModuleContentViewControllerDelegate, HUOpenURLHandling, NSObject;
@class HUCCSmartGridViewController, HUCCDashboardContainerViewController, HUCCSmartGridPropertyAnimator, UIView, UIVisualEffectView, UILabel, NSDictionary, HUCCSmartContainerView, NSString, UIViewPropertyAnimator;

@interface HUCCSmartGridContentViewController : UIViewController <HUCCGridViewControllerDelegate, HUCCSmartGridViewControllerDelegate, HUCCDashboardContainerViewControllerDelegate, HUCCSmartGridPropertyAnimatorDelegate, CCUIContentModuleContentViewController> {

	BOOL _accessAllowedForCurrentLockState;
	BOOL _isExpanded;
	id<HUCCModuleContentViewControllerDelegate> _delegate;
	id<HUOpenURLHandling> _URLHandler;
	HUCCSmartGridViewController* _smartGridViewController;
	HUCCDashboardContainerViewController* _dashboardContainerViewController;
	id<NSObject> _activeAssertion;
	HUCCSmartGridPropertyAnimator* _transitionAnimator;
	UIView* _transitionIconView;
	UIVisualEffectView* _transitionGridCellHomeNameLabelEffectView;
	UILabel* _transitionGridCellHomeNameLabel;
	UIVisualEffectView* _transitionGridCellRoomNameLabelEffectView;
	UILabel* _transitionGridCellRoomNameLabel;
	UIVisualEffectView* _transitionNavigationHeaderHomeNameLabelEffectView;
	UILabel* _transitionNavigationHeaderHomeNameLabel;
	UIVisualEffectView* _transitionNavigationHeaderRoomNameLabelEffectView;
	UILabel* _transitionNavigationHeaderRoomNameLabel;
	NSDictionary* _transitionLargeTitleTextAttributes;
	NSDictionary* _transitionSubviewFrames;
	double _transitionDeviceCornerRadius;
	CGRect _transitionCompressedViewFrame;

}

@property (nonatomic,retain) HUCCSmartContainerView * view; 
@property (nonatomic,retain) HUCCSmartGridViewController * smartGridViewController;                                //@synthesize smartGridViewController=_smartGridViewController - In the implementation block
@property (nonatomic,retain) HUCCDashboardContainerViewController * dashboardContainerViewController;              //@synthesize dashboardContainerViewController=_dashboardContainerViewController - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                                                      //@synthesize isExpanded=_isExpanded - In the implementation block
@property (nonatomic,retain) id<NSObject> activeAssertion;                                                         //@synthesize activeAssertion=_activeAssertion - In the implementation block
@property (nonatomic,retain) HUCCSmartGridPropertyAnimator * transitionAnimator;                                   //@synthesize transitionAnimator=_transitionAnimator - In the implementation block
@property (nonatomic,retain) UIView * transitionIconView;                                                          //@synthesize transitionIconView=_transitionIconView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * transitionGridCellHomeNameLabelEffectView;                       //@synthesize transitionGridCellHomeNameLabelEffectView=_transitionGridCellHomeNameLabelEffectView - In the implementation block
@property (nonatomic,retain) UILabel * transitionGridCellHomeNameLabel;                                            //@synthesize transitionGridCellHomeNameLabel=_transitionGridCellHomeNameLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * transitionGridCellRoomNameLabelEffectView;                       //@synthesize transitionGridCellRoomNameLabelEffectView=_transitionGridCellRoomNameLabelEffectView - In the implementation block
@property (nonatomic,retain) UILabel * transitionGridCellRoomNameLabel;                                            //@synthesize transitionGridCellRoomNameLabel=_transitionGridCellRoomNameLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * transitionNavigationHeaderHomeNameLabelEffectView;               //@synthesize transitionNavigationHeaderHomeNameLabelEffectView=_transitionNavigationHeaderHomeNameLabelEffectView - In the implementation block
@property (nonatomic,retain) UILabel * transitionNavigationHeaderHomeNameLabel;                                    //@synthesize transitionNavigationHeaderHomeNameLabel=_transitionNavigationHeaderHomeNameLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * transitionNavigationHeaderRoomNameLabelEffectView;               //@synthesize transitionNavigationHeaderRoomNameLabelEffectView=_transitionNavigationHeaderRoomNameLabelEffectView - In the implementation block
@property (nonatomic,retain) UILabel * transitionNavigationHeaderRoomNameLabel;                                    //@synthesize transitionNavigationHeaderRoomNameLabel=_transitionNavigationHeaderRoomNameLabel - In the implementation block
@property (nonatomic,retain) NSDictionary * transitionLargeTitleTextAttributes;                                    //@synthesize transitionLargeTitleTextAttributes=_transitionLargeTitleTextAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * transitionSubviewFrames;                                               //@synthesize transitionSubviewFrames=_transitionSubviewFrames - In the implementation block
@property (assign,nonatomic) CGRect transitionCompressedViewFrame;                                                 //@synthesize transitionCompressedViewFrame=_transitionCompressedViewFrame - In the implementation block
@property (assign,nonatomic) double transitionDeviceCornerRadius;                                                  //@synthesize transitionDeviceCornerRadius=_transitionDeviceCornerRadius - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCModuleContentViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL accessAllowedForCurrentLockState;                                                //@synthesize accessAllowedForCurrentLockState=_accessAllowedForCurrentLockState - In the implementation block
@property (nonatomic,retain) id<HUOpenURLHandling> URLHandler;                                                     //@synthesize URLHandler=_URLHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
-(void)displayWillTurnOff;
-(BOOL)isExpanded;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(BOOL)providesOwnPlatter;
-(id<HUCCModuleContentViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)customAnimator;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentHeight;
-(void)setDelegate:(id<HUCCModuleContentViewControllerDelegate>)arg1 ;
-(BOOL)shouldPerformHoverInteraction;
-(void)setIsExpanded:(BOOL)arg1 ;
-(double)preferredExpandedContentWidth;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id<HUOpenURLHandling>)URLHandler;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(HUCCSmartGridPropertyAnimator *)transitionAnimator;
-(void)setTransitionAnimator:(HUCCSmartGridPropertyAnimator *)arg1 ;
-(void)loadView;
-(void)dealloc;
-(void)quickControlsPresentationDidUpdate:(BOOL)arg1 ;
-(void)setTransitionIconView:(UIView *)arg1 ;
-(UIView *)transitionIconView;
-(BOOL)shouldPerformClickInteraction;
-(id<NSObject>)activeAssertion;
-(void)setActiveAssertion:(id<NSObject>)arg1 ;
-(void)setTransitionDeviceCornerRadius:(double)arg1 ;
-(HUCCDashboardContainerViewController *)dashboardContainerViewController;
-(void)setDashboardContainerViewController:(HUCCDashboardContainerViewController *)arg1 ;
-(void)_openHomeApp;
-(CGRect)_iconViewInHomeGridCellFrame;
-(CGRect)_iconViewInNavigationHeaderViewFrame;
-(NSDictionary *)transitionSubviewFrames;
-(double)transitionDeviceCornerRadius;
-(void)remoteDashboard:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(void)requestAuthenticationIfLockedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)propertyAnimatorDidStartAnimating:(id)arg1 ;
-(void)setTransitionSubviewFrames:(NSDictionary *)arg1 ;
-(void)setURLHandler:(id<HUOpenURLHandling>)arg1 ;
-(void)setAccessAllowedForCurrentLockState:(BOOL)arg1 ;
-(BOOL)isDeviceUnlockedForGridViewController:(id)arg1 ;
-(id)prepareForActionRequiringDeviceUnlockForGridViewController:(id)arg1 ;
-(void)displayHome:(id)arg1 ;
-(BOOL)accessAllowedForCurrentLockState;
-(HUCCSmartGridViewController *)smartGridViewController;
-(void)setTransitionLargeTitleTextAttributes:(NSDictionary *)arg1 ;
-(void)_setUpSmartGridContent;
-(void)_tearDownSmartGridContent;
-(void)_prepareTransitionSubviews;
-(CGRect)transitionCompressedViewFrame;
-(UIVisualEffectView *)transitionNavigationHeaderHomeNameLabelEffectView;
-(UILabel *)transitionNavigationHeaderHomeNameLabel;
-(UIVisualEffectView *)transitionGridCellHomeNameLabelEffectView;
-(UILabel *)transitionGridCellHomeNameLabel;
-(UIVisualEffectView *)transitionNavigationHeaderRoomNameLabelEffectView;
-(UILabel *)transitionNavigationHeaderRoomNameLabel;
-(UIVisualEffectView *)transitionGridCellRoomNameLabelEffectView;
-(UILabel *)transitionGridCellRoomNameLabel;
-(void)_showLockSecurityView:(BOOL)arg1 ;
-(BOOL)_shouldDisplayHomeControlService;
-(void)setTransitionCompressedViewFrame:(CGRect)arg1 ;
-(CGRect)_homeNameLabelInNavigationHeaderViewFrame;
-(CGRect)_roomNameLabelInNavigationHeaderViewFrame;
-(CGRect)_homeNameLabelInHomeGridCellFrame;
-(CGRect)_roomNameLabelInHomeGridCellFrame;
-(void)_cleanupTransitionSubviews;
-(void)setTransitionNavigationHeaderHomeNameLabelEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTransitionNavigationHeaderHomeNameLabel:(UILabel *)arg1 ;
-(void)setTransitionGridCellHomeNameLabelEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTransitionGridCellHomeNameLabel:(UILabel *)arg1 ;
-(void)setTransitionNavigationHeaderRoomNameLabelEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTransitionNavigationHeaderRoomNameLabel:(UILabel *)arg1 ;
-(NSDictionary *)transitionLargeTitleTextAttributes;
-(void)setTransitionGridCellRoomNameLabelEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTransitionGridCellRoomNameLabel:(UILabel *)arg1 ;
-(void)setSmartGridViewController:(HUCCSmartGridViewController *)arg1 ;
@end
