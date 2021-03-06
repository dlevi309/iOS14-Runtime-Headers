/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSDictionary;

@interface SAPunchoutOutcome : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * originalCommandId; 
@property (nonatomic,copy) NSDictionary * outcomes; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)punchoutOutcome;
+(id)punchoutOutcomeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)originalCommandId;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(void)setOutcomes:(NSDictionary *)arg1 ;
-(NSDictionary *)outcomes;
@end

