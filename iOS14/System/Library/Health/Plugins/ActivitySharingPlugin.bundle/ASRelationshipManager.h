/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASIDSMessageCenterDelegate.h>
#import <libobjc.A.dylib/ASCloudKitManagerChangesObserver.h>
#import <libobjc.A.dylib/ASGatewayManagerChangesObserver.h>
#import <libobjc.A.dylib/ASFriendInviteBulletinManagerDelegate.h>
#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol ASBulletinPostingManager, OS_dispatch_queue;
@class HDProfile, ASAchievementManager, ASActivityDataManager, ASCloudKitManager, ASContactsManager, ASFriendInviteBulletinManager, ASFriendListManager, ASGatewayManager, ASAsyncTransactionQueue, NSDictionary, CNContactStore, NSObject, NSMutableDictionary, NSString;

@interface ASRelationshipManager : NSObject <ASIDSMessageCenterDelegate, ASCloudKitManagerChangesObserver, ASGatewayManagerChangesObserver, ASFriendInviteBulletinManagerDelegate, ASActivitySharingManagerReadyObserver> {

	HDProfile* _profile;
	ASAchievementManager* _achievementManager;
	ASActivityDataManager* _activityDataManager;
	ASCloudKitManager* _cloudKitManager;
	ASContactsManager* _contactsManager;
	ASFriendInviteBulletinManager* _friendInviteBulletinManager;
	ASFriendListManager* _friendListManager;
	ASGatewayManager* _gatewayManager;
	id<ASBulletinPostingManager> _bulletinPostingManager;
	ASAsyncTransactionQueue* _transactionQueue;
	NSDictionary* _messageCenters;
	CNContactStore* _contactStore;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _relationshipRecordsToReconcile;
	NSMutableDictionary* _remoteRelationshipRecordsToProcess;
	NSMutableDictionary* _placeholderFriendshipBeganTokens;
	long long _currentFetchType;
	BOOL _hasPendingContactsReconcile;
	BOOL _isWatch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isReadyToProcessChanges; 
-(void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)_processPersistedMessagesIfNeeded;
-(void)beginReceivingMessages;
-(void)_contactStoreDidChangeNotification:(id)arg1 ;
-(void)endReceivingMessages;
-(id)insertPlaceholderRelationshipEvent:(unsigned short)arg1 friendUUID:(id)arg2 ;
-(void)_queue_saveRelationship:(id)arg1 contact:(id)arg2 withExtraRecords:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performBlockWaitingForFriendshipBeganForFriendWithUUID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_queue_saveRelationship:(id)arg1 contact:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_removeFriendWithUUID:(id)arg1 eventType:(unsigned short)arg2 completion:(/*^block*/id)arg3 ;
-(void)_insertInviteForContact:(id)arg1 destination:(id)arg2 serviceIdentifier:(id)arg3 ;
-(id)_currentActivityDataPreview;
-(void)_queue_saveRelationshipAndFetchOrCreateShares:(id)arg1 contact:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_queue_insertPlaceholderFriendshipDidBeginForContactWithUUID:(id)arg1 ;
-(void)_queue_removePlaceholderRelationshipBeganForContactWithUUID:(id)arg1 success:(BOOL)arg2 ;
-(void)_queue_addPersonWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_fetchSharesForRelationship:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_contactWithInviteRequest:(id)arg1 fromSender:(id)arg2 ;
-(void)_processActivityDataPreview:(id)arg1 friendUUID:(id)arg2 ;
-(id)_contactWithOutgoingHandshakeToken:(id)arg1 ;
-(void)_queue_acceptShares:(id)arg1 forRelationship:(id)arg2 contact:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_contactWithIncomingHandshakeToken:(id)arg1 ;
-(void)_queue_reconcileCloudKitRelationships:(id)arg1 ;
-(void)_queue_processRemoteRelationships:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_contactWithUUIDPreferringPlaceholders:(id)arg1 ;
-(id)_queue_handleSavedRecords:(id)arg1 forContact:(id)arg2 ;
-(id)_queue_allRelationshipsByRecordID;
-(void)_queue_reconcileAddressBookAgainstRelationships:(id)arg1 ;
-(id)_queue_allContactsByRecordID;
-(id)_contactWithRemoteRelationshipRecordZoneID:(id)arg1 ;
-(void)messageCenter:(id)arg1 didReceiveInviteRequest:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4 ;
-(void)messageCenter:(id)arg1 didReceiveInviteResponse:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4 ;
-(void)messageCenter:(id)arg1 didReceiveFinalizeHandshake:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4 ;
-(void)messageCenter:(id)arg1 didReceiveWithdrawInviteRequest:(id)arg2 fromSenderAddress:(id)arg3 messageHandledCompletion:(/*^block*/id)arg4 ;
-(BOOL)isReadyToProcessChanges;
-(void)cloudKitManager:(id)arg1 didBeginUpdatesForFetchWithType:(long long)arg2 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewRelationships:(id)arg2 fromRecordZoneWithID:(id)arg3 moreComing:(BOOL)arg4 changesProcessedHandler:(/*^block*/id)arg5 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewRemoteRelationships:(id)arg2 fromRecordZoneWithID:(id)arg3 moreComing:(BOOL)arg4 changesProcessedHandler:(/*^block*/id)arg5 ;
-(void)gatewayManagerStatusDidChange;
-(void)friendInviteBulletinManagerDidReceiveActionResponse:(long long)arg1 fromContactWithUUID:(id)arg2 ;
-(void)processRetryMessages;
-(void)updateRelationshipWithCompetitionEvent:(unsigned short)arg1 friendUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateRelationshipsForCurrentFeatureSupportWithCompletion:(/*^block*/id)arg1 ;
-(void)sendInviteToPersonWithDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notificationManager:(id)arg1 didReceiveActionResponse:(long long)arg2 fromContactWithUUID:(id)arg3 ;
-(void)removePlaceholderRelationshipEventWithToken:(id)arg1 ;
@end

