/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <WorkflowEditor/WFActionCustomView.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class UIStackView, NSString;

@interface WFHomeAccessoryActionView : WFActionCustomView <WFActionEventObserver> {

	UIStackView* _iconsStackView;

}

@property (nonatomic,retain) UIStackView * iconsStackView;              //@synthesize iconsStackView=_iconsStackView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeightForAction:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)updateIcons;
-(UIStackView *)iconsStackView;
-(void)setIconsStackView:(UIStackView *)arg1 ;
@end

