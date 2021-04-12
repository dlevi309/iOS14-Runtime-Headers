/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDCoreRoutineLMPScoreBoard : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _instances;
	NSMutableArray* _secondaryInstances;
	SCD_Struct_AW5 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * instances;                       //@synthesize instances=_instances - In the implementation block
@property (nonatomic,retain) NSMutableArray * secondaryInstances;              //@synthesize secondaryInstances=_secondaryInstances - In the implementation block
+(Class)instancesType;
+(Class)secondaryInstancesType;
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSMutableArray *)instances;
-(unsigned long long)instancesCount;
-(void)addInstances:(id)arg1 ;
-(void)clearInstances;
-(void)setInstances:(NSMutableArray *)arg1 ;
-(void)setSecondaryInstances:(NSMutableArray *)arg1 ;
-(void)addSecondaryInstances:(id)arg1 ;
-(id)instancesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)secondaryInstancesCount;
-(void)clearSecondaryInstances;
-(id)secondaryInstancesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)secondaryInstances;
@end
