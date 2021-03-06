/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSDictionary, VCIDRScheduler, NSMutableArray, NSArray;

@interface VCSessionUplinkVideoStreamController : NSObject {

	float _startTime;
	float _currentFrameTime;
	id _delegate;
	NSMutableDictionary* _videoStreams;
	NSMutableDictionary* _streamInfoMap;
	NSMutableDictionary* _activeVideoStreams;
	NSMutableSet* _streamToPause;
	NSMutableSet* _streamToResume;
	NSMutableDictionary* _streamScheduleWifi;
	NSMutableDictionary* _streamScheduleCell;
	NSMutableDictionary* _currentStreamSchedule;
	NSDictionary* _pendingVideoStreams;
	VCIDRScheduler* _schedulerWifi;
	VCIDRScheduler* _schedulerCell;
	BOOL _pendingStreamsUpdated;
	opaque_pthread_mutex_t _mutex;
	NSMutableArray* _streamsPendingKeyFrameGeneration;
	NSMutableArray* _streamResetIDR;
	NSArray* _streamIDsWifi;
	NSArray* _streamIDsCell;
	unsigned _captureFrameRate;
	BOOL _dynamicVideoPriorityEnabled;

}

@property (readonly) NSMutableDictionary * activeVideoStreams;              //@synthesize activeVideoStreams=_activeVideoStreams - In the implementation block
@property (nonatomic,copy) NSDictionary * pendingVideoStreams;              //@synthesize pendingVideoStreams=_pendingVideoStreams - In the implementation block
@property (assign) unsigned captureFrameRate;                               //@synthesize captureFrameRate=_captureFrameRate - In the implementation block
@property (nonatomic,copy) NSArray * streamIDsWifi;                         //@synthesize streamIDsWifi=_streamIDsWifi - In the implementation block
@property (nonatomic,copy) NSArray * streamIDsCell;                         //@synthesize streamIDsCell=_streamIDsCell - In the implementation block
@property (assign,nonatomic) float currentFrameTime;                        //@synthesize currentFrameTime=_currentFrameTime - In the implementation block
@property (assign,nonatomic) BOOL dynamicVideoPriorityEnabled;              //@synthesize dynamicVideoPriorityEnabled=_dynamicVideoPriorityEnabled - In the implementation block
-(void)unlock;
-(void)setCaptureFrameRate:(unsigned)arg1 ;
-(id)delegate;
-(void)lock;
-(float)currentFrameTime;
-(void)dealloc;
-(void)initilizeStreamInfoMapWithStreamInfos:(id)arg1 ;
-(id)newVideoStreamKeyFrameScheduleWithStreamIDs:(id)arg1 ;
-(BOOL)pauseStreams;
-(BOOL)resumeStreams;
-(void)handleStreamsPendingKeyFrameGeneration;
-(void)handleStreamsResetIDR;
-(id)anchorStreamIDWithCappedVideoStreamIDs:(id)arg1 ;
-(BOOL)shouldGenerateIDRWithStreamSchedule:(id)arg1 ;
-(void)selectVideoStreamForVideoPriority;
-(id)videoStreamPendingKeyFrameGenerationWithStreamID:(id)arg1 shouldRemoveFromPendingArray:(BOOL*)arg2 ;
-(id)schedulerStreamWithVideoStream:(id)arg1 ;
-(id)initWithVideoStreams:(id)arg1 streamInfos:(id)arg2 delegate:(id)arg3 ;
-(void)setStreamIDsCell:(NSArray *)arg1 ;
-(void)setStreamIDsWifi:(NSArray *)arg1 ;
-(void)setPendingVideoStreams:(NSDictionary *)arg1 ;
-(void)setCurrentFrameTime:(float)arg1 ;
-(void)setIsLocalOnCellular:(BOOL)arg1 cappedVideoStreamIDs:(id)arg2 ;
-(void)generateKeyFrameWithStreamID:(unsigned)arg1 ;
-(NSMutableDictionary *)activeVideoStreams;
-(NSDictionary *)pendingVideoStreams;
-(unsigned)captureFrameRate;
-(NSArray *)streamIDsCell;
-(NSArray *)streamIDsWifi;
-(BOOL)dynamicVideoPriorityEnabled;
-(void)setDynamicVideoPriorityEnabled:(BOOL)arg1 ;
@end

