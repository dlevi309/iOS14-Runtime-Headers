/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailUserEngagement : PBCodable <NSCopying> {

	long long _messageAgeInWeeks;
	long long _topHitIndexInSpotlightList;
	long long _topHitIndexInTopHitsList;
	int _mailboxType;
	int _type;
	BOOL _isTopHitMessage;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasMessageAgeInWeeks; 
@property (assign,nonatomic) long long messageAgeInWeeks;                       //@synthesize messageAgeInWeeks=_messageAgeInWeeks - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxType; 
@property (assign,nonatomic) int mailboxType;                                   //@synthesize mailboxType=_mailboxType - In the implementation block
@property (assign,nonatomic) BOOL hasIsTopHitMessage; 
@property (assign,nonatomic) BOOL isTopHitMessage;                              //@synthesize isTopHitMessage=_isTopHitMessage - In the implementation block
@property (assign,nonatomic) BOOL hasTopHitIndexInTopHitsList; 
@property (assign,nonatomic) long long topHitIndexInTopHitsList;                //@synthesize topHitIndexInTopHitsList=_topHitIndexInTopHitsList - In the implementation block
@property (assign,nonatomic) BOOL hasTopHitIndexInSpotlightList; 
@property (assign,nonatomic) long long topHitIndexInSpotlightList;              //@synthesize topHitIndexInSpotlightList=_topHitIndexInSpotlightList - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(int)mailboxType;
-(void)setMailboxType:(int)arg1 ;
-(void)setHasMailboxType:(BOOL)arg1 ;
-(BOOL)hasMailboxType;
-(id)mailboxTypeAsString:(int)arg1 ;
-(int)StringAsMailboxType:(id)arg1 ;
-(void)setMessageAgeInWeeks:(long long)arg1 ;
-(void)setIsTopHitMessage:(BOOL)arg1 ;
-(void)setTopHitIndexInTopHitsList:(long long)arg1 ;
-(void)setTopHitIndexInSpotlightList:(long long)arg1 ;
-(id)initWithEngagmentType:(int)arg1 receivedDate:(id)arg2 mailboxType:(int)arg3 isTopHit:(BOOL)arg4 messageListIndex:(long long)arg5 spotlightListIndex:(long long)arg6 ;
-(id)initWithEngagmentType:(int)arg1 message:(id)arg2 isTopHit:(BOOL)arg3 messageListIndex:(long long)arg4 spotlightListIndex:(long long)arg5 ;
-(id)initWithEngagmentType:(int)arg1 isTopHit:(BOOL)arg2 ;
-(id)initWithEngagmentType:(int)arg1 ;
-(void)setHasMessageAgeInWeeks:(BOOL)arg1 ;
-(BOOL)hasMessageAgeInWeeks;
-(void)setHasIsTopHitMessage:(BOOL)arg1 ;
-(BOOL)hasIsTopHitMessage;
-(void)setHasTopHitIndexInTopHitsList:(BOOL)arg1 ;
-(BOOL)hasTopHitIndexInTopHitsList;
-(void)setHasTopHitIndexInSpotlightList:(BOOL)arg1 ;
-(BOOL)hasTopHitIndexInSpotlightList;
-(long long)messageAgeInWeeks;
-(BOOL)isTopHitMessage;
-(long long)topHitIndexInTopHitsList;
-(long long)topHitIndexInSpotlightList;
@end

