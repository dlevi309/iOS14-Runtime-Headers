/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdDebugServiceProtocol <NSObject>
@required
-(void)resetDupesAnalysis;
-(void)identifyAssetsWithInconsistentCloudState;
-(void)enqueuePrefetch;
-(void)asynchronousUnloadImageFilesForAssetWithObjectURI:(id)arg1 minimumFormat:(unsigned short)arg2 reply:(/*^block*/id)arg3;
-(void)recoverAssetsInInconsistentCloudState;
-(void)momentGenerationStatusWithReply:(/*^block*/id)arg1;
-(void)rebuildMomentsDeletingExistingMoments:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)rebuildHighlightsDeletingExistingHighlights:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)dumpMetadataForMomentsToPath:(id)arg1 reply:(/*^block*/id)arg2;
-(void)dumpMomentsMetadataToPath:(id)arg1 reply:(/*^block*/id)arg2;
-(void)deferredLogDumpWithFormat:(id)arg1 reply:(/*^block*/id)arg2;
-(void)dropSearchIndexWithReply:(/*^block*/id)arg1;
-(void)setSearchIndexPaused:(BOOL)arg1 reason:(id)arg2 reply:(/*^block*/id)arg3;
-(void)rebuildSearchIndexWithReply:(/*^block*/id)arg1;
-(void)rebuildCloudFeedWithReply:(/*^block*/id)arg1;
-(void)rebuildAllThumbnails;
-(void)getXPCTransactionStatusWithReply:(/*^block*/id)arg1;
-(void)getCPLStateWithReply:(/*^block*/id)arg1;
-(void)updateSiriVocabulary;
-(void)revertToOriginalWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2;
-(void)debugSidecarURLsWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2;
-(void)pruneAssetsWithUUID:(id)arg1 resourceTypes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)prefetchResourcesForMemories:(id)arg1 reply:(/*^block*/id)arg2;
-(void)prefetchResourcesForHighlights:(id)arg1 reply:(/*^block*/id)arg2;
-(void)prefetchResourcesWithMode:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)processRecentHighlightsWithReply:(/*^block*/id)arg1;
-(void)processUnprocessedMomentLocationsWithReply:(/*^block*/id)arg1;
-(void)updateHighlightTitlesWithReply:(/*^block*/id)arg1;
-(void)cleanupEmptyHighlightsWithReply:(/*^block*/id)arg1;
-(void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)snapshotJournalsForPayloadClassIDs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 reply:(/*^block*/id)arg3;
-(void)statusWithReply:(/*^block*/id)arg1;
-(void)clearPrefetchState;
-(void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(/*^block*/id)arg1;

@end

