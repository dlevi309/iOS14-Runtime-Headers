/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKBorderLineView.h>

@class UIStackView, NSMutableArray, UIView, NSLayoutConstraint, NSArray, UIColor;

@interface HKLegendView : HKBorderLineView {

	UIStackView* _mainStack;
	NSMutableArray* _leftEntryViews;
	NSMutableArray* _rightEntryViews;
	UIView* _topDividerView;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSArray* _leftEntries;
	NSArray* _rightEntries;
	UIColor* _topBorderColor;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) NSArray * leftEntries;               //@synthesize leftEntries=_leftEntries - In the implementation block
@property (nonatomic,readonly) NSArray * rightEntries;              //@synthesize rightEntries=_rightEntries - In the implementation block
@property (nonatomic,retain) UIColor * topBorderColor;              //@synthesize topBorderColor=_topBorderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;               //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(id)initWithEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(UIColor *)topBorderColor;
-(void)setLeftEntries:(id)arg1 rightEntries:(id)arg2 ;
-(void)_rebuildStackStructure;
-(void)_updateLegendLeftEntries:(id)arg1 rightEntries:(id)arg2 ;
-(NSArray *)leftEntries;
-(NSArray *)rightEntries;
@end

