/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDAWDHealthKitAchievement, HDAWDHealthKitActivityCache, HDAWDHealthKitConcurrentCalendarItem, HDAWDHealthKitExperimentalCondition, HDAWDHealthKitNotificationResponseFlags, NSMutableArray, HDAWDHealthKitWeeklySummaryDetail;

@interface HDAWDHealthKitNotificationEvent : PBCodable <NSCopying> {

	SCD_Struct_HD69* _goalTypes;
	long long _endDate;
	long long _startDate;
	unsigned long long _timestamp;
	HDAWDHealthKitAchievement* _achievement;
	HDAWDHealthKitActivityCache* _activityCache;
	int _alertType;
	HDAWDHealthKitConcurrentCalendarItem* _calendarItem;
	HDAWDHealthKitExperimentalCondition* _experimentalCondition;
	HDAWDHealthKitNotificationResponseFlags* _responseFlags;
	int _testAction;
	NSMutableArray* _views;
	HDAWDHealthKitWeeklySummaryDetail* _weeklySummaryDetail;
	BOOL _dndEnabled;
	BOOL _failedPosting;
	SCD_Struct_HD70 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) int alertType;                                                            //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                                                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                                                        //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasDndEnabled; 
@property (assign,nonatomic) BOOL dndEnabled;                                                          //@synthesize dndEnabled=_dndEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasFailedPosting; 
@property (assign,nonatomic) BOOL failedPosting;                                                       //@synthesize failedPosting=_failedPosting - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentalCondition; 
@property (nonatomic,retain) HDAWDHealthKitExperimentalCondition * experimentalCondition;              //@synthesize experimentalCondition=_experimentalCondition - In the implementation block
@property (assign,nonatomic) BOOL hasTestAction; 
@property (assign,nonatomic) int testAction;                                                           //@synthesize testAction=_testAction - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendarItem; 
@property (nonatomic,retain) HDAWDHealthKitConcurrentCalendarItem * calendarItem;                      //@synthesize calendarItem=_calendarItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * views;                                                   //@synthesize views=_views - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityCache; 
@property (nonatomic,retain) HDAWDHealthKitActivityCache * activityCache;                              //@synthesize activityCache=_activityCache - In the implementation block
@property (nonatomic,readonly) BOOL hasAchievement; 
@property (nonatomic,retain) HDAWDHealthKitAchievement * achievement;                                  //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,readonly) BOOL hasWeeklySummaryDetail; 
@property (nonatomic,retain) HDAWDHealthKitWeeklySummaryDetail * weeklySummaryDetail;                  //@synthesize weeklySummaryDetail=_weeklySummaryDetail - In the implementation block
@property (nonatomic,readonly) unsigned long long goalTypesCount; 
@property (nonatomic,readonly) unsigned* goalTypes; 
@property (nonatomic,readonly) BOOL hasResponseFlags; 
@property (nonatomic,retain) HDAWDHealthKitNotificationResponseFlags * responseFlags;                  //@synthesize responseFlags=_responseFlags - In the implementation block
+(Class)viewsType;
-(id)dictionaryRepresentation;
-(int)alertType;
-(long long)endDate;
-(HDAWDHealthKitAchievement *)achievement;
-(void)setStartDate:(long long)arg1 ;
-(void)setViews:(NSMutableArray *)arg1 ;
-(long long)startDate;
-(unsigned long long)timestamp;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAlertType:(int)arg1 ;
-(unsigned long long)viewsCount;
-(id)description;
-(void)setCalendarItem:(HDAWDHealthKitConcurrentCalendarItem *)arg1 ;
-(BOOL)hasAlertType;
-(void)setHasAlertType:(BOOL)arg1 ;
-(id)alertTypeAsString:(int)arg1 ;
-(int)StringAsAlertType:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(HDAWDHealthKitNotificationResponseFlags *)responseFlags;
-(HDAWDHealthKitConcurrentCalendarItem *)calendarItem;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAchievement:(HDAWDHealthKitAchievement *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)views;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasEndDate;
-(void)clearViews;
-(void)addViews:(id)arg1 ;
-(void)setExperimentalCondition:(HDAWDHealthKitExperimentalCondition *)arg1 ;
-(id)viewsAtIndex:(unsigned long long)arg1 ;
-(void)setActivityCache:(HDAWDHealthKitActivityCache *)arg1 ;
-(void)setWeeklySummaryDetail:(HDAWDHealthKitWeeklySummaryDetail *)arg1 ;
-(unsigned long long)goalTypesCount;
-(void)clearGoalTypes;
-(unsigned)goalTypesAtIndex:(unsigned long long)arg1 ;
-(void)addGoalTypes:(unsigned)arg1 ;
-(void)setResponseFlags:(HDAWDHealthKitNotificationResponseFlags *)arg1 ;
-(void)setDndEnabled:(BOOL)arg1 ;
-(void)setHasDndEnabled:(BOOL)arg1 ;
-(BOOL)hasDndEnabled;
-(void)setFailedPosting:(BOOL)arg1 ;
-(void)setHasFailedPosting:(BOOL)arg1 ;
-(BOOL)hasFailedPosting;
-(BOOL)hasExperimentalCondition;
-(int)testAction;
-(void)setTestAction:(int)arg1 ;
-(void)setHasTestAction:(BOOL)arg1 ;
-(BOOL)hasTestAction;
-(id)testActionAsString:(int)arg1 ;
-(int)StringAsTestAction:(id)arg1 ;
-(BOOL)hasCalendarItem;
-(BOOL)hasActivityCache;
-(BOOL)hasAchievement;
-(BOOL)hasWeeklySummaryDetail;
-(unsigned*)goalTypes;
-(void)setGoalTypes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasResponseFlags;
-(BOOL)dndEnabled;
-(BOOL)failedPosting;
-(HDAWDHealthKitExperimentalCondition *)experimentalCondition;
-(HDAWDHealthKitActivityCache *)activityCache;
-(HDAWDHealthKitWeeklySummaryDetail *)weeklySummaryDetail;
@end

