/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageReceivedMessage : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _fzError;
	NSString* _guid;
	unsigned _hasAttachments;
	unsigned _isFromEmail;
	unsigned _isFromPhoneNumber;
	unsigned _isGroupMessage;
	unsigned _isTypingIndicator;
	unsigned _messageError;
	SCD_Struct_AW12 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFzError; 
@property (assign,nonatomic) int fzError;                               //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) BOOL hasMessageError; 
@property (assign,nonatomic) unsigned messageError;                     //@synthesize messageError=_messageError - In the implementation block
@property (assign,nonatomic) BOOL hasIsTypingIndicator; 
@property (assign,nonatomic) unsigned isTypingIndicator;                //@synthesize isTypingIndicator=_isTypingIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupMessage; 
@property (assign,nonatomic) unsigned isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromPhoneNumber; 
@property (assign,nonatomic) unsigned isFromPhoneNumber;                //@synthesize isFromPhoneNumber=_isFromPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromEmail; 
@property (assign,nonatomic) unsigned isFromEmail;                      //@synthesize isFromEmail=_isFromEmail - In the implementation block
@property (assign,nonatomic) BOOL hasHasAttachments; 
@property (assign,nonatomic) unsigned hasAttachments;                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)guid;
-(unsigned long long)timestamp;
-(void)setHasAttachments:(unsigned)arg1 ;
-(unsigned)hasAttachments;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)isGroupMessage;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(int)fzError;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setFzError:(int)arg1 ;
-(void)setIsGroupMessage:(unsigned)arg1 ;
-(void)setIsFromPhoneNumber:(unsigned)arg1 ;
-(void)setIsFromEmail:(unsigned)arg1 ;
-(unsigned)isFromPhoneNumber;
-(unsigned)isFromEmail;
-(void)setMessageError:(unsigned)arg1 ;
-(void)setIsTypingIndicator:(unsigned)arg1 ;
-(unsigned)messageError;
-(unsigned)isTypingIndicator;
-(void)setHasFzError:(BOOL)arg1 ;
-(BOOL)hasFzError;
-(void)setHasMessageError:(BOOL)arg1 ;
-(BOOL)hasMessageError;
-(void)setHasIsTypingIndicator:(BOOL)arg1 ;
-(BOOL)hasIsTypingIndicator;
-(void)setHasIsGroupMessage:(BOOL)arg1 ;
-(BOOL)hasIsGroupMessage;
-(void)setHasIsFromPhoneNumber:(BOOL)arg1 ;
-(BOOL)hasIsFromPhoneNumber;
-(void)setHasIsFromEmail:(BOOL)arg1 ;
-(BOOL)hasIsFromEmail;
-(void)setHasHasAttachments:(BOOL)arg1 ;
-(BOOL)hasHasAttachments;
@end
