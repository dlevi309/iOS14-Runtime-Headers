/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaServerEventMetadata, SISchemaUserSpeechDuration, SISchemaConversationTrace, SISchemaTurnInteraction, SISchemaSpeechResultSelected, SISchemaDeviceFixedContext, SISchemaServerGeneratedDismissal, NSData;

@interface SISchemaServerEvent : PBCodable {

	SISchemaServerEventMetadata* _eventMetadata;
	SISchemaUserSpeechDuration* _userSpeechDuration;
	SISchemaConversationTrace* _serverConversationTrace;
	SISchemaTurnInteraction* _turnInteraction;
	SISchemaSpeechResultSelected* _speechResultSelected;
	SISchemaDeviceFixedContext* _serverDeviceFixedContext;
	SISchemaServerGeneratedDismissal* _serverGeneratedDismissal;
	BOOL _hasEventMetadata;
	BOOL _hasUserSpeechDuration;
	BOOL _hasServerConversationTrace;
	BOOL _hasTurnInteraction;
	BOOL _hasSpeechResultSelected;
	BOOL _hasServerDeviceFixedContext;
	BOOL _hasServerGeneratedDismissal;
	unsigned long long _whichEvent_Type;

}

@property (nonatomic,retain) SISchemaServerEventMetadata * eventMetadata;                              //@synthesize eventMetadata=_eventMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEventMetadata;                                                    //@synthesize hasEventMetadata=_hasEventMetadata - In the implementation block
@property (nonatomic,retain) SISchemaUserSpeechDuration * userSpeechDuration;                          //@synthesize userSpeechDuration=_userSpeechDuration - In the implementation block
@property (assign,nonatomic) BOOL hasUserSpeechDuration;                                               //@synthesize hasUserSpeechDuration=_hasUserSpeechDuration - In the implementation block
@property (nonatomic,retain) SISchemaConversationTrace * serverConversationTrace;                      //@synthesize serverConversationTrace=_serverConversationTrace - In the implementation block
@property (assign,nonatomic) BOOL hasServerConversationTrace;                                          //@synthesize hasServerConversationTrace=_hasServerConversationTrace - In the implementation block
@property (nonatomic,retain) SISchemaTurnInteraction * turnInteraction;                                //@synthesize turnInteraction=_turnInteraction - In the implementation block
@property (assign,nonatomic) BOOL hasTurnInteraction;                                                  //@synthesize hasTurnInteraction=_hasTurnInteraction - In the implementation block
@property (nonatomic,retain) SISchemaSpeechResultSelected * speechResultSelected;                      //@synthesize speechResultSelected=_speechResultSelected - In the implementation block
@property (assign,nonatomic) BOOL hasSpeechResultSelected;                                             //@synthesize hasSpeechResultSelected=_hasSpeechResultSelected - In the implementation block
@property (nonatomic,retain) SISchemaDeviceFixedContext * serverDeviceFixedContext;                    //@synthesize serverDeviceFixedContext=_serverDeviceFixedContext - In the implementation block
@property (assign,nonatomic) BOOL hasServerDeviceFixedContext;                                         //@synthesize hasServerDeviceFixedContext=_hasServerDeviceFixedContext - In the implementation block
@property (nonatomic,retain) SISchemaServerGeneratedDismissal * serverGeneratedDismissal;              //@synthesize serverGeneratedDismissal=_serverGeneratedDismissal - In the implementation block
@property (assign,nonatomic) BOOL hasServerGeneratedDismissal;                                         //@synthesize hasServerGeneratedDismissal=_hasServerGeneratedDismissal - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type;                                     //@synthesize whichEvent_Type=_whichEvent_Type - In the implementation block
-(id)dictionaryRepresentation;
-(SISchemaServerEventMetadata *)eventMetadata;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setEventMetadata:(SISchemaServerEventMetadata *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)getAnyEventType;
-(unsigned long long)whichEvent_Type;
-(BOOL)hasEventMetadata;
-(void)setHasEventMetadata:(BOOL)arg1 ;
-(void)setUserSpeechDuration:(SISchemaUserSpeechDuration *)arg1 ;
-(void)setServerConversationTrace:(SISchemaConversationTrace *)arg1 ;
-(void)setTurnInteraction:(SISchemaTurnInteraction *)arg1 ;
-(void)setSpeechResultSelected:(SISchemaSpeechResultSelected *)arg1 ;
-(void)setServerDeviceFixedContext:(SISchemaDeviceFixedContext *)arg1 ;
-(void)setServerGeneratedDismissal:(SISchemaServerGeneratedDismissal *)arg1 ;
-(SISchemaUserSpeechDuration *)userSpeechDuration;
-(SISchemaConversationTrace *)serverConversationTrace;
-(SISchemaTurnInteraction *)turnInteraction;
-(SISchemaSpeechResultSelected *)speechResultSelected;
-(SISchemaDeviceFixedContext *)serverDeviceFixedContext;
-(SISchemaServerGeneratedDismissal *)serverGeneratedDismissal;
-(BOOL)hasUserSpeechDuration;
-(void)setHasUserSpeechDuration:(BOOL)arg1 ;
-(BOOL)hasServerConversationTrace;
-(void)setHasServerConversationTrace:(BOOL)arg1 ;
-(BOOL)hasTurnInteraction;
-(void)setHasTurnInteraction:(BOOL)arg1 ;
-(BOOL)hasSpeechResultSelected;
-(void)setHasSpeechResultSelected:(BOOL)arg1 ;
-(BOOL)hasServerDeviceFixedContext;
-(void)setHasServerDeviceFixedContext:(BOOL)arg1 ;
-(BOOL)hasServerGeneratedDismissal;
-(void)setHasServerGeneratedDismissal:(BOOL)arg1 ;
@end
