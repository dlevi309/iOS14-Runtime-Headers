/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VSAutoAuthenticationViewController.h>

@protocol VSAuthenticationViewControllerDelegate;
@class VSAutoAuthenticationViewModel, UIScrollView, VSIdentityProviderLogoView, UILabel, UIButton, VSFontCenter, NSString;

@interface VSAutoAuthenticationViewController_iOS : UIViewController <VSAutoAuthenticationViewController> {

	BOOL _cancellationAllowed;
	id<VSAuthenticationViewControllerDelegate> _delegate;
	VSAutoAuthenticationViewModel* _viewModel;
	UIScrollView* _scrollView;
	VSIdentityProviderLogoView* _logoView;
	UILabel* _accountNameLabel;
	UILabel* _messageTitleLabel;
	UILabel* _messageLabel;
	UILabel* _noticeLabel;
	UILabel* _manualSignInTitleLabel;
	UIButton* _manualSignInButton;
	UILabel* _footerLabel;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) VSIdentityProviderLogoView * logoView;                                   //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UILabel * accountNameLabel;                                              //@synthesize accountNameLabel=_accountNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageTitleLabel;                                             //@synthesize messageTitleLabel=_messageTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * noticeLabel;                                                   //@synthesize noticeLabel=_noticeLabel - In the implementation block
@property (nonatomic,retain) UILabel * manualSignInTitleLabel;                                        //@synthesize manualSignInTitleLabel=_manualSignInTitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * manualSignInButton;                                           //@synthesize manualSignInButton=_manualSignInButton - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                                   //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                               //@synthesize fontCenter=_fontCenter - In the implementation block
@property (nonatomic,retain) VSAutoAuthenticationViewModel * viewModel;                               //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<VSAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                   //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,readonly) CGSize preferredLogoSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<VSAuthenticationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(VSAutoAuthenticationViewModel *)viewModel;
-(UILabel *)messageLabel;
-(void)setDelegate:(id<VSAuthenticationViewControllerDelegate>)arg1 ;
-(void)setViewModel:(VSAutoAuthenticationViewModel *)arg1 ;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UILabel *)footerLabel;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VSIdentityProviderLogoView *)logoView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setLogoView:(VSIdentityProviderLogoView *)arg1 ;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(BOOL)isCancellationAllowed;
-(CGSize)preferredLogoSize;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(void)setAccountNameLabel:(UILabel *)arg1 ;
-(void)setMessageTitleLabel:(UILabel *)arg1 ;
-(void)setNoticeLabel:(UILabel *)arg1 ;
-(void)setManualSignInTitleLabel:(UILabel *)arg1 ;
-(void)_manualSignInButtonPressed:(id)arg1 ;
-(void)setManualSignInButton:(UIButton *)arg1 ;
-(UILabel *)manualSignInTitleLabel;
-(UIButton *)manualSignInButton;
-(UILabel *)accountNameLabel;
-(UILabel *)messageTitleLabel;
-(UILabel *)noticeLabel;
@end

