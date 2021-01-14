/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTUsageTrackingSession.h>

@protocol AVTUsageTrackingSession
@required
-(void)end;
-(void)didResumeFaceTracking;
-(void)didPauseFaceTracking;
-(void)beginWithStore:(id)arg1;
-(void)didShowExpandedMode;
-(void)didEnterEditor;
-(void)didLeaveEditor;
-(void)didRecordVideo;
-(void)didDiscardVideoWithDuration:(double)arg1;
-(void)didSendVideoWithAvatar:(id)arg1 duration:(double)arg2;
-(void)didReplayVideo;
-(void)didSendImageWithAvatar:(id)arg1;
-(void)didSendStickerWithAvatar:(id)arg1;
-(void)didStartFaceTrackingInCarouselWithAvatar:(id)arg1;
-(void)didChangeCurrentAvatarInCarousel:(id)arg1;
-(void)didStopFaceTrackingInCarousel;
-(void)didChangeCurrentAvatarInStickers:(id)arg1;
-(void)didDuplicateAvatar:(id)arg1;
-(void)didDeleteAvatar:(id)arg1;
-(void)didOpenStickersAppFromRecents;
-(void)didTapStickerFromRecents:(id)arg1 withAvatarIdentifier:(id)arg2;
-(void)didCreateAvatar:(id)arg1;
-(void)didEditAvatar:(id)arg1;
-(void)didPeelOffStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;
-(void)didTapStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;

@end


@protocol OS_dispatch_queue, AVTUILogger, AVTCoreAnalyticsClient, AVTDifferentialPrivacyRecorder, AVTAvatarConfigurationMetric, AVTAvatarStoreInternal;
@class NSObject, NSString, AVTAvatarConfiguration, AVTAvatarRecord, NSDate, AVTUsageTrackingRecordTimedEvent;

@interface AVTUsageTrackingSession : NSObject <AVTUsageTrackingSession> {

