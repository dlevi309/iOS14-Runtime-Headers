/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface _DKCPUUsageMonitor : _DKMonitor {

	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _lastUserTick;
	unsigned long long _lastIdleTick;
	unsigned long long _lastSysTick;
	unsigned long long _lastCPUUsageLevel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;               //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned long long lastUserTick;                   //@synthesize lastUserTick=_lastUserTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastIdleTick;                   //@synthesize lastIdleTick=_lastIdleTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastSysTick;                    //@synthesize lastSysTick=_lastSysTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastCPUUsageLevel;              //@synthesize lastCPUUsageLevel=_lastCPUUsageLevel - In the implementation block
+(id)entitlements;
+(id)eventStream;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(id)loadState;
-(void)saveState;
-(void)getCPUTicksForUser:(unsigned long long*)arg1 system:(unsigned long long*)arg2 idle:(unsigned long long*)arg3 ;
-(unsigned long long)getCurrentCPUUsageLevel;
-(void)setCurrentCPUUsageLevel:(unsigned long long)arg1 ;
-(BOOL)updateCPUUsagePercentage:(unsigned long long*)arg1 ;
-(unsigned long long)getCPUUsageLevelFromPercentage:(unsigned long long)arg1 ;
-(unsigned long long)lastUserTick;
-(void)setLastUserTick:(unsigned long long)arg1 ;
-(unsigned long long)lastIdleTick;
-(void)setLastIdleTick:(unsigned long long)arg1 ;
-(unsigned long long)lastSysTick;
-(void)setLastSysTick:(unsigned long long)arg1 ;
-(unsigned long long)lastCPUUsageLevel;
-(void)setLastCPUUsageLevel:(unsigned long long)arg1 ;
@end
