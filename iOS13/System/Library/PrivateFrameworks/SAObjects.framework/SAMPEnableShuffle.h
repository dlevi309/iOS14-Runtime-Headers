/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPEnableShuffle : SADomainCommand

@property (assign,nonatomic) BOOL enable; 
+(id)enableShuffle;
+(id)enableShuffleWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)enable;
-(void)setEnable:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

