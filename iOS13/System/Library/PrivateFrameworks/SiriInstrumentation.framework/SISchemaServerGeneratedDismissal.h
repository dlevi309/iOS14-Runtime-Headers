/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaServerGeneratedDismissal : PBCodable {

	int _serverGeneratedDismissalReason;

}

@property (assign,nonatomic) int serverGeneratedDismissalReason;              //@synthesize serverGeneratedDismissalReason=_serverGeneratedDismissalReason - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setServerGeneratedDismissalReason:(int)arg1 ;
-(int)serverGeneratedDismissalReason;
@end

