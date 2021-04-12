/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIViewBaselineSpacing.h>
#import <UIKitCore/_UIMultilineTextContentSizing.h>
#import <UIKitCore/_UILabelVisualStyleSubject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@class UIColor, _UILabelContent, NSAttributedString, NSDictionary, NSMutableDictionary, _UILabelScaledMetrics, _UITextSizeCache, CUICatalog, CUIStyleEffectConfiguration, UIFont, _UILabelVisualStyle, NSString;

@interface UILabel : UIView <_UIViewBaselineSpacing, _UIMultilineTextContentSizing, _UILabelVisualStyleSubject, NSCoding, UIContentSizeCategoryAdjusting> {

	CGSize _size;
	UIColor* _highlightedColor;
	long long _numberOfLines;
	SCD_Struct_UI157 _baselineInfo;
	double _previousBaselineOffsetFromBottom;
	double _previousFirstLineBaseline;
	double _minimumScaleFactor;
	_UILabelContent* _content;
	NSAttributedString* _synthesizedAttributedText;
	NSDictionary* _cachedSynthesizedTextAttributes;
	NSMutableDictionary* _fallbackColorsForUserInterfaceStyle;
	double _minimumFontSize;
	long long _lineSpacing;
	id _layout;
	_UILabelScaledMetrics* _scaledMetrics;
	_UITextSizeCache* _intrinsicContentSizeCache;
	long long _contentsFormat;
	CUICatalog* _cuiCatalog;
	CUIStyleEffectConfiguration* _cuiStyleEffectConfiguration;
	NSMutableDictionary* _marqueeAnimations;
	NSMutableDictionary* _marqueeMaskAnimations;
	struct {
		unsigned highlighted : 1;
		unsigned autosizeTextToFit : 1;
		unsigned supportMultiLineShrinkToFit : 1;
		unsigned autotrackTextToFit : 1;
		unsigned baselineAdjustment : 2;
		unsigned enabled : 1;
		unsigned wordRoundingEnabled : 1;
		unsigned explicitAlignment : 1;
		unsigned enablesMarqueeWhenAncestorFocused : 1;
		unsigned marqueeEnabled : 1;
		unsigned marqueeRunable : 1;
		unsigned marqueeRequired : 1;
		unsigned usesExplicitPreferredMaxLayoutWidth : 1;
		unsigned drawsDebugBaselines : 1;
		unsigned explicitBaselineOffset : 1;
		unsigned usesSimpleTextEffects : 1;
		unsigned wantsUnderlineForAccessibilityButtonShapesEnabled : 1;
		unsigned disableUpdateTextColorOnTraitCollectionChange : 1;
		unsigned textAlignmentFollowsWritingDirection : 1;
		unsigned textAlignmentMirrored : 1;
		unsigned shortcutIntrinsicContentSize : 1;
		unsigned multilineLabelRequiresCarefulMeasurement : 1;
		unsigned noNeedsDisplayCheckForBaselineCalculationNeeded : 1;
		unsigned overallWritingDirectionFollowsLayoutDirection : 1;
		unsigned hyphenationFactorIgnoredIfURLsDetected : 1;
		unsigned extendedAccessibilityAdjustments : 1;
		unsigned canUseUILabelLayer : 1;
		unsigned implementsDefaultAttributes : 1;
		unsigned textColorFollowsTintColor : 1;
	}  _textLabelFlags;
	BOOL _adjustsFontForContentSizeCategory;
	double _preferredMaxLayoutWidth;
	double _multilineContextWidth;
	UIFont* _fontForShortcutBaselineCalculation;
	_UILabelVisualStyle* __visualStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double _capOffsetFromBoundsTop; 
@property (nonatomic,readonly) double _firstLineBaselineOffsetFromBoundsTop; 
@property (assign,setter=_setFirstLineCapFrameOriginY:,nonatomic) double _firstLineCapFrameOriginY; 
@property (assign,setter=_setFirstLineBaselineFrameOriginY:,nonatomic) double _firstLineBaselineFrameOriginY; 
@property (assign,setter=_setLastLineBaselineFrameOriginY:,nonatomic) double _lastLineBaselineFrameOriginY; 
@property (assign,setter=_setDrawsDebugBaselines:,nonatomic) BOOL _drawsDebugBaselines; 
@property (assign,setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:,nonatomic) BOOL _wantsUnderlineForAccessibilityButtonShapesEnabled; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (assign,nonatomic) long long lineSpacing; 
@property (setter=_setContent:,getter=_content,nonatomic,retain) _UILabelContent * _content; 
@property (setter=_setSynthesizedAttributedText:,getter=_synthesizedAttributedText,nonatomic,retain) NSAttributedString * _synthesizedAttributedText; 
@property (setter=_setVisualStyle:,nonatomic,retain) _UILabelVisualStyle * _visualStyle;                                                                           //@synthesize _visualStyle=__visualStyle - In the implementation block
@property (setter=set_fontForShortcutBaselineCalculation:,nonatomic,retain) UIFont * _fontForShortcutBaselineCalculation;                                          //@synthesize fontForShortcutBaselineCalculation=_fontForShortcutBaselineCalculation - In the implementation block
@property (nonatomic,readonly) long long _measuredNumberOfLines; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIColor * highlightedTextColor;                                                                                                       //@synthesize highlightedColor=_highlightedColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) long long baselineAdjustment; 
@property (assign,nonatomic) double minimumScaleFactor;                                                                                                            //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL allowsDefaultTighteningForTruncation; 
@property (assign,nonatomic) unsigned long long lineBreakStrategy; 
@property (assign,nonatomic) double preferredMaxLayoutWidth;                                                                                                       //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,nonatomic) BOOL enablesMarqueeWhenAncestorFocused; 
@property (assign,nonatomic) double minimumFontSize; 
@property (assign,nonatomic) BOOL adjustsLetterSpacingToFitWidth; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                                                               //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(CGRect)_insetRect:(CGRect)arg1 forAttributedString:(id)arg2 withDefaultFont:(id)arg3 inView:(id)arg4 ;
+(id)_defaultAttributes;
+(id)_defaultColor;
+(Class)layerClass;
+(id)defaultFont;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(CGSize)textSize;
-(void)setShadowOffset:(CGSize)arg1 ;
-(unsigned long long)lineBreakStrategy;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(id)_image;
-(long long)lineBreakMode;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_setTextColor:(id)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(NSAttributedString *)attributedText;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)tintColorDidChange;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(unsigned long long)defaultAccessibilityTraits;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)rawSize;
-(void)setLineBreakMode:(long long)arg1 ;
-(double)_capOffsetFromBoundsTop;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(UIEdgeInsets)_contentInsetsFromFonts;
-(void)_contentDidChange:(long long)arg1 fromContent:(id)arg2 ;
-(UIColor *)shadowColor;
-(void)_setWantsUnderlineForAccessibilityButtonShapesEnabled:(BOOL)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_setOverallWritingDirectionFollowsLayoutDirection:(BOOL)arg1 ;
-(void)layerWillDraw:(id)arg1 ;
-(void)_setText:(id)arg1 ;
-(id)color;
-(CGSize)shadowOffset;
-(void)setNeedsDisplay;
-(_UILabelVisualStyle *)_visualStyle;
-(void)setEnabled:(BOOL)arg1 ;
-(_UILabelContent *)_content;
-(void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)setText:(NSString *)arg1 ;
-(void)_setFallbackTextColor:(id)arg1 forUserInterfaceStyle:(long long)arg2 ;
-(double)_baselineOffsetFromBottom;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(BOOL)_drawsDebugBaselines;
-(BOOL)isAccessibilityElementByDefault;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)_setFont:(id)arg1 ;
-(id)_disabledFontColor;
-(long long)lineSpacing;
-(void)setBounds:(CGRect)arg1 ;
-(id)_cuiStyleEffectConfiguration;
-(id)_defaultAttributes;
-(long long)textAlignment;
-(void)_setCuiCatalog:(id)arg1 ;
-(void)_setCuiStyleEffectConfiguration:(id)arg1 ;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(void)_invalidateBaselineConstraints;
-(BOOL)_textColorFollowsTintColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(double)minimumFontSize;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setColor:(id)arg1 ;
-(void)setRawSize:(CGSize)arg1 ;
-(double)shadowBlur;
-(double)_minimumFontSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_firstLineBaselineOffsetFromBoundsTop;
-(void)invalidateIntrinsicContentSize;
-(double)preferredMaxLayoutWidth;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(NSString *)text;
-(void)setLineSpacing:(long long)arg1 ;
-(void)_resetUsesExplicitPreferredMaxLayoutWidth;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_setColor:(id)arg1 ;
-(BOOL)isHighlighted;
-(id)_stringDrawingContext;
-(void)_setDefaultAttributes:(id)arg1 ;
-(void)setAutotrackTextToFit:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isTextFieldCenteredLabel;
-(void)_setContent:(id)arg1 ;
-(BOOL)_shouldInvalidateBaselineConstraintsForSize:(CGSize)arg1 oldSize:(CGSize)arg2 ;
-(id)_fontInfoForBaselineSpacing;
-(BOOL)_hasFontInfoForVerticalBaselineSpacing;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)_setMinimumFontSize:(double)arg1 ;
-(void)_commonInit;
-(UIColor *)highlightedTextColor;
-(void)setBaselineAdjustment:(long long)arg1 ;
-(void)_setHyphenationFactor:(float)arg1 ;
-(BOOL)allowsDefaultTighteningForTruncation;
-(BOOL)isEnabled;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)_setLineBreakMode:(long long)arg1 ;
-(double)_actualScaleFactor;
-(void)_invalidateLabelSize;
-(void)_invalidateTextSize;
-(BOOL)_useShortcutIntrinsicContentSize;
-(id)currentTextColor;
-(float)_hyphenationFactor;
-(long long)_stringDrawingOptions;
-(BOOL)_overallWritingDirectionFollowsLayoutDirection;
-(void)_setTextAlignment:(long long)arg1 ;
-(void)_accessibilityButtonShapesChangedNotification:(id)arg1 ;
-(BOOL)_textAlignmentMirrored;
-(BOOL)adjustsLetterSpacingToFitWidth;
-(BOOL)_textAlignmentFollowsWritingDirection;
-(CGRect)_textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 includingShadow:(BOOL)arg3 ;
-(BOOL)marqueeRunning;
-(void)_drawTextInRect:(CGRect)arg1 baselineCalculationOnly:(BOOL)arg2 ;
-(void)_setUseShortcutIntrinsicContentSize:(BOOL)arg1 ;
-(void)_setSynthesizedAttributedText:(id)arg1 ;
-(void)_setMultilineLabelRequiresCarefulMeasurement:(BOOL)arg1 ;
-(void)_drawFullMarqueeTextInRect:(CGRect)arg1 ;
-(CGSize)textSizeForWidth:(double)arg1 ;
-(BOOL)_multilineLabelRequiresCarefulMeasurement;
-(void)_startMarqueeIfNecessary;
-(void)setDrawsUnderline:(BOOL)arg1 ;
-(long long)baselineAdjustment;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(void)_stopMarqueeWithRedisplay:(BOOL)arg1 ;
-(BOOL)enablesMarqueeWhenAncestorFocused;
-(void)setEnablesMarqueeWhenAncestorFocused:(BOOL)arg1 ;
-(void)setAdjustsLetterSpacingToFitWidth:(BOOL)arg1 ;
-(void)set_fontForShortcutBaselineCalculation:(UIFont *)arg1 ;
-(void)_setWordRoundingEnabled:(BOOL)arg1 ;
-(BOOL)drawsUnderline;
-(void)_setTextAlignmentFollowsWritingDirection:(BOOL)arg1 ;
-(void)_setTextAlignmentMirrored:(BOOL)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(UIFont *)_fontForShortcutBaselineCalculation;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)largeContentTitle;
-(double)_firstLineCapFrameOriginY;
-(void)_setFirstLineCapFrameOriginY:(double)arg1 ;
-(double)_firstLineBaselineFrameOriginY;
-(void)_setFirstLineBaselineFrameOriginY:(double)arg1 ;
-(double)_lastLineBaselineFrameOriginY;
-(void)_setLastLineBaselineFrameOriginY:(double)arg1 ;
-(void)setCentersHorizontally:(BOOL)arg1 ;
-(id)_associatedScalingLabel;
-(BOOL)_wantsUnderlineForAccessibilityButtonShapesEnabled;
-(BOOL)autotrackTextToFit;
-(BOOL)centersHorizontally;
-(void)drawContentsInRect:(CGRect)arg1 ;
-(BOOL)_hasBaseline;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)_measuredNumberOfLines;
-(BOOL)marqueeEnabled;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(BOOL)_shouldCeilSizeToViewScale;
-(void)_setTextColorFollowsTintColor:(BOOL)arg1 ;
-(NSAttributedString *)_synthesizedAttributedText;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(void)_setVisualStyle:(id)arg1 ;
-(id)_cuiCatalog;
-(long long)numberOfLines;
-(double)_lastLineBaseline;
-(double)_firstLineBaseline;
-(void)setShadowBlur:(double)arg1 ;
-(double)_firstBaselineOffsetFromTop;
-(double)_preferredMaxLayoutWidth;
-(void)dealloc;
-(UIFont *)font;
-(double)_multilineContextWidth;
-(double)minimumScaleFactor;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setMinimumFontSize:(double)arg1 ;
@end
