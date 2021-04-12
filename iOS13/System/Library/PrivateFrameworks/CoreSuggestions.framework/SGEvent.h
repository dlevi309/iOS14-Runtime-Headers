/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGObject.h>
#import <libobjc.A.dylib/SGEventForGeocode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSTimeZone, NSArray, NSURL;

@interface SGEvent : SGObject <SGEventForGeocode> {

	NSObject*<OS_dispatch_queue> _geocodeQueue;
	SGEvent* _geocoded;
	BOOL _isAllDay;
	NSString* _title;
	NSString* _notes;
	NSDate* _start;
	NSTimeZone* _startTimeZone;
	NSDate* _end;
	NSTimeZone* _endTimeZone;
	NSDate* _creationDate;
	NSDate* _lastModifiedDate;
	NSArray* _locations;
	NSString* _opaqueKey;
	NSString* _uniqueKey;
	NSArray* _tags;
	NSURL* _URL;
	NSString* _naturalLanguageEventTypeIdentifier;
	unsigned long long _naturalLanguageEventAttributes;
	NSArray* _schemaOrg;

}

@property (nonatomic,readonly) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * notes;                                                     //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSDate * start;                                                       //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) NSTimeZone * startTimeZone;                                           //@synthesize startTimeZone=_startTimeZone - In the implementation block
@property (nonatomic,readonly) NSDate * end;                                                         //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSTimeZone * endTimeZone;                                             //@synthesize endTimeZone=_endTimeZone - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                                                        //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedDate;                                            //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) NSArray * locations;                                                  //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) NSString * opaqueKey;                                                 //@synthesize opaqueKey=_opaqueKey - In the implementation block
@property (nonatomic,readonly) NSString * uniqueKey;                                                 //@synthesize uniqueKey=_uniqueKey - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                                                       //@synthesize tags=_tags - In the implementation block
@property (getter=isGeocodeCandidate,nonatomic,readonly) BOOL geocodeCandidate; 
@property (nonatomic,readonly) NSURL * URL;                                                          //@synthesize URL=_URL - In the implementation block
@property (getter=isNaturalLanguageEvent,nonatomic,readonly) BOOL naturalLanguageEvent; 
@property (nonatomic,readonly) NSString * naturalLanguageEventTypeIdentifier;                        //@synthesize naturalLanguageEventTypeIdentifier=_naturalLanguageEventTypeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long naturalLanguageEventAttributes;                    //@synthesize naturalLanguageEventAttributes=_naturalLanguageEventAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * schemaOrg;                                                  //@synthesize schemaOrg=_schemaOrg - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)sameDayEvents:(id)arg1 ;
+(id)formatEvents:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)eventWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16 ;
-(id)formattedStartDate;
-(id)formattedStartTime;
-(id)timeZoneOrGMT;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)start;
-(NSURL *)URL;
-(NSArray *)tags;
-(NSString *)title;
-(double)duration;
-(NSDate *)end;
-(NSDate *)creationDate;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(NSArray *)locations;
-(BOOL)isAllDay;
-(NSString *)notes;
-(id)startDateComponents;
-(id)endDateComponents;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
-(NSString *)uniqueKey;
-(NSString *)opaqueKey;
-(void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 ;
-(void)geocodeWithCallback:(/*^block*/id)arg1 ;
-(id)toEKEventWithStore:(id)arg1 ;
-(BOOL)isNaturalLanguageEvent;
-(id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2 ;
-(NSArray *)schemaOrg;
-(unsigned long long)geocodingMode;
-(id)poiFilters;
-(id)geocodeStartDate;
-(id)geocodeStartTimeZone;
-(id)geocodeEndDate;
-(id)geocodeEndTimeZone;
-(id)geocodeLocations;
-(id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5 ;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tagStrings:(id)arg15 URL:(id)arg16 naturalLanguageEventIdentifier:(id)arg17 naturalLanguageEventAttributes:(unsigned long long)arg18 schemaOrg:(id)arg19 ;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16 ;
-(id)_componentsForDate:(id)arg1 timeZone:(id)arg2 isEnd:(BOOL)arg3 calendar:(id)arg4 ;
-(BOOL)isGeocodeCandidate;
-(void)mergeIntoEKEvent:(id)arg1 ;
-(BOOL)shouldAllowNotificationsInCalendar;
-(BOOL)shouldAllowNotificationsInCalendarForBundleId:(id)arg1 appIsInForeground:(BOOL)arg2 ;
-(void)_applyTimeRangeToEKEvent:(id)arg1 withTZID:(id)arg2 ;
-(void)_mergeTagsIntoEKEvent:(id)arg1 withStore:(id)arg2 ;
-(void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 preservingValuesDifferentFrom:(id)arg3 ;
-(id)firstLocationForType:(unsigned long long)arg1 ;
-(id)_naturalLanguageEventTagsInTags:(id)arg1 ;
-(NSString *)naturalLanguageEventTypeIdentifier;
-(unsigned long long)naturalLanguageEventAttributes;
@end
