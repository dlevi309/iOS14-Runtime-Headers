/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol UserTransparencyViewControllerDelegate;
@class UIActivityIndicatorView, NSString, ADUserTransparencyResponse, UILabel, UINavigationBar, WKWebView;

@interface UserTransparencyViewController : UIViewController <WKNavigationDelegate> {

	UIActivityIndicatorView* activityIndicator;
	id<UserTransparencyViewControllerDelegate> _delegate;
	BOOL _isiPad;
	NSString* _userTransparencyDetails;
	ADUserTransparencyResponse* _userTransparencyResponseData;
	NSString* _userTransparencyDetailsUnavailableMessage;
	NSString* _userTransparencyRendererPayload;
	NSString* _userTransparencyRendererURL;
	UILabel* _errorLabel;
	UINavigationBar* _transparencyNavBar;
	WKWebView* _myUserPrivacyWebView;

}

@property (nonatomic,copy) NSString * userTransparencyDetails;                                       //@synthesize userTransparencyDetails=_userTransparencyDetails - In the implementation block
@property (nonatomic,retain) ADUserTransparencyResponse * userTransparencyResponseData;              //@synthesize userTransparencyResponseData=_userTransparencyResponseData - In the implementation block
@property (nonatomic,retain) NSString * userTransparencyDetailsUnavailableMessage;                   //@synthesize userTransparencyDetailsUnavailableMessage=_userTransparencyDetailsUnavailableMessage - In the implementation block
@property (nonatomic,retain) NSString * userTransparencyRendererPayload;                             //@synthesize userTransparencyRendererPayload=_userTransparencyRendererPayload - In the implementation block
@property (nonatomic,retain) NSString * userTransparencyRendererURL;                                 //@synthesize userTransparencyRendererURL=_userTransparencyRendererURL - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                                   //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) UINavigationBar * transparencyNavBar;                                   //@synthesize transparencyNavBar=_transparencyNavBar - In the implementation block
@property (nonatomic,retain) WKWebView * myUserPrivacyWebView;                                       //@synthesize myUserPrivacyWebView=_myUserPrivacyWebView - In the implementation block
@property (assign,nonatomic) BOOL isiPad;                                                            //@synthesize isiPad=_isiPad - In the implementation block
@property (nonatomic,retain) id<UserTransparencyViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isiPad;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(id<UserTransparencyViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UserTransparencyViewControllerDelegate>)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_commonInit;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_showErrorMessage:(id)arg1 ;
-(UILabel *)errorLabel;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(void)loadWebView;
-(void)errorDelegate;
-(id)initWithUserTransparencyDetails:(id)arg1 ;
-(void)setUserTransparencyDetails:(NSString *)arg1 ;
-(void)setIsiPad:(BOOL)arg1 ;
-(void)immediatelyLoadViewControllerBeforeNetworkRequest;
-(void)presentViewDelegate;
-(void)requestUserTransparencyDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)normalizeChineseLanguage:(id)arg1 ;
-(void)setUserTransparencyResponseData:(ADUserTransparencyResponse *)arg1 ;
-(ADUserTransparencyResponse *)userTransparencyResponseData;
-(void)setUserTransparencyRendererPayload:(NSString *)arg1 ;
-(void)setUserTransparencyRendererURL:(NSString *)arg1 ;
-(void)setUserTransparencyDetailsUnavailableMessage:(NSString *)arg1 ;
-(NSString *)userTransparencyRendererPayload;
-(UINavigationBar *)transparencyNavBar;
-(WKWebView *)myUserPrivacyWebView;
-(void)_reportUserTransparencyViewControllerEventWithType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_hideErrorMessage;
-(void)setTransparencyNavBar:(UINavigationBar *)arg1 ;
-(void)_closeViewController:(id)arg1 ;
-(void)setMyUserPrivacyWebView:(WKWebView *)arg1 ;
-(NSString *)userTransparencyRendererURL;
-(NSString *)userTransparencyDetails;
-(NSString *)userTransparencyDetailsUnavailableMessage;
@end
