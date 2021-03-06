/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUScrollViewSpeedometerDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class UIScrollView, NSTimer;

@interface PUScrollViewSpeedometer : NSObject {

	BOOL _delegateSupportsRegimeChange;
	id<PUScrollViewSpeedometerDelegate> _delegate;
	long long _regime;
	double _mediumUpperThreshold;
	double _mediumLowerThreshold;
	double _fastUpperThreshold;
	double _fastLowerThreshold;
	UIScrollView* __lastScrollView;
	double __lastTime;
	NSTimer* __timeoutTimer;
	long long __nextRegime;
	long long __nextRegimeCount;
	CGPoint _scrollSpeed;
	CGSize __lastContentSize;
	CGPoint __lastContentOffset;

}

@property (assign,setter=_setScrollSpeed:,nonatomic) CGPoint scrollSpeed;                                   //@synthesize scrollSpeed=_scrollSpeed - In the implementation block
@property (assign,setter=_setRegime:,nonatomic) long long regime;                                           //@synthesize regime=_regime - In the implementation block
@property (assign,setter=_setLastScrollView:,nonatomic,__weak) UIScrollView * _lastScrollView;              //@synthesize _lastScrollView=__lastScrollView - In the implementation block
@property (assign,setter=_setLastContentSize:,nonatomic) CGSize _lastContentSize;                           //@synthesize _lastContentSize=__lastContentSize - In the implementation block
@property (assign,setter=_setLastTime:,nonatomic) double _lastTime;                                         //@synthesize _lastTime=__lastTime - In the implementation block
@property (assign,setter=_setLastContentOffset:,nonatomic) CGPoint _lastContentOffset;                      //@synthesize _lastContentOffset=__lastContentOffset - In the implementation block
@property (setter=_setTimeoutTimer:,nonatomic,retain) NSTimer * _timeoutTimer;                              //@synthesize _timeoutTimer=__timeoutTimer - In the implementation block
@property (assign,setter=_setNextRegime:,nonatomic) long long _nextRegime;                                  //@synthesize _nextRegime=__nextRegime - In the implementation block
@property (assign,setter=_setNextRegimeCount:,nonatomic) long long _nextRegimeCount;                        //@synthesize _nextRegimeCount=__nextRegimeCount - In the implementation block
@property (assign,nonatomic,__weak) id<PUScrollViewSpeedometerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double mediumUpperThreshold;                                                   //@synthesize mediumUpperThreshold=_mediumUpperThreshold - In the implementation block
@property (assign,nonatomic) double mediumLowerThreshold;                                                   //@synthesize mediumLowerThreshold=_mediumLowerThreshold - In the implementation block
@property (assign,nonatomic) double fastUpperThreshold;                                                     //@synthesize fastUpperThreshold=_fastUpperThreshold - In the implementation block
@property (assign,nonatomic) double fastLowerThreshold;                                                     //@synthesize fastLowerThreshold=_fastLowerThreshold - In the implementation block
-(void)_handleTimeoutTimer:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(double)fastUpperThreshold;
-(void)scrollViewWillScrollToTop:(id)arg1 ;
-(id<PUScrollViewSpeedometerDelegate>)delegate;
-(void)setFastLowerThreshold:(double)arg1 ;
-(void)setFastUpperThreshold:(double)arg1 ;
-(double)fastLowerThreshold;
-(void)setMediumLowerThreshold:(double)arg1 ;
-(void)setMediumUpperThreshold:(double)arg1 ;
-(long long)_nextRegimeCount;
-(void)_setLastTime:(double)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(CGSize)_lastContentSize;
-(long long)_nextRegime;
-(NSTimer *)_timeoutTimer;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)_setNextRegime:(long long)arg1 ;
-(CGPoint)_lastContentOffset;
-(void)setDelegate:(id<PUScrollViewSpeedometerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_setTimeoutTimer:(id)arg1 ;
-(void)_setNextRegimeCount:(long long)arg1 ;
-(void)_setScrollSpeed:(CGPoint)arg1 ;
-(UIScrollView *)_lastScrollView;
-(long long)_newRegimeForScrollSpeed:(CGPoint)arg1 ;
-(void)_setLastScrollView:(id)arg1 ;
-(void)_setLastContentSize:(CGSize)arg1 ;
-(void)_setLastContentOffset:(CGPoint)arg1 ;
-(void)_setRegime:(long long)arg1 ;
-(long long)regime;
-(void)scrollViewDidScroll:(id)arg1 ;
-(double)mediumLowerThreshold;
-(CGPoint)scrollSpeed;
-(double)mediumUpperThreshold;
-(double)_lastTime;
-(void)_rescheduleTimeout;
@end

