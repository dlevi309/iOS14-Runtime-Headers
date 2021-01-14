/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class NSArray, UIView, NSString;

@interface _TVProductInfoView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	NSArray* _viewsAboveInfoSection;
	NSArray* _infoSectionViews;
	NSArray* _viewsBelowInfoSection;
	UIView* _defaultFocusView;

}

@property (nonatomic,retain) NSArray * viewsAboveInfoSection;              //@synthesize viewsAboveInfoSection=_viewsAboveInfoSection - In the implementation block
@property (nonatomic,retain) NSArray * infoSectionViews;                   //@synthesize infoSectionViews=_infoSectionViews - In the implementation block
@property (nonatomic,retain) NSArray * viewsBelowInfoSection;              //@synthesize viewsBelowInfoSection=_viewsBelowInfoSection - In the implementation block
@property (nonatomic,retain) UIView * defaultFocusView;                    //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productInfoViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(void)setViewsAboveInfoSection:(NSArray *)arg1 ;
-(void)setInfoSectionViews:(NSArray *)arg1 ;
-(void)setViewsBelowInfoSection:(NSArray *)arg1 ;
-(NSArray *)viewsAboveInfoSection;
-(NSArray *)infoSectionViews;
-(NSArray *)viewsBelowInfoSection;
@end
