/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TUICandidateLayoutDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol TUICandidateViewStyle, TUICandidateGridDelegate;
@class NSArray, NSIndexPath, UIView, UICollectionView, TUICandidateLayout, TIKeyboardCandidate, NSString;

@interface TUICandidateGrid : UIView <TUICandidateLayoutDataSource, UICollectionViewDelegate> {

	BOOL _candidateNumberEnabled;
	BOOL _suppressCollectionViewLayout;
	BOOL _collectionViewLayoutWasSkipped;
	BOOL _animating;
	NSArray* _candidateGroups;
	id<TUICandidateViewStyle> _style;
	NSIndexPath* _selectedIndexPath;
	long long _rowType;
	UIView* _customHeader;
	id<TUICandidateGridDelegate> _delegate;
	UICollectionView* _collectionView;
	TUICandidateLayout* _singleRowLayout;
	TUICandidateLayout* _multiRowLayout;
	NSIndexPath* _firstVisibleIndexPath;
	double _lastUserSelectedCursorX;
	double _selectedRowY;
	UIView* _selectedRowHighlightView;
	id<TUICandidateViewStyle> _stylePending;
	double _maximumRowHeight;
	CGSize _arrowButtonSize;

}

@property (nonatomic,retain) UICollectionView * collectionView;                         //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) TUICandidateLayout * singleRowLayout;                      //@synthesize singleRowLayout=_singleRowLayout - In the implementation block
@property (nonatomic,retain) TUICandidateLayout * multiRowLayout;                       //@synthesize multiRowLayout=_multiRowLayout - In the implementation block
@property (nonatomic,readonly) double rowHeight; 
@property (nonatomic,retain) NSIndexPath * firstVisibleIndexPath;                       //@synthesize firstVisibleIndexPath=_firstVisibleIndexPath - In the implementation block
@property (assign,nonatomic) double lastUserSelectedCursorX;                            //@synthesize lastUserSelectedCursorX=_lastUserSelectedCursorX - In the implementation block
@property (assign,nonatomic) double selectedRowY;                                       //@synthesize selectedRowY=_selectedRowY - In the implementation block
@property (nonatomic,retain) UIView * selectedRowHighlightView;                         //@synthesize selectedRowHighlightView=_selectedRowHighlightView - In the implementation block
@property (assign,nonatomic) BOOL collectionViewLayoutWasSkipped;                       //@synthesize collectionViewLayoutWasSkipped=_collectionViewLayoutWasSkipped - In the implementation block
@property (assign,nonatomic) BOOL animating;                                            //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> stylePending;                    //@synthesize stylePending=_stylePending - In the implementation block
@property (assign,nonatomic) double maximumRowHeight;                                   //@synthesize maximumRowHeight=_maximumRowHeight - In the implementation block
@property (nonatomic,retain) NSArray * candidateGroups;                                 //@synthesize candidateGroups=_candidateGroups - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;                           //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                           //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * selectedCandidate; 
@property (nonatomic,readonly) NSArray * visibleCandidates; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic) long long rowType;                                         //@synthesize rowType=_rowType - In the implementation block
@property (assign,nonatomic) BOOL candidateNumberEnabled;                               //@synthesize candidateNumberEnabled=_candidateNumberEnabled - In the implementation block
@property (nonatomic,retain) UIView * customHeader;                                     //@synthesize customHeader=_customHeader - In the implementation block
@property (assign,nonatomic,__weak) id<TUICandidateGridDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize arrowButtonSize;                                    //@synthesize arrowButtonSize=_arrowButtonSize - In the implementation block
@property (assign,nonatomic) BOOL suppressCollectionViewLayout;                         //@synthesize suppressCollectionViewLayout=_suppressCollectionViewLayout - In the implementation block
@property (nonatomic,readonly) NSIndexPath * firstIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSafariPasswordSuggestionCandidate:(id)arg1 ;
-(id)_sectionIndexTitlesForCollectionView:(id)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(id<TUICandidateGridDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)contentSize;
-(void)setCandidateNumberEnabled:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(BOOL)animating;
-(BOOL)candidateNumberEnabled;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)rowType;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)commonInit;
-(void)setRowType:(long long)arg1 ;
-(void)setDelegate:(id<TUICandidateGridDelegate>)arg1 ;
-(NSArray *)visibleCandidates;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 widthForGroupHeaderInSection:(long long)arg3 ;
-(TUICandidateLayout *)singleRowLayout;
-(unsigned long long)autofillExtraCandidatesCount;
-(TUICandidateLayout *)multiRowLayout;
-(void)setCandidateGroups:(NSArray *)arg1 ;
-(void)scrollToFirstCandidate;
-(void)updateIndex;
-(void)setSuppressCollectionViewLayout:(BOOL)arg1 ;
-(void)setStyle:(id)arg1 reload:(BOOL)arg2 ;
-(void)setRowType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setCustomHeader:(UIView *)arg1 ;
-(void)updateBounce;
-(void)setRowType:(long long)arg1 options:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setRowType:(long long)arg1 options:(unsigned long long)arg2 style:(id)arg3 animated:(BOOL)arg4 animator:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)updateContentInset;
-(void)scrollToTop;
-(id)candidateAtIndexPath:(id)arg1 ;
-(BOOL)showingSlottedCandidates;
-(NSIndexPath *)firstIndexPath;
-(id)lastIndexPath;
-(BOOL)indexPathIsValid:(id)arg1 ;
-(id)indexPathInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(BOOL)indexPathIsFullyVisible:(id)arg1 ;
-(unsigned long long)candidateNumberForIndexPath:(id)arg1 ;
-(BOOL)canExpandCandidateGrid;
-(unsigned long long)candidateNumberInHorizontalLayoutForIndexPath:(id)arg1 ;
-(id)visibleAttributesInVerticalLayout;
-(unsigned long long)candidateNumberInVerticalLayoutForIndexPath:(id)arg1 ;
-(id)indexPathsForSelectedRow;
-(id)indexPathForVerticalCandidateNumber:(unsigned long long)arg1 ;
-(id)indexPathForCandidateNumber:(unsigned long long)arg1 ;
-(id)indexPathsInTheRowThatContainsFrame:(CGRect)arg1 ;
-(void)updateSelectedRowHighlightView;
-(void)scrollToCandidateAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)forceUpdateVisibleCells;
-(void)setSlottedSeparatorHidden:(BOOL)arg1 inCollectionView:(id)arg2 nearHighlightItemAtIndexPath:(id)arg3 ;
-(void)didMoveHighlightFrame;
-(long long)numberOfTransliterationCandidatesInSection:(long long)arg1 ;
-(long long)numberOfNonPartialCandidatesInSection:(long long)arg1 ;
-(NSArray *)candidateGroups;
-(void)addAppCandidatesRenderSignposts;
-(UIView *)customHeader;
-(CGSize)arrowButtonSize;
-(void)setArrowButtonSize:(CGSize)arg1 ;
-(void)setSingleRowLayout:(TUICandidateLayout *)arg1 ;
-(BOOL)suppressCollectionViewLayout;
-(void)setMultiRowLayout:(TUICandidateLayout *)arg1 ;
-(NSIndexPath *)firstVisibleIndexPath;
-(void)setFirstVisibleIndexPath:(NSIndexPath *)arg1 ;
-(double)lastUserSelectedCursorX;
-(void)setLastUserSelectedCursorX:(double)arg1 ;
-(double)selectedRowY;
-(void)setSelectedRowY:(double)arg1 ;
-(void)setStylePending:(id<TUICandidateViewStyle>)arg1 ;
-(UIView *)selectedRowHighlightView;
-(void)setSelectedRowHighlightView:(UIView *)arg1 ;
-(BOOL)collectionViewLayoutWasSkipped;
-(id<TUICandidateViewStyle>)stylePending;
-(void)setCollectionViewLayoutWasSkipped:(BOOL)arg1 ;
-(double)maximumRowHeight;
-(void)setMaximumRowHeight:(double)arg1 ;
-(double)rowHeight;
-(BOOL)handleNumberKey:(unsigned long long)arg1 ;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)collectionViewLayout;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(unsigned long long)slottedCandidatesCount;
-(id<TUICandidateViewStyle>)style;
-(void)scrollViewDidChangeContentSize:(id)arg1 ;
-(long long)rowForCandidate:(id)arg1 ;
-(id)indexPathForCandidate:(id)arg1 ;
-(void)setSelectedIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(TIKeyboardCandidate *)selectedCandidate;
-(NSIndexPath *)selectedIndexPath;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(long long)viewOffsetForCandidate:(id)arg1 ;
@end

