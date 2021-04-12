/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>
#import <libobjc.A.dylib/NWUsageManagerDelegate.h>

@protocol OS_dispatch_source;
@class UsageAnalytics, ProcessAnalytics, AppAnalytics, ObjectAnalytics, NSMutableDictionary, NWUsageManager, NSDate, NWUsageTargetSelector, NSObject, RepeatedConnFailureDetector, CoreTelephonyShim, NetworkAnalyticsStateRelay, NSString;

@interface FlowAnalyticsEngine : AnalyticsEngineCore <NWUsageManagerDelegate> {

	UsageAnalytics* uspace;
	ProcessAnalytics* pspace;
	AppAnalytics* aspace;
	ObjectAnalytics* calspace;
	NSMutableDictionary* processCache;
	NSMutableDictionary* appState;
	NSMutableDictionary* appCompactState;
	BOOL trackingRequiredForBaseband;
	NSMutableDictionary* pluginToBundleCache;
	NSMutableDictionary* audioBundleCache;
	NWUsageManager* nstatUsageManager;
	int cellularInterfaceIndex;
	NSDate* lastCellularThresholdRefreshTime;
	NWUsageTargetSelector* cellThresholdTargetSelector;
	NWUsageTargetSelector* cellRNFPeriodEndTargetSelector;
	ct_green_tea_logger_sRef _greenTeaLogger;
	unsigned long long logStateHandle;
	NSObject*<OS_dispatch_source> siginfo;
	unsigned pdpBitmap;
	/*^block*/id dataUsageRefreshCompletionBlock;
	int dataUsageRefreshCompletionNumWaiting;
	NSDate* lastFullRefreshTime;
	id tetherObserver;
	BOOL isTetherActive;
	id appStateChangeObserver;
	id cellTCCapabilityObserver;
	RepeatedConnFailureDetector* repeatedConnFailureDetector;
	NSMutableDictionary* flowCache;
	NSMutableDictionary* flowInstant;
	id flowObserver;
	id relayReadyObserver;
	ObjectAnalytics* fspace;
	ObjectAnalytics* lfpspace;
	NSObject*<OS_dispatch_source> flushOldFlowRecordsTimer;
	int screenStateToken;
	BOOL isScreenDark;
	NSDate* screenDarkTimestamp;
	unsigned long long usageCoalescingSpanSecs;
	unsigned long long usageWindowUnitsCount;
	BOOL flowCountExceededThreshold;
	BOOL thunderingHerdFlowCountExceededThreshold;
	NSMutableDictionary* estAwdMetricsDict;
	unsigned long long trackedFlowCountSincePrimaryInterfaceChanged;
	CoreTelephonyShim* ctShim;
	BOOL _haveCalendar;
	BOOL _haveTypicalUsage;
	NSMutableDictionary* _flowWatchers;
	NetworkAnalyticsStateRelay* _cellRelay;
	NetworkAnalyticsStateRelay* _wifiRelay;
	NetworkAnalyticsStateRelay* _mostRecentPrimaryRelay;

}

