/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCLocalItem.h>
#import <libobjc.A.dylib/BRCTopLevelShareable.h>

@class NSString, BRCLocalVersion, BRCDesiredVersion, NSMutableSet, NSData, BRCAliasItem, BRCDirectoryItem, NSError, NSSet, NSDictionary;

@interface BRCDocumentItem : BRCLocalItem <BRCTopLevelShareable> {

	BRCLocalVersion* _currentVersion;
	BRCDesiredVersion* _desiredVersion;
	NSMutableSet* _liveConflictLoserEtags;
	NSMutableSet* _resolvedConflictLoserEtags;
	BOOL _shouldAutomaticallyDownloadThumbnail;
	NSData* _liveThumbnailSignature;

}

@property (nonatomic,readonly) BRCAliasItem * asBRAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) BOOL hasLocalContent; 
@property (nonatomic,readonly) BOOL isEvictable; 
@property (nonatomic,readonly) BOOL isAutomaticallyEvictable; 
@property (nonatomic,readonly) BOOL isVisibleIniCloudDrive; 
@property (nonatomic,readonly) BOOL isDownloadRequested; 
@property (nonatomic,readonly) BOOL isDownloadRequestedForThumbnail; 
@property (nonatomic,readonly) BOOL shouldBeGreedy; 
@property (nonatomic,readonly) BOOL shouldHaveThumbnail; 
@property (nonatomic,readonly) BOOL shouldTransferThumbnail; 
@property (nonatomic,readonly) unsigned queryItemStatus; 
@property (nonatomic,readonly) unsigned downloadStatus; 
@property (nonatomic,readonly) BRCLocalVersion * currentVersion;                       //@synthesize currentVersion=_currentVersion - In the implementation block
@property (nonatomic,readonly) BRCDesiredVersion * desiredVersion;                     //@synthesize desiredVersion=_desiredVersion - In the implementation block
@property (nonatomic,readonly) NSError * uploadError; 
@property (nonatomic,retain) NSSet * liveConflictLoserEtags;                           //@synthesize liveConflictLoserEtags=_liveConflictLoserEtags - In the implementation block
@property (nonatomic,readonly) NSSet * resolvedConflictLoserEtags;                     //@synthesize resolvedConflictLoserEtags=_resolvedConflictLoserEtags - In the implementation block
@property (nonatomic,readonly) NSDictionary * conflictLoserState; 
@property (nonatomic,readonly) BOOL shouldAutomaticallyDownloadThumbnail;              //@synthesize shouldAutomaticallyDownloadThumbnail=_shouldAutomaticallyDownloadThumbnail - In the implementation block
@property (nonatomic,retain) NSData * liveThumbnailSignature;                          //@synthesize liveThumbnailSignature=_liveThumbnailSignature - In the implementation block
@property (nonatomic,readonly) NSString * unsaltedBookmarkData; 
+(BOOL)supportsSecureCoding;
+(BOOL)isDocumentAutomaticallyEvictableWithExtension:(id)arg1 ;
+(BOOL)isDocumentAutomaticallyEvictableWithName:(id)arg1 ;
+(id)reverseAliasEnumeratorWithUnsaltedBookmarkData:(id)arg1 session:(id)arg2 ;
+(id)anyReverseAliasWithUnsaltedBookmarkData:(id)arg1 inAppLibrary:(id)arg2 ;
+(id)reverseAliasEnumeratorWithRelativePath:(id)arg1 ;
+(id)anyReverseAliasInAppLibrary:(id)arg1 toRelativePath:(id)arg2 ;
-(BOOL)isFault;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPackage;
-(BRCLocalVersion *)currentVersion;
-(BOOL)isDownloadRequested;
-(void)markDead;
-(BOOL)isDocument;
-(NSError *)uploadError;
-(unsigned)downloadStatus;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)markLatestSyncRequestAcknowledgedInZone:(id)arg1 ;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(BRCDocumentItem *)asDocument;
-(BRCDesiredVersion *)desiredVersion;
-(NSSet *)liveConflictLoserEtags;
-(BOOL)isDownloadRequestedForThumbnail;
-(BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2 ;
-(BOOL)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)reverseAliasEnumerator;
-(BOOL)hasShareIDAndIsOwnedByMe;
-(BOOL)isShareableItem;
-(id)asShareableItem;
-(BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(id)aliasItemID;
-(void)learnItemID:(id)arg1 serverItem:(id)arg2 path:(id)arg3 markLost:(BOOL)arg4 ;
-(void)markNeedsUploadOrSyncingUp;
-(BOOL)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2 ;
-(BOOL)updateXattrInfoFromPath:(id)arg1 error:(id*)arg2 ;
-(id)anyReverseAliasInAppLibrary:(id)arg1 ;
-(id)syncContextUsedForTransfers;
-(void)handleUnknownItemError;
-(BOOL)shouldHaveThumbnail;
-(BOOL)shouldTransferThumbnail;
-(void)setLiveConflictLoserEtags:(NSSet *)arg1 ;
-(NSSet *)resolvedConflictLoserEtags;
-(NSData *)liveThumbnailSignature;
-(void)learnThumbnailSignatureFromLiveVersion:(id)arg1 ;
-(void)stageFaultForCreation:(BOOL)arg1 name:(id)arg2 size:(id)arg3 isPackage:(BOOL)arg4 ;
-(void)markItemForgottenByServer;
-(void)markForceNeedsSyncUp;
-(id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2 ;
-(id)_initWithLocalItem:(id)arg1 ;
-(id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id*)arg4 ;
-(BOOL)_isInterestingUpdateForNotifs;
-(id)setOfAppLibraryIDsWithReverseAliases;
-(unsigned long long)diffAgainstLocalItem:(id)arg1 ;
-(BOOL)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2 ;
-(void)markForceUpload;
-(void)updateVersionMetadataFromServerItem:(id)arg1 preventVersionDiffs:(BOOL)arg2 ;
-(void)markNeedsReading;
-(void)clearFromStage;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1 ;
-(id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2 ;
-(void)markLatestSyncRequestRejectedInZone:(id)arg1 ;
-(void)markLiveFromStageWithPath:(id)arg1 ;
-(id)contentsRecordID;
-(BOOL)isEvictable;
-(BOOL)hasLocalContent;
-(unsigned)queryItemStatus;
-(id)_filenameOverrideForPath:(id)arg1 ;
-(void)_updateLiveConflictLoserFromFSAtPath:(id)arg1 ;
-(int)updateDesiredVersionWithServerItem:(id)arg1 diffs:(unsigned long long)arg2 options:(unsigned)arg3 needsSave:(BOOL*)arg4 ;
-(void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg1 ;
-(void)stageFaultForCreation:(BOOL)arg1 serverItem:(id)arg2 ;
-(void)removeLiveConflictLoserEtag:(id)arg1 ;
-(void)addResolvedConflictLoserEtag:(id)arg1 ;
-(void)clearVersionSignatures:(unsigned long long)arg1 isPackage:(BOOL)arg2 ;
-(NSDictionary *)conflictLoserState;
-(BOOL)shouldAutomaticallyDownloadThumbnail;
-(void)_updateReadThrottleIfNeededForRowID:(unsigned long long)arg1 forCreation:(BOOL)arg2 ;
-(void)_updateRecursivePropertiesInDB:(id)arg1 dbRowID:(unsigned long long)arg2 diffs:(unsigned long long)arg3 ;
-(BOOL)_nukePackageItemsFromDB:(id)arg1 ;
-(void)_updateUploadJobIfNeededWithDiffs:(unsigned long long)arg1 ;
-(BOOL)_needsSyncBubbleRecomputeForError:(id)arg1 origError:(id)arg2 ;
-(int)updateDesiredVersionWithServerItem:(id)arg1 options:(unsigned)arg2 needsSave:(BOOL*)arg3 ;
-(BOOL)isAutomaticallyEvictable;
-(BOOL)isVisibleIniCloudDrive;
-(BOOL)shouldBeGreedy;
-(void)clearDesiredVersion;
-(void)forceiWorkConflictEtag:(id)arg1 ;
-(void)forceVersionConflictByClearkingCKInfo;
-(void)forceiWorkSharingInfoResend;
-(void)appDidResolveConflictLoserWithEtag:(id)arg1 ;
-(void)markUploadedWithRecord:(id)arg1 ;
-(void)markOverQuotaWithError:(id)arg1 ;
-(BOOL)contentRecordNeedsForceAllFieldsWhenDeadInServerTruth:(BOOL)arg1 ;
-(void)setLiveThumbnailSignature:(NSData *)arg1 ;
-(id)baseContentsRecord;
@end