	BOOL _expandedMode;
	BOOL _recordedVideo;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<AVTUILogger> _logger;
	id<AVTCoreAnalyticsClient> _ntsCAClient;
	NSString* _keyBasePrefix;
	NSString* _bundleAppName;
	id<AVTDifferentialPrivacyRecorder> _ntsDPRecorder;
	id<AVTAvatarConfigurationMetric> _metric;
	/*^block*/id _recordTransformer;
	AVTAvatarConfiguration* _defaultConfiguration;
	AVTAvatarRecord* _avatarRecord;
	/*^block*/id _timeProvider;
	NSDate* _editorEnterDate;
	AVTUsageTrackingRecordTimedEvent* _faceTrackingEvent;
	id<AVTAvatarStoreInternal> _avatarStore;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                          //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTCoreAnalyticsClient> ntsCAClient;                          //@synthesize ntsCAClient=_ntsCAClient - In the implementation block
@property (nonatomic,readonly) NSString * keyBasePrefix;                                        //@synthesize keyBasePrefix=_keyBasePrefix - In the implementation block
@property (nonatomic,readonly) NSString * bundleAppName;                                        //@synthesize bundleAppName=_bundleAppName - In the implementation block
@property (nonatomic,readonly) id<AVTDifferentialPrivacyRecorder> ntsDPRecorder;                //@synthesize ntsDPRecorder=_ntsDPRecorder - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarConfigurationMetric> metric;                         //@synthesize metric=_metric - In the implementation block
@property (nonatomic,copy,readonly) id recordTransformer;                                       //@synthesize recordTransformer=_recordTransformer - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfiguration * defaultConfiguration;                   //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecord * avatarRecord;                                  //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,copy,readonly) id timeProvider;                                            //@synthesize timeProvider=_timeProvider - In the implementation block
@property (assign,nonatomic) BOOL expandedMode;                                                 //@synthesize expandedMode=_expandedMode - In the implementation block
@property (assign,nonatomic) BOOL recordedVideo;                                                //@synthesize recordedVideo=_recordedVideo - In the implementation block
@property (nonatomic,retain) NSDate * editorEnterDate;                                          //@synthesize editorEnterDate=_editorEnterDate - In the implementation block
@property (nonatomic,retain) AVTUsageTrackingRecordTimedEvent * faceTrackingEvent;              //@synthesize faceTrackingEvent=_faceTrackingEvent - In the implementation block
@property (nonatomic,retain) id<AVTAvatarStoreInternal> avatarStore;                            //@synthesize avatarStore=_avatarStore - In the implementation block
+(id)whitelistAppNameFromBundleID:(id)arg1 ;
+(id)dpKeyBasePrefix;
+(id)keyBasePrefixForBundleIdentifier:(id)arg1 ;
+(/*^block*/id)defaultTimeProvider;
+(id)makeKeyAnalyticsCompliant:(id)arg1 ;
+(id)payloadForAvatarRecord:(id)arg1 ;
+(id)payloadForAvatarRecordIdentifier:(id)arg1 ;
+(id)makeDPKey:(id)arg1 ;
+(void)getPresetDescription:(out id*)arg1 usedCategoriesDescription:(out id*)arg2 forAvatarConfiguration:(id)arg3 defaultConfiguration:(id)arg4 ;
+(/*^block*/id)configurationDistanceClassifierWithMetric:(id)arg1 ;
+(/*^block*/id)likenessComparator;
+(/*^block*/id)defaultRecordTransformerForCoreModel:(id)arg1 ;
+(id)colorPresetDescriptionForAvatarConfiguration:(id)arg1 ;
-(AVTAvatarConfiguration *)defaultConfiguration;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)end;
-(id<AVTAvatarConfigurationMetric>)metric;
-(id<AVTCoreAnalyticsClient>)ntsCAClient;
-(id)makeEventKeyForAction:(id)arg1 ;
-(void)performClientWork:(/*^block*/id)arg1 ;
-(NSString *)bundleAppName;
-(id)makeCrossAppEventKeyForAction:(id)arg1 ;
-(id)initWithCoreAnalyticsClient:(id)arg1 dpRecorder:(id)arg2 serialQueueProvider:(/*^block*/id)arg3 recordTransformer:(/*^block*/id)arg4 avatarRecord:(id)arg5 defaultConfiguration:(id)arg6 timeProvider:(/*^block*/id)arg7 configurationMetric:(id)arg8 logger:(id)arg9 keyBasePrefix:(id)arg10 bundleAppName:(id)arg11 ;
-(id<AVTDifferentialPrivacyRecorder>)ntsDPRecorder;
-(NSString *)keyBasePrefix;
-(id)payloadForCrossAppEvent;
-(void)setRecordedVideo:(BOOL)arg1 ;
-(void)nts_reportAvatarDescription:(id)arg1 dpRecorder:(id)arg2 ;
-(void)didResumeFaceTracking;
-(void)sendEventForAction:(id)arg1 ;
-(void)sendCrossAppsEventForAction:(id)arg1 ;
-(void)nts_reportAvatarLikenessClustersWithClient:(id)arg1 ;
-(BOOL)recordedVideo;
-(void)nts_reportAvatarComplexity:(id)arg1 withClient:(id)arg2 ;
-(void)setExpandedMode:(BOOL)arg1 ;
-(void)didPauseFaceTracking;
-(void)setEditorEnterDate:(NSDate *)arg1 ;
-(NSDate *)editorEnterDate;
-(void)nts_reportEditorTimeWithExitTime:(id)arg1 client:(id)arg2 ;
-(void)setFaceTrackingEvent:(AVTUsageTrackingRecordTimedEvent *)arg1 ;
-(AVTUsageTrackingRecordTimedEvent *)faceTrackingEvent;
-(void)nts_reportFaceTrackingTimeWithEndTime:(id)arg1 client:(id)arg2 ;
-(void)sentStickerFromStickersApp:(id)arg1 withAvatarRecord:(id)arg2 action:(id)arg3 peeled:(BOOL)arg4 ;
-(void)nts_reportAvatarCountWithClient:(id)arg1 ;
-(void)nts_reportExpandedModeWithClient:(id)arg1 ;
-(void)nts_loadDefaultConfigurationIfNeeded;
-(BOOL)expandedMode;
-(void)beginWithStore:(id)arg1 ;
-(void)didShowExpandedMode;
-(void)didEnterEditor;
-(void)didLeaveEditor;
-(void)didRecordVideo;
-(void)didDiscardVideoWithDuration:(double)arg1 ;
-(void)didSendVideoWithAvatar:(id)arg1 duration:(double)arg2 ;
-(void)didReplayVideo;
-(void)didSendImageWithAvatar:(id)arg1 ;
-(void)didSendStickerWithAvatar:(id)arg1 ;
-(void)didStartFaceTrackingInCarouselWithAvatar:(id)arg1 ;
-(void)didChangeCurrentAvatarInCarousel:(id)arg1 ;
-(void)didStopFaceTrackingInCarousel;
-(void)didChangeCurrentAvatarInStickers:(id)arg1 ;
-(id)initWithSerialQueueProvider:(/*^block*/id)arg1 recordTransformer:(/*^block*/id)arg2 logger:(id)arg3 ;
-(AVTAvatarRecord *)avatarRecord;
-(id<AVTUILogger>)logger;
-(id)recordTransformer;
-(void)didDuplicateAvatar:(id)arg1 ;
-(void)didDeleteAvatar:(id)arg1 ;
-(void)didOpenStickersAppFromRecents;
-(void)didTapStickerFromRecents:(id)arg1 withAvatarIdentifier:(id)arg2 ;
-(void)didCreateAvatar:(id)arg1 ;
-(void)didEditAvatar:(id)arg1 ;
-(id)timeProvider;
-(id<AVTAvatarStoreInternal>)avatarStore;
-(void)didPeelOffStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2 ;
-(void)didTapStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2 ;
-(void)setAvatarStore:(id<AVTAvatarStoreInternal>)arg1 ;
@end
