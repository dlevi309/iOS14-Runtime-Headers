/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface FCCKPRequestedFields : PBCodable <NSCopying> {

	NSMutableArray* _fields;

}

@property (nonatomic,retain) NSMutableArray * fields;              //@synthesize fields=_fields - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)fields;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(void)addFields:(id)arg1 ;
-(unsigned long long)fieldsCount;
-(void)clearFields;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
@end

