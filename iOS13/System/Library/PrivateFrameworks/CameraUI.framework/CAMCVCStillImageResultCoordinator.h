/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMCVCStillImageResultCoordinatorDelegate;
@class NSString, NSSet, NSMutableSet, NSMutableDictionary;

@interface CAMCVCStillImageResultCoordinator : NSObject {

	BOOL _expectingPairedVideo;
	BOOL _allowMultipleCaptures;
	BOOL _shouldReturnFilteredPhotosAsSingleAsset;
	BOOL __didReceiveForceRemainingDispatchesIfPossible;
	id<CAMCVCStillImageResultCoordinatorDelegate> _delegate;
	NSString* _identifier;
	NSSet* _allExpectedResultSpecifiers;
	NSMutableSet* __receivedPhotos;
	NSMutableSet* __receivedVideos;
	NSMutableSet* __photoResultSpecifiersDelayingForcedDispatch;
	NSMutableSet* __videoResultSpecifiersDelayingForcedDispatch;
	NSMutableSet* __handledResultSpecifiers;
	NSMutableSet* __dispatchedResultSpecifiers;
	NSMutableDictionary* __pendingPhotoProperties;
	NSMutableDictionary* __pendingVideoProperties;
	NSMutableDictionary* __pendingAssetAdjustments;

}

@property (nonatomic,readonly) NSMutableSet * _receivedPhotos;                                                                                         //@synthesize _receivedPhotos=__receivedPhotos - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _receivedVideos;                                                                                         //@synthesize _receivedVideos=__receivedVideos - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _photoResultSpecifiersDelayingForcedDispatch;                                                            //@synthesize _photoResultSpecifiersDelayingForcedDispatch=__photoResultSpecifiersDelayingForcedDispatch - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _videoResultSpecifiersDelayingForcedDispatch;                                                            //@synthesize _videoResultSpecifiersDelayingForcedDispatch=__videoResultSpecifiersDelayingForcedDispatch - In the implementation block
@property (getter=_isDelayingForcedDispatch,nonatomic,readonly) BOOL _delayingForcedDispatch; 
@property (assign,setter=_setDidReceiveForceRemainingDispatchesIfPossible:,nonatomic) BOOL _didReceiveForceRemainingDispatchesIfPossible;              //@synthesize _didReceiveForceRemainingDispatchesIfPossible=__didReceiveForceRemainingDispatchesIfPossible - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _handledResultSpecifiers;                                                                                //@synthesize _handledResultSpecifiers=__handledResultSpecifiers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _dispatchedResultSpecifiers;                                                                             //@synthesize _dispatchedResultSpecifiers=__dispatchedResultSpecifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _pendingPhotoProperties;                                                                          //@synthesize _pendingPhotoProperties=__pendingPhotoProperties - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _pendingVideoProperties;                                                                          //@synthesize _pendingVideoProperties=__pendingVideoProperties - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _pendingAssetAdjustments;                                                                         //@synthesize _pendingAssetAdjustments=__pendingAssetAdjustments - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMCVCStillImageResultCoordinatorDelegate> delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSSet * allExpectedResultSpecifiers;                                                                                    //@synthesize allExpectedResultSpecifiers=_allExpectedResultSpecifiers - In the implementation block
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo;                                                                //@synthesize expectingPairedVideo=_expectingPairedVideo - In the implementation block
@property (nonatomic,readonly) BOOL allowMultipleCaptures;                                                                                             //@synthesize allowMultipleCaptures=_allowMultipleCaptures - In the implementation block
@property (nonatomic,readonly) BOOL shouldReturnFilteredPhotosAsSingleAsset;                                                                           //@synthesize shouldReturnFilteredPhotosAsSingleAsset=_shouldReturnFilteredPhotosAsSingleAsset - In the implementation block
-(id<CAMCVCStillImageResultCoordinatorDelegate>)delegate;
-(NSString *)identifier;
-(BOOL)isExpectingPairedVideo;
-(NSSet *)allExpectedResultSpecifiers;
-(BOOL)_isDelayingForcedDispatch;
-(NSMutableSet *)_receivedPhotos;
-(NSMutableSet *)_photoResultSpecifiersDelayingForcedDispatch;
-(NSMutableDictionary *)_pendingPhotoProperties;
-(NSMutableDictionary *)_pendingAssetAdjustments;
-(BOOL)_didReceiveForceRemainingDispatchesIfPossible;
-(void)_dispatchPendingPropertiesForced:(BOOL)arg1 ;
-(NSMutableSet *)_receivedVideos;
-(NSMutableSet *)_videoResultSpecifiersDelayingForcedDispatch;
-(NSMutableDictionary *)_pendingVideoProperties;
-(void)_setDidReceiveForceRemainingDispatchesIfPossible:(BOOL)arg1 ;
-(BOOL)allowMultipleCaptures;
-(NSMutableSet *)_dispatchedResultSpecifiers;
-(NSMutableSet *)_handledResultSpecifiers;
-(BOOL)shouldReturnFilteredPhotosAsSingleAsset;
-(BOOL)_isWaitingOnResultSpecifiers:(unsigned long long)arg1 ;
-(BOOL)_attemptDispatchForPairWithFilteredResultSpecifiers:(unsigned long long)arg1 unfilteredResultSpecifiers:(unsigned long long)arg2 forceRemainingDispatches:(BOOL)arg3 ;
-(BOOL)_attemptDispatchForResultSpecifiers:(unsigned long long)arg1 forceRemainingDispatches:(BOOL)arg2 ;
-(id)_errorForResultSpecifiers:(unsigned long long)arg1 allowMissingVideo:(BOOL)arg2 ;
-(id)_errorWithDescription:(id)arg1 code:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 allExpectedResultSpecifiers:(id)arg3 isExpectingPairedVideo:(BOOL)arg4 allowMultipleCaptures:(BOOL)arg5 shouldReturnFilteredPhotosAsSingleAsset:(BOOL)arg6 ;
-(void)updatePhotoProperties:(id)arg1 assetAdjustments:(id)arg2 forResultSpecifiers:(unsigned long long)arg3 ;
-(void)updateVideoProperties:(id)arg1 forResultSpecifiers:(unsigned long long)arg2 ;
-(void)delayForcedDispatchForPhotoResultSpecifiers:(unsigned long long)arg1 ;
-(void)delayForcedDispatchForVideoResultSpecifiers:(unsigned long long)arg1 ;
-(void)forceRemainingDispatchesIfPossible;
@end
