/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/ATXAppDirectoryInterface.h>

@protocol _DKKnowledgeSaving, OS_dispatch_queue, ATXPETEventTracker2Protocol;
@class NSXPCConnection, _DKEventStream, NSObject, ATXClient, ATXBiomeUIStream, NSArray;

@interface ATXAppDirectoryClient : NSObject <ATXAppDirectoryInterface> {

	NSXPCConnection* _xpcConnection;
	id<_DKKnowledgeSaving> _knowledgeStore;
	_DKEventStream* _knowledgeStream;
	NSObject*<OS_dispatch_queue> _loggingQueue;
	ATXClient* _atxClient;
	id<ATXPETEventTracker2Protocol> _tracker;
	ATXBiomeUIStream* _uiStream;
	BOOL _didSearchDuringSession;
	BOOL _didSendFeedbackDuringSession;
	NSArray* _topAppsVisible;
	NSArray* _recentAppsVisible;

}

@property (retain) NSArray * topAppsVisible;                                 //@synthesize topAppsVisible=_topAppsVisible - In the implementation block
@property (retain) NSArray * recentAppsVisible;                              //@synthesize recentAppsVisible=_recentAppsVisible - In the implementation block
@property (assign,nonatomic) BOOL didSearchDuringSession;                    //@synthesize didSearchDuringSession=_didSearchDuringSession - In the implementation block
@property (assign,nonatomic) BOOL didSendFeedbackDuringSession;              //@synthesize didSendFeedbackDuringSession=_didSendFeedbackDuringSession - In the implementation block
+(id)sharedInstance;
+(id)_sortedDefaultCategories;
+(id)hardcodedAppCategoryMappings;
+(id)_allBundleIdsFromHomeScreenService:(id)arg1 ;
+(id)_sortedBundleIDsByCategoryWithHardcodedAppCategoryMappings:(id)arg1 ;
+(id)_allPlaceholderBundleIdsFromHomeScreenService:(id)arg1 ;
+(id)_sortedAllOtherBundleIDsFromAllBundleIDs:(id)arg1 allPlaceholderBundleIDs:(id)arg2 hardcodedAppCategoryMappings:(id)arg3 ;
-(void)logLaunchFromCategoryPreviewWithDate:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3 bundleID:(id)arg4 bundleIndex:(unsigned long long)arg5 appDirectoryResponse:(id)arg6 ;
-(void)logLaunchFromExpandedCategoryWithDate:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3 bundleID:(id)arg4 bundleIndex:(unsigned long long)arg5 appDirectoryResponse:(id)arg6 ;
-(void)logCategoryExpansionWithDate:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3 ;
-(void)logCategoryExitWithDate:(id)arg1 categoryID:(unsigned long long)arg2 categoryIndex:(unsigned long long)arg3 ;
-(void)notifyBookmarksDidChange;
-(void)appLaunchDatesWithReply:(/*^block*/id)arg1 ;
-(void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)_init;
-(void)categoriesWithReply:(/*^block*/id)arg1 ;
-(void)categoriesWithShouldUseDefault:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)logLaunchFromSearchWithDate:(id)arg1 bundleID:(id)arg2 bundleIndex:(unsigned long long)arg3 searchQueryLength:(unsigned long long)arg4 searchTab:(unsigned long long)arg5 appDirectoryResponse:(id)arg6 ;
-(void)_updateTopAppsVisibilityWithCategories:(id)arg1 ;
-(void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(unsigned long long)arg1 shouldUseDefaultCategories:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(id)_readRecentAppsWithError:(id*)arg1 ;
-(NSArray *)topAppsVisible;
-(NSArray *)recentAppsVisible;
-(void)setRecentAppsVisible:(NSArray *)arg1 ;
-(void)predictedAppsAndRecentAppsWithShouldUseDefaultCategories:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setTopAppsVisible:(NSArray *)arg1 ;
-(void)setDidSendFeedbackDuringSession:(BOOL)arg1 ;
-(void)_logToDuet:(unsigned long long)arg1 metadata:(id)arg2 ;
-(void)_logToBiome:(unsigned long long)arg1 metadata:(id)arg2 ;
-(void)_resetSessionState;
-(id)_suggestionsPodDedupableBundleIds;
-(void)_logUserFeedbackWithAppDirectoryResponse:(id)arg1 engagementType:(unsigned long long)arg2 bundleIdentifier:(id)arg3 bundleIdsShown:(id)arg4 explicitlyRejectedBundleIds:(id)arg5 ;
-(void)_logCaptureRateDiversionWithType:(int)arg1 ;
-(void)_logCaptureRateCapture;
-(void)setDidSearchDuringSession:(BOOL)arg1 ;
-(void)predictedAppsAndRecentAppsWithReply:(/*^block*/id)arg1 ;
-(void)logDidEnterAppDirectoryWithDate:(id)arg1 ;
-(void)logLaunchFromSuggestionWithDate:(id)arg1 bundleID:(id)arg2 bundleIndex:(unsigned long long)arg3 appDirectoryResponse:(id)arg4 ;
-(void)logOpenSearchWithDate:(id)arg1 ;
-(void)logDidLeaveAppDirectoryWithDate:(id)arg1 appDirectoryResponse:(id)arg2 ;
-(void)logCloseSearchWithDate:(id)arg1 ;
-(BOOL)didSearchDuringSession;
-(BOOL)didSendFeedbackDuringSession;
@end

