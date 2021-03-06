/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol NAScheduler, OS_dispatch_queue;
@class NSObject, MTObserverStore, NSString;

@interface MTTimeListener : NSObject <MTAgentNotificationListener> {

	id<NAScheduler> _serializer;
	NSObject*<OS_dispatch_queue> _queue;
	MTObserverStore* _observers;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                     //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)registerObserver:(id)arg1 ;
-(MTObserverStore *)observers;
-(id)init;
-(id)initWithCallbackScheduler:(id)arg1 ;
-(id<NAScheduler>)serializer;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(double)assertionTimeOutForNotification:(id)arg1 ofType:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

