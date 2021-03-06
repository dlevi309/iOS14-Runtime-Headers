/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/PMScrubberProviderDataSource.h>

@protocol PMScrubberProviderDelegate, PMScrubberProviderActionDelegate, OS_dispatch_queue;
@class VEKResult, NSObject, NSString;

@interface PMScrubberProvider : NSObject <PMScrubberProviderDataSource> {

	BOOL _isPlayingCurrent;
	BOOL _isPlayingPrevious;
	BOOL _isScrubbing;
	id<PMScrubberProviderDelegate> _delegate;
	id<PMScrubberProviderActionDelegate> _actionDelegate;
	double _currentProgress;
	double _currentDuration;
	VEKResult* _currentResult;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) VEKResult * currentResult;                                               //@synthesize currentResult=_currentResult - In the implementation block
@property (assign,nonatomic) double currentDuration;                                                  //@synthesize currentDuration=_currentDuration - In the implementation block
@property (assign,nonatomic) BOOL isPlayingCurrent;                                                   //@synthesize isPlayingCurrent=_isPlayingCurrent - In the implementation block
@property (assign,nonatomic) BOOL isPlayingPrevious;                                                  //@synthesize isPlayingPrevious=_isPlayingPrevious - In the implementation block
@property (assign,nonatomic) double currentProgress;                                                  //@synthesize currentProgress=_currentProgress - In the implementation block
@property (assign,nonatomic) BOOL isScrubbing;                                                        //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic,__weak) id<PMScrubberProviderDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PMScrubberProviderActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<PMScrubberProviderDelegate>)delegate;
-(id<PMScrubberProviderActionDelegate>)actionDelegate;
-(void)updateWithResult:(id)arg1 ;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentProgress:(double)arg1 ;
-(void)setDelegate:(id<PMScrubberProviderDelegate>)arg1 ;
-(double)currentProgress;
-(void)setActionDelegate:(id<PMScrubberProviderActionDelegate>)arg1 ;
-(double)currentDuration;
-(void)setCurrentDuration:(double)arg1 ;
-(void)setCurrentResult:(VEKResult *)arg1 ;
-(VEKResult *)currentResult;
-(BOOL)isScrubbing;
-(void)playbackProgressDidChange:(SCD_Struct_PM8)arg1 ;
-(void)playbackStatusDidChange:(BOOL)arg1 ;
-(void)willEnterEditMode;
-(void)setIsPlayingCurrent:(BOOL)arg1 ;
-(void)setIsPlayingPrevious:(BOOL)arg1 ;
-(long long)clipIndexWithTime:(double)arg1 ;
-(BOOL)isPlayingCurrent;
-(BOOL)isPlayingPrevious;
-(void)imageForItem:(long long)arg1 withThumbnailCount:(long long)arg2 size:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)scrubberTapped;
-(void)scrubberReleasedWithProgress:(double)arg1 ;
-(void)scrubberToggled;
-(void)scrubberTouched;
-(void)scrubberScrolledWithProgress:(double)arg1 ;
@end

