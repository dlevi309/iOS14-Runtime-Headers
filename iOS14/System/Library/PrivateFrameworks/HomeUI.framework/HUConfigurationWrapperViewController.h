/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUConfigurationContentViewControllerDelegate.h>

@protocol HUConfigurationViewControllerDelegate;
@class UIViewController, NAFuture, UIBarButtonItem, NSString;

@interface HUConfigurationWrapperViewController : UIViewController <HUPreloadableViewController, HUConfigurationViewController, HUConfigurationContentViewControllerDelegate> {

	BOOL _isFinalStep;
	id<HUConfigurationViewControllerDelegate> _delegate;
	UIViewController* _contentViewController;
	NAFuture* _finishFuture;
	UIBarButtonItem* _backButtonItem;
	UIBarButtonItem* _nextButtonItem;

}

@property (nonatomic,retain) UIViewController * contentViewController;                                                                       //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<HUConfigurationContentViewController> protocolConformingContentViewController; 
@property (nonatomic,retain) NAFuture * finishFuture;                                                                                        //@synthesize finishFuture=_finishFuture - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backButtonItem;                                                                               //@synthesize backButtonItem=_backButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButtonItem;                                                                               //@synthesize nextButtonItem=_nextButtonItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep;                                                                                               //@synthesize isFinalStep=_isFinalStep - In the implementation block
-(UIBarButtonItem *)backButtonItem;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(id)initWithContentViewController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateNextButton;
-(id)hu_preloadContent;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setBackButtonItem:(UIBarButtonItem *)arg1 ;
-(id)title;
-(BOOL)isFinalStep;
-(void)setIsFinalStep:(BOOL)arg1 ;
-(UIViewController*<HUConfigurationContentViewController>)protocolConformingContentViewController;
-(void)_nextAction:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 configurationDelegate:(id)arg2 ;
-(UIBarButtonItem *)nextButtonItem;
-(void)_backAction:(id)arg1 ;
-(NAFuture *)finishFuture;
-(BOOL)_canGoNext;
-(void)setFinishFuture:(NAFuture *)arg1 ;
-(void)contentViewControllerDidUpdate:(id)arg1 ;
-(void)setNextButtonItem:(UIBarButtonItem *)arg1 ;
@end

