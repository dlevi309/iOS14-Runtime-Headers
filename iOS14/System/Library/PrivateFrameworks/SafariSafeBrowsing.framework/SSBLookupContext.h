/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/

#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SSBLookupContext : NSObject <MCProfileConnectionObserver> {

	shared_ptr<SafeBrowsing::LookupContext>* _lookupContext;
	unsigned _observerToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLookupContext;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)_fetchCellularDataPlanWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lookUpURL:(id)arg1 ignoreEnableState:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setSafeBrowsingEnabledStateNeedsUpdate;
-(void)lookUpURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_forceLookUpURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_forceDatabaseUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getDatabaseStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getServiceStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getSafeBrowsingEnabledState:(/*^block*/id)arg1 ;
-(void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_deleteAllDatabasesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getLastDatabaseUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lookUpURLs:(id)arg1 forProtectionType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

