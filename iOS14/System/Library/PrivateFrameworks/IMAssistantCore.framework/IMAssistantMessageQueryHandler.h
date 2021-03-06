/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <IMAssistantCore/IMAssistantMessageHandler.h>

@interface IMAssistantMessageQueryHandler : IMAssistantMessageHandler
-(BOOL)resolvePersons:(id)arg1 forIntent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)searchMessagesWithContents:(id)arg1 messageIdentifiers:(id)arg2 notificationIdentifiers:(id)arg3 chatNames:(id)arg4 conversationIdentifiers:(id)arg5 recipients:(id)arg6 senders:(id)arg7 dateTimeRange:(id)arg8 attributes:(unsigned long long)arg9 completion:(/*^block*/id)arg10 ;
-(id)chatsForChatNames:(id)arg1 ;
-(void)SPIQueryMessagesWithGUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlesAndServicesForChatGuids:(id)arg1 handles:(id*)arg2 services:(id*)arg3 ;
-(void)SPIQueryMessagesForChatsWithIdentifiers:(id)arg1 services:(id)arg2 onlyUnread:(BOOL)arg3 limit:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)allIMHandlesForHandle:(id)arg1 ;
-(void)handlesAndServicesForPersons:(id)arg1 handles:(id*)arg2 services:(id*)arg3 ;
-(id)unifiedContactIdentifiersForPerson:(id)arg1 ;
-(id)spokenPhrasesForSpeakableStrings:(id)arg1 ;
-(id)vocabularyIdentifiersFromSpeakableStrings:(id)arg1 ;
-(id)chatParticipantForSPIHandle:(id)arg1 ;
-(id)messageContentsPredicate:(id)arg1 ;
-(id)recipientsPredicate:(id)arg1 ;
-(id)sendersPredicate:(id)arg1 ;
-(BOOL)messageIsFromBlackholedChat:(id)arg1 ;
-(id)chatParticipantsForSPIHandles:(id)arg1 ;
-(void)messagesMatchingMessageIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)SPIQueryMessagesForChats:(id)arg1 onlyUnread:(BOOL)arg2 limit:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)chatsWithConversationIdentifiers:(id)arg1 ;
-(id)chatsContainingRequiredParticipants:(id)arg1 ;
-(void)SPIQueryMessagesForSenders:(id)arg1 onlyUnread:(BOOL)arg2 limit:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)SPIQueryUnreadMessages:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)SPIQueryMessagesWithRowIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)resolveDateTimeRange:(id)arg1 ;
@end

