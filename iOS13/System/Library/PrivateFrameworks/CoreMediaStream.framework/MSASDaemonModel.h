/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASDaemonModel : MSASModelBase
+(id)defaultModel;
-(id)init;
-(void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(id)earliestNextActivityDate;
-(id)nextActivityDateByPersonID;
-(void)clearAllNextActivityDates;
@end

