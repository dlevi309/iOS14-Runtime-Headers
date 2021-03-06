/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/BKUIPearlCoachingControllerDelegate.h>
#import <libobjc.A.dylib/BKUIPearlEnrollViewControllerDelegate.h>

@protocol BKUIPearlEnrollControllerDelegate, NSObject;
@class BKUIPearlEnrollViewController, BKUIPearlCoachingController, UINavigationBar, BKUIOrientationStateHandler, NSString;

@interface BKUIPearlEnrollController : PSViewController <BKUIPearlCoachingControllerDelegate, BKUIPearlEnrollViewControllerDelegate> {

	BOOL _systemRotationAnimating;
	long long _orientation;
	BOOL _inSheet;
	BOOL _hasBeenPortrait;
	id<BKUIPearlEnrollControllerDelegate> _delegate;
	BKUIPearlEnrollViewController* _enrollViewController;
	BKUIPearlCoachingController* _coachingController;
	id<NSObject> _rotationChangeToken;
	id<NSObject> _rotationLockToken;
	UINavigationBar* _navbarCopy;
	BKUIOrientationStateHandler* _orientationStateHandler;

}

@property (nonatomic,retain) BKUIPearlEnrollViewController * enrollViewController;               //@synthesize enrollViewController=_enrollViewController - In the implementation block
@property (nonatomic,retain) BKUIPearlCoachingController * coachingController;                   //@synthesize coachingController=_coachingController - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPortrait;                                               //@synthesize hasBeenPortrait=_hasBeenPortrait - In the implementation block
@property (nonatomic,retain) id<NSObject> rotationChangeToken;                                   //@synthesize rotationChangeToken=_rotationChangeToken - In the implementation block
@property (nonatomic,retain) id<NSObject> rotationLockToken;                                     //@synthesize rotationLockToken=_rotationLockToken - In the implementation block
@property (nonatomic,readonly) UINavigationBar * navbarCopy;                                     //@synthesize navbarCopy=_navbarCopy - In the implementation block
@property (nonatomic,retain) BKUIOrientationStateHandler * orientationStateHandler;              //@synthesize orientationStateHandler=_orientationStateHandler - In the implementation block
@property (assign,nonatomic,__weak) id<BKUIPearlEnrollControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL inBuddy; 
@property (assign,nonatomic) BOOL inDemo; 
@property (assign,nonatomic) BOOL inSheet;                                                       //@synthesize inSheet=_inSheet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preloadWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)isDisplayZoomEnabled;
+(BOOL)isPearlAvailable;
+(BOOL)isPearlInterlocked;
-(id)navigationItem;
-(void)viewWillLayoutSubviews;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(id)init;
-(id<BKUIPearlEnrollControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<BKUIPearlEnrollControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)inDemo;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)resetLayout;
-(BOOL)inBuddy;
-(BOOL)inSheet;
-(void)_startObserving;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)dealloc;
-(void)pearlEnrollViewController:(id)arg1 finishedEnrollWithError:(id)arg2 ;
-(void)setInBuddy:(BOOL)arg1 ;
-(void)setInSheet:(BOOL)arg1 ;
-(void)pearlEnrollControllerCompleted:(id)arg1 ;
-(id)initWithPreloadedState:(id)arg1 ;
-(void)primeWithPasscode:(id)arg1 ;
-(void)setCustomInstructionString:(id)arg1 forState:(int)arg2 ;
-(void)setCustomDetailString:(id)arg1 forState:(int)arg2 ;
-(void)setInDemo:(BOOL)arg1 ;
-(BKUIPearlEnrollViewController *)enrollViewController;
-(BKUIOrientationStateHandler *)orientationStateHandler;
-(BKUIPearlCoachingController *)coachingController;
-(void)setHasBeenPortrait:(BOOL)arg1 ;
-(UINavigationBar *)navbarCopy;
-(void)_copyAndShowInternalNavBar;
-(void)setCoachingHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)diffSystemAndForcedRotationOrientations;
-(BOOL)hasBeenPortrait;
-(void)deviceOrientationChanged:(long long)arg1 duration:(double)arg2 ;
-(void)deviceOrientationChanged:(long long)arg1 ;
-(void)setRotationLockToken:(id<NSObject>)arg1 ;
-(void)setRotationChangeToken:(id<NSObject>)arg1 ;
-(void)coachingSkipped;
-(void)setEnrollViewController:(BKUIPearlEnrollViewController *)arg1 ;
-(void)setCoachingController:(BKUIPearlCoachingController *)arg1 ;
-(id<NSObject>)rotationChangeToken;
-(id<NSObject>)rotationLockToken;
-(void)setOrientationStateHandler:(BKUIOrientationStateHandler *)arg1 ;
@end

