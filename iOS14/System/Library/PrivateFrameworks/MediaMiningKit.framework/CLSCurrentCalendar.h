/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSAutoupdatingCurrentCalendar.h>

@interface CLSCurrentCalendar : CLSAutoupdatingCurrentCalendar
+(void)initialize;
+(id)calendar;
+(BOOL)closestWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 afterDate:(id)arg3 ;
+(void)update;
+(BOOL)nextWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
+(BOOL)rangeOfWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3 ;
+(BOOL)dateIntervalIntersectsWeekend:(id)arg1 ;
+(BOOL)isWeekendDate:(id)arg1 ;
@end

