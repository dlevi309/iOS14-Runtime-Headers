/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class NSDateComponents;

@interface REMDisplayDateUtils : NSObject {

	BOOL _hasDisplayDate;
	BOOL _hasAlarmDateComponents;
	BOOL _isInitWithDueDateComponents;
	NSDateComponents* _dueDateComponents;
	NSDateComponents* _floatingDateComponents;
	NSDateComponents* _nonFloatingDateComponents;

}

@property (assign,nonatomic) BOOL hasDisplayDate;                                       //@synthesize hasDisplayDate=_hasDisplayDate - In the implementation block
@property (assign,nonatomic) BOOL hasAlarmDateComponents;                               //@synthesize hasAlarmDateComponents=_hasAlarmDateComponents - In the implementation block
@property (assign,nonatomic) BOOL isInitWithDueDateComponents;                          //@synthesize isInitWithDueDateComponents=_isInitWithDueDateComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * dueDateComponents;                      //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * floatingDateComponents;                 //@synthesize floatingDateComponents=_floatingDateComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * nonFloatingDateComponents;              //@synthesize nonFloatingDateComponents=_nonFloatingDateComponents - In the implementation block
+(id)displayDateWithDueDateComponents:(id)arg1 alarms:(id)arg2 ;
+(id)_displayDateWithDueDateComponents:(id)arg1 alarms:(id)arg2 hasAlarmDateComponents:(BOOL)arg3 floatingDateComponents:(id)arg4 nonFloatingDateComponents:(id)arg5 displayDateUtils:(id)arg6 ;
-(id)displayDateWithDueDateComponents:(id)arg1 alarms:(id)arg2 ;
-(NSDateComponents *)dueDateComponents;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(BOOL)hasDisplayDate;
-(void)setHasDisplayDate:(BOOL)arg1 ;
-(void)setIsInitWithDueDateComponents:(BOOL)arg1 ;
-(void)setFloatingDateComponents:(NSDateComponents *)arg1 ;
-(void)setNonFloatingDateComponents:(NSDateComponents *)arg1 ;
-(void)setHasAlarmDateComponents:(BOOL)arg1 ;
-(BOOL)isInitWithDueDateComponents;
-(BOOL)hasAlarmDateComponents;
-(NSDateComponents *)floatingDateComponents;
-(NSDateComponents *)nonFloatingDateComponents;
-(id)updateDisplayDateWithDueDateComponents:(id)arg1 alarm:(id)arg2 alarmsProviding:(id)arg3 ;
@end

