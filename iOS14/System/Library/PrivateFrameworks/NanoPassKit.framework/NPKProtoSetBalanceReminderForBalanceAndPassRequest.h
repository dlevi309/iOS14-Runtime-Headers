/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NPKProtoSetBalanceReminderForBalanceAndPassRequest : PBRequest <NSCopying> {

	NSData* _balanceBytes;
	NSData* _balanceReminderBytes;
	NSString* _uniqueID;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasBalanceBytes; 
@property (nonatomic,retain) NSData * balanceBytes;                       //@synthesize balanceBytes=_balanceBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasBalanceReminderBytes; 
@property (nonatomic,retain) NSData * balanceReminderBytes;               //@synthesize balanceReminderBytes=_balanceReminderBytes - In the implementation block
-(id)dictionaryRepresentation;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasUniqueID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBalanceReminderBytes:(NSData *)arg1 ;
-(BOOL)hasBalanceReminderBytes;
-(NSData *)balanceReminderBytes;
-(NSData *)balanceBytes;
-(void)setBalanceBytes:(NSData *)arg1 ;
-(BOOL)hasBalanceBytes;
@end
