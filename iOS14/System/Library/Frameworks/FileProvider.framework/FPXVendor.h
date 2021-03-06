/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPXVendor <FPXOperationService,FPXVendorObservation>
@required
-(void)_test_callFileProviderManagerAPIs:(/*^block*/id)arg1;
-(void)startProvidingItemAtURL:(id)arg1 readingOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)changeItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6;
-(void)providePlaceholderAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)identifierForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)itemForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)itemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)importDidFinishWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchVendorEndpoint:(/*^block*/id)arg1;
-(void)beginRequestWithDomain:(id)arg1 alternateContentsDictionary:(id)arg2 usesFPFS:(BOOL)arg3;
-(void)evictItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)itemChangedAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchOperationServiceEndpoint:(/*^block*/id)arg1;
-(void)bulkEvictItemsWithItemIDs:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchServicesForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dropDomainWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchCustomPushTopicsWithCompletionHandler:(/*^block*/id)arg1;
-(void)wakeForPushWithCompletionHandler:(/*^block*/id)arg1;
-(void)didChangeItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)valuesForAttributes:(id)arg1 forItemID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)URLForItemID:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setAlternateContentsURL:(id)arg1 forDocumentWithItemID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)didUpdateAlternateContentsDocumentForDocumentWithItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeTrashedItemsOlderThanDate:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)dumpInternalStateToTermDumper:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)indexOneBatchInDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)indexOneBatchInDomain:(id)arg1 fromAnchor:(id)arg2 toAnchor:(id)arg3 updatedItems:(id)arg4 deletedItems:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)dropIndexForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchCurrentIndexingAnchorForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dumpIndexStateForDomain:(id)arg1 toFileHandler:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)acknowledgeUserVisibleRootDidChangeForDomain:(id)arg1 urlWrapper:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)contentsForItemWithIdentifier:(id)arg1 version:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)updateExistingContents:(id)arg1 ofItemWithIdentifier:(id)arg2 existingVersion:(id)arg3 toVersion:(id)arg4 request:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)signalEnumeratorForMaterializedItemsWithCompletionHandler:(/*^block*/id)arg1;
-(void)trashItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

