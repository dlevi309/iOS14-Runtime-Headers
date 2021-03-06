/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/IKApplication.h>
#import <libobjc.A.dylib/IKAppContextDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/IKAppDeviceConfig.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>

@protocol OS_dispatch_queue, VideosExtrasRootViewControllerDelegate, IKAppDataStoring, IKAppUserDefaultsStoring;
@class NSLayoutConstraint, VideosExtrasNavigationController, NSObject, VideosExtrasMainTemplateViewController, UIView, VideosExtrasContext, VideosExtrasFeatureContainerViewController, IKAppContext, NSArray, UIStackView, UIButton, VideosExtrasArtworkDataSource, UINavigationController, UITraitCollection, NSString;

@interface VideosExtrasRootViewController : UIViewController <IKApplication, IKAppContextDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, IKAppDeviceConfig, MPVideoOverlayDelegate> {

	NSLayoutConstraint* _bottomConstraint;
	VideosExtrasNavigationController* _navigationController;
	NSObject*<OS_dispatch_queue> _imageRequestQueue;
	BOOL _didAttemptRestartAfterAppContextFailure;
	BOOL _showsMenuBar;
	BOOL _showsBuiltInNavigationControls;
	VideosExtrasMainTemplateViewController* _mainTemplateViewController;
	UIView* _extrasMenuBarView;
	VideosExtrasContext* _context;
	id<VideosExtrasRootViewControllerDelegate> _delegate;
	VideosExtrasFeatureContainerViewController* _featureContainer;
	IKAppContext* _applicationContext;
	NSArray* _lastSelectedSnapshotViewControllers;
	UIStackView* _extrasMenuButtonsStackView;
	UIButton* _backButton;
	NSLayoutConstraint* _extrasScrollViewLeadingConstraint;
	id<IKAppDataStoring> _localStorage;
	id<IKAppDataStoring> _vendorStorage;
	id<IKAppUserDefaultsStoring> _userDefaultsStorage;
	VideosExtrasArtworkDataSource* _artworkDataSource;
	CGSize _initialPresentationSize;

}

