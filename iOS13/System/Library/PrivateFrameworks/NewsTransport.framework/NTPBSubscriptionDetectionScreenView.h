/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying> {

	int _countOfSubscriptionsDetected;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasCountOfSubscriptionsDetected; 
@property (assign,nonatomic) int countOfSubscriptionsDetected;                  //@synthesize countOfSubscriptionsDetected=_countOfSubscriptionsDetected - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCountOfSubscriptionsDetected:(int)arg1 ;
-(void)setHasCountOfSubscriptionsDetected:(BOOL)arg1 ;
-(BOOL)hasCountOfSubscriptionsDetected;
-(int)countOfSubscriptionsDetected;
@end

