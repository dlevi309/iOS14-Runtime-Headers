/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIControl, SKUIButtonViewElement, SKUIBuyButtonDescriptor, SKUITracklistColumnData, NSMutableArray, UIView, NSString;

@interface SKUITracklistSectionHeaderCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIViewElementView> {

	UIControl* _button;
	SKUIButtonViewElement* _buttonViewElement;
	SKUIBuyButtonDescriptor* _buyButtonDescriptor;
	SKUITracklistColumnData* _columnData;
	NSMutableArray* _labels;
	UIView* _separatorView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(double)_titlesWidthForWidth:(double)arg1 columnData:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
@end

