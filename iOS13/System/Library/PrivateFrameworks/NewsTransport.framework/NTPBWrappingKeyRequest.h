/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying> {

	NSMutableArray* _wrappingKeyIds;

}

@property (nonatomic,retain) NSMutableArray * wrappingKeyIds;              //@synthesize wrappingKeyIds=_wrappingKeyIds - In the implementation block
+(Class)wrappingKeyIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWrappingKeyIds:(NSMutableArray *)arg1 ;
-(void)addWrappingKeyIds:(id)arg1 ;
-(void)clearWrappingKeyIds;
-(unsigned long long)wrappingKeyIdsCount;
-(id)wrappingKeyIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)wrappingKeyIds;
@end
