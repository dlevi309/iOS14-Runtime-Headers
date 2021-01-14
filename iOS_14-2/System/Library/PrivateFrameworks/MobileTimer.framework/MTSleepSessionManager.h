/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSleepSessionTrackerDelegate.h>

@protocol NAScheduler, MTSleepSessionTracker, MTSleepSessionTrackerDelegate;
@class MTAlarmStorage, HKHealthStore, NSString;

@interface MTSleepSessionManager : NSObject <MTSleepSessionTrackerDelegate> {

	id<NAScheduler> _serializer;
	MTAlarmStorage* _alarmStorage;
	HKHealthStore* _healthStore;
	NSString* _archivedSessionDataPath;
	NSString* _archivedSessionDataFile;
	id<MTSleepSessionTracker> _sleepSessionTracker;
	id<MTSleepSessionTrackerDelegate> _sleepSessionTrackerDelegate;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                                                        //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTAlarmStorage * alarmStorage;                                                     //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                                       //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,copy) NSString * archivedSessionDataPath;                                                  //@synthesize archivedSessionDataPath=_archivedSessionDataPath - In the implementation block
@property (nonatomic,copy) NSString * archivedSessionDataFile;                                                  //@synthesize archivedSessionDataFile=_archivedSessionDataFile - In the implementation block
@property (nonatomic,retain) id<MTSleepSessionTracker> sleepSessionTracker;                                     //@synthesize sleepSessionTracker=_sleepSessionTracker - In the implementation block
@property (assign,nonatomic,__weak) id<MTSleepSessionTrackerDelegate> sleepSessionTrackerDelegate;              //@synthesize sleepSessionTrackerDelegate=_sleepSessionTrackerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)platformSpecificSourceBundleIdentifier;
+(id)sleepSampleWithInterval:(id)arg1 sampleType:(long long)arg2 metadata:(id)arg3 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(HKHealthStore *)healthStore;
-(MTAlarmStorage *)alarmStorage;
-(id<MTSleepSessionTrackerDelegate>)sleepSessionTrackerDelegate;
-(void)setSleepSessionTrackerDelegate:(id<MTSleepSessionTrackerDelegate>)arg1 ;
-(id<MTSleepSessionTracker>)sleepSessionTracker;
-(id<NAScheduler>)serializer;
-(void)archiveSession:(id)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)_unprocessedSessions;
-(void)sleepSessionTracker:(id)arg1 sessionDidComplete:(id)arg2 ;
-(void)setSleepSessionTracker:(id<MTSleepSessionTracker>)arg1 ;
-(id)writeSession:(id)arg1 ;
-(void)waitForUnlock;
-(NSString *)archivedSessionDataPath;
-(NSString *)archivedSessionDataFile;
-(id)_writeSessions:(id)arg1 ;
-(id)_writeSessionData;
-(void)deviceFirstUnlocked;
-(void)_removeSessionDataFile;
-(void)saveSessionData;
-(id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 sleepSessionTracker:(id)arg3 ;
-(void)setArchivedSessionDataPath:(NSString *)arg1 ;
-(void)setArchivedSessionDataFile:(NSString *)arg1 ;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(BOOL)_hasUnprocessedSessions;
@end
