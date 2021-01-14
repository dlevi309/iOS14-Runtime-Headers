/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray, _TVImageView, NSTimer;

@interface VUIImageProxyAnimator : NSObject {

	BOOL _animating;
	BOOL _cachingEnabled;
	NSArray* _imageProxies;
	unsigned long long _animationOptions;
	double _animationDuration;
	double _transitionInterval;
	unsigned long long _displayImageIndex;
	unsigned long long _indexOfFetchedImage;
	_TVImageView* _imageView;
	NSTimer* _transitionTimer;

}

@property (assign,nonatomic) unsigned long long displayImageIndex;                     //@synthesize displayImageIndex=_displayImageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfFetchedImage;                   //@synthesize indexOfFetchedImage=_indexOfFetchedImage - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * transitionTimer;                         //@synthesize transitionTimer=_transitionTimer - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                        //@synthesize animating=_animating - In the implementation block
@property (assign,getter=isCachingEnabled,nonatomic) BOOL cachingEnabled;              //@synthesize cachingEnabled=_cachingEnabled - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                                     //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic) unsigned long long animationOptions;                      //@synthesize animationOptions=_animationOptions - In the implementation block
@property (assign,nonatomic) double animationDuration;                                 //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double transitionInterval;                                //@synthesize transitionInterval=_transitionInterval - In the implementation block
-(void)setImageView:(_TVImageView *)arg1 ;
-(double)animationDuration;
-(void)startAnimation;
-(void)setAnimating:(BOOL)arg1 ;
-(id)init;
-(_TVImageView *)imageView;
-(void)setCachingEnabled:(BOOL)arg1 ;
-(unsigned long long)animationOptions;
-(void)setAnimationOptions:(unsigned long long)arg1 ;
-(void)stopAnimation;
-(void)_setImage:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isCachingEnabled;
-(NSTimer *)transitionTimer;
-(void)setTransitionTimer:(NSTimer *)arg1 ;
-(BOOL)isAnimating;
-(void)setAnimationDuration:(double)arg1 ;
-(double)transitionInterval;
-(void)setTransitionInterval:(double)arg1 ;
-(void)setImageProxies:(NSArray *)arg1 ;
-(NSArray *)imageProxies;
-(id)initWithImageView:(id)arg1 andProxies:(id)arg2 ;
-(void)_fetchNext;
-(void)_displayIntervalTimerFired:(id)arg1 ;
-(void)setDisplayImageIndex:(unsigned long long)arg1 ;
-(void)_updateImageWithIndex:(unsigned long long)arg1 ;
-(void)loadImageProxy:(id)arg1 withWeakObject:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfFetchedImage;
-(void)setIndexOfFetchedImage:(unsigned long long)arg1 ;
-(unsigned long long)displayImageIndex;
@end
