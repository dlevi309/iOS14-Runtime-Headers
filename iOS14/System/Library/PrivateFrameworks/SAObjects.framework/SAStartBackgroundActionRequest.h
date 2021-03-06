/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAStartBackgroundActionRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * backgroundAction; 
@property (nonatomic,retain) id<SAAceSerializable> backgroundActionPayload; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startBackgroundActionRequest;
+(id)startBackgroundActionRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)backgroundAction;
-(void)setBackgroundAction:(NSString *)arg1 ;
-(id<SAAceSerializable>)backgroundActionPayload;
-(void)setBackgroundActionPayload:(id<SAAceSerializable>)arg1 ;
@end

