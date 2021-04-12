/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <PlatterKit/PLGlyphControl.h>
#import <libobjc.A.dylib/NCClickInteractionPresenterDelegate.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@protocol NCToggleControlDelegate;
@class NSString, UILabel, NCToggleControlPair, NCClickInteractionPresenter;

@interface NCToggleControl : PLGlyphControl <NCClickInteractionPresenterDelegate, _UICursorInteractionDelegate, PLContentSizeCategoryAdjusting> {

	BOOL _adjustsFontForContentSizeCategory;
	BOOL _expanded;
	BOOL _glyphAlwaysVisible;
	BOOL _expandedPriorToControlEvent;
	unsigned _anchorEdge;
	NSString* _preferredContentSizeCategory;
	id<NCToggleControlDelegate> _delegate;
	unsigned long long _toggleControlType;
	UILabel* _titleLabel;
	NCToggleControlPair* _managingPair;
	NCClickInteractionPresenter* _previewInteractionPlatterPresenter;
	CGSize _cachedEffectiveMaxExpandedSize;
	CGSize _cachedEffectiveMaxUnexpandedSize;

}

@property (getter=_toggleControlType,nonatomic,readonly) unsigned long long toggleControlType;                                                         //@synthesize toggleControlType=_toggleControlType - In the implementation block
@property (getter=_titleLabel,nonatomic,readonly) UILabel * titleLabel;                                                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,setter=_setManagingPair:,getter=_managingPair,nonatomic,__weak) NCToggleControlPair * managingPair;                                  //@synthesize managingPair=_managingPair - In the implementation block
@property (getter=_previewInteractionPlatterPresenter,nonatomic,retain) NCClickInteractionPresenter * previewInteractionPlatterPresenter;              //@synthesize previewInteractionPlatterPresenter=_previewInteractionPlatterPresenter - In the implementation block
@property (assign,getter=_wasExpandedPriorToControlEvent,nonatomic) BOOL expandedPriorToControlEvent;                                                  //@synthesize expandedPriorToControlEvent=_expandedPriorToControlEvent - In the implementation block
@property (getter=_cachedEffectiveMaxExpandedSize,nonatomic,readonly) CGSize cachedEffectiveMaxExpandedSize;                                           //@synthesize cachedEffectiveMaxExpandedSize=_cachedEffectiveMaxExpandedSize - In the implementation block
@property (getter=_cachedEffectiveMaxUnexpandedSize,nonatomic,readonly) CGSize cachedEffectiveMaxUnexpandedSize;                                       //@synthesize cachedEffectiveMaxUnexpandedSize=_cachedEffectiveMaxUnexpandedSize - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                                          //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) unsigned anchorEdge;                                                                                                      //@synthesize anchorEdge=_anchorEdge - In the implementation block
@property (assign,getter=isGlyphAlwaysVisible,nonatomic) BOOL glyphAlwaysVisible;                                                                      //@synthesize glyphAlwaysVisible=_glyphAlwaysVisible - In the implementation block
@property (assign,nonatomic,__weak) id<NCToggleControlDelegate> delegate;                                                                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                                                    //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                                                   //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(id)dismissControlWithMaterialRecipe:(long long)arg1 ;
+(void)performWithDefaultExpansionAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
+(double)effectiveHeight:(BOOL)arg1 ;
+(id)showLessControlWithMaterialRecipe:(long long)arg1 ;
+(id)_labelFont:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(id<NCToggleControlDelegate>)delegate;
-(double)_cornerRadius;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<NCToggleControlDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSString *)preferredContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_labelFont;
-(NSString *)title;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)setAnchorEdge:(unsigned)arg1 ;
-(void)addTarget:(id)arg1 forPreviewInteractionPresentedContentWithAction:(SEL)arg2 ;
-(void)_handleSecondaryClickEventForGestureRecognizer:(id)arg1 ;
-(void)setGlyphAlwaysVisible:(BOOL)arg1 ;
-(void)_configureTitleLabelIfNecessaryWithTitle:(id)arg1 ;
-(unsigned long long)_toggleControlType;
-(CGSize)_effectiveExpandedSize;
-(CGRect)_unexpandedFrame;
-(CGSize)_effectiveGlyphSize;
-(double)_effectiveLeadingTrailingPadding;
-(void)_handleTouchUpInsideWithEvent:(id)arg1 ;
-(void)_updateTitleLabelTextAttributes;
-(double)_effectiveHeight;
-(void)_updateTitleLabelVisualStyling;
-(double)_effectiveValueForMinValue:(double)arg1 withFont:(id)arg2 ;
-(CGSize)_cachedEffectiveMaxExpandedSize;
-(CGSize)_sizeThatFits:(CGSize)arg1 whenExpanded:(BOOL)arg2 ;
-(CGSize)_cachedEffectiveMaxUnexpandedSize;
-(CGSize)_effectiveUnexpandedSize;
-(double)_effectiveInternalPadding;
-(id)containerViewForClickInteractionPresenter:(id)arg1 ;
-(BOOL)clickInteractionPresenterShouldBegin:(id)arg1 ;
-(void)clickInteractionPresenterDidBeginInteraction:(id)arg1 ;
-(void)clickInteractionPresenterDidCommitToPresentation:(id)arg1 ;
-(void)clickInteractionPresenterDidPresent:(id)arg1 ;
-(void)clickInteractionPresenterDidDismiss:(id)arg1 ;
-(unsigned)anchorEdge;
-(BOOL)isGlyphAlwaysVisible;
-(id)_managingPair;
-(void)_setManagingPair:(id)arg1 ;
-(id)_previewInteractionPlatterPresenter;
-(void)setPreviewInteractionPlatterPresenter:(NCClickInteractionPresenter *)arg1 ;
-(BOOL)_wasExpandedPriorToControlEvent;
-(void)setExpandedPriorToControlEvent:(BOOL)arg1 ;
@end
