/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class NSURL, HMHTMLDocument, WKWebView, NAFuture, NSString;

@interface HUWebViewController : UIViewController <WKNavigationDelegate, HUPreloadableViewController> {

	BOOL _showsShareButton;
	BOOL _zoomEnabled;
	BOOL _scrollEnabled;
	NSURL* _URL;
	HMHTMLDocument* _document;
	WKWebView* _webView;
	NAFuture* _loadingFuture;

}

@property (nonatomic,readonly) NAFuture * loadingFuture;                    //@synthesize loadingFuture=_loadingFuture - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) HMHTMLDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                         //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) BOOL showsShareButton;                         //@synthesize showsShareButton=_showsShareButton - In the implementation block
@property (assign,nonatomic) BOOL zoomEnabled;                              //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (assign,nonatomic) BOOL scrollEnabled;                            //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(BOOL)zoomEnabled;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_share:(id)arg1 ;
-(id)hu_preloadContent;
-(BOOL)scrollEnabled;
-(id)initWithDocument:(id)arg1 ;
-(NSURL *)URL;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)loadView;
-(HMHTMLDocument *)document;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(BOOL)showsShareButton;
-(NAFuture *)loadingFuture;
-(void)setShowsShareButton:(BOOL)arg1 ;
-(id)_initWithDocument:(id)arg1 orMaybeAURL:(id)arg2 ;
-(void)_startLoadWithDocument:(id)arg1 orMaybeAURL:(id)arg2 ;
-(BOOL)_shouldShare;
@end

