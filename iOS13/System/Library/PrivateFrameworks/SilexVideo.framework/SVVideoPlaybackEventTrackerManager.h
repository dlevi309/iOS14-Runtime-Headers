/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoPlaybackEventTrackerFactory, SVVideoEventTrackerProviding, SVVideoPlaybackEventTracking, SVVideoEventTracker;
@class NSMapTable, NSString;

@interface SVVideoPlaybackEventTrackerManager : NSObject <SVVideoTransitionObserver> {

	id<SVVideoPlaybackEventTrackerFactory> _playbackEventTrackerFactory;
	id<SVVideoEventTrackerProviding> _videoEventTrackerProvider;
	id<SVVideoPlaybackEventTracking> _playbackEventTracker;
	id<SVVideoEventTracker> _eventTracker;
	NSMapTable* _playbackEventTrackers;

}

@property (nonatomic,readonly) id<SVVideoPlaybackEventTrackerFactory> playbackEventTrackerFactory;              //@synthesize playbackEventTrackerFactory=_playbackEventTrackerFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoEventTrackerProviding> videoEventTrackerProvider;                      //@synthesize videoEventTrackerProvider=_videoEventTrackerProvider - In the implementation block
@property (nonatomic,retain) id<SVVideoPlaybackEventTracking> playbackEventTracker;                             //@synthesize playbackEventTracker=_playbackEventTracker - In the implementation block
@property (nonatomic,retain) id<SVVideoEventTracker> eventTracker;                                              //@synthesize eventTracker=_eventTracker - In the implementation block
@property (nonatomic,readonly) NSMapTable * playbackEventTrackers;                                              //@synthesize playbackEventTrackers=_playbackEventTrackers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoEventTracker>)eventTracker;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoEventTrackerProviding>)videoEventTrackerProvider;
-(id<SVVideoPlaybackEventTrackerFactory>)playbackEventTrackerFactory;
-(NSMapTable *)playbackEventTrackers;
-(void)setPlaybackEventTracker:(id<SVVideoPlaybackEventTracking>)arg1 ;
-(void)setEventTracker:(id<SVVideoEventTracker>)arg1 ;
-(id<SVVideoPlaybackEventTracking>)playbackEventTracker;
-(id)initWithPlaybackEventTrackerFactory:(id)arg1 videoEventTrackerProvider:(id)arg2 ;
@end

