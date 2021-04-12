/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INDateComponentsRange, INSpeakableString, NSNumber;

@interface INAlarmSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _alarmReferenceType;
	NSString* _identifier;
	INDateComponentsRange* _time;
	INSpeakableString* _label;
	long long _alarmSearchStatus;
	NSNumber* _includeSleepAlarm;
	long long _period;
	NSNumber* _isMeridianInferred;

}

@property (nonatomic,readonly) long long alarmReferenceType;                    //@synthesize alarmReferenceType=_alarmReferenceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * time;               //@synthesize time=_time - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long alarmSearchStatus;                     //@synthesize alarmSearchStatus=_alarmSearchStatus - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * includeSleepAlarm;               //@synthesize includeSleepAlarm=_includeSleepAlarm - In the implementation block
@property (nonatomic,readonly) long long period;                                //@synthesize period=_period - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isMeridianInferred;              //@synthesize isMeridianInferred=_isMeridianInferred - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(long long)period;
-(INDateComponentsRange *)time;
-(id)initWithAlarmReferenceType:(long long)arg1 identifier:(id)arg2 time:(id)arg3 label:(id)arg4 alarmSearchStatus:(long long)arg5 includeSleepAlarm:(id)arg6 period:(long long)arg7 isMeridianInferred:(id)arg8 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)alarmReferenceType;
-(long long)alarmSearchStatus;
-(NSNumber *)includeSleepAlarm;
-(NSNumber *)isMeridianInferred;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INSpeakableString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end
