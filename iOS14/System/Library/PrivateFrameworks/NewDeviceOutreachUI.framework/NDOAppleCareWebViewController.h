/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol NDOAppleCareWebViewPresenterProtocol;
@class NDOWarranty, NSString, WKWebView, UINavigationBar, UINavigationItem, UIActivityIndicatorView;

@interface NDOAppleCareWebViewController : UIViewController <UINavigationBarDelegate, WKNavigationDelegate> {

	BOOL _initialLoadCompleted;
	int _retriesRemaining;
	id<NDOAppleCareWebViewPresenterProtocol> _presenter;
	NDOWarranty* _warranty;
	NSString* _serialNumber;
	NSString* _params;
	WKWebView* _webview;
	UINavigationBar* _headerView;
	UINavigationItem* _webViewNavigationItem;
	UIActivityIndicatorView* _spinner;

}

@property (retain) NDOWarranty * warranty;                                          //@synthesize warranty=_warranty - In the implementation block
@property (retain) NSString * serialNumber;                                         //@synthesize serialNumber=_serialNumber - In the implementation block
@property (retain) NSString * params;                                               //@synthesize params=_params - In the implementation block
@property (__weak) WKWebView * webview;                                             //@synthesize webview=_webview - In the implementation block
@property (__weak) UINavigationBar * headerView;                                    //@synthesize headerView=_headerView - In the implementation block
@property (retain) UINavigationItem * webViewNavigationItem;                        //@synthesize webViewNavigationItem=_webViewNavigationItem - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign) BOOL initialLoadCompleted;                                       //@synthesize initialLoadCompleted=_initialLoadCompleted - In the implementation block
@property (assign) int retriesRemaining;                                            //@synthesize retriesRemaining=_retriesRemaining - In the implementation block
@property (__weak) id<NDOAppleCareWebViewPresenterProtocol> presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serialNumber;
-(void)setPresenter:(id<NDOAppleCareWebViewPresenterProtocol>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setHeaderView:(UINavigationBar *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(UIActivityIndicatorView *)spinner;
-(void)cancelTapped:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setParams:(NSString *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id<NDOAppleCareWebViewPresenterProtocol>)presenter;
-(void)viewDidLoad;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(UINavigationBar *)headerView;
-(void)loadView;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(WKWebView *)webview;
-(void)dealloc;
-(NSString *)params;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)setRetriesRemaining:(int)arg1 ;
-(int)retriesRemaining;
-(void)setWarranty:(NDOWarranty *)arg1 ;
-(NDOWarranty *)warranty;
-(id)initWithWarranty:(id)arg1 serialNumber:(id)arg2 ;
-(id)initWithWarranty:(id)arg1 serialNumber:(id)arg2 params:(id)arg3 ;
-(BOOL)initialLoadCompleted;
-(void)setInitialLoadCompleted:(BOOL)arg1 ;
-(void)loadWebview:(BOOL)arg1 ;
-(void)setWebViewNavigationItem:(UINavigationItem *)arg1 ;
-(UINavigationItem *)webViewNavigationItem;
-(void)setWebview:(WKWebView *)arg1 ;
@end

