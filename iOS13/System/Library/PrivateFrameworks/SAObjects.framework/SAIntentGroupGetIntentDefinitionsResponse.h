/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAIntentGroupGetIntentDefinitionsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * intentDefinitionInfos; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getIntentDefinitionsResponse;
+(id)getIntentDefinitionsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)intentDefinitionInfos;
-(void)setIntentDefinitionInfos:(NSArray *)arg1 ;
@end

