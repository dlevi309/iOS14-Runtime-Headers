/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSString, NSPersistentStore, NSDictionary;

@interface PFUbiquityPeerRangeCache : NSObject {

	NSMutableDictionary* _cachedRanges;
	NSMutableDictionary* _allEntityRanges;
	NSMutableDictionary* _translatedGlobalIDs;
	NSString* _localPeerID;
	NSString* _storeName;
	NSPersistentStore* _privateStore;
	BOOL _cachedStorePeerRanges;

}

@property (nonatomic,readonly) NSString * localPeerID;                          //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                            //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * privateStore;                //@synthesize privateStore=_privateStore - In the implementation block
@property (nonatomic,readonly) NSDictionary * translatedGlobalIDs;              //@synthesize translatedGlobalIDs=_translatedGlobalIDs - In the implementation block
+(void)initialize;
+(long long)integerFromPrimaryKeyString:(id)arg1 ;
+(unsigned long long)peerRangeStartForPrimaryKey:(unsigned long long)arg1 ;
-(NSString *)storeName;
-(BOOL)cachePeerRanges:(id*)arg1 ;
-(id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)arg1 error:(id*)arg2 ;
-(BOOL)refreshPeerRangeCache:(id*)arg1 ;
-(NSString *)localPeerID;
-(id)description;
-(id)createGlobalObjectIDForManagedObjectID:(id)arg1 ;
-(BOOL)cacheSQLCorePeerRange:(id)arg1 error:(id*)arg2 ;
-(id)cachedRangeForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3 ;
-(id)cachedRangeForLocalPrimaryKey:(unsigned long long)arg1 ofEntityNamed:(id)arg2 ;
-(id)createMapOfManagedObjectIDsForGlobalIDs:(id)arg1 count:(long long)arg2 error:(id*)arg3 ;
-(unsigned long long)localPrimaryKeyForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3 ;
-(NSDictionary *)translatedGlobalIDs;
-(id)describeCaches;
-(id)describeCachesVerbose;
-(id)initWithPrivateStore:(id)arg1 storeName:(id)arg2 andLocalPeerID:(id)arg3 ;
-(NSPersistentStore *)privateStore;
-(void)dealloc;
@end

