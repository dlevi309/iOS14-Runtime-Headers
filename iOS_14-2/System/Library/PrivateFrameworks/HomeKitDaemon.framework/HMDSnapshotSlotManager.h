/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDSnapshotFile, NSMapTable, HMDAccessory, NSString, NSObject, HMFMessageDispatcher, NSMutableArray, HMDNotificationRegistration, NSDictionary;

@interface HMDSnapshotSlotManager : HMFObject <HMFLogging> {

	NSUUID* _uniqueIdentifier;
	HMDSnapshotFile* _mostRecentSnapshot;
	NSMapTable* _snapshotSlots;
	HMDAccessory* _accessory;
	NSString* _logID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSString* _imageCacheDirectory;
	NSMutableArray* _filesToCleanup;
	HMDNotificationRegistration* _notificationRegistration;

}

@property (retain) HMDSnapshotFile * mostRecentSnapshot;                                            //@synthesize mostRecentSnapshot=_mostRecentSnapshot - In the implementation block
@property (nonatomic,readonly) NSMapTable * snapshotSlots;                                          //@synthesize snapshotSlots=_snapshotSlots - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                                    //@synthesize logID=_logID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                          //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                  //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,readonly) NSString * imageCacheDirectory;                                      //@synthesize imageCacheDirectory=_imageCacheDirectory - In the implementation block
@property (nonatomic,readonly) NSMutableArray * filesToCleanup;                                     //@synthesize filesToCleanup=_filesToCleanup - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;              //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy,readonly) NSDictionary * encodedMostRecentSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)logID;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_handleProcessStateChange:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)registerForMessages;
-(HMDSnapshotFile *)mostRecentSnapshot;
-(void)setMostRecentSnapshot:(HMDSnapshotFile *)arg1 ;
-(void)handleProcessStateChange:(id)arg1 ;
-(HMDNotificationRegistration *)notificationRegistration;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 imageCacheDirectory:(id)arg3 logID:(id)arg4 uniqueIdentifier:(id)arg5 msgDispatcher:(id)arg6 ;
-(void)handleReleaseSnapshot:(id)arg1 ;
-(NSString *)imageCacheDirectory;
-(id)createSlotForSnapshotFile:(id)arg1 requestMessages:(id)arg2 updateGenerationCounter:(BOOL)arg3 ;
-(NSDictionary *)encodedMostRecentSnapshot;
-(id)encodedMostRecentSnapshotForMessage:(id)arg1 ;
-(void)backboardServicesRelaunched:(id)arg1 ;
-(void)setupMostRecentSnapshot;
-(NSMutableArray *)filesToCleanup;
-(id)findMostRecentSnapshot;
-(NSMapTable *)snapshotSlots;
-(void)_updateMostRecentSnapshot:(id)arg1 updateGenerationCounter:(BOOL)arg2 ;
-(BOOL)shouldUpdateMostRecentSnapshotWithSnapshot:(id)arg1 ;
@end
