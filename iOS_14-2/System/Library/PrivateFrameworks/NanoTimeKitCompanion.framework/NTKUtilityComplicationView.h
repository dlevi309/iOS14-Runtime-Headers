/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKTemplateComplicationDisplay.h>
#import <libobjc.A.dylib/NTKComplicationDisplay.h>

@protocol NTKComplicationDisplayObserver;
@class UIColor, CLKFont, NSDate, CLKDevice, UIImageView, UIView, NTKFaceColorScheme, CLKComplicationTemplate, NSString;

@interface NTKUtilityComplicationView : UIView <NTKTemplateComplicationDisplay, NTKComplicationDisplay> {

	BOOL _highlighted;
	BOOL _usesLegibility;
	UIColor* _foregroundColor;
	CLKFont* _font;
	NSDate* _timeTravelDate;
	UIColor* _computedForegroundColor;
	UIColor* _computedPlatterColor;
	double _computedForegroundAlpha;
	double _computedForegroundImageAlpha;
	BOOL _canUseCurvedText;
	BOOL _shouldUseBackgroundPlatter;
	BOOL _alwaysEnforcePlatterInset;
	BOOL _useRoundedFontDesign;
	BOOL _useBlockyHighlightCorners;
	BOOL _shouldScaleAndFadeWhenHighlighting;
	BOOL _suppressesInternalColorOverrides;
	BOOL _editing;
	id<NTKComplicationDisplayObserver> displayObserver;
	double _foregroundAlpha;
	UIColor* _shadowColor;
	CLKDevice* _device;
	UIColor* _accentColor;
	double _foregroundImageAlpha;
	unsigned long long _placement;
	double _fontWeight;
	double _editingRotationAngle;
	UIImageView* _backgroundPlatter;
	double _minimumWidth;
	UIView* _highlightView;
	NTKFaceColorScheme* _colorScheme;
	UIColor* _overrideColor;
	UIColor* _platterColor;
	CLKComplicationTemplate* _complicationTemplate;
	CGSize _maxSize;
	UIEdgeInsets _touchEdgeInsets;

}

