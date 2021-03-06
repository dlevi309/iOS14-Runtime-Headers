/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSleepSessionManagerDelegate.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPSleepTracker;
@class HDSPEnvironment, HKSPObserverSet, HDSPSleepSessionManager, NSString;

@interface HDSPSleepTrackingManager : NSObject <HDSPSleepSessionManagerDelegate, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	HKSPObserverSet* _sleepSessionObservers;
	HDSPSleepSessionManager* _sleepSessionManager;
	id<HDSPSleepTracker> _sleepTracker;

}

@property (nonatomic,readonly) HKSPObserverSet * sleepSessionObservers;                    //@synthesize sleepSessionObservers=_sleepSessionObservers - In the implementation block
@property (nonatomic,readonly) HDSPSleepSessionManager * sleepSessionManager;              //@synthesize sleepSessionManager=_sleepSessionManager - In the implementation block
@property (nonatomic,readonly) id<HDSPSleepTracker> sleepTracker;                          //@synthesize sleepTracker=_sleepTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                       //@synthesize environment=_environment - In the implementation block
+(id)platformSpecificTrackerWithEnvironment:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(void)sleepSessionManagerDidFinishSession:(id)arg1 ;
-(void)sleepSessionManager:(id)arg1 didSaveArchivedSessions:(id)arg2 ;
-(id<HDSPSleepTracker>)sleepTracker;
-(id)initWithEnvironment:(id)arg1 ;
-(id)sleepSessionManager:(id)arg1 requestsProcessedSessionForSession:(id)arg2 ;
-(HKSPObserverSet *)sleepSessionObservers;
-(void)removeObserver:(id)arg1 ;
-(void)sleepSessionManager:(id)arg1 didSaveSession:(id)arg2 ;
-(HDSPEnvironment *)environment;
-(HDSPSleepSessionManager *)sleepSessionManager;
-(id)initWithEnvironment:(id)arg1 sleepSessionManager:(id)arg2 sleepTracker:(id)arg3 ;
@end

