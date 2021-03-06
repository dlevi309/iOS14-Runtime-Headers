/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSArray, NSString;

@interface _TVInfoCellView : UIView <TVAppTemplateImpressionable> {

	BOOL _headerOnLeading;
	UIView* _headerContentView;
	NSArray* _dataViews;
	double _headerWidth;
	double _headerMaxWidth;
	double _headerMinWidth;
	double _normalizedHeaderWidth;
	UIEdgeInsets _headerMargin;

}

@property (nonatomic,retain) UIView * headerContentView;                //@synthesize headerContentView=_headerContentView - In the implementation block
@property (nonatomic,retain) NSArray * dataViews;                       //@synthesize dataViews=_dataViews - In the implementation block
@property (assign,nonatomic) BOOL headerOnLeading;                      //@synthesize headerOnLeading=_headerOnLeading - In the implementation block
@property (assign,nonatomic) double headerWidth;                        //@synthesize headerWidth=_headerWidth - In the implementation block
@property (assign,nonatomic) double headerMaxWidth;                     //@synthesize headerMaxWidth=_headerMaxWidth - In the implementation block
@property (assign,nonatomic) double headerMinWidth;                     //@synthesize headerMinWidth=_headerMinWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargin;                 //@synthesize headerMargin=_headerMargin - In the implementation block
@property (assign,nonatomic) double normalizedHeaderWidth;              //@synthesize normalizedHeaderWidth=_normalizedHeaderWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoCellViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(UIView *)headerContentView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(NSArray *)dataViews;
-(UIEdgeInsets)headerMargin;
-(void)setHeaderMargin:(UIEdgeInsets)arg1 ;
-(void)setHeaderContentView:(UIView *)arg1 ;
-(void)setDataViews:(NSArray *)arg1 ;
-(BOOL)headerOnLeading;
-(CGSize)sizeThatFits:(CGSize)arg1 withHeaderWidth:(double)arg2 ;
-(void)setNormalizedHeaderWidth:(double)arg1 ;
-(double)minimumHeaderWidth;
-(void)setHeaderWidth:(double)arg1 ;
-(void)setHeaderMaxWidth:(double)arg1 ;
-(void)setHeaderMinWidth:(double)arg1 ;
-(void)setHeaderOnLeading:(BOOL)arg1 ;
-(double)headerWidth;
-(double)headerMaxWidth;
-(double)headerMinWidth;
-(double)normalizedHeaderWidth;
@end

