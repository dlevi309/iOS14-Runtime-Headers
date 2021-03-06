/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <SiriUI/SiriUIReusableView.h>
#import <SiriUI/SiriUISizableHeaderView.h>

@class UILabel, UIImageView, SiriUISnippetViewController, NSString, UIColor, UIButton;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {

	UILabel* _headerLabel;
	UIEdgeInsets _contentInsets;
	UIImageView* _chevronView;
	SiriUISnippetViewController* _snippetViewController;
	NSString* _titleText;
	UIColor* _titleTextColor;
	UIButton* _headerAreaButton;

}

@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) UIColor * titleTextColor;                                                  //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,readonly) UIButton * headerAreaButton;                                           //@synthesize headerAreaButton=_headerAreaButton - In the implementation block
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;              //@synthesize snippetViewController=_snippetViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
+(id)elementKind;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(SiriUISnippetViewController *)arg1 ;
-(void)_configureHeaderLabelForBounds:(CGRect)arg1 ;
-(UIButton *)headerAreaButton;
@end

