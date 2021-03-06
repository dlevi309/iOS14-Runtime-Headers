/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class SKUICardViewElement, SKUIViewElementLayoutContext;

@interface SKUICardLayout : NSObject {

	SKUICardViewElement* _cardViewElement;
	SKUIViewElementLayoutContext* _layoutContext;
	BOOL _hasBackground;

}

@property (nonatomic,readonly) SKUICardViewElement * cardViewElement;                     //@synthesize cardViewElement=_cardViewElement - In the implementation block
@property (nonatomic,readonly) SKUIViewElementLayoutContext * layoutContext;              //@synthesize layoutContext=_layoutContext - In the implementation block
@property (nonatomic,readonly) double horizontalContentInset; 
@property (nonatomic,readonly) long long layoutStyle; 
+(id)layoutWithCardViewElement:(id)arg1 context:(id)arg2 ;
+(BOOL)allowsViewElement:(id)arg1 ;
-(long long)layoutStyle;
-(CGSize)sizeForViewElement:(id)arg1 width:(double)arg2 ;
-(SKUIViewElementLayoutContext *)layoutContext;
-(double)horizontalContentInset;
-(id)attributedStringForButton:(id)arg1 ;
-(id)attributedStringForLabel:(id)arg1 ;
-(double)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(double)arg3 ;
-(double)bottomInsetForLastViewElement:(id)arg1 width:(double)arg2 ;
-(SKUICardViewElement *)cardViewElement;
@end

