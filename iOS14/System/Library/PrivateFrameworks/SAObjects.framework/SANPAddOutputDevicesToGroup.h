/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SANPAddOutputDevicesToGroup : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * groupID; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
+(id)addOutputDevicesToGroup;
+(id)addOutputDevicesToGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

