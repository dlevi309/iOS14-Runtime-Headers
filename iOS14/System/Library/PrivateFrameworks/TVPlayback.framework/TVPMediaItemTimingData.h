/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@interface TVPMediaItemTimingData : NSObject {

	BOOL _initialLoadingComplete;
	double _startTimeForPreparingForLoading;
	double _endTimeForPreparingForLoading;
	double _startTimeForLoadingAVAssetKeys;
	double _endTimeForLoadingAVAssetKeys;
	double _startTimeForPreparingForPlaybackInitiation;
	double _endTimeForPreparingForPlaybackInitiation;
	double _startTimeForAVPlayerItemLoading;
	double _endTimeForAVPlayerItemLoading;
	double _startTimeForBuffering;
	double _endTimeForBuffering;
	double _totalInitialLoadingTime;

}

@property (assign,nonatomic) double totalInitialLoadingTime;                                 //@synthesize totalInitialLoadingTime=_totalInitialLoadingTime - In the implementation block
@property (assign,nonatomic) double startTimeForPreparingForLoading;                         //@synthesize startTimeForPreparingForLoading=_startTimeForPreparingForLoading - In the implementation block
@property (assign,nonatomic) double endTimeForPreparingForLoading;                           //@synthesize endTimeForPreparingForLoading=_endTimeForPreparingForLoading - In the implementation block
@property (assign,nonatomic) double startTimeForLoadingAVAssetKeys;                          //@synthesize startTimeForLoadingAVAssetKeys=_startTimeForLoadingAVAssetKeys - In the implementation block
@property (assign,nonatomic) double endTimeForLoadingAVAssetKeys;                            //@synthesize endTimeForLoadingAVAssetKeys=_endTimeForLoadingAVAssetKeys - In the implementation block
@property (assign,nonatomic) double startTimeForPreparingForPlaybackInitiation;              //@synthesize startTimeForPreparingForPlaybackInitiation=_startTimeForPreparingForPlaybackInitiation - In the implementation block
@property (assign,nonatomic) double endTimeForPreparingForPlaybackInitiation;                //@synthesize endTimeForPreparingForPlaybackInitiation=_endTimeForPreparingForPlaybackInitiation - In the implementation block
@property (assign,nonatomic) double startTimeForAVPlayerItemLoading;                         //@synthesize startTimeForAVPlayerItemLoading=_startTimeForAVPlayerItemLoading - In the implementation block
@property (assign,nonatomic) double endTimeForAVPlayerItemLoading;                           //@synthesize endTimeForAVPlayerItemLoading=_endTimeForAVPlayerItemLoading - In the implementation block
@property (assign,nonatomic) double startTimeForBuffering;                                   //@synthesize startTimeForBuffering=_startTimeForBuffering - In the implementation block
@property (assign,nonatomic) double endTimeForBuffering;                                     //@synthesize endTimeForBuffering=_endTimeForBuffering - In the implementation block
@property (assign,nonatomic) BOOL initialLoadingComplete;                                    //@synthesize initialLoadingComplete=_initialLoadingComplete - In the implementation block
-(double)endTimeForPreparingForLoading;
-(double)startTimeForPreparingForLoading;
-(double)endTimeForLoadingAVAssetKeys;
-(double)startTimeForLoadingAVAssetKeys;
-(double)endTimeForPreparingForPlaybackInitiation;
-(double)startTimeForPreparingForPlaybackInitiation;
-(double)endTimeForAVPlayerItemLoading;
-(double)startTimeForAVPlayerItemLoading;
-(double)endTimeForBuffering;
-(double)startTimeForBuffering;
-(void)setTotalInitialLoadingTime:(double)arg1 ;
-(void)setInitialLoadingComplete:(BOOL)arg1 ;
-(void)setStartTimeForPreparingForLoading:(double)arg1 ;
-(void)setEndTimeForPreparingForLoading:(double)arg1 ;
-(void)setStartTimeForLoadingAVAssetKeys:(double)arg1 ;
-(void)setEndTimeForLoadingAVAssetKeys:(double)arg1 ;
-(void)setStartTimeForPreparingForPlaybackInitiation:(double)arg1 ;
-(void)setEndTimeForPreparingForPlaybackInitiation:(double)arg1 ;
-(void)setStartTimeForAVPlayerItemLoading:(double)arg1 ;
-(void)setEndTimeForAVPlayerItemLoading:(double)arg1 ;
-(void)setStartTimeForBuffering:(double)arg1 ;
-(void)setEndTimeForBuffering:(double)arg1 ;
-(double)totalInitialLoadingTime;
-(BOOL)initialLoadingComplete;
@end
