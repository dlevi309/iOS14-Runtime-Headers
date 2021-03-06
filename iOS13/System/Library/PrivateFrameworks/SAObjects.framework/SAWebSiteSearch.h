/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAWebSiteSearch : SADomainCommand

@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,copy) NSString * query; 
+(id)siteSearch;
+(id)siteSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setProvider:(NSString *)arg1 ;
-(NSString *)provider;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

