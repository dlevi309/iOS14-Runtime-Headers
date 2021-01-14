/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class QLSqliteDatabase, NSString, FPItemManager;

@interface QLCacheIndexDatabase : NSObject {

	QLSqliteDatabase* _database;
	NSString* _databasePath;
	unsigned long long _maxThumbnailLifeTime;
	FPItemManager* _itemManager;

}

@property (readonly) unsigned long long maxThumbnailLifeTime;              //@synthesize maxThumbnailLifeTime=_maxThumbnailLifeTime - In the implementation block
@property (readonly) unsigned long long fileEntryCount; 
@property (readonly) unsigned long long thumbnailCount; 
@property (readonly) QLSqliteDatabase * database;                          //@synthesize database=_database - In the implementation block
@property (readonly) unsigned long long reserveBufferCount; 
@property (readonly) unsigned long long reserveBufferSize; 
@property (retain) FPItemManager * itemManager;                            //@synthesize itemManager=_itemManager - In the implementation block
-(void)do:(/*^block*/id)arg1 ;
-(void)endTransaction;
-(BOOL)beginTransaction;
-(void)open;
-(void)save;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)isValid;
-(FPItemManager *)itemManager;
-(void)_createTables;
-(void)checkpoint;
-(void)reset;
-(void)setItemManager:(FPItemManager *)arg1 ;
-(QLSqliteDatabase *)database;
-(BOOL)doesExist;
-(unsigned long long)_cacheIdForFileIdentifier:(id)arg1 createVersion:(id*)arg2 ;
-(id)removeAllThumbnailsForCacheId:(unsigned long long)arg1 ;
-(BOOL)add:(unsigned long long)arg1 blobInfosStartingAtColumn:(unsigned long long)arg2 ofSteppedStatement:(sqlite3_stmtRef)arg3 toArray:(id)arg4 ;
-(unsigned long long)thumbnailCount;
-(id)_removeThumbnailsFromStatement:(sqlite3_stmtRef)arg1 ;
-(id)removeThumbnailsOlderThanDate:(id)arg1 ;
-(id)batchOfFileProviderItemsStartingAtRowId:(unsigned long long)arg1 endingAtRowId:(unsigned long long*)arg2 ;
-(void)removeUbiquitousFilesWithRowids:(id)arg1 ;
-(id)removeThumbnailsWithCacheIds:(id)arg1 ;
-(id)batchOfRegularItemsStartingAtRowId:(unsigned long long)arg1 endingAtRowId:(unsigned long long*)arg2 ;
-(void)removeBasicFilesWithRowids:(id)arg1 ;
-(id)allReservedBuffers;
-(id)lastCrapWithDate:(id*)arg1 ;
-(id)itemsGroupedByProviderDomain:(id)arg1 ;
-(void)updateHitCount:(id)arg1 forFileIdentifier:(id)arg2 ;
-(unsigned long long)insertOrUpdateThumbnailWithVersionedFileIdentifier:(id)arg1 shouldInvalidAllThumbnailSizes:(BOOL*)arg2 added:(BOOL*)arg3 ;
-(BOOL)getBlobInfoForCacheId:(unsigned long long)arg1 size:(float)arg2 iconMode:(unsigned char)arg3 badgeType:(unsigned long long)arg4 iconVariant:(long long)arg5 interpolationQuality:(int)arg6 externalGeneratorDataHash:(unsigned long long)arg7 bitmapDataBlobInfo:(id*)arg8 plistBufferBlobInfo:(id*)arg9 ;
-(BOOL)insertOrUpdateImageDataForCacheId:(unsigned long long)arg1 size:(float)arg2 iconMode:(unsigned char)arg3 badgeType:(unsigned long long)arg4 iconVariant:(long long)arg5 interpolationQuality:(int)arg6 width:(unsigned long long)arg7 height:(unsigned long long)arg8 bitsPerComponent:(unsigned long long)arg9 bitsPerPixel:(unsigned long long)arg10 bytesPerRow:(unsigned long long)arg11 bitmapInfo:(unsigned)arg12 bitmapDataBlobInfo:(id)arg13 metadataBlobInfo:(id)arg14 flavor:(int)arg15 contentRect:(CGRect)arg16 externalGeneratorDataHash:(unsigned long long)arg17 lastHitDate:(id)arg18 ;
-(id)removeThumbnailForFileIdentifier:(id)arg1 ;
-(id)removePercentageOldestThumbnails:(unsigned long long)arg1 ;
-(id)removeOldThumbnails;
-(id)removeThumbnailsForDeletedFiles;
-(id)removeFilesWithFileInfo:(id)arg1 ;
-(id)removeFilesFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1 ;
-(BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg1 ;
-(id)queryCacheForFileRequests:(id)arg1 ;
-(id)enumeratorForAllUbiquitousFiles:(BOOL)arg1 withExtraInfo:(BOOL)arg2 ;
-(unsigned long long)sizeSumOfThumbnailsOlderThanDate:(id)arg1 ;
-(id)allBuffersIncludingReserved:(BOOL)arg1 ;
-(void)addReservedBufferWithBlobInfo:(id)arg1 ;
-(BOOL)removeReservedBufferWithBlobInfo:(id)arg1 ;
-(unsigned long long)reserveBufferCount;
-(unsigned long long)reserveBufferSize;
-(void)_deleteAllTables;
-(unsigned long long)fileEntryCount;
-(void)noteRemoteThumbnailMissingForItems:(id)arg1 ;
-(void)noteRemoteThumbnailPresentForItems:(id)arg1 ;
-(id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg1 ;
-(unsigned long long)maxThumbnailLifeTime;
@end
