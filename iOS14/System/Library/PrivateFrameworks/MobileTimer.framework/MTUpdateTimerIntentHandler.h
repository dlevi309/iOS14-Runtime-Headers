/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTTimerIntentHandler.h>

@interface MTUpdateTimerIntentHandler : MTTimerIntentHandler
-(id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2 ;
-(void)_updateTimer:(id)arg1 dryRun:(BOOL)arg2 updateBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateTimer:(id)arg1 dryRun:(BOOL)arg2 allowMultiple:(BOOL)arg3 excludeStoppedTimers:(BOOL)arg4 filterBlock:(/*^block*/id)arg5 updateBlock:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
@end

