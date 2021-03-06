/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, HKWorkout, _HKWorkoutObserver, _HKCurrentWorkoutSnapshot, HKHealthStore, HKSampleQuery, HKObserverQuery;

@interface NTKWorkoutComplicationDataSource : NTKComplicationDataSource {

	NSObject*<OS_dispatch_queue> _healthQueue;
	BOOL _deviceIsLocked;
	int _workoutStateNotifyToken;
	NSArray* _animationImages;
	BOOL _inUVPreview;
	BOOL _loadingLastWorkout;
	BOOL _hasKnownLastWorkoutState;
	HKWorkout* _lastWorkout;
	_HKWorkoutObserver* _workoutObserver;
	_HKCurrentWorkoutSnapshot* _activeWorkoutSnapshot;
	HKHealthStore* _healthStore;
	HKSampleQuery* _lastWorkoutQuery;
	HKObserverQuery* _workoutObservationQuery;

}

@property (assign,getter=isLoadingLastWorkout,nonatomic) BOOL loadingLastWorkout;              //@synthesize loadingLastWorkout=_loadingLastWorkout - In the implementation block
@property (nonatomic,retain) HKWorkout * lastWorkout;                                          //@synthesize lastWorkout=_lastWorkout - In the implementation block
@property (assign,nonatomic) BOOL hasKnownLastWorkoutState;                                    //@synthesize hasKnownLastWorkoutState=_hasKnownLastWorkoutState - In the implementation block
@property (nonatomic,retain) _HKWorkoutObserver * workoutObserver;                             //@synthesize workoutObserver=_workoutObserver - In the implementation block
@property (nonatomic,retain) _HKCurrentWorkoutSnapshot * activeWorkoutSnapshot;                //@synthesize activeWorkoutSnapshot=_activeWorkoutSnapshot - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKSampleQuery * lastWorkoutQuery;                                 //@synthesize lastWorkoutQuery=_lastWorkoutQuery - In the implementation block
@property (nonatomic,retain) HKObserverQuery * workoutObservationQuery;                        //@synthesize workoutObservationQuery=_workoutObservationQuery - In the implementation block
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_templateForWorkout:(id)arg1 family:(long long)arg2 ;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(id)_unknownTemplateForFamily:(long long)arg1 ;
+(id)_workoutTintColor;
+(id)_signatureTemplateWithFamily:(long long)arg1 hasActiveWorkout:(BOOL)arg2 hasPausedActiveWorkout:(BOOL)arg3 ;
-(HKHealthStore *)healthStore;
-(void)_invalidate;
-(id)_animationImages;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)_startObserving;
-(void)resumeAnimations;
-(void)resume;
-(void)dealloc;
-(BOOL)_hasActiveWorkout;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg1 ;
-(void)_handleDeviceLockChange;
-(id)complicationApplicationIdentifier;
-(void)_updateActiveWorkoutState;
-(void)_stopLastWorkoutQuerySynchronously:(BOOL)arg1 ;
-(void)_stopObservingSynchronously:(BOOL)arg1 ;
-(id)_templateForActiveWorkoutInSwitcher:(BOOL)arg1 ;
-(id)_noWorkoutsTemplate;
-(void)_startLastWorkoutQueryIfPossible;
-(BOOL)_hasPausedActiveWorkout;
-(id)_makeAnimatedImageProvider;
-(id)_makeObservationQuery;
-(void)setWorkoutObservationQuery:(HKObserverQuery *)arg1 ;
-(HKObserverQuery *)workoutObservationQuery;
-(id)_makeLastWorkoutQuery;
-(void)setLastWorkoutQuery:(HKSampleQuery *)arg1 ;
-(HKSampleQuery *)lastWorkoutQuery;
-(void)setLoadingLastWorkout:(BOOL)arg1 ;
-(void)setLastWorkout:(HKWorkout *)arg1 ;
-(void)setHasKnownLastWorkoutState:(BOOL)arg1 ;
-(void)setActiveWorkoutSnapshot:(_HKCurrentWorkoutSnapshot *)arg1 ;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(id)lockedTemplate;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)isLoadingLastWorkout;
-(HKWorkout *)lastWorkout;
-(BOOL)hasKnownLastWorkoutState;
-(_HKWorkoutObserver *)workoutObserver;
-(void)setWorkoutObserver:(_HKWorkoutObserver *)arg1 ;
-(_HKCurrentWorkoutSnapshot *)activeWorkoutSnapshot;
@end

