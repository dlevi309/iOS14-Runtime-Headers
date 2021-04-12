/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class MessageServiceSession, IMDChat, IMDAccount, IDSAccount, NSString, IDSService, NSArray, GroupMessageContext, MessageDeliveryContext, NSDate, NSNumber;

@interface SendMessageContext : NSObject {

	MessageServiceSession* _serviceSession;
	IMDChat* _chat;
	IMDAccount* _imdAccount;
	IDSAccount* _idsAccount;
	NSString* _fromURI;
	IDSService* _idsService;
	NSArray* _participantURIs;
	NSArray* _originalParticipantURIs;
	GroupMessageContext* _groupMessageContext;
	MessageDeliveryContext* _messageDeliveryContext;
	NSDate* _sendDate;
	NSNumber* _sendDuration;

}

@property (nonatomic,readonly) MessageServiceSession * serviceSession;                     //@synthesize serviceSession=_serviceSession - In the implementation block
@property (nonatomic,readonly) IMDChat * chat;                                             //@synthesize chat=_chat - In the implementation block
@property (nonatomic,readonly) IMDAccount * imdAccount;                                    //@synthesize imdAccount=_imdAccount - In the implementation block
@property (nonatomic,readonly) IDSAccount * idsAccount;                                    //@synthesize idsAccount=_idsAccount - In the implementation block
@property (nonatomic,readonly) NSString * fromURI;                                         //@synthesize fromURI=_fromURI - In the implementation block
@property (nonatomic,readonly) IDSService * idsService;                                    //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,readonly) NSArray * participantURIs;                                  //@synthesize participantURIs=_participantURIs - In the implementation block
@property (nonatomic,readonly) NSArray * originalParticipantURIs;                          //@synthesize originalParticipantURIs=_originalParticipantURIs - In the implementation block
@property (nonatomic,retain) GroupMessageContext * groupMessageContext;                    //@synthesize groupMessageContext=_groupMessageContext - In the implementation block
@property (nonatomic,retain) MessageDeliveryContext * messageDeliveryContext;              //@synthesize messageDeliveryContext=_messageDeliveryContext - In the implementation block
@property (nonatomic,retain) NSDate * sendDate;                                            //@synthesize sendDate=_sendDate - In the implementation block
@property (nonatomic,retain) NSNumber * sendDuration;                                      //@synthesize sendDuration=_sendDuration - In the implementation block
-(IMDChat *)chat;
-(NSDate *)sendDate;
-(IDSService *)idsService;
-(IDSAccount *)idsAccount;
-(void)setSendDate:(NSDate *)arg1 ;
-(NSString *)fromURI;
-(MessageServiceSession *)serviceSession;
-(IMDAccount *)imdAccount;
-(void)setGroupMessageContext:(GroupMessageContext *)arg1 ;
-(void)setMessageDeliveryContext:(MessageDeliveryContext *)arg1 ;
-(NSArray *)participantURIs;
-(GroupMessageContext *)groupMessageContext;
-(NSArray *)originalParticipantURIs;
-(MessageDeliveryContext *)messageDeliveryContext;
-(void)setSendDuration:(NSNumber *)arg1 ;
-(id)initWithChat:(id)arg1 withIMDAccount:(id)arg2 withIDSAccount:(id)arg3 withCallerURI:(id)arg4 serviceSession:(id)arg5 withIDSService:(id)arg6 withParticipantURIs:(id)arg7 withOriginalParticipantURIs:(id)arg8 ;
-(NSNumber *)sendDuration;
@end
