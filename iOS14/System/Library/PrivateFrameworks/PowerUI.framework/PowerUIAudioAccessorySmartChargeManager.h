/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUI-Structs.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <PowerUI/PowerUISmartChargeManagingAudioAccessoriesPrivate.h>
#import <PowerUI/PowerUISignalMonitorDelegate.h>
#import <PowerUI/PowerUISmartChargeManagingAudioAccessories.h>

@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_semaphore;
@class NSObject, PowerUIMLAudioAccessoryModelPredictor, NSMutableArray, NSLock, NSMutableDictionary, NSNumber, NSDistributedNotificationCenter, PowerUIWalletSignalMonitor, PowerUIBluetoothHandler, UNUserNotificationCenter, NSXPCListener, NSString;

@interface PowerUIAudioAccessorySmartChargeManager : NSObject <UNUserNotificationCenterDelegate, NSXPCListenerDelegate, PowerUISmartChargeManagingAudioAccessoriesPrivate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingAudioAccessories> {

	BOOL _firstNotificationDisplayed;
	NSObject*<OS_dispatch_queue> _queue;
	PowerUIMLAudioAccessoryModelPredictor* _predictor;
	BTSessionImplRef _session;
	NSObject*<OS_os_log> _accessoryLog;
	NSMutableArray* _deviceArray;
	NSLock* _deviceArrayLock;
	NSMutableDictionary* _accessoryStates;
	NSNumber* _hardcodedTimeDelta;
	NSNumber* _hardcodedTimeBetweenUpdates;
	NSDistributedNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_semaphore> _btConnectionSemaphore;
	PowerUIWalletSignalMonitor* _walletMonitor;
	NSMutableDictionary* _acceptMessageFromRightBudForDevice;
	NSMutableDictionary* _acceptMessageFromLeftBudForDevice;
	PowerUIBluetoothHandler* _btHandler;
	UNUserNotificationCenter* _unCenter;
	NSMutableDictionary* _latestAnalyticsForDevice;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PowerUIMLAudioAccessoryModelPredictor * predictor;                 //@synthesize predictor=_predictor - In the implementation block
@property (assign) BTSessionImplRef session;                                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> accessoryLog;                                 //@synthesize accessoryLog=_accessoryLog - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceArray;                                      //@synthesize deviceArray=_deviceArray - In the implementation block
@property (nonatomic,retain) NSLock * deviceArrayLock;                                          //@synthesize deviceArrayLock=_deviceArrayLock - In the implementation block
@property (retain) NSMutableDictionary * accessoryStates;                                       //@synthesize accessoryStates=_accessoryStates - In the implementation block
@property (nonatomic,retain) NSNumber * hardcodedTimeDelta;                                     //@synthesize hardcodedTimeDelta=_hardcodedTimeDelta - In the implementation block
@property (nonatomic,retain) NSNumber * hardcodedTimeBetweenUpdates;                            //@synthesize hardcodedTimeBetweenUpdates=_hardcodedTimeBetweenUpdates - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> btConnectionSemaphore;                      //@synthesize btConnectionSemaphore=_btConnectionSemaphore - In the implementation block
@property (nonatomic,retain) PowerUIWalletSignalMonitor * walletMonitor;                        //@synthesize walletMonitor=_walletMonitor - In the implementation block
@property (retain) NSMutableDictionary * acceptMessageFromRightBudForDevice;                    //@synthesize acceptMessageFromRightBudForDevice=_acceptMessageFromRightBudForDevice - In the implementation block
@property (retain) NSMutableDictionary * acceptMessageFromLeftBudForDevice;                     //@synthesize acceptMessageFromLeftBudForDevice=_acceptMessageFromLeftBudForDevice - In the implementation block
@property (retain) PowerUIBluetoothHandler * btHandler;                                         //@synthesize btHandler=_btHandler - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * unCenter;                               //@synthesize unCenter=_unCenter - In the implementation block
@property (assign,nonatomic) BOOL firstNotificationDisplayed;                                   //@synthesize firstNotificationDisplayed=_firstNotificationDisplayed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * latestAnalyticsForDevice;                    //@synthesize latestAnalyticsForDevice=_latestAnalyticsForDevice - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                          //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setString:(id)arg1 forPreferenceKeyPrefix:(id)arg2 andDevice:(id)arg3 ;
+(id)readNumberForPreferenceKeyPrefix:(id)arg1 andDevice:(id)arg2 ;
+(void)setNumber:(id)arg1 forPreferenceKeyPrefix:(id)arg2 andDevice:(id)arg3 ;
+(void)setArray:(id)arg1 forPreferenceKey:(id)arg2 ;
+(id)readArrayForPreferenceKey:(id)arg1 ;
+(id)readStringForPreferenceKeyPrefix:(id)arg1 andDevice:(id)arg2 ;
+(void)bulkDeleteDefaultsEntries:(id)arg1 ;
-(void)setUnCenter:(UNUserNotificationCenter *)arg1 ;
-(PowerUIMLAudioAccessoryModelPredictor *)predictor;
-(void)setPredictor:(PowerUIMLAudioAccessoryModelPredictor *)arg1 ;
-(void)setNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(id)firsUseNotificationRequest;
-(void)fullChargeDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)returnAccessoryStatusForDevice:(id)arg1 ;
-(void)getAvailableDevicesWithHandler:(/*^block*/id)arg1 ;
-(void)setFirstNotificationDisplayed:(BOOL)arg1 ;
-(void)setAccessoryLog:(NSObject*<OS_os_log>)arg1 ;
-(id)stringFromState:(unsigned long long)arg1 ;
-(BOOL)runUpdateForDevice:(BTDeviceImplRef)arg1 withHash:(id)arg2 ;
-(id)init;
-(NSDistributedNotificationCenter *)notificationCenter;
-(void)setBtConnectionSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)persistentlySetExpectedHash:(id)arg1 forDevice:(id)arg2 ;
-(void)startMockingBluetoothForFakeDevice:(id)arg1 ;
-(NSObject*<OS_os_log>)accessoryLog;
-(void)setDeviceArrayLock:(NSLock *)arg1 ;
-(NSMutableArray *)deviceArray;
-(void)client:(id)arg1 connectAndDisableOBCforDevice:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)stopMockingBluetooth;
-(BTSessionImplRef)session;
-(long long)secondsLeftInHourForDate:(id)arg1 ;
-(void)reportSessionMetricsForSide:(unsigned char)arg1 withTimeSpendAtLowerSoC:(unsigned short)arg2 timeSpentAtHigherSoC:(unsigned short)arg3 engagementEventsSinceLastReport:(unsigned char)arg4 underchargeEventsSinceLastReport:(unsigned char)arg5 chargingEventsSinceLastReport:(unsigned char)arg6 budSocAtLastEngagement:(unsigned char)arg7 successRatio:(unsigned short)arg8 ;
-(BOOL)runUpdateForDevice:(BTDeviceImplRef)arg1 withHash:(id)arg2 asInitialUpdate:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_semaphore>)btConnectionSemaphore;
-(void)setAccessoryStates:(NSMutableDictionary *)arg1 ;
-(void)clearLastActionForDevice:(id)arg1 ;
-(unsigned long long)sendTimeDeltaInSeconds:(unsigned)arg1 toAccessory:(BTDeviceImplRef)arg2 ;
-(BOOL)firstNotificationDisplayed;
-(void)setHardcodedTimeDelta:(NSNumber *)arg1 ;
-(PowerUIBluetoothHandler *)btHandler;
-(void)unfilteredDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setAcceptMessageFromRightBudForDevice:(NSMutableDictionary *)arg1 ;
-(PowerUIWalletSignalMonitor *)walletMonitor;
-(void)persistentlySetLastUnderchargeRecordedForPrediction:(id)arg1 forDevice:(id)arg2 ;
-(void)isSmartChargingCurrentlyEnabledForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)reportDailyMetrics;
-(NSXPCListener *)listener;
-(void)client:(id)arg1 setState:(unsigned long long)arg2 forDevice:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)setSession:(BTSessionImplRef)arg1 ;
-(void)fakeConnectionForDevice:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setDeviceArray:(NSMutableArray *)arg1 ;
-(void)persistentlySetLastSentDate:(id)arg1 forDevice:(id)arg2 ;
-(NSMutableDictionary *)accessoryStates;
-(void)setAcceptMessageFromLeftBudForDevice:(NSMutableDictionary *)arg1 ;
-(void)setBtHandler:(PowerUIBluetoothHandler *)arg1 ;
-(void)engageUntil:(id)arg1 forDevice:(id)arg2 overrideAllSignals:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)monitor:(id)arg1 maySuggestNewFullChargeDeadline:(id)arg2 ;
-(void)attachToBluetoothSession;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSMutableDictionary *)acceptMessageFromLeftBudForDevice;
-(void)setLatestAnalyticsForDevice:(NSMutableDictionary *)arg1 ;
-(void)client:(id)arg1 updateOBCDeadline:(id)arg2 forDevice:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)lastActionForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)persistentlySetStatusForDevice:(id)arg1 withCurrentState:(unsigned long long)arg2 withEnabled:(BOOL)arg3 withDisabledUntilDate:(id)arg4 withTemporarilyDisabled:(BOOL)arg5 ;
-(void)deleteRecordsForDevices:(id)arg1 ;
-(NSNumber *)hardcodedTimeBetweenUpdates;
-(id)defaultDateToDisableUntilGivenDate:(id)arg1 ;
-(NSMutableDictionary *)latestAnalyticsForDevice;
-(void)persistentlyHandleSeeingDevice:(id)arg1 ;
-(void)getStatusForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(UNUserNotificationCenter *)unCenter;
-(BOOL)setOBCState:(BOOL)arg1 forDevice:(id)arg2 ;
-(NSMutableDictionary *)acceptMessageFromRightBudForDevice;
-(void)setHardcodedTimeBetweenUpdates:(NSNumber *)arg1 ;
-(NSNumber *)hardcodedTimeDelta;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSLock *)deviceArrayLock;
-(void)recordBudMetricsLocallyForDevice:(id)arg1 withTimeSpendAtLowerSoC:(unsigned short)arg2 timeSpentAtHigherSoC:(unsigned short)arg3 engagementEventsSinceLastReport:(unsigned char)arg4 underchargeEventsSinceLastReport:(unsigned char)arg5 chargingEventsSinceLastReport:(unsigned char)arg6 budSocAtLastEngagement:(unsigned char)arg7 successRatio:(unsigned short)arg8 ;
-(void)setFakeConnectionStatusTo:(BOOL)arg1 ;
-(void)setWalletMonitor:(PowerUIWalletSignalMonitor *)arg1 ;
@end

