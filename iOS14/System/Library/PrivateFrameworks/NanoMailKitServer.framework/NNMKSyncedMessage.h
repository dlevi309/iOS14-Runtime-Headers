/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSString, NSDate, NSMutableSet;

@interface NNMKSyncedMessage : NSObject {

	BOOL _usedProtectedChannelForMessageSync;
	BOOL _usedNotificationPriorityForMessageSync;
	BOOL _contentSyncedUsingNotificationPriority;
	BOOL _contentSyncedBecauseUserRequested;
	BOOL _contentSynced;
	BOOL _contentRequestedByUser;
	BOOL _resendRequested;
	BOOL _isThreadSpecific;
	NSString* _messageId;
	NSString* _sanitizedMessageId;
	unsigned long long _status;
	unsigned long long _statusVersion;
	NSDate* _dateReceived;
	NSMutableSet* _attachmentsContentIdsNotYetSynced;
	NSString* _conversationId;
	unsigned long long _resendInterval;
	unsigned long long _contentResendInterval;
	NSString* _mailboxId;
	unsigned long long _isSpecialMailboxSpecific;

}

@property (nonatomic,retain) NSString * messageId;                                          //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) NSString * sanitizedMessageId;                                 //@synthesize sanitizedMessageId=_sanitizedMessageId - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long statusVersion;                              //@synthesize statusVersion=_statusVersion - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                                         //@synthesize dateReceived=_dateReceived - In the implementation block
@property (assign,nonatomic) BOOL usedProtectedChannelForMessageSync;                       //@synthesize usedProtectedChannelForMessageSync=_usedProtectedChannelForMessageSync - In the implementation block
@property (assign,nonatomic) BOOL usedNotificationPriorityForMessageSync;                   //@synthesize usedNotificationPriorityForMessageSync=_usedNotificationPriorityForMessageSync - In the implementation block
@property (assign,nonatomic) BOOL contentSyncedUsingNotificationPriority;                   //@synthesize contentSyncedUsingNotificationPriority=_contentSyncedUsingNotificationPriority - In the implementation block
@property (assign,nonatomic) BOOL contentSyncedBecauseUserRequested;                        //@synthesize contentSyncedBecauseUserRequested=_contentSyncedBecauseUserRequested - In the implementation block
@property (assign,nonatomic) BOOL contentSynced;                                            //@synthesize contentSynced=_contentSynced - In the implementation block
@property (assign,nonatomic) BOOL contentRequestedByUser;                                   //@synthesize contentRequestedByUser=_contentRequestedByUser - In the implementation block
@property (nonatomic,retain) NSMutableSet * attachmentsContentIdsNotYetSynced;              //@synthesize attachmentsContentIdsNotYetSynced=_attachmentsContentIdsNotYetSynced - In the implementation block
@property (nonatomic,retain) NSString * conversationId;                                     //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) BOOL resendRequested;                                          //@synthesize resendRequested=_resendRequested - In the implementation block
@property (assign,nonatomic) unsigned long long resendInterval;                             //@synthesize resendInterval=_resendInterval - In the implementation block
@property (assign,nonatomic) unsigned long long contentResendInterval;                      //@synthesize contentResendInterval=_contentResendInterval - In the implementation block
@property (nonatomic,retain) NSString * mailboxId;                                          //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) BOOL isThreadSpecific;                                         //@synthesize isThreadSpecific=_isThreadSpecific - In the implementation block
@property (assign,nonatomic) unsigned long long isSpecialMailboxSpecific;                   //@synthesize isSpecialMailboxSpecific=_isSpecialMailboxSpecific - In the implementation block
-(void)setMessageId:(NSString *)arg1 ;
-(id)init;
-(void)setDateReceived:(NSDate *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(NSString *)conversationId;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSDate *)dateReceived;
-(NSString *)messageId;
-(unsigned long long)status;
-(void)setStatusVersion:(unsigned long long)arg1 ;
-(unsigned long long)statusVersion;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(void)setConversationId:(NSString *)arg1 ;
-(BOOL)usedProtectedChannelForMessageSync;
-(BOOL)usedNotificationPriorityForMessageSync;
-(BOOL)contentSynced;
-(BOOL)contentSyncedUsingNotificationPriority;
-(BOOL)contentSyncedBecauseUserRequested;
-(BOOL)contentRequestedByUser;
-(BOOL)resendRequested;
-(unsigned long long)resendInterval;
-(unsigned long long)contentResendInterval;
-(BOOL)isThreadSpecific;
-(unsigned long long)isSpecialMailboxSpecific;
-(NSString *)sanitizedMessageId;
-(NSMutableSet *)attachmentsContentIdsNotYetSynced;
-(void)setUsedProtectedChannelForMessageSync:(BOOL)arg1 ;
-(void)setUsedNotificationPriorityForMessageSync:(BOOL)arg1 ;
-(void)setContentSynced:(BOOL)arg1 ;
-(void)setContentSyncedUsingNotificationPriority:(BOOL)arg1 ;
-(void)setContentSyncedBecauseUserRequested:(BOOL)arg1 ;
-(void)setContentRequestedByUser:(BOOL)arg1 ;
-(void)setAttachmentsContentIdsNotYetSynced:(NSMutableSet *)arg1 ;
-(void)setResendRequested:(BOOL)arg1 ;
-(void)setResendInterval:(unsigned long long)arg1 ;
-(void)setContentResendInterval:(unsigned long long)arg1 ;
-(void)setIsThreadSpecific:(BOOL)arg1 ;
-(void)setIsSpecialMailboxSpecific:(unsigned long long)arg1 ;
-(void)setSanitizedMessageId:(NSString *)arg1 ;
-(id)initWithMessage:(id)arg1 useDefaultMailbox:(BOOL)arg2 ;
-(BOOL)isContentCompletelySynced;
@end

