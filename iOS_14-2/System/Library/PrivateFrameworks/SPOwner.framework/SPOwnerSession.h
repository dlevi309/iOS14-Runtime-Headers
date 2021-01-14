/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPTrackingAvoidanceServiceProtocol.h>
#import <SPOwner/SPOwnerSessionPrivateProtocol.h>

@protocol SPOwnerSessionXPCProtocol, OS_dispatch_queue, OS_dispatch_source;
@class NSSet, FMXPCServiceDescription, FMXPCSession, NSObject, NSOperationQueue, NSDictionary, NSDate, NSMutableDictionary, NSString;

@interface SPOwnerSession : NSObject <SPTrackingAvoidanceServiceProtocol, SPOwnerSessionPrivateProtocol> {

	/*^block*/id beaconAddedBlock;
	/*^block*/id beaconRemovedBlock;
	/*^block*/id beaconsChangedBlock;
	/*^block*/id latestLocationsUpdatedBlock;
	NSSet* _locationSources;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPOwnerSessionXPCProtocol> _proxy;
	id<SPOwnerSessionXPCProtocol> _userAgentProxy;
	NSSet* _allBeaconsCache;
	NSSet* _clientObservedBeacons;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _notificationQueue;
	id _beaconsChangedNotificationToken;
	id _tagSeparationBeaconsChangedNotificationToken;
	id _persistentConnectionBeaconsChangedNotificationToken;
	id _beaconEstimatedLocationChangedNotificationToken;
	NSDictionary* _locationCache;
	NSObject*<OS_dispatch_source> _locationFetchDispatchTimer;
	NSObject*<OS_dispatch_source> _connectionExpiryDispatchTimer;
	NSDate* _fetchLimit;
	NSMutableDictionary* _batteryStatusCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;                               //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPOwnerSessionXPCProtocol> proxy;                                        //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<SPOwnerSessionXPCProtocol> userAgentProxy;                               //@synthesize userAgentProxy=_userAgentProxy - In the implementation block
@property (nonatomic,retain) NSSet * allBeaconsCache;                                                    //@synthesize allBeaconsCache=_allBeaconsCache - In the implementation block
@property (nonatomic,retain) NSSet * clientObservedBeacons;                                              //@synthesize clientObservedBeacons=_clientObservedBeacons - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * notificationQueue;                                       //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (assign,nonatomic,__weak) id beaconsChangedNotificationToken;                                  //@synthesize beaconsChangedNotificationToken=_beaconsChangedNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) id tagSeparationBeaconsChangedNotificationToken;                     //@synthesize tagSeparationBeaconsChangedNotificationToken=_tagSeparationBeaconsChangedNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) id persistentConnectionBeaconsChangedNotificationToken;              //@synthesize persistentConnectionBeaconsChangedNotificationToken=_persistentConnectionBeaconsChangedNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) id beaconEstimatedLocationChangedNotificationToken;                  //@synthesize beaconEstimatedLocationChangedNotificationToken=_beaconEstimatedLocationChangedNotificationToken - In the implementation block
@property (nonatomic,retain) NSDictionary * locationCache;                                               //@synthesize locationCache=_locationCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> locationFetchDispatchTimer;                   //@synthesize locationFetchDispatchTimer=_locationFetchDispatchTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectionExpiryDispatchTimer;                //@synthesize connectionExpiryDispatchTimer=_connectionExpiryDispatchTimer - In the implementation block
@property (nonatomic,copy) NSDate * fetchLimit;                                                          //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * batteryStatusCache;                                   //@synthesize batteryStatusCache=_batteryStatusCache - In the implementation block
@property (nonatomic,copy) NSSet * locationSources;                                                      //@synthesize locationSources=_locationSources - In the implementation block
@property (nonatomic,copy) id beaconsChangedBlock; 
@property (nonatomic,copy) id beaconAddedBlock; 
@property (nonatomic,copy) id beaconRemovedBlock; 
@property (nonatomic,copy) id latestLocationsUpdatedBlock; 
@property (nonatomic,copy,readonly) NSSet * allBeacons; 
-(void)setNotificationQueue:(NSOperationQueue *)arg1 ;
-(void)setProxy:(id<SPOwnerSessionXPCProtocol>)arg1 ;
-(id<SPOwnerSessionXPCProtocol>)userAgentProxy;
-(void)_invalidate;
-(id)executeCommand:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)locationFetchDispatchTimer;
-(NSDate *)fetchLimit;
-(id<SPOwnerSessionXPCProtocol>)proxy;
-(void)finishBeaconFuture:(id)arg1 beaconUUID:(id)arg2 ;
-(id)init;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(void)executeCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)beaconEstimatedLocationChangedNotificationToken;
-(void)setBeaconsChangedBlock:(id)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(void)setBeaconsChangedNotificationToken:(id)arg1 ;
-(id)persistentConnectionBeaconsChangedNotificationToken;
-(void)removeBeacon:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setConnectionExpiryDispatchTimerWithInterval:(double)arg1 ;
-(void)setLocationFetchDispatchTimerWithInterval:(double)arg1 ;
-(NSMutableDictionary *)batteryStatusCache;
-(void)setClientObservedBeacons:(NSSet *)arg1 ;
-(NSSet *)allBeacons;
-(oneway void)forceUpdateKeyAlignmentRecordForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)remoteInterface;
-(void)startRefreshingBeacons:(id)arg1 ;
-(FMXPCSession *)session;
-(void)setBeaconAddedBlock:(id)arg1 ;
-(NSOperationQueue *)notificationQueue;
-(void)setLatestLocationsUpdatedBlock:(id)arg1 ;
-(void)setLocationSources:(NSSet *)arg1 ;
-(void)locationsForBeacons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSSet *)allBeaconsCache;
-(void)unacceptedBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(void)setAllBeaconsCache:(NSSet *)arg1 ;
-(NSSet *)locationSources;
-(id)latestLocationsUpdatedBlock;
-(id)beaconsChangedBlock;
-(oneway void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPersistentConnectionBeaconsChangedNotificationToken:(id)arg1 ;
-(id)beaconsChangedNotificationToken;
-(void)connectionExpiryTimerFired;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setFetchLimit:(NSDate *)arg1 ;
-(oneway void)beaconForUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBeaconRemovedBlock:(id)arg1 ;
-(oneway void)forceDistributeKeysWithCompletion:(/*^block*/id)arg1 ;
-(id)beaconRemovedBlock;
-(void)addBeaconChangedListener:(id)arg1 beaconUUID:(id)arg2 taskName:(id)arg3 commandIdentifier:(id)arg4 commandIssueDate:(id)arg5 ;
-(void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLocationCache:(NSDictionary *)arg1 ;
-(void)startRefreshing;
-(void)allBeaconsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setBatteryStatusCache:(NSMutableDictionary *)arg1 ;
-(void)setUserAgentProxy:(id<SPOwnerSessionXPCProtocol>)arg1 ;
-(void)updateConnectionExpiryDispatchTimerWithBeacons:(id)arg1 ;
-(NSSet *)clientObservedBeacons;
-(void)setConnectionExpiryDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setTagSeparationBeaconsChangedNotificationToken:(id)arg1 ;
-(void)updateAllBeaconLocations;
-(void)locationFetchTimerFired;
-(void)beaconStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)updateAllBeacons;
-(NSObject*<OS_dispatch_source>)connectionExpiryDispatchTimer;
-(void)stopRefreshing;
-(id)beaconAddedBlock;
-(void)setBeaconEstimatedLocationChangedNotificationToken:(id)arg1 ;
-(NSDictionary *)locationCache;
-(id)tagSeparationBeaconsChangedNotificationToken;
-(void)dealloc;
-(void)waitForBeaconStoreAvailableWithCompletion:(/*^block*/id)arg1 ;
-(void)setLocationFetchDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end
