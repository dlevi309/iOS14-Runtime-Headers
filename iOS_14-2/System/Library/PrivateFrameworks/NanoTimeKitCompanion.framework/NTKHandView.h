/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class CALayer, UIView, UIImageView, UIColor, UIImage, NTKAnalogHandConfiguration, NTKColoringImageView, CLKDevice, NSString;

@interface NTKHandView : UIView <CLKMonochromeComplicationView> {

	CALayer* _inlayLayer;
	UIView* _handDotView;
	CGPathRef _dropShadowPath;
	CGPathRef _radialShadowPath;
	UIView* _dropShadowView;
	UIImageView* _radialShadowImageView;
	UIImageView* _dropShadowImageView;
	BOOL _shadowsHidden;
	BOOL _radialShadowsHidden;
	BOOL _dropShadowsHidden;
	BOOL _shadowImageBehindHand;
	id<CLKMonochromeFilterProvider> _filterProvider;
	UIColor* _color;
	UIImage* _image;
	double _zRotation;
	double _scale;
	UIColor* _inlayColor;
	NTKAnalogHandConfiguration* _configuration;
	UIImage* _radialShadowImage;
	UIImage* _dropShadowImage;
	UIView* _transitionContainerView;
	UIColor* _handDotColor;
	NTKColoringImageView* _handImageView;
	CLKDevice* _device;
	CGSize _directionalShadowOffset;
	UIEdgeInsets _inlayInsets;
	UIEdgeInsets _shadowInsets;

}

@property (nonatomic,readonly) CALayer * inlayLayer; 
@property (nonatomic,readonly) UIView * handDotView;                                             //@synthesize handDotView=_handDotView - In the implementation block
@property (nonatomic,readonly) NTKColoringImageView * handImageView;                             //@synthesize handImageView=_handImageView - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                               //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                    //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double zRotation;                                                   //@synthesize zRotation=_zRotation - In the implementation block
@property (assign,nonatomic) double scale;                                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) UIColor * inlayColor;                                               //@synthesize inlayColor=_inlayColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets inlayInsets;                                           //@synthesize inlayInsets=_inlayInsets - In the implementation block
@property (readonly) NTKAnalogHandConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL shadowsHidden;                                                 //@synthesize shadowsHidden=_shadowsHidden - In the implementation block
@property (assign,nonatomic) BOOL radialShadowsHidden;                                           //@synthesize radialShadowsHidden=_radialShadowsHidden - In the implementation block
@property (assign,nonatomic) BOOL dropShadowsHidden;                                             //@synthesize dropShadowsHidden=_dropShadowsHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets shadowInsets;                                          //@synthesize shadowInsets=_shadowInsets - In the implementation block
@property (nonatomic,retain) UIImage * radialShadowImage;                                        //@synthesize radialShadowImage=_radialShadowImage - In the implementation block
@property (nonatomic,retain) UIImage * dropShadowImage;                                          //@synthesize dropShadowImage=_dropShadowImage - In the implementation block
@property (assign,nonatomic) CGPathRef dropShadowPath;                                           //@synthesize dropShadowPath=_dropShadowPath - In the implementation block
@property (assign,nonatomic) CGPathRef radialShadowPath;                                         //@synthesize radialShadowPath=_radialShadowPath - In the implementation block
@property (assign,nonatomic) CGSize directionalShadowOffset;                                     //@synthesize directionalShadowOffset=_directionalShadowOffset - In the implementation block
@property (assign,nonatomic) BOOL shadowImageBehindHand;                                         //@synthesize shadowImageBehindHand=_shadowImageBehindHand - In the implementation block
@property (nonatomic,retain) UIView * transitionContainerView;                                   //@synthesize transitionContainerView=_transitionContainerView - In the implementation block
@property (nonatomic,retain) UIColor * handDotColor;                                             //@synthesize handDotColor=_handDotColor - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)zRotation;
-(void)setImage:(UIImage *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(UIColor *)color;
-(double)scale;
-(id)shadowView;
-(UIImage *)image;
-(CLKDevice *)device;
-(void)setZRotation:(double)arg1 ;
-(void)layoutSubviews;
-(NTKAnalogHandConfiguration *)configuration;
-(void)setColor:(UIColor *)arg1 ;
-(UIView *)transitionContainerView;
-(void)setScale:(double)arg1 ;
-(void)setTransitionContainerView:(UIView *)arg1 ;
-(void)_updateTransform;
-(UIEdgeInsets)shadowInsets;
-(void)dealloc;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)setInlayColor:(UIColor *)arg1 ;
-(void)setHandDotColor:(UIColor *)arg1 ;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(UIColor *)inlayColor;
-(id)initWithImage:(id)arg1 forDevice:(id)arg2 ;
-(void)setRadialShadowImage:(UIImage *)arg1 ;
-(void)setInlayInsets:(UIEdgeInsets)arg1 ;
-(CGSize)directionalShadowOffset;
-(id)initWithConfiguration:(id)arg1 forDevice:(id)arg2 maskedShadow:(BOOL)arg3 ;
-(CGPoint)anchorPointFromConfiguration;
-(UIEdgeInsets)inlayInsets;
-(UIView *)handDotView;
-(void)setupHandDotViewWithDiameter:(double)arg1 ;
-(void)_initWithImage:(id)arg1 forDevice:(id)arg2 ;
-(void)_updateShadows;
-(void)_layoutInlayLayer;
-(void)noModelUpdate_setColor:(id)arg1 ;
-(void)_adjustHandImageSubviewOrder;
-(void)noModelUpdate_setInlayColor:(id)arg1 ;
-(CALayer *)inlayLayer;
-(void)noModelUpdate_setInlayInsets:(UIEdgeInsets)arg1 ;
-(void)setShadowsHidden:(BOOL)arg1 ;
-(void)noModelUpdate_setHandDotColor:(id)arg1 ;
-(void)setDropShadowsHidden:(BOOL)arg1 ;
-(void)setRadialShadowsHidden:(BOOL)arg1 ;
-(void)setDirectionalShadowOffset:(CGSize)arg1 ;
-(void)setDropShadowImage:(UIImage *)arg1 ;
-(void)setDropShadowPath:(CGPathRef)arg1 ;
-(void)setRadialShadowPath:(CGPathRef)arg1 ;
-(void)setShadowImageBehindHand:(BOOL)arg1 ;
-(BOOL)shadowsHidden;
-(BOOL)radialShadowsHidden;
-(BOOL)dropShadowsHidden;
-(void)setShadowInsets:(UIEdgeInsets)arg1 ;
-(UIImage *)radialShadowImage;
-(UIImage *)dropShadowImage;
-(CGPathRef)dropShadowPath;
-(CGPathRef)radialShadowPath;
-(BOOL)shadowImageBehindHand;
-(UIColor *)handDotColor;
-(NTKColoringImageView *)handImageView;
@end
