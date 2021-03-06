/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNDateHelper : NSObject
+(id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7 ;
+(long long)gregorianYearInGMTFromDate:(id)arg1 ;
+(id)gregorianCalendarInGMT;
+(id)gregorianCalendar;
+(id)dateComponentsFromDateComponents:(id)arg1 preservingUnits:(unsigned long long)arg2 ;
+(id)dateComponentsInGregorianYearlessYearForYearlessDateComponents:(id)arg1 timeZone:(id)arg2 ;
+(BOOL)isComponentsEmpty:(id)arg1 ;
+(long long)currentGregorianYearInGMT;
+(long long)gregorianYearFromDate:(id)arg1 ;
+(id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
+(id)componentsFromDate:(id)arg1 ;
+(id)componentsForJanuary1WithYear:(long long)arg1 ;
+(id)dateComponentsInCalendar:(id)arg1 fromGregorianDateComponents:(id)arg2 ;
+(id)gregorianDateComponentsFromDateComponents:(id)arg1 ;
+(BOOL)isGregorianDerivedCalendar:(id)arg1 ;
@end

