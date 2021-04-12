/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol OS_dispatch_queue, OS_nw_path_evaluator;
@class NSObject, NSHashTable, SiriCoreWiFiManagerClient, NSNumber, WRM_iRATInterface, SiriCoreLinkRecommendationInfo;

@interface SiriCoreNetworkManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	NSObject*<OS_nw_path_evaluator> _pathEvaluator;
	int _pathStatus;
	BOOL _pathUsesCellular;
	SiriCoreWiFiManagerClient* _wiFiManagerClient;
	BOOL _hasSymptomsBasedInstantCellQuality;
	BOOL _symptomsBasedInstantCellQualityIsGood;
	BOOL _hasSymptomsBasedInstantWiFiQuality;
	BOOL _symptomsBasedInstantWiFiQualityIsGood;
	BOOL _hasSymptomsBasedHistoricalCellQuality;
	BOOL _symptomsBasedHistoricalCellQualityIsGood;
	BOOL _hasSymptomsBasedHistoricalWiFiQuality;
	BOOL _symptomsBasedHistoricalWiFiQualityIsGood;
	BOOL _lastFetchInProgress;
	double _lastSuccessfulSymptomsFetch;
	NSNumber* _lastSignalStrength;
	unsigned long long _subscriptionCount;
	WRM_iRATInterface* _interface;
	BOOL _iRATCallInProgress;
	unsigned long long _iRATCallNumber;
	double _lastiRATFetch;
	SiriCoreLinkRecommendationInfo* _linkRecommendationInfo;
	SiriCoreLinkRecommendationInfo* _linkMetricsInfo;

}
+(id)sharedInstance;
+(long long)connectionSubTypeForCellularInterface;
+(void)_ifnameTypeForName:(char*)arg1 isWiFi:(BOOL*)arg2 isCellular:(BOOL*)arg3 ;
+(void)getCarrierName:(id*)arg1 signalStrength:(id*)arg2 subscriptionCount:(id*)arg3 ;
+(id)connectionTypeForInterfaceName:(id)arg1 isCellular:(BOOL)arg2 ;
+(long long)connectionTypeForInterface:(id)arg1 ;
+(void)acquireDormancySuspendAssertion:(const void*)arg1 ;
+(void)releaseDormancySuspendAssertion:(void*)arg1 ;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_stopMonitoringNetwork;
-(void)_pathUpdated:(id)arg1 ;
-(void)_getNetworkPerformanceFeed;
-(long long)_reportCellularInstantQuality;
-(long long)_reportCellularHistoricalQuality;
-(long long)_reportWiFiInstantQuality;
-(long long)_reportWiFiHistoricalQuality;
-(void)getSignalStrength:(id*)arg1 subscriptionCount:(unsigned long long*)arg2 ;
-(void)releaseWiFiAssertion;
-(id)_wiFiManagerClient;
-(void)acquireWiFiAssertion:(long long)arg1 ;
-(BOOL)_defaultBTLinkRecommendation;
-(BOOL)_defaultWiFiLinkRecommendation;
-(void)_subscribeToLinkRecommendations:(id)arg1 ;
-(void)_getLinkRecommendationSafe:(BOOL)arg1 recommendation:(/*^block*/id)arg2 ;
-(void)resetLinkMetrics;
-(void)startMonitoringNetworkForHost:(id)arg1 ;
-(void)stopMonitoringNetwork;
-(void)getNetworkPerformanceFeed;
-(long long)cellularNetworkQuality;
-(long long)wifiNetworkQuality;
-(long long)anyNetworkQuality;
-(void)getQualityReport:(/*^block*/id)arg1 ;
-(void)forceFastDormancy;
-(void)registerWithWirelessCoexManager;
-(void)deRegisterWithWirelessCoexManager;
-(void)getLinkRecommendation:(BOOL)arg1 recommendation:(/*^block*/id)arg2 ;
-(void)updateLinkMetrics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_getConnectionSuccessRate:(id)arg1 hasMetric:(BOOL*)arg2 ;
@end
