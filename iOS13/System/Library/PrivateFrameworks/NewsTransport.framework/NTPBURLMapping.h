/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying> {

	NSMutableArray* _domains;

}

@property (nonatomic,retain) NSMutableArray * domains;              //@synthesize domains=_domains - In the implementation block
+(Class)domainsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)domains;
-(void)setDomains:(NSMutableArray *)arg1 ;
-(void)addDomains:(id)arg1 ;
-(void)clearDomains;
-(unsigned long long)domainsCount;
-(id)domainsAtIndex:(unsigned long long)arg1 ;
@end

