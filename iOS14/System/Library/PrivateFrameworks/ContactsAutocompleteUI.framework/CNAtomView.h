/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIKitCore/UIDefaultKeyboardInput.h>
#import <libobjc.A.dylib/CNChevronButtonMenuDelegate.h>
#import <libobjc.A.dylib/CNAtomViewResembling.h>

@class UIFont, CNModernAtomIconView, UIColor, UIView, CNModernAtomBackgroundView, UILabel, UIActivityIndicatorView, NSString, UIImageView;

@interface CNAtomView : UIDefaultKeyboardInput <CNChevronButtonMenuDelegate, CNAtomViewResembling> {

	CNModernAtomIconView* _badgeIconView;
	CNModernAtomIconView* _accessoryIconView;
	UIColor* _effectiveTintColor;
	unsigned long long _disabledPresentationOptions;
	UIView* _baselineView;
	CNModernAtomBackgroundView* _background;
	UIView* _compositingView;
	UIView* _titleLabelFillView;
	UILabel* _label;
	UILabel* _overlayLabelForNonColoredGlyphs;
	UIActivityIndicatorView* _activityIndicator;
	double _scalingFactor;
	BOOL _wrappingSupported;
	BOOL _cachedIsWrappingEnabled;
	int _separatorStyle;
	BOOL _isPrimaryAddressAtom;
	BOOL _separatorHidden;
	BOOL _separatorIsLeftAligned;
	BOOL _selected;
	NSString* _title;
	UIFont* _titleFont;
	unsigned long long _presentationOptions;
	double _firstLineIndent;
	UIImageView* _downwardChevronImageView;

}

@property (nonatomic,readonly) CNModernAtomBackgroundView * backgroundView; 
@property (nonatomic,readonly) CNModernAtomIconView * badgeIconView;                         //@synthesize badgeIconView=_badgeIconView - In the implementation block
@property (nonatomic,readonly) CNModernAtomIconView * accessoryIconView;                     //@synthesize accessoryIconView=_accessoryIconView - In the implementation block
@property (nonatomic,readonly) UIImageView * downwardChevronImageView;                       //@synthesize downwardChevronImageView=_downwardChevronImageView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,copy) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                         //@synthesize label=_label - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) unsigned long long effectivePresentationOptions; 
@property (nonatomic,readonly) UIColor * effectiveTintColor; 
@property (nonatomic,readonly) CGRect selectionFrame; 
@property (assign,nonatomic) double firstLineIndent;                                         //@synthesize firstLineIndent=_firstLineIndent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isPrimaryAddressAtom;                                      //@synthesize isPrimaryAddressAtom=_isPrimaryAddressAtom - In the implementation block
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden;                                           //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) BOOL separatorIsLeftAligned;                                    //@synthesize separatorIsLeftAligned=_separatorIsLeftAligned - In the implementation block
@property (assign,nonatomic) double scale;                                                   //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions;                         //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont;                                             //@synthesize titleFont=_titleFont - In the implementation block
+(double)defaultHeight;
+(double)horizontalPadding;
+(id)_defaultTintColor;
+(id)_failureTintColor;
+(id)_hoveredFailureTintColor;
+(id)_defaultLabelAttributesWithWrappingEnabled:(BOOL)arg1 ;
+(id)_newTextLabel;
+(id)primaryAtomFont;
+(id)_defaultLabelAttributesWithFont:(id)arg1 wrappingEnabled:(BOOL)arg2 ;
+(id)_clearBackgroundTextTintColor;
+(id)_downtimeBlockedTintColor;
+(id)_SMSTintColor;
+(id)_badgeImagesForPresentationOptions:(unsigned long long)arg1 iconOrder:(const unsigned long long*)arg2 orderingLength:(unsigned long long)arg3 tintColor:(id)arg4 large:(BOOL)arg5 variant:(int)arg6 ;
+(CGPoint)defaultBaselinePoint;
+(id)_hoveredDefaultTintColor;
+(id)_hoveredDowntimeBlockedTintColor;
+(id)_hoveredSMSTintColor;
+(BOOL)presentationOptions:(unsigned long long*)arg1 encodedIntoAddress:(id)arg2 ;
+(id)defaultFont;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)titleLabel;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(id)viewForLastBaselineLayout;
-(int)separatorStyle;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)edgeInsets;
-(double)preferredWidth;
-(CGRect)selectionFrame;
-(CNModernAtomBackgroundView *)backgroundView;
-(BOOL)isSelected;
-(double)scale;
-(void)setTitle:(NSString *)arg1 ;
-(UIFont *)titleFont;
-(void)setSelected:(BOOL)arg1 ;
-(unsigned long long)presentationOptions;
-(void)setPresentationOptions:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGPoint)baselinePoint;
-(void)setScale:(double)arg1 ;
-(id)menuConfigurationForChevronButton;
-(BOOL)isWrappingEnabled;
-(void)_updateIconViewsSemanticContentAttribute;
-(void)_updateSubviewsForWrapping;
-(void)_invalidatePresentationOptions;
-(double)_leftPadding;
-(double)_rightPadding;
-(UIColor *)effectiveTintColor;
-(void)_setEffectiveTintColor:(id)arg1 ;
-(void)_updateOverlayLabelText;
-(id)_chevronTextAttachment;
-(id)_centeredTextAttachmentWithImage:(id)arg1 ;
-(int)_preferredIconVariant;
-(BOOL)isPrimaryAddressAtom;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned long long)arg3 ;
-(void)displaySelectionChangeWithAnimation:(BOOL)arg1 ;
-(BOOL)appearsSelected;
-(void)_updateCompositingFilters;
-(void)_setPresentationOption:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
-(void)setupOverlayLabelTextForEmojiRanges:(id)arg1 ;
-(void)_setupOverlayLabelForNonColoredGlyphs;
-(double)preferredWidthWithSizeConstraints:(CGSize)arg1 ;
-(void)_updateFontIfNecessary;
-(BOOL)separatorHidden;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2 ;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1 ;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1 ;
-(BOOL)separatorIsLeftAligned;
-(void)setSeparatorIsLeftAligned:(BOOL)arg1 ;
-(void)setFirstLineIndent:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 presentationOptions:(unsigned long long)arg2 separatorStyle:(int)arg3 wrappingSupported:(BOOL)arg4 ;
-(void)appendPresentationOption:(unsigned long long)arg1 ;
-(void)clearPresentationOption:(unsigned long long)arg1 ;
-(unsigned long long)effectivePresentationOptions;
-(CNModernAtomIconView *)accessoryIconView;
-(CNModernAtomIconView *)badgeIconView;
-(double)firstLineIndent;
-(UIImageView *)downwardChevronImageView;
-(double)_rightInset;
-(double)_leftInset;
-(void)_updateLabelAttributes;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(NSString *)title;
-(void)_updateActivityIndicator;
@end

