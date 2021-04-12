/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKIDPHandlerDelegate.h>
#import <libobjc.A.dylib/AKIDPPresentationController.h>

@class WKWebView, AKIDPHandler, UIImageView, UILabel, UIStackView, NSString;

@interface AKIDPProvidedSignInViewController : UIViewController <AKIDPHandlerDelegate, AKIDPPresentationController> {

	WKWebView* _webView;
	AKIDPHandler* _idpHandler;
	UIImageView* _secureIconView;
	UILabel* _titleLabel;
	UIStackView* _titleStackView;

}

@property (nonatomic,retain) AKIDPHandler * idpHandler;                 //@synthesize idpHandler=_idpHandler - In the implementation block
@property (nonatomic,retain) UIImageView * secureIconView;              //@synthesize secureIconView=_secureIconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIStackView * titleStackView;              //@synthesize titleStackView=_titleStackView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WKWebView * webView;                     //@synthesize webView=_webView - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(WKWebView *)webView;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(UIStackView *)titleStackView;
-(void)setTitleStackView:(UIStackView *)arg1 ;
-(void)setupTitleView;
-(AKIDPHandler *)idpHandler;
-(void)_setNavigationTitle:(id)arg1 ;
-(void)setSecureIconView:(UIImageView *)arg1 ;
-(UIImageView *)secureIconView;
-(void)_cancelBarButtonPressed:(id)arg1 ;
-(void)IDPHandler:(id)arg1 didStartLoadingPageInWebView:(id)arg2 ;
-(void)IDPHandler:(id)arg1 didFinishLoadingPageInWebView:(id)arg2 ;
-(id)initWithIDPHandler:(id)arg1 ;
-(void)setIdpHandler:(AKIDPHandler *)arg1 ;
@end