@property (nonatomic,retain) VideosExtrasFeatureContainerViewController * featureContainer;                    //@synthesize featureContainer=_featureContainer - In the implementation block
@property (nonatomic,retain) IKAppContext * applicationContext;                                                //@synthesize applicationContext=_applicationContext - In the implementation block
@property (nonatomic,retain) NSArray * lastSelectedSnapshotViewControllers;                                    //@synthesize lastSelectedSnapshotViewControllers=_lastSelectedSnapshotViewControllers - In the implementation block
@property (nonatomic,retain) UIView * extrasMenuBarView;                                                       //@synthesize extrasMenuBarView=_extrasMenuBarView - In the implementation block
@property (nonatomic,retain) UIStackView * extrasMenuButtonsStackView;                                         //@synthesize extrasMenuButtonsStackView=_extrasMenuButtonsStackView - In the implementation block
@property (nonatomic,retain) UIButton * backButton;                                                            //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * extrasScrollViewLeadingConstraint;                           //@synthesize extrasScrollViewLeadingConstraint=_extrasScrollViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) id<IKAppDataStoring> localStorage;                                                //@synthesize localStorage=_localStorage - In the implementation block
@property (nonatomic,retain) id<IKAppDataStoring> vendorStorage;                                               //@synthesize vendorStorage=_vendorStorage - In the implementation block
@property (nonatomic,retain) id<IKAppUserDefaultsStoring> userDefaultsStorage;                                 //@synthesize userDefaultsStorage=_userDefaultsStorage - In the implementation block
@property (nonatomic,retain) VideosExtrasArtworkDataSource * artworkDataSource;                                //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController;                                  //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) VideosExtrasMainTemplateViewController * mainTemplateViewController;              //@synthesize mainTemplateViewController=_mainTemplateViewController - In the implementation block
@property (nonatomic,readonly) UIView * mainMenuBar; 
@property (nonatomic,copy) UITraitCollection * overrideTraitCollection; 
@property (nonatomic,__weak,readonly) VideosExtrasContext * context;                                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) CGSize initialPresentationSize;                                                   //@synthesize initialPresentationSize=_initialPresentationSize - In the implementation block
@property (assign,nonatomic,__weak) id<VideosExtrasRootViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * mainMenuItemElements; 
@property (assign,nonatomic) BOOL showsMenuBar;                                                                //@synthesize showsMenuBar=_showsMenuBar - In the implementation block
@property (assign,nonatomic) BOOL showsBuiltInNavigationControls;                                              //@synthesize showsBuiltInNavigationControls=_showsBuiltInNavigationControls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentController;
-(BOOL)prefersStatusBarHidden;
-(id)timeZone;
-(VideosExtrasArtworkDataSource *)artworkDataSource;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)appIdentifier;
-(void)setBackButton:(UIButton *)arg1 ;
-(id<VideosExtrasRootViewControllerDelegate>)delegate;
-(void)start;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(VideosExtrasContext *)context;
-(void)overlayTappedBackButton:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)screenSize;
-(void)setDelegate:(id<VideosExtrasRootViewControllerDelegate>)arg1 ;
-(void)setApplicationContext:(IKAppContext *)arg1 ;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(IKAppContext *)applicationContext;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)_backButtonPressed:(id)arg1 ;
-(UIButton *)backButton;
-(id)vendorIdentifier;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)appJSURL;
-(void)viewDidLayoutSubviews;
-(id)systemLanguage;
-(void)dealloc;
-(unsigned long long)preferredVideoFormat;
-(UINavigationController *)navigationController;
-(void)setArtworkDataSource:(VideosExtrasArtworkDataSource *)arg1 ;
-(void)_setNavigationController:(id)arg1 ;
-(UIView *)extrasMenuBarView;
-(VideosExtrasMainTemplateViewController *)mainTemplateViewController;
-(NSArray *)mainMenuItemElements;
-(void)setShowsMenuBar:(BOOL)arg1 ;
-(void)setShowsBuiltInNavigationControls:(BOOL)arg1 ;
-(void)setInitialPresentationSize:(CGSize)arg1 ;
-(void)showExtrasMenuBarInFrame:(CGRect)arg1 ;
-(void)setClearsStackOnNextPush;
-(UIView *)mainMenuBar;
-(void)_stopOldContextIfNeeded;
-(id)_createDataStorageForIdentifier:(id)arg1 ;
-(BOOL)showsBuiltInNavigationControls;
-(void)_playbackWillEndNotification:(id)arg1 ;
-(void)_setUpForApplication;
-(UIStackView *)extrasMenuButtonsStackView;
-(void)_attemptRestart;
-(CGSize)initialPresentationSize;
-(void)_adjustExtrasVisibilityForViewSize:(CGSize)arg1 ;
-(NSLayoutConstraint *)extrasScrollViewLeadingConstraint;
-(BOOL)showsMenuBar;
-(BOOL)shouldExtrasBeVisibleForViewSize:(CGSize)arg1 ;
-(BOOL)_areExtrasVisible;
-(void)_showExtrasBar:(BOOL)arg1 ;
-(NSArray *)lastSelectedSnapshotViewControllers;
-(void)setLastSelectedSnapshotViewControllers:(NSArray *)arg1 ;
-(void)_extrasMenuItemSelected:(id)arg1 ;
-(void)setExtrasScrollViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setExtrasMenuButtonsStackView:(UIStackView *)arg1 ;
-(id)_extrasMenuBarViewForElements:(id)arg1 ;
-(void)setExtrasMenuBarView:(UIView *)arg1 ;
-(void)setMainTemplateViewController:(VideosExtrasMainTemplateViewController *)arg1 ;
-(BOOL)_setMainDocumentWithViewController:(id)arg1 ;
-(BOOL)shouldIgnoreJSValidation;
-(id<IKAppDataStoring>)localStorage;
-(id<IKAppDataStoring>)vendorStorage;
-(id<IKAppUserDefaultsStoring>)userDefaultsStorage;
-(BOOL)appIsTrusted;
-(id)appLaunchParams;
-(id)viewElementRegistry;
-(BOOL)appUsesDefaultStyleSheets;
-(id)deviceConfigForContext:(id)arg1 ;
-(id)navigationControllerForContext:(id)arg1 ;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 ;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2 ;
-(unsigned long long)preferredVideoPreviewFormat;
-(BOOL)isTimeZoneSet;
-(id)storeFrontCountryCode;
-(void)popToFeatureOrMain;
-(void)updateMenuButtonForSelectionAtIndex:(unsigned long long)arg1 deselectedIndex:(unsigned long long)arg2 ;
-(id)detectMainDocument:(id)arg1 ;
-(VideosExtrasFeatureContainerViewController *)featureContainer;
-(void)setFeatureContainer:(VideosExtrasFeatureContainerViewController *)arg1 ;
-(void)setLocalStorage:(id<IKAppDataStoring>)arg1 ;
-(void)setVendorStorage:(id<IKAppDataStoring>)arg1 ;
-(void)setUserDefaultsStorage:(id<IKAppUserDefaultsStoring>)arg1 ;
@end

