/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAAceResult : SABaseAceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAAceSerializable> result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceResult;
+(id)aceResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAAceSerializable>)result;
-(id)groupIdentifier;
-(void)setResult:(id<SAAceSerializable>)arg1 ;
-(id)encodedClassName;
@end

