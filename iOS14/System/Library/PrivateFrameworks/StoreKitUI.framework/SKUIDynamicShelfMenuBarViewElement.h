/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIShelfMenuBarViewElement.h>
#import <libobjc.A.dylib/SKUIDynamicShelfViewElement.h>

@class SKUIViewElement, NSString;

@interface SKUIDynamicShelfMenuBarViewElement : SKUIShelfMenuBarViewElement <SKUIDynamicShelfViewElement> {

	SKUIViewElement* _cellTemplateViewElement;

}

@property (nonatomic,readonly) SKUIViewElement * cellTemplateViewElement; 
@property (nonatomic,readonly) id<SKUIEntityProviding> entityProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SKUIViewElement *)cellTemplateViewElement;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(BOOL)isDynamicContainer;
-(void)setShelfItemViewElementValidator:(/*^block*/id)arg1 ;
@end

