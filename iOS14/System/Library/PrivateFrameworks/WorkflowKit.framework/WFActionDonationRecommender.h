/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSArray, NSSet, NSObject, WFCachedDonations, NSMutableDictionary;

@interface WFActionDonationRecommender : NSObject <WFApplicationStateObserver> {

	NSArray* _defaultRecommendations;
	NSSet* _excludedAppBundleIdentifiers;
	NSObject*<OS_dispatch_group> _activeFetchGroup;
	NSObject*<OS_dispatch_queue> _workQueue;
	WFCachedDonations* _cachedDonationsForAllApps;
	NSMutableDictionary* _cachedDonationsPerApp;
	WFCachedDonations* _cachedActionPredictionsForAllApps;
	NSMutableDictionary* _cachedActionPredictionsPerApp;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeFetchGroup;                      //@synthesize activeFetchGroup=_activeFetchGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) WFCachedDonations * cachedDonationsForAllApps;                      //@synthesize cachedDonationsForAllApps=_cachedDonationsForAllApps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedDonationsPerApp;                        //@synthesize cachedDonationsPerApp=_cachedDonationsPerApp - In the implementation block
@property (nonatomic,retain) WFCachedDonations * cachedActionPredictionsForAllApps;              //@synthesize cachedActionPredictionsForAllApps=_cachedActionPredictionsForAllApps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedActionPredictionsPerApp;                //@synthesize cachedActionPredictionsPerApp=_cachedActionPredictionsPerApp - In the implementation block
@property (nonatomic,readonly) NSArray * defaultRecommendations;                                 //@synthesize defaultRecommendations=_defaultRecommendations - In the implementation block
@property (nonatomic,readonly) NSSet * excludedAppBundleIdentifiers;                             //@synthesize excludedAppBundleIdentifiers=_excludedAppBundleIdentifiers - In the implementation block
+(id)donationsByRemovingDuplicatesFromDonations:(id)arg1 excludingAppIdentifiers:(id)arg2 includingSingleDonationPerApp:(BOOL)arg3 ;
+(id)filteredActionDonations:(id)arg1 byApplicationAppIdentifier:(id)arg2 ;
+(id)getDonationsFromActionResponse:(id)arg1 ;
+(id)disabledSpotlightApps;
+(id)sharedRecommender;
+(id)filterDonationsForTitleLength:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(NSSet *)excludedAppBundleIdentifiers;
-(void)cacheRecentDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ballpark:(unsigned long long)arg3 ;
-(void)cacheActionPredictionDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ballpark:(unsigned long long)arg3 ;
-(NSArray *)defaultRecommendations;
-(void)fetchDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 includeSuggestedForAllApps:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_fetchDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 includeSuggestedForAllApps:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchRecommendedDonationsForAppPredictionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_group>)activeFetchGroup;
-(void)setActiveFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(WFCachedDonations *)cachedDonationsForAllApps;
-(void)setCachedDonationsForAllApps:(WFCachedDonations *)arg1 ;
-(NSMutableDictionary *)cachedDonationsPerApp;
-(void)setCachedDonationsPerApp:(NSMutableDictionary *)arg1 ;
-(WFCachedDonations *)cachedActionPredictionsForAllApps;
-(void)setCachedActionPredictionsForAllApps:(WFCachedDonations *)arg1 ;
-(NSMutableDictionary *)cachedActionPredictionsPerApp;
-(void)setCachedActionPredictionsPerApp:(NSMutableDictionary *)arg1 ;
@end