@property (retain) NetworkAnalyticsStateRelay * cellRelay;                           //@synthesize cellRelay=_cellRelay - In the implementation block
@property (retain) NetworkAnalyticsStateRelay * wifiRelay;                           //@synthesize wifiRelay=_wifiRelay - In the implementation block
@property (retain) NetworkAnalyticsStateRelay * mostRecentPrimaryRelay;              //@synthesize mostRecentPrimaryRelay=_mostRecentPrimaryRelay - In the implementation block
@property (assign) BOOL haveCalendar;                                                //@synthesize haveCalendar=_haveCalendar - In the implementation block
@property (assign) BOOL haveTypicalUsage;                                            //@synthesize haveTypicalUsage=_haveTypicalUsage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * flowWatchers;                     //@synthesize flowWatchers=_flowWatchers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queue;
+(id)foregroundAppKeys;
+(BOOL)hasAnyForegroundApp;
+(void)identifierForUUID:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)workspaceSaveWithCallback:(/*^block*/id)arg1 ;
+(void)checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)endRNFPeriod;
+(void)refreshDataUsageFor:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)appsWithFlowsPassingTest:(/*^block*/id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)identifierForUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_dumpState;
-(id)setOption:(id)arg1 ;
-(void)usageManager:(id)arg1 didReceiveSnapshot:(id)arg2 ;
-(void)usageManager:(id)arg1 thresholdReachedOn:(unsigned)arg2 ;
-(id)_attemptConvertingPluginNameToContainingAppName:(id)arg1 ;
-(BOOL)_hasAnyForegroundApp;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(id)getOption:(id)arg1 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(NetworkAnalyticsStateRelay *)cellRelay;
-(NetworkAnalyticsStateRelay *)wifiRelay;
-(BOOL)_initializeLocalCache;
-(void)_changedForegroundState:(BOOL)arg1 forBundle:(id)arg2 ;
-(void)_startFlowMonitoring:(BOOL)arg1 ;
-(void)_updateTetheringUsage:(BOOL)arg1 ;
-(void)_newFlowData:(id)arg1 ;
-(void)_removeOldFlowRecords;
-(void)setHaveTypicalUsage:(BOOL)arg1 ;
-(void)setHaveCalendar:(BOOL)arg1 ;
-(void)_refreshFullDataUsage;
-(void)_didReceiveSnapshot:(id)arg1 ;
-(void)_refreshFullDataUsageComplete;
-(void)_logExcessCellUsage:(long long)arg1 snapshot:(id)arg2 ;
-(void)_generateFlowAnomalySymptom:(unsigned)arg1 currentUsage:(unsigned long long)arg2 snapshot:(id)arg3 ;
-(void)_reportThresholdedFlowCount:(unsigned long long)arg1 threshold:(unsigned long long)arg2 ;
-(void)_checkCellExcessUsageActions:(unsigned long long)arg1 previous:(unsigned long long)arg2 snapshot:(id)arg3 ;
-(id)_fetchFromProcCacheWithName:(id)arg1 ;
-(id)_processFetchForName:(id)arg1 bundle:(id)arg2 shouldFillMiss:(BOOL)arg3 ;
-(id)_liveUsageFetchForProcess:(id)arg1 ;
-(void)_updateLiveUsage:(id)arg1 wifiIn:(long long)arg2 wifiOut:(long long)arg3 cellIn:(long long)arg4 cellOut:(long long)arg5 wiredIn:(long long)arg6 wiredOut:(long long)arg7 xIn:(long long)arg8 xOut:(long long)arg9 isJumboFlow:(BOOL)arg10 closing:(BOOL)arg11 ;
-(void)_stopMonitoringNetworkInterface:(int)arg1 ;
-(void)_startMonitoringNetworkInterface:(int)arg1 usingThreshold:(unsigned long long)arg2 ;
-(void)_handleSnapshot:(id)arg1 ;
-(void)_refreshDataUsageFor:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(double)_usageFingerprintForBundleName:(id)arg1 ;
-(void)_saveAndUnloadSelectState;
-(BOOL)haveCalendar;
-(void)_calendarUsageForApp:(id)arg1 givenLastRun:(id)arg2 ;
-(void)_compactUsageForApp:(id)arg1 intervalType:(int)arg2 givenLastRun:(id)arg3 ;
-(void)_refreshFullDataUsageWithCallback:(/*^block*/id)arg1 ;
-(void)_handleApplicationNotificationStateChangedForBundleName:(id)arg1 edgeMode:(BOOL)arg2 intervalType:(int)arg3 ;
-(void)_handleApplicationNotificationCompactForBundleName:(id)arg1 edgeMode:(BOOL)arg2 ;
-(void)_removeInfoFromWorkspaceForProcess:(id)arg1 ;
-(void)_removeFromProcCache:(id)arg1 ;
-(void)_insertProcCache:(id)arg1 underName:(id)arg2 ;
-(BOOL)_isLiveUsageinScope:(id)arg1 forTime:(id)arg2 ;
-(unsigned long long)_liveUsageCountForProcess:(id)arg1 subscriberTag:(id)arg2 ;
-(void)_liveUsagePackForProcess:(id)arg1 subscriberTag:(id)arg2 ;
-(BOOL)_isLiveUsageInRollingWindow:(id)arg1 forTime:(id)arg2 ;
-(void)_applyCountsTo:(id)arg1 fromLiveUsage:(id)arg2 mustReset:(BOOL)arg3 ;
-(void)workspaceSaveWithCallback:(/*^block*/id)arg1 ;
-(void)_checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_endRNFPeriod;
-(id)_foregroundAppKeys;
-(void)_recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)_bundleBackgroundAudioCapable:(id)arg1 ;
-(void)_appsWithFlowsPassingTest:(/*^block*/id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)identifierForUUID:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_trafficEnvelopeToTier:(double)arg1 ;
-(id)_flowFetchForName:(id)arg1 ;
-(BOOL)_isLiveFlowPerfinScope:(id)arg1 forTime:(id)arg2 andTag:(id)arg3 ;
-(id)_parseEvent:(id)arg1 withGeneration:(id*)arg2 ;
-(void)_pruneFlowHistory;
-(NSMutableDictionary *)flowWatchers;
-(void)_archiveRecord:(id)arg1 ;
-(BOOL)_handlesProcEntity:(id)arg1 ;
-(BOOL)_handlesFlowEntity:(id)arg1 ;
-(void)performThresholdingOn:(id)arg1 forKey:(id)arg2 andValue:(id)arg3 connection:(id)arg4 createdBlock:(/*^block*/id*)arg5 hitBlock:(/*^block*/id)arg6 errorBlock:(/*^block*/id)arg7 ;
-(id)_safePredFrom:(id)arg1 forEntity:(id)arg2 ;
-(int)_performQueryOnEntityFromProcCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id*)arg4 ;
-(int)_performQueryOnEntityFromInstantFlowCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id*)arg4 ;
-(BOOL)haveTypicalUsage;
-(void)_removeAllInfoForProcess:(id)arg1 withUUID:(id)arg2 ;
-(id)_has1stPartyImpliedBundleNameBehavior:(id)arg1 ;
-(BOOL)_processNameIsValid:(id)arg1 ;
-(id)_fetchFromFlowCacheWithName:(id)arg1 ;
-(void)getNetworkBitmapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)setFlowWatchers:(NSMutableDictionary *)arg1 ;
-(void)setCellRelay:(NetworkAnalyticsStateRelay *)arg1 ;
-(void)setWifiRelay:(NetworkAnalyticsStateRelay *)arg1 ;
-(NetworkAnalyticsStateRelay *)mostRecentPrimaryRelay;
-(void)setMostRecentPrimaryRelay:(NetworkAnalyticsStateRelay *)arg1 ;
@end
