/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFSignpostable.h>
#import <libobjc.A.dylib/EDPersistenceDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/EDSearchableIndexDataSource.h>

@protocol EDSearchableIndexHookResponder;
@class EDPersistenceDatabase, NSString;

@interface EDSearchableIndexPersistence : NSObject <EFLoggable, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EDSearchableIndexDataSource> {

	os_unfair_lock_s _lastProcessedAttachmentIDLock;
	long long _lastProcessedAttachmentID;
	EDPersistenceDatabase* _database;
	id<EDSearchableIndexHookResponder> _hookResponder;

}

@property (nonatomic,__weak,readonly) id<EDSearchableIndexHookResponder> hookResponder;              //@synthesize hookResponder=_hookResponder - In the implementation block
@property (assign) long long lastProcessedAttachmentID;                                              //@synthesize lastProcessedAttachmentID=_lastProcessedAttachmentID - In the implementation block
@property (nonatomic,readonly) EDPersistenceDatabase * database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSString * additionalFilterClause; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(id)log;
+(id)signpostLog;
+(id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(id)searchableMessagesTableSchema;
+(id)searchableAttachmentsTableSchema;
+(id)searchableMessageTombstonesTableSchema;
+(id)searchableMessagesTableName;
-(unsigned long long)signpostID;
-(id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2 ;
-(NSString *)additionalFilterClause;
-(id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3 ;
-(void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 mailboxID:(long long)arg4 result:(/*^block*/id)arg5 ;
-(id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 hookResponder:(id)arg2 ;
-(EDPersistenceDatabase *)database;
-(id<EDSearchableIndexHookResponder>)hookResponder;
-(void)clearOrphanedSearchableMessagesFromDatabase;
-(id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3 ;
-(void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2 ;
-(id)updatesForSearchableIndex:(id)arg1 excludingIdentifiers:(id)arg2 count:(unsigned long long)arg3 cancelationToken:(id)arg4 ;
-(long long)indexingTypeForSearchableIndex:(id)arg1 item:(id)arg2 ;
-(void)searchableIndex:(id)arg1 assignIndexingType:(long long)arg2 forIdentifiers:(id)arg3 ;
-(id)verificationDataSamplesForSearchableIndex:(id)arg1 count:(unsigned long long)arg2 lastVerifiedMessageID:(long long)arg3 ;
-(id)searchableIndex:(id)arg1 invalidateItemsInTransactions:(id)arg2 ;
-(void)searchableIndex:(id)arg1 willRemoveIdentifiers:(id)arg2 type:(long long)arg3 ;
-(id)childIdentifiersToRemoveFromSearchableIndex:(id)arg1 whenRemovingParentIdentifiers:(id)arg2 ;
-(void)searchableIndex:(id)arg1 prepareToIndexAttachmentsForMessageWithIdentifier:(id)arg2 ;
-(id)_searchableIndexMessageIndexingTypes;
-(id)_messagesRequiringIndexingForType:(long long)arg1 excludingIdentifiers:(id)arg2 limit:(long long)arg3 ;
-(id)_identifiersForRemovedItemsUsingConnection:(id)arg1 ;
-(id)_identifiersForTombstonesOfType:(long long)arg1 connection:(id)arg2 ;
-(id)_attachmentDataForItemsRequiringIndexingExcludingIdentifiers:(id)arg1 limit:(unsigned long long)arg2 cancelationToken:(id)arg3 connection:(id)arg4 ;
-(id)_attachmentItemsFromAttachmentData:(id)arg1 limit:(unsigned long long)arg2 cancelationToken:(id)arg3 ;
-(BOOL)_canPerformIncrementalIndexForIdentifier:(id)arg1 indexingType:(long long)arg2 ;
-(void)_addTombstonesForIdentifiers:(id)arg1 type:(long long)arg2 connection:(id)arg3 ;
-(id)_assignIndexedItems:(id)arg1 transaction:(long long)arg2 connection:(id)arg3 ;
-(void)_assignTombstonesForIdentifiers:(id)arg1 type:(long long)arg2 transaction:(long long)arg3 connection:(id)arg4 ;
-(void)_purgeSpotlightTombstonesBeforeTransaction:(long long)arg1 connection:(id)arg2 ;
-(void)_removeIndexedIdentifiers:(id)arg1 connection:(id)arg2 ;
-(void)setLastProcessedAttachmentID:(long long)arg1 ;
-(id)_identifiersForAttachmentsInTransactions:(id)arg1 usingConnection:(id)arg2 ;
-(id)_messageIDTransactionIDDictionaryToVerifyUsingConnection:(id)arg1 count:(unsigned long long)arg2 lastVerifiedMessageID:(long long)arg3 ;
-(id)_assignIndexedItems:(id)arg1 connection:(id)arg2 query:(id)arg3 indexedBindingsGenerator:(/*^block*/id)arg4 ;
-(id)_assignIndexedAttachmentItems:(id)arg1 transaction:(long long)arg2 connection:(id)arg3 ;
-(id)_identifiersForDeletedMessagesUsingConnection:(id)arg1 ;
-(id)_identifiersForDeletedAttachmentsUsingConnection:(id)arg1 ;
-(long long)lastProcessedAttachmentID;
-(id)_identifiersForAttachmentsWithQuery:(id)arg1 usingConnection:(id)arg2 ;
@end

