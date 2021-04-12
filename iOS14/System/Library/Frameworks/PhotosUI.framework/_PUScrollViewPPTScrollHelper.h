/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class UIScrollView, CADisplayLink;

@interface _PUScrollViewPPTScrollHelper : NSObject {

	UIScrollView* _scrollView;
	CADisplayLink* __displayLink;
	double __lastIncrementTime;
	/*^block*/id __incrementHandler;
	/*^block*/id __completionHandler;
	CGPoint _originContentOffset;

}

@property (assign,setter=_setOriginContentOffset:,nonatomic) CGPoint originContentOffset;              //@synthesize originContentOffset=_originContentOffset - In the implementation block
@property (assign,setter=_setDisplayLink:,nonatomic,__weak) CADisplayLink * _displayLink;              //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,setter=_setLastIncrementTime:,nonatomic) double _lastIncrementTime;                  //@synthesize _lastIncrementTime=__lastIncrementTime - In the implementation block
@property (setter=_setIncrementHandler:,nonatomic,copy) id _incrementHandler;                          //@synthesize _incrementHandler=__incrementHandler - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;                        //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                                       //@synthesize scrollView=_scrollView - In the implementation block
-(id)initWithScrollView:(id)arg1 ;
-(void)scrollWithStartHandler:(/*^block*/id)arg1 incrementHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_incrementScroll;
-(CGPoint)originContentOffset;
-(void)_setOriginContentOffset:(CGPoint)arg1 ;
-(double)_lastIncrementTime;
-(void)_setLastIncrementTime:(double)arg1 ;
-(id)_incrementHandler;
-(id)init;
-(void)_setIncrementHandler:(/*^block*/id)arg1 ;
-(CADisplayLink *)_displayLink;
-(void)_setDisplayLink:(id)arg1 ;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(id)_completionHandler;
-(UIScrollView *)scrollView;
-(void)_endScroll;
@end
