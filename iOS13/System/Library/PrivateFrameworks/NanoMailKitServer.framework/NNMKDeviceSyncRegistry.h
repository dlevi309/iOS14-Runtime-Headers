/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@class NSString, NSNumber, NSDate, NNMKSQLiteConnection;

@interface NNMKDeviceSyncRegistry : NSObject {

	BOOL _isMessagesSyncSuspendedByConnectivity;
	BOOL _organizeByThread;
	BOOL _protectedContentChannelSupported;
	BOOL _recreatedFromScratch;
	NSString* _path;
	unsigned long long _fullSyncVersion;
	NSNumber* _supportsWebKit;
	double _deviceScreenWidth;
	double _deviceScreenScale;
	NSDate* _disconnectedSince;
	unsigned long long _currentDatabaseSchemaVersion;
	NNMKSQLiteConnection* _database;

}

@property (nonatomic,retain) NNMKSQLiteConnection * database;                              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSString * path;                                            //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) unsigned long long fullSyncVersion;                           //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (assign,nonatomic) NSNumber * supportsWebKit;                                    //@synthesize supportsWebKit=_supportsWebKit - In the implementation block
@property (assign,nonatomic) BOOL isMessagesSyncSuspendedByConnectivity;                   //@synthesize isMessagesSyncSuspendedByConnectivity=_isMessagesSyncSuspendedByConnectivity - In the implementation block
@property (assign,nonatomic) BOOL organizeByThread;                                        //@synthesize organizeByThread=_organizeByThread - In the implementation block
@property (assign,nonatomic) double deviceScreenWidth;                                     //@synthesize deviceScreenWidth=_deviceScreenWidth - In the implementation block
@property (assign,nonatomic) double deviceScreenScale;                                     //@synthesize deviceScreenScale=_deviceScreenScale - In the implementation block
@property (assign,nonatomic) BOOL protectedContentChannelSupported;                        //@synthesize protectedContentChannelSupported=_protectedContentChannelSupported - In the implementation block
@property (nonatomic,retain) NSDate * disconnectedSince;                                   //@synthesize disconnectedSince=_disconnectedSince - In the implementation block
@property (assign,nonatomic) unsigned long long currentDatabaseSchemaVersion;              //@synthesize currentDatabaseSchemaVersion=_currentDatabaseSchemaVersion - In the implementation block
@property (nonatomic,readonly) BOOL recreatedFromScratch;                                  //@synthesize recreatedFromScratch=_recreatedFromScratch - In the implementation block
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setDatabase:(NNMKSQLiteConnection *)arg1 ;
-(NNMKSQLiteConnection *)database;
-(void)beginUpdates;
-(void)endUpdates;
-(double)deviceScreenScale;
-(id)mailboxes;
-(void)setFullSyncVersion:(unsigned long long)arg1 ;
-(unsigned long long)fullSyncVersion;
-(id)datesForIDSIdentifiersScheduledToBeResent;
-(id)mailboxWithId:(id)arg1 ;
-(id)oldestDateReceivedForMailboxId:(id)arg1 ;
-(id)syncedMessagesKeyedByMessageIdAfterDateReceived:(id)arg1 mailboxId:(id)arg2 ;
-(void)removeSyncedMessagesBeforeDateReceived:(id)arg1 mailbox:(id)arg2 ;
-(void)incrementSyncVersionForMailboxId:(id)arg1 ;
-(unsigned long long)syncVersionForMailboxId:(id)arg1 ;
-(BOOL)organizeByThread;
-(void)_loadAllControlValues;
-(unsigned long long)currentDatabaseSchemaVersion;
-(void)setCurrentDatabaseSchemaVersion:(unsigned long long)arg1 ;
-(void)_setControlValueForKey:(id)arg1 withBlockForBinding:(/*^block*/id)arg2 ;
-(void)_removeControlValueForKey:(id)arg1 ;
-(void)updateSyncActiveForMailbox:(id)arg1 ;
-(void)_deleteAllObjectsFromTable:(id)arg1 mailboxId:(id)arg2 ;
-(void)_insureTransactionFor:(/*^block*/id)arg1 ;
-(void)updateSyncVersion:(unsigned long long)arg1 forMailboxId:(id)arg2 ;
-(void)_deleteAllObjectsFromTable:(id)arg1 ;
-(void)setDeviceScreenScale:(double)arg1 ;
-(void)setDeviceScreenWidth:(double)arg1 ;
-(void)setProtectedContentChannelSupported:(BOOL)arg1 ;
-(void)setDisconnectedSince:(NSDate *)arg1 ;
-(id)_selectSyncedMessagesWhere:(id)arg1 blockForBinding:(/*^block*/id)arg2 ;
-(id)_selectSyncedMessagesIdsWhere:(id)arg1 count:(unsigned long long)arg2 blockForBinding:(/*^block*/id)arg3 ;
-(unsigned long long)syncedMessagesCountForMailboxId:(id)arg1 ;
-(id)_selectSyncedAccountsWhere:(id)arg1 blockForBinding:(/*^block*/id)arg2 ;
-(id)_selectMailboxesWhere:(id)arg1 blockForBinding:(/*^block*/id)arg2 ;
-(void)deleteMailboxWithId:(id)arg1 startTransaction:(BOOL)arg2 ;
-(void)addOrUpdateMailbox:(id)arg1 ;
-(id)_mailboxFromCurrentRowInStatement:(sqlite3_stmtRef)arg1 ;
-(id)_idsIdentifiersForObjectId:(id)arg1 type:(id)arg2 ;
-(id)_ungroupGroupedValue:(id)arg1 ;
-(void)setSupportsWebKit:(NSNumber *)arg1 ;
-(void)setIsMessagesSyncSuspendedByConnectivity:(BOOL)arg1 ;
-(void)setOrganizeByThread:(BOOL)arg1 ;
-(void)cleanUpForFullSyncWithMailbox:(id)arg1 ;
-(void)cleanUpForInitialSync;
-(BOOL)containsSyncedMessageForMessageWithId:(id)arg1 ;
-(id)syncedMessageForMessageWithId:(id)arg1 ;
-(void)addOrUpdateSyncedMessage:(id)arg1 ;
-(void)removeSyncedMessageForMessageWithId:(id)arg1 ;
-(id)syncedMessagesForConversationWithId:(id)arg1 ;
-(id)syncedMessageIdsResendRequested;
-(id)syncedMessageIdsContentRequestedByUser;
-(id)firstSyncedMessageIdsContentNotSyncedOrRequestedByUser:(unsigned long long)arg1 ;
-(unsigned long long)syncedMessagesCount;
-(id)messageIdForSanitizedMessageId:(id)arg1 ;
-(id)allSyncedAccountsKeyedByAccountId;
-(id)syncedAccountForAccountWithId:(id)arg1 ;
-(void)addOrUpdateSyncedAccount:(id)arg1 ;
-(void)removeSyncedAccountForAccountWithId:(id)arg1 ;
-(id)syncedAccountIdsResendRequested;
-(unsigned long long)accountSourceTypeForMessageId:(id)arg1 ;
-(unsigned long long)accountSourceTypeForMailboxId:(id)arg1 ;
-(unsigned long long)accountSourceTypeForAccountId:(id)arg1 ;
-(id)accountIdForUsername:(id)arg1 ;
-(void)updateSourceType:(unsigned long long)arg1 forAccountId:(id)arg2 ;
-(id)syncEnabledMailboxes;
-(id)activeMailboxes;
-(void)deleteMailboxWithId:(id)arg1 ;
-(void)resetSyncRequestedFromMailboxes;
-(id)mailboxesForAccountId:(id)arg1 ;
-(void)insertDeletedMessageId:(id)arg1 mailboxId:(id)arg2 ;
-(id)mailboxIdForDeletedMessageId:(id)arg1 ;
-(void)deleteAllMailboxes;
-(void)updateSyncEnabledForMailbox:(id)arg1 ;
-(void)updateSyncRequestedForMailbox:(id)arg1 ;
-(void)setProgress:(long long)arg1 forComposedMessageWithId:(id)arg2 ;
-(long long)progressForComposedMessageWithId:(id)arg1 ;
-(id)pendingComposedMessageIds;
-(void)removePendingComposedMessages;
-(void)removeProgressForComposedMessageWithId:(id)arg1 ;
-(void)addObjectIds:(id)arg1 type:(id)arg2 resendInterval:(unsigned long long)arg3 forIDSIdentifierNotYetAckd:(id)arg4 ;
-(id)objectIdsForIDSIdentifierNotYetAckd:(id)arg1 type:(id*)arg2 resendInterval:(unsigned long long*)arg3 ;
-(id)objectIdsForType:(id)arg1 ;
-(id)typeForIDSIdentifierNotYetAckd:(id)arg1 ;
-(void)markIDSIdentifierAsAckd:(id)arg1 ;
-(void)rescheduleIDSIdentifier:(id)arg1 resendInterval:(unsigned long long)arg2 withDateToResend:(id)arg3 errorCode:(long long)arg4 ;
-(void)prepareIDSIdentifiersForResendForErrorCode:(long long)arg1 ;
-(void)deleteObjectId:(id)arg1 fromIDSIdentifiersNotYetAckdOfType:(id)arg2 ;
-(BOOL)hasMailboxSyncedActive;
-(NSNumber *)supportsWebKit;
-(BOOL)isMessagesSyncSuspendedByConnectivity;
-(double)deviceScreenWidth;
-(BOOL)protectedContentChannelSupported;
-(NSDate *)disconnectedSince;
-(BOOL)recreatedFromScratch;
@end
