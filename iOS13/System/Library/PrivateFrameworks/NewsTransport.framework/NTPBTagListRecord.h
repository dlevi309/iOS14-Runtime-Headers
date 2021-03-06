/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSMutableArray;

@interface NTPBTagListRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSMutableArray* _tagIDs;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) NSMutableArray * tagIDs;              //@synthesize tagIDs=_tagIDs - In the implementation block
+(Class)tagIDsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(void)setTagIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tagIDs;
-(BOOL)hasBase;
-(void)addTagIDs:(id)arg1 ;
-(void)clearTagIDs;
-(unsigned long long)tagIDsCount;
-(id)tagIDsAtIndex:(unsigned long long)arg1 ;
@end

