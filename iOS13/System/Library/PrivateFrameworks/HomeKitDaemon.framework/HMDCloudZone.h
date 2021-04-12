/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCloudCache, CKRecordZone, HMDCloudGroup, NSString, CKRecordZoneSubscription, CKServerChangeToken, HMDBackingStoreCacheZone, CKRecordID;

@interface HMDCloudZone : HMFObject {

	BOOL _recordsAvailable;
	BOOL _decrypted;
	HMDCloudCache* _cache;
	CKRecordZone* _zone;
	HMDCloudGroup* _rootGroup;
	NSString* _subscriptionName;
	CKRecordZoneSubscription* _subscription;
	CKServerChangeToken* _serverChangeToken;
	HMDBackingStoreCacheZone* _backingStoreZone;

}

@property (nonatomic,retain) HMDBackingStoreCacheZone * backingStoreZone;                                                          //@synthesize backingStoreZone=_backingStoreZone - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudCache * cache;                                                                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSString * zoneRootRecordName; 
@property (nonatomic,retain) CKRecordZone * zone;                                                                                  //@synthesize zone=_zone - In the implementation block
@property (nonatomic,retain) HMDCloudGroup * rootGroup;                                                                            //@synthesize rootGroup=_rootGroup - In the implementation block
@property (nonatomic,readonly) CKRecordID * privateZoneRootRecordID; 
@property (getter=doesProcessChangeEvenIfDecryptionFails,nonatomic,readonly) BOOL processChangeEvenIfDecryptionFails; 
@property (assign,getter=hasRecordsAvaliable,nonatomic) BOOL recordsAvailable;                                                     //@synthesize recordsAvailable=_recordsAvailable - In the implementation block
@property (getter=hasServerTokenAvaliable,nonatomic,readonly) BOOL serverTokenAvaliable; 
@property (assign,getter=hasDecrypted,nonatomic) BOOL decrypted;                                                                   //@synthesize decrypted=_decrypted - In the implementation block
@property (nonatomic,readonly) NSString * owner; 
@property (nonatomic,retain) NSString * subscriptionName;                                                                          //@synthesize subscriptionName=_subscriptionName - In the implementation block
@property (nonatomic,retain) CKRecordZoneSubscription * subscription;                                                              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;                                                              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
+(id)shortDescription;
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(void)createZoneWithName:(id)arg1 rootRecordName:(id)arg2 subscriptionName:(id)arg3 owner:(id)arg4 cacheZone:(id)arg5 cloudCache:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)init;
-(CKRecordZone *)zone;
-(id)description;
-(NSString *)owner;
-(void)setCache:(HMDCloudCache *)arg1 ;
-(HMDCloudCache *)cache;
-(CKRecordZoneSubscription *)subscription;
-(void)setSubscription:(CKRecordZoneSubscription *)arg1 ;
-(id)shortDescription;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(HMDCloudGroup *)rootGroup;
-(void)setRootGroup:(HMDCloudGroup *)arg1 ;
-(void)setZone:(CKRecordZone *)arg1 ;
-(void)setDecrypted:(BOOL)arg1 ;
-(void)cloudRecordWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)markMigratedObjectsAsMigrated;
-(void)fetchMigratedObjects:(/*^block*/id)arg1 ;
-(NSString *)subscriptionName;
-(void)updateCloudRecord:(id)arg1 ;
-(id)cloudRecordWithObjectID:(id)arg1 ;
-(id)cloudRecordWithName:(id)arg1 ;
-(id)createCloudRecordWithObjectID:(id)arg1 recordName:(id)arg2 ;
-(BOOL)doesProcessChangeEvenIfDecryptionFails;
-(BOOL)isRootRecord:(id)arg1 ;
-(void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)zoneRootRecordName;
-(void)deleteCloudRecord:(id)arg1 ;
-(id)initWithBackingStoreCacheZone:(id)arg1 cloudCache:(id)arg2 ;
-(void)_initializeSubscription:(id)arg1 ;
-(void)_initializeServerChangeToken:(id)arg1 ;
-(void)setRecordsAvailable:(BOOL)arg1 ;
-(HMDBackingStoreCacheZone *)backingStoreZone;
-(void)cloudRecordWithNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cloudRecordWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)__cloudRecordWithObjectID:(id)arg1 ;
-(void)cloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CKRecordID *)privateZoneRootRecordID;
-(void)updateCloudRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCloudRecordNames:(id)arg1 ;
-(id)createCloudRecordWithFetchResult:(id)arg1 ;
-(void)addCloudRecord:(id)arg1 ownerID:(id)arg2 ;
-(BOOL)isRootCloudRecord:(id)arg1 ;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg1 ;
-(BOOL)hasServerTokenAvaliable;
-(void)deleteZone;
-(void)updateServerChangeToken:(id)arg1 ;
-(BOOL)hasRecordsAvaliable;
-(BOOL)hasDecrypted;
-(void)setSubscriptionName:(NSString *)arg1 ;
-(void)setBackingStoreZone:(HMDBackingStoreCacheZone *)arg1 ;
@end
