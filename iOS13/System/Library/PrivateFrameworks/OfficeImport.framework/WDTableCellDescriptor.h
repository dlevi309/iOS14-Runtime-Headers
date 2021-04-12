/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDShading, WDBorder;

@interface WDTableCellDescriptor : NSObject {

	WDShading* mShading;
	WDBorder* mTopBorder;
	WDBorder* mLeftBorder;
	WDBorder* mBottomBorder;
	WDBorder* mRightBorder;
	WDBorder* mDiagonalUpBorder;
	WDBorder* mDiagonalDownBorder;
	short mWidth;
	int mWidthType;
	short mTopMargin;
	int mTopMarginType;
	short mBottomMargin;
	int mBottomMarginType;
	short mLeftMargin;
	int mLeftMarginType;
	short mRightMargin;
	int mRightMarginType;
	int mVerticalAlignment;
	unsigned mShadingOverridden : 1;
	unsigned mTopBorderOverridden : 1;
	unsigned mLeftBorderOverridden : 1;
	unsigned mBottomBorderOverridden : 1;
	unsigned mRightBorderOverridden : 1;
	unsigned mDiagonalUpBorderOverridden : 1;
	unsigned mDiagonalDownBorderOverridden : 1;
	unsigned mWidthTypeOverridden : 1;
	unsigned mTopMarginOverridden : 1;
	unsigned mTopMarginTypeOverridden : 1;
	unsigned mBottomMarginOverridden : 1;
	unsigned mBottomMarginTypeOverridden : 1;
	unsigned mLeftMarginOverridden : 1;
	unsigned mLeftMarginTypeOverridden : 1;
	unsigned mRightMarginOverridden : 1;
	unsigned mRightMarginTypeOverridden : 1;
	unsigned mVerticalAlignmentOverridden : 1;
	unsigned mVerticallyMergedCell : 1;
	unsigned mVerticallyMergedCellOverridden : 1;
	unsigned mFirstInSetOfVerticallyMergedCells : 1;
	unsigned mFirstInSetOfVerticallyMergedCellsOverridden : 1;
	unsigned mNoWrap : 1;
	unsigned mNoWrapOverridden : 1;

}
-(void)setWidth:(short)arg1 ;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setLeftMargin:(short)arg1 ;
-(void)setRightMargin:(short)arg1 ;
-(void)setTopMargin:(short)arg1 ;
-(void)setBottomMargin:(short)arg1 ;
-(short)topMargin;
-(short)rightMargin;
-(void)setRightBorder:(id)arg1 ;
-(id)rightBorder;
-(BOOL)noWrap;
-(void)setNoWrap:(BOOL)arg1 ;
-(short)bottomMargin;
-(short)leftMargin;
-(id)topBorder;
-(id)bottomBorder;
-(void)setTopBorder:(id)arg1 ;
-(void)setBottomBorder:(id)arg1 ;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isTopMarginOverridden;
-(BOOL)isBottomMarginOverridden;
-(BOOL)isShadingOverridden;
-(id)shading;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isTopBorderOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isRightBorderOverridden;
-(id)leftBorder;
-(BOOL)isVerticalAlignmentOverridden;
-(void)setLeftBorder:(id)arg1 ;
-(BOOL)isDiagonalUpBorderOverridden;
-(id)diagonalUpBorder;
-(BOOL)isDiagonalDownBorderOverridden;
-(id)diagonalDownBorder;
-(void)setWidthType:(int)arg1 ;
-(void)setShading:(id)arg1 ;
-(void)setShadingOverridden:(BOOL)arg1 ;
-(void)setTopBorderOverridden:(BOOL)arg1 ;
-(void)setLeftBorderOverridden:(BOOL)arg1 ;
-(void)setBottomBorderOverridden:(BOOL)arg1 ;
-(void)setRightBorderOverridden:(BOOL)arg1 ;
-(void)setDiagonalUpBorder:(id)arg1 ;
-(void)setDiagonalUpBorderOverridden:(BOOL)arg1 ;
-(void)setDiagonalDownBorder:(id)arg1 ;
-(void)setDiagonalDownBorderOverridden:(BOOL)arg1 ;
-(int)widthType;
-(BOOL)isWidthTypeOverridden;
-(void)setWidthTypeOverridden:(BOOL)arg1 ;
-(void)setTopMarginOverridden:(BOOL)arg1 ;
-(int)topMarginType;
-(void)setTopMarginType:(int)arg1 ;
-(BOOL)isTopMarginTypeOverridden;
-(void)setTopMarginTypeOverridden:(BOOL)arg1 ;
-(void)setBottomMarginOverridden:(BOOL)arg1 ;
-(int)bottomMarginType;
-(void)setBottomMarginType:(int)arg1 ;
-(BOOL)isBottomMarginTypeOverridden;
-(void)setBottomMarginTypeOverridden:(BOOL)arg1 ;
-(void)setLeftMarginOverridden:(BOOL)arg1 ;
-(int)leftMarginType;
-(void)setLeftMarginType:(int)arg1 ;
-(BOOL)isLeftMarginTypeOverridden;
-(void)setLeftMarginTypeOverridden:(BOOL)arg1 ;
-(void)setRightMarginOverridden:(BOOL)arg1 ;
-(int)rightMarginType;
-(void)setRightMarginType:(int)arg1 ;
-(BOOL)isRightMarginTypeOverridden;
-(void)setRightMarginTypeOverridden:(BOOL)arg1 ;
-(void)setVerticalAlignmentOverridden:(BOOL)arg1 ;
-(BOOL)verticallyMergedCell;
-(void)setVerticallyMergedCell:(BOOL)arg1 ;
-(BOOL)isVerticallyMergedCellOverridden;
-(void)setVerticallyMergedCellOverridden:(BOOL)arg1 ;
-(BOOL)firstInSetOfVerticallyMergedCells;
-(void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1 ;
-(BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
-(void)setFirstInSetOfVerticallyMergedCellsOverridden:(BOOL)arg1 ;
-(BOOL)isNoWrapOverridden;
-(void)setNoWrapOverridden:(BOOL)arg1 ;
@end
