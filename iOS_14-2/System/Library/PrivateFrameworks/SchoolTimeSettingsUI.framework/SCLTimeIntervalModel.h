/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <libobjc.A.dylib/SCLTimeIntervalDateConverting.h>

@class NSCalendar, NSMutableArray, NSDateInterval, NSArray, NSString;

@interface SCLTimeIntervalModel : NSObject <SCLTimeIntervalDateConverting> {

	NSMutableArray* _timeIntervals;
	BOOL _canAppendTimeInterval;
	NSCalendar* _calendar;
	NSDateInterval* _canonicalDateInterval;

}

@property (assign,nonatomic) BOOL canAppendTimeInterval;                            //@synthesize canAppendTimeInterval=_canAppendTimeInterval - In the implementation block
@property (nonatomic,copy,readonly) NSArray * constraintIntervals; 
@property (nonatomic,copy) NSArray * timeIntervals; 
@property (nonatomic,readonly) NSCalendar * calendar;                               //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDateInterval * canonicalDateInterval;              //@synthesize canonicalDateInterval=_canonicalDateInterval - In the implementation block
@property (nonatomic,readonly) BOOL canRemoveTimeIntervals; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultTimeInterval;
-(id)init;
-(NSCalendar *)calendar;
-(void)appendTimeInterval:(id)arg1 ;
-(NSArray *)timeIntervals;
-(id)canonicalDateIntervalForTimeInterval:(id)arg1 ;
-(id)scheduleTimeWithDate:(id)arg1 ;
-(void)setTimeIntervals:(NSArray *)arg1 ;
-(id)initWithTimeIntervals:(id)arg1 ;
-(void)_recalculateCanAppend;
-(BOOL)canRemoveTimeIntervals;
-(void)setCanAppendTimeInterval:(BOOL)arg1 ;
-(NSArray *)constraintIntervals;
-(id)nextProposedTimeInterval;
-(void)removeTimeIntervalAtIndex:(unsigned long long)arg1 ;
-(void)replaceTimeIntervalAtIndex:(unsigned long long)arg1 withTimeInterval:(id)arg2 ;
-(NSDateInterval *)canonicalDateInterval;
-(BOOL)canAppendTimeInterval;
@end
