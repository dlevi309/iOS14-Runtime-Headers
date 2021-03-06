/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>

@class NSString, NSArray, MTVisualStylingProvider, UIImageView, MTMaterialView, UIImage;

@interface PLGlyphControl : UIControl <MTMaterialGrouping, MTVisualStylingRequiring> {

	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _blurEnabled;
	long long _materialRecipe;
	long long _visualStyle;
	UIImageView* _glyphView;
	MTMaterialView* _backgroundMaterialView;

}

@property (getter=_glyphView,nonatomic,readonly) UIImageView * glyphView; 
@property (getter=_backgroundMaterialView,nonatomic,readonly) MTMaterialView * backgroundMaterialView; 
@property (getter=_glyphView,nonatomic,retain) UIImageView * glyphView;                                             //@synthesize glyphView=_glyphView - In the implementation block
@property (getter=_backgroundMaterialView,nonatomic,retain) MTMaterialView * backgroundMaterialView;                //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (nonatomic,copy) UIImage * glyph; 
@property (nonatomic,readonly) long long materialRecipe;                                                            //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (assign,nonatomic) long long visualStyle;                                                                 //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign,getter=isBlurEnabled,nonatomic) BOOL blurEnabled;                                                 //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (nonatomic,copy) NSString * materialGroupNameBase; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
+(id)dismissControlWithMaterialRecipe:(long long)arg1 ;
-(long long)visualStyle;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(UIImage *)glyph;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(void)setVisualStyle:(long long)arg1 ;
-(NSArray *)requiredVisualStyleCategories;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(BOOL)isBlurEnabled;
-(double)_cornerRadius;
-(void)setGlyphView:(UIImageView *)arg1 ;
-(NSString *)materialGroupNameBase;
-(void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(id)_glyphView;
-(void)setGlyph:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_backgroundMaterialView;
-(long long)materialRecipe;
-(id)initWithMaterialRecipe:(long long)arg1 ;
-(void)_handleTouchUpInsideWithEvent:(id)arg1 ;
-(void)_updateVisualStylingOfView:(id)arg1 ;
-(void)_configureGlyphViewIfNecessaryWithImage:(id)arg1 ;
-(void)_removeAllVisualStyling;
-(void)_updateAllVisualStyling;
-(void)_updateGlyphViewVisualStyling;
-(void)_configureMaterialView:(id*)arg1 ifNecessaryWithConfiguration:(long long)arg2 positioningAtIndex:(unsigned long long)arg3 ;
-(void)setBackgroundMaterialView:(MTMaterialView *)arg1 ;
-(void)_removeVisualStylingOfView:(id)arg1 ;
@end

