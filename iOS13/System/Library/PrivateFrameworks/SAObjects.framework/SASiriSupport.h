/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SASiriSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * authToken; 
@property (nonatomic,copy) NSArray * endpoints; 
@property (nonatomic,copy) NSArray * useCases; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriSupport;
+(id)siriSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSArray *)endpoints;
-(void)setEndpoints:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)useCases;
-(void)setUseCases:(NSArray *)arg1 ;
@end