@property (nonatomic,retain) UIImageView * backgroundPlatter;                                        //@synthesize backgroundPlatter=_backgroundPlatter - In the implementation block
@property (assign,nonatomic) double minimumWidth;                                                    //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                                 //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;                                           //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
@property (nonatomic,retain) NTKFaceColorScheme * colorScheme;                                       //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                                                //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,retain) UIColor * platterColor;                                                 //@synthesize platterColor=_platterColor - In the implementation block
@property (nonatomic,readonly) CGSize maxSize;                                                       //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,readonly) BOOL editing;                                                         //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) CLKComplicationTemplate * complicationTemplate;                       //@synthesize complicationTemplate=_complicationTemplate - In the implementation block
@property (nonatomic,retain) CLKDevice * device;                                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                                  //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                                                  //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility;                                                    //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (assign,nonatomic) double foregroundAlpha;                                                 //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
@property (assign,nonatomic) double foregroundImageAlpha;                                            //@synthesize foregroundImageAlpha=_foregroundImageAlpha - In the implementation block
@property (assign,nonatomic) unsigned long long placement;                                           //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) BOOL shouldUseBackgroundPlatter;                                        //@synthesize shouldUseBackgroundPlatter=_shouldUseBackgroundPlatter - In the implementation block
@property (assign,nonatomic) BOOL alwaysEnforcePlatterInset;                                         //@synthesize alwaysEnforcePlatterInset=_alwaysEnforcePlatterInset - In the implementation block
@property (readonly) NSDate * timeTravelDate;                                                        //@synthesize timeTravelDate=_timeTravelDate - In the implementation block
@property (assign,nonatomic) BOOL useRoundedFontDesign;                                              //@synthesize useRoundedFontDesign=_useRoundedFontDesign - In the implementation block
@property (assign,nonatomic) double fontWeight;                                                      //@synthesize fontWeight=_fontWeight - In the implementation block
@property (nonatomic,retain) CLKFont * font;                                                         //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) BOOL useBlockyHighlightCorners;                                         //@synthesize useBlockyHighlightCorners=_useBlockyHighlightCorners - In the implementation block
@property (assign,nonatomic) BOOL shouldScaleAndFadeWhenHighlighting;                                //@synthesize shouldScaleAndFadeWhenHighlighting=_shouldScaleAndFadeWhenHighlighting - In the implementation block
@property (assign,nonatomic) double editingRotationAngle;                                            //@synthesize editingRotationAngle=_editingRotationAngle - In the implementation block
@property (assign,nonatomic) BOOL suppressesInternalColorOverrides;                                  //@synthesize suppressesInternalColorOverrides=_suppressesInternalColorOverrides - In the implementation block
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText;                                                  //@synthesize canUseCurvedText=_canUseCurvedText - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(id)largeComplicationViewForType:(unsigned long long)arg1 narrow:(BOOL)arg2 ;
+(id)smallComplicationViewForType:(unsigned long long)arg1 ;
+(id)_stopwatchImageProvider;
+(id)_preferredAdditionalFontSettings;
+(id)_timerImageProvider;
+(id)_alarmImageProviderActive:(BOOL)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)minimumWidth;
-(void)setMinimumWidth:(double)arg1 ;
-(unsigned long long)placement;
-(double)foregroundAlpha;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(UIView *)highlightView;
-(UIColor *)foregroundColor;
-(UIColor *)shadowColor;
-(void)setFont:(CLKFont *)arg1 ;
-(void)setPlacement:(unsigned long long)arg1 ;
-(void)setForegroundAlpha:(double)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CLKDevice *)device;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)fontWeight;
-(UIColor *)accentColor;
-(CGSize)maxSize;
-(void)setFontWeight:(double)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(UIColor *)platterColor;
-(BOOL)editing;
-(CLKFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
-(NTKFaceColorScheme *)colorScheme;
-(void)setColorScheme:(NTKFaceColorScheme *)arg1 ;
-(void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)setForegroundImageAlpha:(double)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(void)setSuppressesInternalColorOverrides:(BOOL)arg1 ;
-(void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2 ;
-(CLKComplicationTemplate *)complicationTemplate;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5 ;
-(NSDate *)timeTravelDate;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setPlatterColor:(UIColor *)arg1 ;
-(void)setUseRoundedFontDesign:(BOOL)arg1 ;
-(void)setShouldUseBackgroundPlatter:(BOOL)arg1 ;
-(id)_standardFont;
-(void)setAlwaysEnforcePlatterInset:(BOOL)arg1 ;
-(void)setAccentColor:(UIColor *)arg1 ;
-(void)setShouldScaleAndFadeWhenHighlighting:(BOOL)arg1 ;
-(double)foregroundImageAlpha;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)usesLegibility;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setUseBlockyHighlightCorners:(BOOL)arg1 ;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(UIEdgeInsets)touchEdgeInsets;
-(void)setEditingRotationAngle:(double)arg1 ;
-(id)_newImageViewSubview;
-(void)_computeForegroundColor;
-(void)_computePlatterColor;
-(void)_updateForegroundColor;
-(void)_updatePlatterColor;
-(void)_updateLabelsForFontChange;
-(id)_computedForegroundColor;
-(void)_updateForTemplateChange;
-(id)_computedPlatterColor;
-(void)_updateImageViewColor:(id)arg1 ;
-(BOOL)useRoundedFontDesign;
-(id)_newHighlightView;
-(void)_computeForegroundAlpha;
-(void)_computeForegroundImageAlpha;
-(void)_enumerateColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateForegroundAlpha;
-(void)_applyForegroundAlpha;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_applyColorScheme:(id)arg1 ;
-(UIEdgeInsets)_touchEdgeInsetsForPlacement:(unsigned long long)arg1 ;
-(BOOL)shouldUseBackgroundPlatter;
-(BOOL)alwaysEnforcePlatterInset;
-(double)_widthThatFits;
-(BOOL)shouldUsePlatterInset;
-(id)_backgroundPlatterImage;
-(void)_updateContentForMaxSizeChange;
-(void)_updateContentForEditingChange;
-(BOOL)shouldScaleAndFadeWhenHighlighting;
-(id)_smallCapsFont;
-(id)_newLabelSubviewWithFont:(id)arg1 variant:(BOOL)arg2 ;
-(id)_newStandardLabelSubviewVariant:(BOOL)arg1 ;
-(id)_newHighlightViewVariant:(BOOL)arg1 ;
-(id)_newImageViewSubviewWithAlpha:(double)arg1 ;
-(void)_updateForegroundImageAlpha;
-(BOOL)isPlacementForTopBezelComplication;
-(void)layoutLabelVertically:(id)arg1 ;
-(void)_updateImageViewAlpha:(id)arg1 ;
-(id)_newDigitalTimeLabelSubviewWithOptions:(unsigned long long)arg1 ;
-(id)_newStandardLabelSubview;
-(id)_newStandardCurvedLabelSubview;
-(id)_newCurvedHighlightView;
-(BOOL)useBlockyHighlightCorners;
-(double)editingRotationAngle;
-(BOOL)suppressesInternalColorOverrides;
-(UIImageView *)backgroundPlatter;
-(void)setBackgroundPlatter:(UIImageView *)arg1 ;
@end
