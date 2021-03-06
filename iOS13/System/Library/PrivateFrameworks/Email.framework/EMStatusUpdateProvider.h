/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class NSDateFormatter;

@interface EMStatusUpdateProvider : NSObject {

	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _weekdayFormatter;
	NSDateFormatter* _dateFormatter;

}
-(id)statusUpdateStringWithDate:(id)arg1 now:(id)arg2 nextTransition:(id*)arg3 ;
-(unsigned long long)statusUpdateWithDate:(id)arg1 now:(id)arg2 nextTransition:(id*)arg3 ;
-(id)_statusUpdatedMinutesAgoWithDate:(id)arg1 now:(id)arg2 ;
-(id)_statusUpdatedAtTimeWithDate:(id)arg1 ;
-(id)_statusUpdatedOnDayWithDate:(id)arg1 ;
-(id)_statusUpdatedOnDateWithDate:(id)arg1 ;
@end

