/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, _TVStackBackdropView, _TVStackBackdropMaskingView, UICollectionView, NSArray, UIImage;

@interface _TVStackWrappingView : UIView {

	UIImageView* _backgroundImageView;
	_TVStackBackdropView* _backdropView;
	_TVStackBackdropMaskingView* _maskedBackdropView;
	BOOL _shouldAdjustForTabBarSafeAreaInsets;
	BOOL _usesBackgroundImage;
	BOOL _usesBackdropImage;
	UICollectionView* _stackView;
	NSArray* _headerSupplementaryViews;
	UIImage* _backgroundImage;
	UIImage* _backdropImage;
	long long _backdropBlurEffectStyle;
	double _backdropInitialPeek;
	double _backdropPeekGradient;
	double _backdropMaskFactor;
	NSArray* _supplementaryCellLayoutAttributes;

}

@property (nonatomic,retain) UICollectionView * stackView;                                    //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,copy) NSArray * headerSupplementaryViews;                                //@synthesize headerSupplementaryViews=_headerSupplementaryViews - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustForTabBarSafeAreaInsets;                        //@synthesize shouldAdjustForTabBarSafeAreaInsets=_shouldAdjustForTabBarSafeAreaInsets - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundImage;                                        //@synthesize usesBackgroundImage=_usesBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * backdropImage;                                         //@synthesize backdropImage=_backdropImage - In the implementation block
@property (assign,nonatomic) BOOL usesBackdropImage;                                          //@synthesize usesBackdropImage=_usesBackdropImage - In the implementation block
@property (assign,nonatomic) long long backdropBlurEffectStyle;                               //@synthesize backdropBlurEffectStyle=_backdropBlurEffectStyle - In the implementation block
@property (assign,nonatomic) double backdropInitialPeek;                                      //@synthesize backdropInitialPeek=_backdropInitialPeek - In the implementation block
@property (assign,nonatomic) double backdropPeekGradient;                                     //@synthesize backdropPeekGradient=_backdropPeekGradient - In the implementation block
@property (assign,nonatomic) double backdropMaskFactor;                                       //@synthesize backdropMaskFactor=_backdropMaskFactor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supplementaryCellLayoutAttributes;              //@synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes - In the implementation block
-(id)preferredFocusEnvironments;
-(id)initWithFrame:(CGRect)arg1 ;
-(UICollectionView *)stackView;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UIImage *)backgroundImage;
-(void)setStackView:(UICollectionView *)arg1 ;
-(BOOL)shouldAdjustForTabBarSafeAreaInsets;
-(NSArray *)supplementaryCellLayoutAttributes;
-(void)setBackdropBlurEffectStyle:(long long)arg1 ;
-(void)setBackdropInitialPeek:(double)arg1 ;
-(void)setBackdropPeekGradient:(double)arg1 ;
-(double)backdropInitialPeek;
-(void)setBackdropMaskFactor:(double)arg1 ;
-(void)setUsesBackgroundImage:(BOOL)arg1 ;
-(void)setBackdropImage:(UIImage *)arg1 ;
-(void)setUsesBackdropImage:(BOOL)arg1 ;
-(void)setHeaderSupplementaryViews:(NSArray *)arg1 ;
-(void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(UIEdgeInsets)arg1 sectionIndex:(long long)arg2 ;
-(long long)backdropBlurEffectStyle;
-(double)backdropPeekGradient;
-(double)backdropMaskFactor;
-(BOOL)usesBackgroundImage;
-(BOOL)usesBackdropImage;
-(UIImage *)backdropImage;
-(NSArray *)headerSupplementaryViews;
-(void)setShouldAdjustForTabBarSafeAreaInsets:(BOOL)arg1 ;
@end

