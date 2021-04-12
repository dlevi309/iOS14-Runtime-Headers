/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASSetAudioDuckingDelay : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * duckingEventSyncDelay; 
@property (nonatomic,copy) NSNumber * preTriggerToDuckingEndDuration; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setAudioDuckingDelay;
+(id)setAudioDuckingDelayWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)duckingEventSyncDelay;
-(void)setDuckingEventSyncDelay:(NSNumber *)arg1 ;
-(NSNumber *)preTriggerToDuckingEndDuration;
-(void)setPreTriggerToDuckingEndDuration:(NSNumber *)arg1 ;
@end
