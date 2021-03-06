/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_queue;
@class NSString, BRCFairScheduler, NSObject;

@interface BRCFairSource : NSObject {

	unsigned long long _schedulerBitIndex;
	NSString* _name;
	BRCFairScheduler* _scheduler;
	int _suspendCount;
	BOOL _cancelled;
	BOOL _signaled;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _eventHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id eventHandler;                                   //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)resume;
-(void)signal;
-(void)suspend;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)initWithName:(id)arg1 scheduler:(id)arg2 ;
-(void)_runEventHandler;
@end

