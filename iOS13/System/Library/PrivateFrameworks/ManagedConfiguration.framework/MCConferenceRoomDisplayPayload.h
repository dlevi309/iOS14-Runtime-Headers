/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCConferenceRoomDisplayPayload : MCPayload {

	NSString* _customMessage;

}

@property (nonatomic,copy,readonly) NSString * customMessage;              //@synthesize customMessage=_customMessage - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)configuration;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSString *)customMessage;
@end

