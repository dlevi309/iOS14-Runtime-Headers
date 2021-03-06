/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CPSTemplateEnvironmentDelegate.h>
#import <libobjc.A.dylib/CPBaseTemplateProviding.h>
#import <libobjc.A.dylib/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol CPTemplateDelegate, CPSTemplateViewControllerDelegate;
@class NAFuture, CPTemplate, CPSTemplateEnvironment, UITapGestureRecognizer, NSString;

@interface CPSBaseTemplateViewController : UIViewController <CPSButtonDelegate, UIGestureRecognizerDelegate, CPSTemplateEnvironmentDelegate, CPBaseTemplateProviding, CPSBaseTemplateViewController, BSInvalidatable> {

	BOOL _isPopping;
	BOOL _didDisappear;
	BOOL _isNowPlayingApp;
	NAFuture* _templateProviderFuture;
	CPTemplate* _associatedTemplate;
	id<CPTemplateDelegate> _templateDelegate;
	id<CPSTemplateViewControllerDelegate> _viewControllerDelegate;
	CPSTemplateEnvironment* _templateEnvironment;
	UITapGestureRecognizer* _backGestureRecognizer;

}

@property (assign,nonatomic) BOOL isPopping;                                                                   //@synthesize isPopping=_isPopping - In the implementation block
@property (assign,nonatomic) BOOL didDisappear;                                                                //@synthesize didDisappear=_didDisappear - In the implementation block
@property (assign,nonatomic) BOOL isNowPlayingApp;                                                             //@synthesize isNowPlayingApp=_isNowPlayingApp - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * backGestureRecognizer;                                   //@synthesize backGestureRecognizer=_backGestureRecognizer - In the implementation block
@property (nonatomic,retain) CPTemplate * associatedTemplate;                                                  //@synthesize associatedTemplate=_associatedTemplate - In the implementation block
@property (nonatomic,retain) id<CPTemplateDelegate> templateDelegate;                                          //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CPSTemplateViewControllerDelegate> viewControllerDelegate;              //@synthesize viewControllerDelegate=_viewControllerDelegate - In the implementation block
@property (nonatomic,readonly) CPSTemplateEnvironment * templateEnvironment;                                   //@synthesize templateEnvironment=_templateEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NAFuture * templateProviderFuture;                                              //@synthesize templateProviderFuture=_templateProviderFuture - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_cleanup;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isPopping;
-(void)setViewControllerDelegate:(id<CPSTemplateViewControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2 ;
-(void)viewDidLoad;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(BOOL)didDisappear;
-(void)setDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)_updateTrailingBarButtons;
-(void)didSelectButton:(id)arg1 ;
-(id<CPSTemplateViewControllerDelegate>)viewControllerDelegate;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(void)setHostBackButton:(id)arg1 ;
-(void)setControl:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setControl:(id)arg1 selected:(BOOL)arg2 ;
-(void)setBarButton:(id)arg1 image:(id)arg2 ;
-(void)setBarButton:(id)arg1 title:(id)arg2 ;
-(NAFuture *)templateProviderFuture;
-(id)initWithTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3 ;
-(CPTemplate *)associatedTemplate;
-(void)_viewDidLoad;
-(void)_dismissTemplateViewController;
-(void)_backGestureFired:(id)arg1 ;
-(void)setBackGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)backGestureRecognizer;
-(void)setAssociatedTemplate:(CPTemplate *)arg1 ;
-(void)_cps_viewControllerWasPopped;
-(void)applicationDidBecomeNowPlayingApp:(BOOL)arg1 ;
-(BOOL)isNowPlayingApp;
-(CPSTemplateEnvironment *)templateEnvironment;
-(void)_updateTemplate:(id)arg1 ;
-(void)setIsPopping:(BOOL)arg1 ;
-(void)setIsNowPlayingApp:(BOOL)arg1 ;
-(void)_updateLeadingBarButtons;
-(void)_addGestureRecognizerIfNecessary;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(id)_barButtonItemForBarButton:(id)arg1 ;
-(BOOL)_wantsNowPlayingButton;
-(id)_nowPlayingBarButtonItem;
-(id)_barButtonItemForIdentifier:(id)arg1 ;
@end

