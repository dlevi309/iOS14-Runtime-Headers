/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@class RMSDAAPRequestManager, RMSFairPlaySession;

@interface RMSDAAPLoginManager : NSObject {

	RMSDAAPRequestManager* _requestManager;
	RMSFairPlaySession* _fairPlaySession;
	BOOL _isFairPlayRequired;

}
-(void)_requestControlInterfaceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestFairPlayHandshake:(/*^block*/id)arg1 ;
-(void)_requestLoginWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestServerInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isFairplayRequiredForServerInfo:(id)arg1 ;
-(void)_continueFairPlayHandshakeWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)loginWithCompletionHandler:(/*^block*/id)arg1 ;
@end

