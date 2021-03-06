/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSDictionary, NSObject, FPPacer;

@interface FPProviderDomainChangesReceiver : NSObject {

	NSMutableSet* _changesHandlers;
	NSDictionary* _providerDomainsByID;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _notifyToken;
	int _settingsChangedToken;
	FPPacer* _pacer;

}
+(id)sharedChangesReceiver;
-(void)removeChangesHandlerToken:(id)arg1 ;
-(void)signalChange;
-(void)updateProviderDomainsWithAttemptCount:(unsigned long long)arg1 ;
-(void)callChangesHandlersWithProviderDomains:(id)arg1 error:(id)arg2 ;
-(id)_init;
-(id)addChangesHandler:(/*^block*/id)arg1 ;
-(void)providerDomainsHaveChanged:(id)arg1 error:(id)arg2 ;
@end

