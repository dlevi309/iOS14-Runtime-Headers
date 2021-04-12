/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaDataReader.h>

@class NSError, NSString, AVAssetTrack, AVAsset, AVAssetReader, AVAssetReaderTrackOutput;

@interface JFXAVMediaDataReader : NSObject <JFXMediaDataReader> {

	BOOL _isScrubbing;
	NSString* _name;
	long long _status;
	NSError* _error;
	AVAssetTrack* _assetTrack;
	AVAsset* _asset;
	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _assetReaderTrackOutput;
	unsigned long long _signPostID;
	SCD_Struct_JF3 _minimumFrameDuration;
	SCD_Struct_JF4 _readableTimeRange;
	SCD_Struct_JF4 _currentReadingRange;

}

@property (assign,nonatomic) long long status;                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AVAssetTrack * assetTrack;                                      //@synthesize assetTrack=_assetTrack - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAssetReader * assetReader;                                    //@synthesize assetReader=_assetReader - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * assetReaderTrackOutput;              //@synthesize assetReaderTrackOutput=_assetReaderTrackOutput - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 minimumFrameDuration;                          //@synthesize minimumFrameDuration=_minimumFrameDuration - In the implementation block
@property (assign,nonatomic) unsigned long long signPostID;                                  //@synthesize signPostID=_signPostID - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF4 readableTimeRange;                               //@synthesize readableTimeRange=_readableTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF4 currentReadingRange;                             //@synthesize currentReadingRange=_currentReadingRange - In the implementation block
@property (assign,nonatomic) BOOL isScrubbing;                                               //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAsset:(AVAsset *)arg1 ;
-(AVAsset *)asset;
-(void)setError:(NSError *)arg1 ;
-(SCD_Struct_JF3)minimumFrameDuration;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(NSError *)error;
-(NSString *)name;
-(AVAssetReaderTrackOutput *)assetReaderTrackOutput;
-(void)setStatus:(long long)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(AVAssetTrack *)assetTrack;
-(BOOL)seekToTime:(SCD_Struct_JF3)arg1 ;
-(BOOL)isScrubbing;
-(long long)status;
-(void)setAssetReader:(AVAssetReader *)arg1 ;
-(AVAssetReader *)assetReader;
-(SCD_Struct_JF4)currentReadingRange;
-(BOOL)beginReadingAtTimeRange:(SCD_Struct_JF4)arg1 ;
-(BOOL)beginReading;
-(SCD_Struct_JF4)readableTimeRange;
-(unsigned long long)signPostID;
-(id)createAssetReaderTrackOutput;
-(void)didUpdateReadingRange;
-(BOOL)readAheadToTime:(SCD_Struct_JF3)arg1 ;
-(void)readAndDiscardRemainingAvailableData;
-(BOOL)hasRemainingAvailableData;
-(SCD_Struct_JF3)startTimeOfCurrentData;
-(id)initWithAVAssetTrack:(id)arg1 withName:(id)arg2 ;
-(SCD_Struct_JF4)JFX_allMediaTimeRange;
-(void)setReadableTimeRange:(SCD_Struct_JF4)arg1 ;
-(BOOL)JFX_resetReaderFromTime:(SCD_Struct_JF3)arg1 ;
-(BOOL)beginReadingAtTime:(SCD_Struct_JF3)arg1 ;
-(id)createAssetReader;
-(void)JFX_configureAssetReaderToReadFromTime:(SCD_Struct_JF3)arg1 ;
-(void)setAssetReaderTrackOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(void)JFX_configureAssetReaderTrackOutput;
-(BOOL)prepareAssetReaderForReading;
-(void)setCurrentReadingRange:(SCD_Struct_JF4)arg1 ;
-(void)JFX_resetReaderIfNecessaryToSeekFromStartTimeOfCurrentData:(SCD_Struct_JF3)arg1 toTime:(SCD_Struct_JF3)arg2 ;
-(BOOL)JFX_shouldResetReaderWhenSeekingFromStartTimeOfCurrentData:(SCD_Struct_JF3)arg1 toTime:(SCD_Struct_JF3)arg2 ;
-(void)JFX_resetReadingRangeWhenScrubbingToTime:(SCD_Struct_JF3)arg1 ;
-(BOOL)seekingAheadIsExpensiveFromTime:(SCD_Struct_JF3)arg1 toTime:(SCD_Struct_JF3)arg2 ;
-(void)cancelReadingForReaderReset;
-(void)JFX_releaseReadersForReset;
-(void)setAssetTrack:(AVAssetTrack *)arg1 ;
-(void)setSignPostID:(unsigned long long)arg1 ;
@end
