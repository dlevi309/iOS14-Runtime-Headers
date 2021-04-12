/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFPasswordServiceViewController.h>
#import <libobjc.A.dylib/SFCredentialProviderExtensionManagerObserver.h>
#import <libobjc.A.dylib/_ASCredentialListViewControllerDelegate.h>
#import <libobjc.A.dylib/_ASPasswordCredentialAuthenticationViewControllerDelegate.h>
#import <UIKit/UIPresentationControllerDelegatePrivate.h>
#import <libobjc.A.dylib/_SFAuthenticationClient.h>
#import <libobjc.A.dylib/_SFAuthenticationContextDelegate.h>
#import <libobjc.A.dylib/SFPasswordPickerServiceViewControllerProtocol.h>

@class _ASPasswordCredentialAuthenticationViewController, SFPasswordPickerViewController, NSURL, _SFAuthenticationContext, NSString, NSArray, _ASIncomingCallObserver;

@interface SFPasswordPickerServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate, UIPresentationControllerDelegatePrivate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFPasswordPickerServiceViewControllerProtocol> {

	_ASPasswordCredentialAuthenticationViewController* _externalCredentialViewController;
	SFPasswordPickerViewController* _passwordPickerViewController;
	BOOL _presentInPopover;
	BOOL _hasAuthenticationForOtherPasswords;
	NSURL* _webViewURL;
	_SFAuthenticationContext* _context;
	NSString* _remoteAppID;
	NSString* _remoteLocalizedAppName;
	NSString* _remoteUnlocalizedAppName;
	NSArray* _externallyVerifiedAssociatedDomains;
	double _authenticationGracePeriod;
	/*^block*/id _presentCredentialsHandler;
	_ASIncomingCallObserver* _callObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)_context;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_dismiss;
-(void)setWebViewURL:(id)arg1 ;
-(void)setRemoteAppID:(id)arg1 ;
-(void)setRemoteLocalizedAppName:(id)arg1 ;
-(void)setRemoteUnlocalizedAppName:(id)arg1 ;
-(void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1 ;
-(void)authenticateToPresentInPopover:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAuthenticationGracePeriod:(double)arg1 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1 ;
-(id)authenticationCustomUIProgressObserverForContext:(id)arg1 ;
-(id)authenticationMessageForContext:(id)arg1 ;
-(id)passcodePromptForContext:(id)arg1 ;
-(BOOL)displayMessageAsTitleForContext:(id)arg1 ;
-(void)_presentCredentialListForExtension:(id)arg1 ;
-(void)_authenticateAndSetPresentCredentialsHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)_sendCredentialToClientAndDismiss:(id)arg1 ;
-(void)_authenticateToViewOtherPasswordsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fillCredential:(id)arg1 needsAuthentication:(BOOL)arg2 ;
-(id)_actionForPresentingPasswordManagerExtension:(id)arg1 ;
-(void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1 ;
-(void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)contextRequiresSessionBasedAuthentication:(id)arg1 ;
-(BOOL)contextShouldAllowPasscodeFallback:(id)arg1 ;
-(BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg1 ;
@end
