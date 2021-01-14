/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/DNDSBackingStoreRecord.h>

@class NSNumber, NSString;

@interface DNDSScheduleSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord> {

	NSNumber* _lastUpdatedTimestamp;
	NSNumber* _scheduleEnabledSetting;
	NSNumber* _timePeriodStartTimeHour;
	NSNumber* _timePeriodStartTimeMinute;
	NSNumber* _timePeriodEndTimeHour;
	NSNumber* _timePeriodEndTimeMinute;
	NSNumber* _bedtimeBehaviorEnabledSetting;

}

@property (nonatomic,copy,readonly) NSNumber * lastUpdatedTimestamp;                       //@synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * scheduleEnabledSetting;                     //@synthesize scheduleEnabledSetting=_scheduleEnabledSetting - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timePeriodStartTimeHour;                    //@synthesize timePeriodStartTimeHour=_timePeriodStartTimeHour - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timePeriodStartTimeMinute;                  //@synthesize timePeriodStartTimeMinute=_timePeriodStartTimeMinute - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timePeriodEndTimeHour;                      //@synthesize timePeriodEndTimeHour=_timePeriodEndTimeHour - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timePeriodEndTimeMinute;                    //@synthesize timePeriodEndTimeMinute=_timePeriodEndTimeMinute - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bedtimeBehaviorEnabledSetting;              //@synthesize bedtimeBehaviorEnabledSetting=_bedtimeBehaviorEnabledSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)newWithDictionaryRepresentation:(id)arg1 ;
+(id)recordForLegacyBehaviorOverride:(id)arg1 lastUpdated:(id)arg2 ;
+(id)_recordWithEncodedInfo:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithRecord:(id)arg1 ;
-(NSNumber *)scheduleEnabledSetting;
-(NSNumber *)bedtimeBehaviorEnabledSetting;
-(NSNumber *)lastUpdatedTimestamp;
-(NSNumber *)timePeriodStartTimeHour;
-(NSNumber *)timePeriodStartTimeMinute;
-(NSNumber *)timePeriodEndTimeHour;
-(NSNumber *)timePeriodEndTimeMinute;
-(id)_initWithLastUpdatedTimestamp:(id)arg1 scheduleEnabledSetting:(id)arg2 timePeriodStartTimeHour:(id)arg3 timePeriodStartTimeMinute:(id)arg4 timePeriodEndTimeHour:(id)arg5 timePeriodEndTimeMinute:(id)arg6 bedtimeBehaviorEnabledSetting:(id)arg7 ;
-(id)legacyBehaviorOverride;
@end
