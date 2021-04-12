/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFPasswordViewController.h>

@protocol SFPasswordSavingServiceViewControllerProtocol;
@class SFPasswordSavingRemoteViewController, SFQueueingServiceViewControllerProxy, NSString;

@interface _SFAppPasswordSavingViewController : _SFPasswordViewController {

	SFPasswordSavingRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFPasswordSavingServiceViewControllerProtocol> _serviceProxy;
	NSString* _tokenForShowingPrompt;

}
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_remoteViewController;
-(void)credentialsSubmittedForWebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)init;
-(void)_setUpServiceProxyIfNeeded;
-(void)remoteViewControllerWillDismiss:(id)arg1 ;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
@end
