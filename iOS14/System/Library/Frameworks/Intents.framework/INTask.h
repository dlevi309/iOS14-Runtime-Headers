/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, INSpatialEventTrigger, INTemporalEventTrigger, NSDateComponents, NSString, INContactEventTrigger;

@interface INTask : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakableString* _title;
	long long _status;
	INSpatialEventTrigger* _spatialEventTrigger;
	INTemporalEventTrigger* _temporalEventTrigger;
	NSDateComponents* _createdDateComponents;
	NSDateComponents* _modifiedDateComponents;
	NSString* _identifier;
	long long _taskType;
	long long _priority;
	INContactEventTrigger* _contactEventTrigger;
	long long _taskReference;
	NSString* _parentIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INContactEventTrigger * contactEventTrigger;                //@synthesize contactEventTrigger=_contactEventTrigger - In the implementation block
@property (nonatomic,readonly) long long taskReference;                                         //@synthesize taskReference=_taskReference - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentIdentifier;                                //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long status;                                                //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) INSpatialEventTrigger * spatialEventTrigger;                //@synthesize spatialEventTrigger=_spatialEventTrigger - In the implementation block
@property (nonatomic,copy,readonly) INTemporalEventTrigger * temporalEventTrigger;              //@synthesize temporalEventTrigger=_temporalEventTrigger - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * createdDateComponents;                   //@synthesize createdDateComponents=_createdDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * modifiedDateComponents;                  //@synthesize modifiedDateComponents=_modifiedDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long taskType;                                              //@synthesize taskType=_taskType - In the implementation block
@property (nonatomic,readonly) long long priority;                                              //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 priority:(long long)arg9 contactEventTrigger:(id)arg10 taskReference:(long long)arg11 parentIdentifier:(id)arg12 ;
-(id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 priority:(long long)arg9 ;
-(id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 contactEventTrigger:(id)arg9 taskReference:(long long)arg10 ;
-(id)init;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(NSString *)parentIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 ;
-(id)_dictionaryRepresentation;
-(NSDateComponents *)createdDateComponents;
-(NSDateComponents *)modifiedDateComponents;
-(long long)taskReference;
-(long long)taskType;
-(NSString *)description;
-(unsigned long long)hash;
-(INContactEventTrigger *)contactEventTrigger;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)identifier;
-(long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INSpeakableString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end
