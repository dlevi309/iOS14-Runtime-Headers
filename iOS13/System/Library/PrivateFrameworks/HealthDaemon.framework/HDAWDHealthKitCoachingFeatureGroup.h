/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDAWDHealthKitCoachingFeatureGroup : PBCodable <NSCopying> {

	NSMutableArray* _futures;
	NSMutableArray* _pasts;

}

@property (nonatomic,retain) NSMutableArray * pasts;                //@synthesize pasts=_pasts - In the implementation block
@property (nonatomic,retain) NSMutableArray * futures;              //@synthesize futures=_futures - In the implementation block
+(Class)pastType;
+(Class)futureType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addPast:(id)arg1 ;
-(void)addFuture:(id)arg1 ;
-(unsigned long long)pastsCount;
-(void)clearPasts;
-(id)pastAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)futuresCount;
-(void)clearFutures;
-(id)futureAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pasts;
-(void)setPasts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)futures;
-(void)setFutures:(NSMutableArray *)arg1 ;
@end
