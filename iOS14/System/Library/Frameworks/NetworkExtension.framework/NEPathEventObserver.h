/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEPathEventObserver : NSObject {

	network_config_cellular_blocked_observer_sRef _cellBlockedObserver;
	network_config_cellular_blocked_observer_sRef _cellFailedObserver;
	network_config_cellular_blocked_observer_sRef _wifiBlockedObserver;
	/*^block*/id _eventHandler;

}

@property (assign) network_config_cellular_blocked_observer_sRef cellBlockedObserver;              //@synthesize cellBlockedObserver=_cellBlockedObserver - In the implementation block
@property (assign) network_config_cellular_blocked_observer_sRef cellFailedObserver;               //@synthesize cellFailedObserver=_cellFailedObserver - In the implementation block
@property (assign) network_config_cellular_blocked_observer_sRef wifiBlockedObserver;              //@synthesize wifiBlockedObserver=_wifiBlockedObserver - In the implementation block
@property (copy) id eventHandler;                                                                  //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)init;
-(network_config_cellular_blocked_observer_sRef)cellFailedObserver;
-(void)setWifiBlockedObserver:(network_config_cellular_blocked_observer_sRef)arg1 ;
-(void)setCellBlockedObserver:(network_config_cellular_blocked_observer_sRef)arg1 ;
-(void)setCellFailedObserver:(network_config_cellular_blocked_observer_sRef)arg1 ;
-(id)stringForEvent:(long long)arg1 ;
-(network_config_cellular_blocked_observer_sRef)wifiBlockedObserver;
-(id)initWithQueue:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
-(void)handleEvent:(long long)arg1 forPID:(id)arg2 UUID:(id)arg3 ;
-(network_config_cellular_blocked_observer_sRef)cellBlockedObserver;
-(void)cancel;
-(void)dealloc;
@end

