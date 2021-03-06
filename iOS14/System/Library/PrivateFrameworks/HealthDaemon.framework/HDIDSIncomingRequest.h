/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class HDIDSParticipant, NSString, NSData, HDIDSOutgoingResponse, HDIDSMessageCenter;

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription> {

	id _pbRequest;
	BOOL _expectsResponse;
	unsigned short _messageID;
	HDIDSParticipant* _fromParticipant;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	HDIDSOutgoingResponse* _response;
	HDIDSMessageCenter* _messageCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) HDIDSParticipant * fromParticipant;                     //@synthesize fromParticipant=_fromParticipant - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                            //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                                   //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) HDIDSOutgoingResponse * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) id pbRequest; 
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(void)setMessageID:(unsigned short)arg1 ;
-(NSString *)idsIdentifier;
-(void)setData:(NSData *)arg1 ;
-(NSString *)description;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(HDIDSOutgoingResponse *)response;
-(NSData *)data;
-(void)setResponse:(HDIDSOutgoingResponse *)arg1 ;
-(unsigned short)messageID;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)dealloc;
-(id)pbRequest;
-(void)setPbRequest:(id)arg1 ;
-(void)configureResponse;
-(HDIDSParticipant *)fromParticipant;
-(id)nanoSyncDescription;
-(void)setFromParticipant:(HDIDSParticipant *)arg1 ;
@end

