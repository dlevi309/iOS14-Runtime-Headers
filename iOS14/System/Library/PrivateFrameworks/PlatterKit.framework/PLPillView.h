/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class MTMaterialView, MTShadowView, UIStackView, NSArray, UIView, NSMapTable, NSString, PLPillContentItem;

@interface PLPillView : UIView <MTMaterialGrouping, PLContentSizeCategoryAdjusting> {

	MTMaterialView* _materialView;
	MTShadowView* _shadowView;
	UIStackView* _centerStackView;
	NSArray* _centerStackViewLeadingTrailingConstraints;
	UIView* _referenceContentItemView;
	NSMapTable* _wrapperViewsToLeadingConstraints;
	NSMapTable* _wrapperViewsToTrailingConstraints;
	BOOL _adjustsFontForContentSizeCategory;
	NSString* _preferredContentSizeCategory;
	UIView* _leadingAccessoryView;
	UIView* _trailingAccessoryView;
	NSArray* _centerContentItems;
	PLPillContentItem* _referenceContentItemForIntrinsicContentSize;

}

@property (nonatomic,readonly) UIView * leadingAccessoryView;                                            //@synthesize leadingAccessoryView=_leadingAccessoryView - In the implementation block
@property (nonatomic,readonly) UIView * trailingAccessoryView;                                           //@synthesize trailingAccessoryView=_trailingAccessoryView - In the implementation block
@property (nonatomic,copy) NSArray * centerContentItems;                                                 //@synthesize centerContentItems=_centerContentItems - In the implementation block
@property (nonatomic,copy) PLPillContentItem * referenceContentItemForIntrinsicContentSize;              //@synthesize referenceContentItemForIntrinsicContentSize=_referenceContentItemForIntrinsicContentSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets shadowOutsets; 
@property (nonatomic,copy) NSString * materialGroupNameBase; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                      //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                     //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(CGSize)intrinsicContentSize;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)init;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(UIEdgeInsets)shadowOutsets;
-(NSString *)materialGroupNameBase;
-(void)layoutSubviews;
-(void)updateConstraints;
-(NSString *)preferredContentSizeCategory;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)leadingAccessoryView;
-(UIView *)trailingAccessoryView;
-(void)_configureShadowViewIfNecessary;
-(double)_effectiveCornerRadius;
-(id)initWithLeadingAccessoryView:(id)arg1 trailingAccessoryView:(id)arg2 ;
-(void)setCenterContentItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)_configureCenterStackViewIfNecessary;
-(void)_incomingTopWrapperView:(id*)arg1 incomingBottomWrapperView:(id*)arg2 outgoingWrapperViews:(id)arg3 forOutgoingContentItems:(id)arg4 incomingContentItems:(id)arg5 existingWrapperViews:(id)arg6 ;
-(void)_cleanupStackView;
-(CGSize)_intrinsicContentSizeWithReferenceView:(id)arg1 ;
-(id)_referenceContentItemView;
-(BOOL)_isAccessoryPinnedToTopLine;
-(void)_updateConstraintsForWrapperView:(id)arg1 ;
-(id)_arrangedSubviewForContentItem:(id)arg1 ;
-(BOOL)_isWrappingRequiredForView:(id)arg1 inBounds:(CGRect)arg2 ;
-(void)_updateConstraintForWrapperView:(id)arg1 leading:(BOOL)arg2 collection:(id)arg3 ;
-(id)initWithLeadingAccessoryView:(id)arg1 ;
-(id)initWithTrailingAccessoryView:(id)arg1 ;
-(void)setCenterContentItems:(NSArray *)arg1 ;
-(CGSize)sizeThatFitsContentItem:(id)arg1 ;
-(void)setReferenceContentItemForIntrinsicContentSize:(PLPillContentItem *)arg1 ;
-(double)_effectiveMinWidth;
-(double)_effectivemaxWidth;
-(NSArray *)centerContentItems;
-(PLPillContentItem *)referenceContentItemForIntrinsicContentSize;
@end

