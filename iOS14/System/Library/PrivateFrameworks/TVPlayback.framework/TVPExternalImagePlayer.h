/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPMediaItem;
#import <TVPlayback/TVPlayback-Structs.h>
@class NSDate, UIImage, CADisplayLink, TVPExternalImageLoader, NSObject, NSMutableArray;

@interface TVPExternalImagePlayer : NSObject {

	double _rate;
	NSDate* _playbackDate;
	UIImage* _currentImage;
	/*^block*/id _elapsedTimeUpdateBlock;
	/*^block*/id _imageUpdateBlock;
	CADisplayLink* _displayLink;
	double _previousTimestamp;
	NSDate* _referenceDate;
	TVPExternalImageLoader* _imageLoader;
	NSObject*<TVPMediaItem> _mediaItem;
	NSMutableArray* _imageInfosBeingLoaded;
	double _currentImageTime;
	double _imageInterval;
	SCD_Struct_TV1 _elapsedTime;
	SCD_Struct_TV1 _referenceTime;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                         //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double previousTimestamp;                            //@synthesize previousTimestamp=_previousTimestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV1 referenceTime;                        //@synthesize referenceTime=_referenceTime - In the implementation block
@property (nonatomic,retain) NSDate * referenceDate;                              //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,retain) NSDate * playbackDate;                               //@synthesize playbackDate=_playbackDate - In the implementation block
@property (nonatomic,retain) UIImage * currentImage;                              //@synthesize currentImage=_currentImage - In the implementation block
@property (nonatomic,retain) TVPExternalImageLoader * imageLoader;                //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                   //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageInfosBeingLoaded;              //@synthesize imageInfosBeingLoaded=_imageInfosBeingLoaded - In the implementation block
@property (assign,nonatomic) double currentImageTime;                             //@synthesize currentImageTime=_currentImageTime - In the implementation block
@property (assign,nonatomic) double imageInterval;                                //@synthesize imageInterval=_imageInterval - In the implementation block
@property (assign,nonatomic) double rate;                                         //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV1 elapsedTime;                          //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,copy) id elapsedTimeUpdateBlock;                             //@synthesize elapsedTimeUpdateBlock=_elapsedTimeUpdateBlock - In the implementation block
@property (nonatomic,copy) id imageUpdateBlock;                                   //@synthesize imageUpdateBlock=_imageUpdateBlock - In the implementation block
-(void)setElapsedTime:(SCD_Struct_TV1)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(void)setRate:(double)arg1 ;
-(void)setCurrentImage:(UIImage *)arg1 ;
-(TVPExternalImageLoader *)imageLoader;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(SCD_Struct_TV1)elapsedTime;
-(NSObject*<TVPMediaItem>)mediaItem;
-(double)rate;
-(NSDate *)referenceDate;
-(void)invalidate;
-(UIImage *)currentImage;
-(void)_cancelAllImageLoads;
-(NSDate *)playbackDate;
-(void)setImageLoader:(TVPExternalImageLoader *)arg1 ;
-(void)setPreviousTimestamp:(double)arg1 ;
-(NSMutableArray *)imageInfosBeingLoaded;
-(void)_updateImageIntervalWithRate:(double)arg1 ;
-(void)_loadImagesIfNecessary;
-(void)_displayLinkTimerFired:(id)arg1 ;
-(double)previousTimestamp;
-(SCD_Struct_TV1)referenceTime;
-(void)setPlaybackDate:(NSDate *)arg1 ;
-(double)_timeAfterRemovingInterstitials:(double)arg1 ;
-(void)_cancelStaleImageLoadsForTime:(double)arg1 ;
-(double)imageInterval;
-(double)currentImageTime;
-(id)imageUpdateBlock;
-(void)setCurrentImageTime:(double)arg1 ;
-(id)elapsedTimeUpdateBlock;
-(void)setImageInterval:(double)arg1 ;
-(id)initWithMediaItem:(id)arg1 referenceTime:(SCD_Struct_TV1)arg2 forDate:(id)arg3 ;
-(void)setElapsedTimeUpdateBlock:(id)arg1 ;
-(void)setImageUpdateBlock:(id)arg1 ;
-(void)setReferenceTime:(SCD_Struct_TV1)arg1 ;
-(void)setImageInfosBeingLoaded:(NSMutableArray *)arg1 ;
@end

