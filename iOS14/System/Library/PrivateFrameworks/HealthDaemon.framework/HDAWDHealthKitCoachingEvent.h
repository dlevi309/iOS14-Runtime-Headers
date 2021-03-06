/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDAWDHealthKitCoachingFeatureGroup;

@interface HDAWDHealthKitCoachingEvent : PBCodable <NSCopying> {

	SCD_Struct_HD69* _goalTypes;
	unsigned long long _duration;
	unsigned long long _eventTimestamp;
	unsigned long long _timestamp;
	unsigned _dismissReason;
	unsigned _eventType;
	HDAWDHealthKitCoachingFeatureGroup* _features;
	unsigned _newGoal;
	unsigned _recommendedGoal;
	SCD_Struct_HD70 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                                         //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasDismissReason; 
@property (assign,nonatomic) unsigned dismissReason;                                     //@synthesize dismissReason=_dismissReason - In the implementation block
@property (nonatomic,readonly) unsigned long long goalTypesCount; 
@property (nonatomic,readonly) unsigned* goalTypes; 
@property (assign,nonatomic) BOOL hasRecommendedGoal; 
@property (assign,nonatomic) unsigned recommendedGoal;                                   //@synthesize recommendedGoal=_recommendedGoal - In the implementation block
@property (assign,nonatomic) BOOL hasNewGoal; 
@property (assign,nonatomic) unsigned newGoal;                                           //@synthesize newGoal=_newGoal - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatures; 
@property (nonatomic,retain) HDAWDHealthKitCoachingFeatureGroup * features;              //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) BOOL hasEventTimestamp; 
@property (assign,nonatomic) unsigned long long eventTimestamp;                          //@synthesize eventTimestamp=_eventTimestamp - In the implementation block
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(void)setEventType:(unsigned)arg1 ;
-(unsigned)eventType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(HDAWDHealthKitCoachingFeatureGroup *)features;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setFeatures:(HDAWDHealthKitCoachingFeatureGroup *)arg1 ;
-(id)description;
-(unsigned)newGoal;
-(void)setEventTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)eventTimestamp;
-(void)setHasEventTimestamp:(BOOL)arg1 ;
-(BOOL)hasEventTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasFeatures;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned)dismissReason;
-(void)setDismissReason:(unsigned)arg1 ;
-(void)setHasDismissReason:(BOOL)arg1 ;
-(BOOL)hasDismissReason;
-(unsigned long long)goalTypesCount;
-(void)clearGoalTypes;
-(unsigned*)goalTypes;
-(void)setGoalTypes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)goalTypeAtIndex:(unsigned long long)arg1 ;
-(void)addGoalType:(unsigned)arg1 ;
-(void)setRecommendedGoal:(unsigned)arg1 ;
-(void)setHasRecommendedGoal:(BOOL)arg1 ;
-(BOOL)hasRecommendedGoal;
-(void)setNewGoal:(unsigned)arg1 ;
-(void)setHasNewGoal:(BOOL)arg1 ;
-(BOOL)hasNewGoal;
-(unsigned)recommendedGoal;
@end

