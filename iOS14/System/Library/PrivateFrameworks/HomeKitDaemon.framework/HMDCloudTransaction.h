/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMFOSTransaction, NSUUID, HMDCloudZone, CKServerChangeToken, NSArray, HMDCloudZoneChange, HMDCloudChange, CKRecordID;

@interface HMDCloudTransaction : HMFObject {

	BOOL _needConflictResolution;
	BOOL _iCloudSwitchStateEnabled;
	BOOL _temporaryCache;
	BOOL _zoneHasNoLocalData;
	BOOL _createZone;
	BOOL _zoneWasCreated;
	BOOL _deleteZone;
	BOOL _zoneWasDeleted;
	HMFOSTransaction* _osTransaction;
	NSUUID* _identifier;
	HMDCloudZone* _cloudZone;
	CKServerChangeToken* _updatedServerChangeToken;
	NSArray* _recordsToSave;
	NSArray* _recordsToDelete;
	unsigned long long _transactionType;
	HMDCloudZoneChange* _cloudZoneChange;
	HMDCloudChange* _homeDataChange;

}

@property (assign,nonatomic) unsigned long long transactionType;                                         //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,retain) HMDCloudZoneChange * cloudZoneChange;                                       //@synthesize cloudZoneChange=_cloudZoneChange - In the implementation block
@property (nonatomic,readonly) NSArray * objectChanges; 
@property (nonatomic,retain) HMDCloudChange * homeDataChange;                                            //@synthesize homeDataChange=_homeDataChange - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudZone * cloudZone;                                            //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * osTransaction;                                           //@synthesize osTransaction=_osTransaction - In the implementation block
@property (nonatomic,readonly) CKRecordID * privateZoneRootRecordID; 
@property (nonatomic,readonly) NSArray * allTransactionStoreRowIDs; 
@property (nonatomic,readonly) NSArray * processedTransactionStoreRowIDs; 
@property (nonatomic,readonly) BOOL decryptionFailed; 
@property (nonatomic,readonly) BOOL encryptionFailed; 
@property (nonatomic,readonly) BOOL controllerIdentifierChanged; 
@property (assign,nonatomic) BOOL needConflictResolution;                                                //@synthesize needConflictResolution=_needConflictResolution - In the implementation block
@property (assign,nonatomic) BOOL iCloudSwitchStateEnabled;                                              //@synthesize iCloudSwitchStateEnabled=_iCloudSwitchStateEnabled - In the implementation block
@property (getter=isLegacyTransaction,nonatomic,readonly) BOOL legacyTransaction; 
@property (getter=isMetadataTransaction,nonatomic,readonly) BOOL metadataTransaction; 
@property (getter=isHomeManagerTransaction,nonatomic,readonly) BOOL homeManagerTransaction; 
@property (getter=isHomeTransaction,nonatomic,readonly) BOOL homeTransaction; 
@property (nonatomic,retain) CKServerChangeToken * updatedServerChangeToken;                             //@synthesize updatedServerChangeToken=_updatedServerChangeToken - In the implementation block
@property (getter=isTemporaryCache,nonatomic,readonly) BOOL temporaryCache;                              //@synthesize temporaryCache=_temporaryCache - In the implementation block
@property (nonatomic,readonly) BOOL zoneHasNoLocalData;                                                  //@synthesize zoneHasNoLocalData=_zoneHasNoLocalData - In the implementation block
@property (assign,getter=shouldCreateZone,nonatomic) BOOL createZone;                                    //@synthesize createZone=_createZone - In the implementation block
@property (assign,getter=wasZoneCreated,nonatomic) BOOL zoneWasCreated;                                  //@synthesize zoneWasCreated=_zoneWasCreated - In the implementation block
@property (assign,getter=shouldDeleteZone,nonatomic) BOOL deleteZone;                                    //@synthesize deleteZone=_deleteZone - In the implementation block
@property (assign,getter=wasZoneDeleted,nonatomic) BOOL zoneWasDeleted;                                  //@synthesize zoneWasDeleted=_zoneWasDeleted - In the implementation block
@property (nonatomic,readonly) NSArray * recordsToSave;                                                  //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,readonly) NSArray * recordsToDelete;                                                //@synthesize recordsToDelete=_recordsToDelete - In the implementation block
@property (nonatomic,readonly) BOOL hasValidChanges; 
@property (readonly) BOOL doRecordsExistInCache; 
+(id)shortDescription;
-(id)init;
-(void)setTransactionType:(unsigned long long)arg1 ;
-(id)shortDescription;
-(id)description;
-(NSArray *)recordsToSave;
-(NSUUID *)identifier;
-(unsigned long long)transactionType;
-(HMDCloudZone *)cloudZone;
-(void)setCloudZone:(HMDCloudZone *)arg1 ;
-(NSArray *)allTransactionStoreRowIDs;
-(BOOL)hasValidChanges;
-(BOOL)decryptionFailed;
-(id)changeWithObjectID:(id)arg1 ;
-(id)cachedCloudRecordWithObjectID:(id)arg1 ;
-(BOOL)doRecordsExistInCache;
-(id)changeWithRecordName:(id)arg1 ;
-(BOOL)isTemporaryCache;
-(BOOL)encryptionFailed;
-(NSArray *)processedTransactionStoreRowIDs;
-(void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addChangeWithObjectChange:(id)arg1 ;
-(void)addChangeWithRecord:(id)arg1 ;
-(void)addChangeWithDeletedRecordID:(id)arg1 ;
-(void)loadCloudRecordsAndDetermineDeletesFromCache:(/*^block*/id)arg1 ;
-(BOOL)moreChangesToProcess;
-(void)setAllChangedAsProcessed;
-(void)removeChangeWithObjectID:(id)arg1 ;
-(void)fetchBatchToUpload:(/*^block*/id)arg1 ;
-(void)setSaveAsProcessedWithRecord:(id)arg1 ;
-(void)resetRecordWithRecordID:(id)arg1 ;
-(void)setDeleteAsProcessedWithRecordID:(id)arg1 ;
-(NSArray *)objectChanges;
-(BOOL)controllerIdentifierChanged;
-(CKRecordID *)privateZoneRootRecordID;
-(BOOL)zoneHasNoLocalData;
-(BOOL)isHomeManagerTransaction;
-(BOOL)isHomeTransaction;
-(void)setZoneWasDeleted:(BOOL)arg1 ;
-(void)setUpdatedServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setZoneWasCreated:(BOOL)arg1 ;
-(BOOL)shouldDeleteZone;
-(BOOL)shouldCreateZone;
-(void)setNeedConflictResolution:(BOOL)arg1 ;
-(BOOL)wasZoneCreated;
-(BOOL)needConflictResolution;
-(id)initWithType:(unsigned long long)arg1 temporaryCache:(BOOL)arg2 ;
-(void)updateCloudZone:(id)arg1 ;
-(void)setICloudSwitchStateEnabled:(BOOL)arg1 ;
-(BOOL)iCloudSwitchStateEnabled;
-(BOOL)doesRecordExistInCacheWithObjectID:(id)arg1 ;
-(BOOL)doesRecordExistWithObjectID:(id)arg1 ;
-(void)setOsTransaction:(HMFOSTransaction *)arg1 ;
-(void)setDeleteZone:(BOOL)arg1 ;
-(void)updateCloudCache;
-(id)replayTransaction:(id)arg1 stagedTransaction:(id)arg2 ;
-(BOOL)isLegacyTransaction;
-(void)setCreateZone:(BOOL)arg1 ;
-(BOOL)wasZoneDeleted;
-(id)initWithType:(unsigned long long)arg1 temporaryCache:(BOOL)arg2 noLocalData:(BOOL)arg3 ;
-(void)loadObjectChanges;
-(HMDCloudZoneChange *)cloudZoneChange;
-(void)setCloudZoneChange:(HMDCloudZoneChange *)arg1 ;
-(CKServerChangeToken *)updatedServerChangeToken;
-(HMFOSTransaction *)osTransaction;
-(BOOL)isMetadataTransaction;
-(NSArray *)recordsToDelete;
-(HMDCloudChange *)homeDataChange;
-(void)setHomeDataChange:(HMDCloudChange *)arg1 ;
@end
