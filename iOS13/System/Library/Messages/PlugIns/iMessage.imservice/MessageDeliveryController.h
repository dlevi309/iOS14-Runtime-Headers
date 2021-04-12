/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/

#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@protocol MessageDeliveryControllerDelegate;
@class IMMultiQueue, NSMutableDictionary, IMTimer, IDSService, NSString;

@interface MessageDeliveryController : NSObject <IDSServiceDelegatePrivate> {

	IMMultiQueue* _deliveryQueues;
	NSMutableDictionary* _typingContext;
	IMTimer* _typingContextTimer;
	NSMutableDictionary* _activeDeviceForHandle;
	IDSService* _idsService;
	IDSService* _idsBizService;
	NSMutableDictionary* _pendingSends;
	NSMutableDictionary* _pendingWillSendBlocks;
	NSMutableDictionary* _pendingTimestampUpdate;
	id<MessageDeliveryControllerDelegate> _delegate;

}

@property (__weak) id<MessageDeliveryControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<MessageDeliveryControllerDelegate>)delegate;
-(void)setDelegate:(id<MessageDeliveryControllerDelegate>)arg1 ;
-(id)localDevice;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 messageIdentifier:(id)arg3 alternateCallbackID:(id)arg4 updatedWithResponseCode:(long long)arg5 error:(id)arg6 lastCall:(BOOL)arg7 messageContext:(id)arg8 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 alternateCallbackID:(id)arg4 willSendToDestinations:(id)arg5 skippedDestinations:(id)arg6 registrationPropertyToDestinations:(id)arg7 ;
-(void)service:(id)arg1 didFlushCacheForRemoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4 ;
-(id)messageStore;
-(id)activeDeviceForHandle:(id)arg1 ;
-(void)updateLatestActiveDestination:(id)arg1 ForHandle:(id)arg2 incomingType:(unsigned char)arg3 ;
-(void)noteRecentMessageForPeople:(id)arg1 ;
-(void)sendMessageCheckpoint:(long long)arg1 guid:(id)arg2 ;
-(void)sendMessageError:(long long)arg1 toToken:(id)arg2 toID:(id)arg3 toGroup:(id)arg4 fromID:(id)arg5 fromAccount:(id)arg6 forMessageID:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)sendMessageErrorWithInfo:(long long)arg1 toToken:(id)arg2 toID:(id)arg3 toGroup:(id)arg4 fromID:(id)arg5 fromAccount:(id)arg6 forMessageID:(id)arg7 additionalInfo:(id)arg8 fileSize:(id)arg9 failureTimeSeconds:(double)arg10 failReasonMessage:(id)arg11 completionBlock:(/*^block*/id)arg12 ;
-(id)idsDeviceFromPushToken:(id)arg1 ;
-(void)sendMessageDictionary:(id)arg1 fromID:(id)arg2 fromAccount:(id)arg3 toURIs:(id)arg4 toGroup:(id)arg5 priority:(long long)arg6 options:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)sendMessage:(id)arg1 context:(id)arg2 groupContext:(id)arg3 toGroup:(id)arg4 toParticipants:(id)arg5 originallyToParticipants:(id)arg6 fromID:(id)arg7 fromAccount:(id)arg8 chatIdentifier:(id)arg9 originalPayload:(id)arg10 replyToMessageGUID:(id)arg11 fakeSavedReceiptBlock:(/*^block*/id)arg12 completionBlock:(/*^block*/id)arg13 ;
-(void)sendBubblePayloadMessageDictionary:(id)arg1 fromID:(id)arg2 fromAccount:(id)arg3 toURIs:(id)arg4 toGroup:(id)arg5 priority:(long long)arg6 options:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(id)newNicknameInfoToSend;
-(void)sendMessageDictionary:(id)arg1 encryptDictionary:(BOOL)arg2 fromID:(id)arg3 fromAccount:(id)arg4 toURIs:(id)arg5 toGroup:(id)arg6 priority:(long long)arg7 options:(id)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)sendCloseSessionMessageDictionary:(id)arg1 toBusinessURI:(id)arg2 fromURI:(id)arg3 fromAccount:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)sendLogDumpMessageAtFilePath:(id)arg1 fromAccount:(id)arg2 fromID:(id)arg3 toRecipient:(id)arg4 shouldDeleteFile:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(void)_updateTimeStampForMessageIdentifierIfNeeded:(id)arg1 pendingTimeStampUpdateIdentifier:(id)arg2 alternateCallbackID:(id)arg3 messageContext:(id)arg4 ;
-(BOOL)forceBackwardsCompatibleMessageForBundleID:(id)arg1 ;
-(void)_sendTruncatedRecordIDForChatIfNeeded:(id)arg1 withDictionary:(id)arg2 ;
-(BOOL)shouldSendBackwardsCompatibleMessageForBundleID:(id)arg1 ;
-(id)_propertyForExpressiveSendStyle:(id)arg1 ;
-(void)_sendMessage:(id)arg1 context:(id)arg2 deliveryContext:(id)arg3 fromID:(id)arg4 fromAccount:(id)arg5 toID:(id)arg6 chatIdentifier:(id)arg7 toSessionToken:(id)arg8 toGroup:(id)arg9 toParticipants:(id)arg10 originallyToParticipants:(id)arg11 requiredRegProperties:(id)arg12 interestingRegProperties:(id)arg13 requiresLackOfRegProperties:(id)arg14 canInlineAttachments:(BOOL)arg15 type:(long long)arg16 msgPayloadUploadDictionary:(id)arg17 originalPayload:(id)arg18 replyToMessageGUID:(id)arg19 willSendBlock:(/*^block*/id)arg20 completionBlock:(/*^block*/id)arg21 ;
-(BOOL)shouldSendAuxXML:(id)arg1 ;
-(void)_setReplyToGUIDForMessage:(id)arg1 messageDictionary:(id)arg2 ;
-(id)_compressedAttributionInfoForMessage:(id)arg1 ;
-(BOOL)_shouldSendNicknameInfo;
-(void)sendMeCardForMessage:(id)arg1 withDictionary:(id)arg2 withChatIdentifier:(id)arg3 businessMessage:(BOOL)arg4 ;
-(BOOL)_enableBackwardsCompatibility;
-(id)_computeRegPropertiesForNewFeatures:(id)arg1 currentRegProperties:(id)arg2 currentInterestingProp:(id)arg3 ;
-(void)_enqueueUpdateBlock:(/*^block*/id)arg1 willSendBlock:(/*^block*/id)arg2 identifier:(id)arg3 callbackID:(id)arg4 messageCommandOption:(id)arg5 ;
-(void)__pruneTypingContexts;
-(void)_setTimerForPruningTypingContext;
-(BOOL)_hasRecentlyMessaged:(id)arg1 ;
-(void)_enqueueSendMessageWorkBlock:(/*^block*/id)arg1 forURIs:(id)arg2 ;
-(BOOL)sendToLocalPeersFile:(id)arg1 dictionary:(id)arg2 ;
-(void)_sendIDSMessageWithTransferGUID:(id)arg1 andTransfer:(id)arg2 fromAccount:(id)arg3 fromID:(id)arg4 toRecipient:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)_appendFilePathsWithGUIDs:(id)arg1 ;
-(BOOL)sendToLocalPeers:(id)arg1 ;
-(void)_updateIDSServiceForTesting:(id)arg1 ;
-(void)_addIdentifierToPendingTimestampUpdateMap:(id)arg1 alternateCallbackId:(id)arg2 ;
@end
