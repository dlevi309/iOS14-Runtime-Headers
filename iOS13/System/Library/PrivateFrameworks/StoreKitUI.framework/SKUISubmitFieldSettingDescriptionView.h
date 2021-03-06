/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIFieldSettingDescriptionView.h>

@class SKUIInputViewElement, UILabel, SKUIFieldSettingDescription;

@interface SKUISubmitFieldSettingDescriptionView : SKUIFieldSettingDescriptionView {

	double _aggregateLabelWidth;
	SKUIInputViewElement* _inputViewElement;
	UILabel* _label;
	SKUIFieldSettingDescription* _settingDescription;

}
+(BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)_addInputWithElement:(id)arg1 ;
-(id)_currentControllerValue;
-(void)_addSubmitInputWithElement:(id)arg1 ;
@end

