/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAMicroblogGetSocialCredential.h>

@class NSString;

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property (nonatomic,copy) NSString * consumerKey; 
@property (nonatomic,copy) NSString * consumerSecret; 
+(id)getTwitterCredential;
+(id)getTwitterCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)consumerKey;
-(void)setConsumerKey:(NSString *)arg1 ;
-(NSString *)consumerSecret;
-(void)setConsumerSecret:(NSString *)arg1 ;
@end

