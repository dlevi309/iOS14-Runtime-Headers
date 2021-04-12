/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, ICDelegationConsumerService;

@interface ICUserCredentialProvider : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	long long _delegationDiscoveryCount;
	ICDelegationConsumerService* _delegationConsumerService;

}
+(id)sharedProvider;
-(id)init;
-(void)performCredentialRequests:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleCredentialRequestIdentityPropertiesForSession:(id)arg1 ;
-(void)_handlePendingDelegationRequestsForSession:(id)arg1 ;
-(void)_handleDelegationAccountUUIDsForSession:(id)arg1 ;
-(void)_handleIdentityProperties:(id)arg1 forIdentity:(id)arg2 loadingError:(id)arg3 credentialRequest:(id)arg4 session:(id)arg5 ;
-(void)_handleRequestIndependentPropertiesForSession:(id)arg1 ;
-(void)performCredentialRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
@end
