/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, CADisplayLink, UIImageView, UIColor;

@interface SKUICircleProgressIndicator : UIView {

	double _animatedValue;
	double _animationEndTime;
	double _animationStartTime;
	double _animationStartValue;
	UIImage* _borderImage;
	UIImage* _centerImage;
	UIEdgeInsets _centerImageInsets;
	CADisplayLink* _displayLink;
	UIImage* _fillImage;
	BOOL _highlighted;
	UIImageView* _indeterminateView;
	BOOL _isAnimating;
	double _progress;
	UIColor* _unhighlightedBackgroundColor;

}

@property (nonatomic,retain) UIImage * image;                                        //@synthesize centerImage=_centerImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                               //@synthesize centerImageInsets=_centerImageInsets - In the implementation block
@property (assign,getter=isIndeterminate,nonatomic) BOOL indeterminate; 
@property (assign,nonatomic) double progress;                                        //@synthesize progress=_progress - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                  //@synthesize highlighted=_highlighted - In the implementation block
+(id)_fillImage;
+(id)_borderImage;
+(id)_indeterminateImage;
-(void)tintColorDidChange;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(UIImage *)image;
-(void)drawRect:(CGRect)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isHighlighted;
-(void)setProgress:(double)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)_startIndeterminateAnimation;
-(void)_animateValueOnDisplayLink:(id)arg1 ;
-(void)_setHidesBorderView:(BOOL)arg1 ;
-(BOOL)isIndeterminate;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
@end

