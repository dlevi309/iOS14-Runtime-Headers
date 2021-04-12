/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HAPWACAccessoryClientDelegate, OS_dispatch_queue;
@class HMFUnfairLock, HAPWACAccessory, NSMutableSet, NSDictionary, NSObject, EasyConfigDevice, HAPAccessoryServer, HAPWACAccessoryBrowser, NSDate, NSString;

@interface HAPWACAccessoryClient : HMFObject <HMFLogging> {

	BOOL _metricSubmitted;
	unsigned long long _state;
	id<HAPWACAccessoryClientDelegate> _clientDelegate;
	HMFUnfairLock* _lock;
	HAPWACAccessory* _hapWACAccessory;
	NSMutableSet* _compatible2Pt4Networks;
	NSDictionary* _currentNetworkInfo;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _completionHandler;
	EasyConfigDevice* _ezConfigDevice;
	HAPAccessoryServer* _server;
	HAPWACAccessoryBrowser* _brower;
	unsigned long long _restartPairingCount;
	/*^block*/id _restartEasyConfigBlock;
	double _joinLatency;
	double _restoreLatency;
	double _configurationLatency;
	double _preConfigDiscoveryTime;
	double _postConfigDiscoveryTime;
	double _setupCodeDelay;
	NSDate* _setupCodeRequestTime;
	unsigned long long _retryCount;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                                                 //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) HAPWACAccessory * hapWACAccessory;                                    //@synthesize hapWACAccessory=_hapWACAccessory - In the implementation block
@property (nonatomic,readonly) NSMutableSet * compatible2Pt4Networks;                                //@synthesize compatible2Pt4Networks=_compatible2Pt4Networks - In the implementation block
@property (nonatomic,retain) NSDictionary * currentNetworkInfo;                                      //@synthesize currentNetworkInfo=_currentNetworkInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                               //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) EasyConfigDevice * ezConfigDevice;                                      //@synthesize ezConfigDevice=_ezConfigDevice - In the implementation block
@property (nonatomic,__weak,readonly) HAPAccessoryServer * server;                                   //@synthesize server=_server - In the implementation block
@property (nonatomic,__weak,readonly) HAPWACAccessoryBrowser * brower;                               //@synthesize brower=_brower - In the implementation block
@property (assign,nonatomic) unsigned long long restartPairingCount;                                 //@synthesize restartPairingCount=_restartPairingCount - In the implementation block
@property (nonatomic,copy) id restartEasyConfigBlock;                                                //@synthesize restartEasyConfigBlock=_restartEasyConfigBlock - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPWACAccessoryClientDelegate> clientDelegate;              //@synthesize clientDelegate=_clientDelegate - In the implementation block
@property (assign,nonatomic) BOOL metricSubmitted;                                                   //@synthesize metricSubmitted=_metricSubmitted - In the implementation block
@property (assign,nonatomic) double joinLatency;                                                     //@synthesize joinLatency=_joinLatency - In the implementation block
@property (assign,nonatomic) double restoreLatency;                                                  //@synthesize restoreLatency=_restoreLatency - In the implementation block
@property (assign,nonatomic) double configurationLatency;                                            //@synthesize configurationLatency=_configurationLatency - In the implementation block
@property (assign,nonatomic) double preConfigDiscoveryTime;                                          //@synthesize preConfigDiscoveryTime=_preConfigDiscoveryTime - In the implementation block
@property (assign,nonatomic) double postConfigDiscoveryTime;                                         //@synthesize postConfigDiscoveryTime=_postConfigDiscoveryTime - In the implementation block
@property (assign,nonatomic) double setupCodeDelay;                                                  //@synthesize setupCodeDelay=_setupCodeDelay - In the implementation block
@property (nonatomic,retain) NSDate * setupCodeRequestTime;                                          //@synthesize setupCodeRequestTime=_setupCodeRequestTime - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                                          //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)restart;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_reportProgress:(unsigned long long)arg1 ;
-(HMFUnfairLock *)lock;
-(id)completionHandler;
-(HAPWACAccessoryBrowser *)brower;
-(HAPAccessoryServer *)server;
-(NSDictionary *)currentNetworkInfo;
-(void)setState:(unsigned long long)arg1 ;
-(id<HAPWACAccessoryClientDelegate>)clientDelegate;
-(unsigned long long)state;
-(HAPWACAccessory *)hapWACAccessory;
-(void)setMetricSubmitted:(BOOL)arg1 ;
-(BOOL)metricSubmitted;
-(void)dumpStatsWithError:(id)arg1 ;
-(id)initWithWACAccessory:(id)arg1 server:(id)arg2 browser:(id)arg3 compatible2Pt4Networks:(id)arg4 ;
-(void)registerClientDelegate:(id)arg1 ;
-(id)joinAccessoryNetworkWithCompletion:(/*^block*/id)arg1 ;
-(id)performEasyConfigWithParingPrompt:(/*function pointer*/void*)arg1 performPairSetup:(BOOL)arg2 isSplit:(BOOL)arg3 wacWiFiConfig:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_joinAccessoryNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)_performEasyConfigWithParingPrompt:(/*function pointer*/void*)arg1 performPairSetup:(BOOL)arg2 isSplit:(BOOL)arg3 wacWiFiConfig:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)continuePairingWithSetupCode:(id)arg1 ;
-(void)stopEasyConfig;
-(id)restoreNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)_continuePairingWithSetupCode:(id)arg1 ;
-(double)joinLatency;
-(double)restoreLatency;
-(double)configurationLatency;
-(double)preConfigDiscoveryTime;
-(double)postConfigDiscoveryTime;
-(double)setupCodeDelay;
-(void)_callJoinCompletion:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)_restoreNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)setCurrentNetworkInfo:(NSDictionary *)arg1 ;
-(void)setJoinLatency:(double)arg1 ;
-(NSMutableSet *)compatible2Pt4Networks;
-(void)_joinAccessory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRestoreLatency:(double)arg1 ;
-(void)_callRestoreCompletion:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)setConfigurationLatency:(double)arg1 ;
-(EasyConfigDevice *)ezConfigDevice;
-(void)setRestartEasyConfigBlock:(id)arg1 ;
-(void)setEzConfigDevice:(EasyConfigDevice *)arg1 ;
-(void)setSetupCodeRequestTime:(NSDate *)arg1 ;
-(unsigned long long)restartPairingCount;
-(void)_retoreNetworkAndReportError:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setPreConfigDiscoveryTime:(double)arg1 ;
-(void)setPostConfigDiscoveryTime:(double)arg1 ;
-(void)_performPostConfig;
-(NSDate *)setupCodeRequestTime;
-(void)setSetupCodeDelay:(double)arg1 ;
-(id)restartEasyConfigBlock;
-(void)setRestartPairingCount:(unsigned long long)arg1 ;
-(void)_joinCompleteWithStatus:(int)arg1 ;
@end
