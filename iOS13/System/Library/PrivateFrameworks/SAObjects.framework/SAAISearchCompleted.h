/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAISearchCompleted : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * results; 
+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)results;
-(id)groupIdentifier;
-(void)setResults:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
