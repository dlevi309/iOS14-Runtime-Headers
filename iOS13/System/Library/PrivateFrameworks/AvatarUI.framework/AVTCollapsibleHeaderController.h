/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol AVTCollapsibleHeaderControllerDelegate, UIScrollViewDelegate;
@class UIScrollView, UIView, NSString;

@interface AVTCollapsibleHeaderController : NSObject <UIScrollViewDelegate> {

	BOOL _shouldResizeHeaderForScrolling;
	BOOL _shouldSnapToMinOrMax;
	BOOL _shouldOnlyExpandWhenScrollingAtEdge;
	BOOL _shouldPushContentOffsetOnExpandOrCollapse;
	BOOL _shouldCollapseOnBottomBounceScroll;
	UIScrollView* _scrollView;
	UIView* _headerView;
	id<AVTCollapsibleHeaderControllerDelegate> _delegate;
	double _minHeight;
	double _maxHeight;
	double _additionalTopContentInset;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	double _scrollToCompressionMultiplier;
	double _expandMarginalScrollDistance;
	double _collapseMarginalScrollDistance;
	double _previousOffset;
	double _singleTouchOffset;
	unsigned long long _currentScrollDirection;

}

@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;               //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) double scrollToCompressionMultiplier;                             //@synthesize scrollToCompressionMultiplier=_scrollToCompressionMultiplier - In the implementation block
@property (assign,nonatomic) double expandMarginalScrollDistance;                              //@synthesize expandMarginalScrollDistance=_expandMarginalScrollDistance - In the implementation block
@property (assign,nonatomic) double collapseMarginalScrollDistance;                            //@synthesize collapseMarginalScrollDistance=_collapseMarginalScrollDistance - In the implementation block
@property (assign,nonatomic) BOOL shouldPushContentOffsetOnExpandOrCollapse;                   //@synthesize shouldPushContentOffsetOnExpandOrCollapse=_shouldPushContentOffsetOnExpandOrCollapse - In the implementation block
@property (assign,nonatomic) BOOL shouldCollapseOnBottomBounceScroll;                          //@synthesize shouldCollapseOnBottomBounceScroll=_shouldCollapseOnBottomBounceScroll - In the implementation block
@property (assign,nonatomic) double previousOffset;                                            //@synthesize previousOffset=_previousOffset - In the implementation block
@property (assign,nonatomic) double singleTouchOffset;                                         //@synthesize singleTouchOffset=_singleTouchOffset - In the implementation block
@property (assign,nonatomic) unsigned long long currentScrollDirection;                        //@synthesize currentScrollDirection=_currentScrollDirection - In the implementation block
@property (assign,nonatomic) double minHeight;                                                 //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double maxHeight;                                                 //@synthesize maxHeight=_maxHeight - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                      //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) id<AVTCollapsibleHeaderControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double currentHeightForHeader; 
@property (assign,nonatomic) double additionalTopContentInset;                                 //@synthesize additionalTopContentInset=_additionalTopContentInset - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeHeaderForScrolling;                              //@synthesize shouldResizeHeaderForScrolling=_shouldResizeHeaderForScrolling - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapToMinOrMax;                                        //@synthesize shouldSnapToMinOrMax=_shouldSnapToMinOrMax - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyExpandWhenScrollingAtEdge;                         //@synthesize shouldOnlyExpandWhenScrollingAtEdge=_shouldOnlyExpandWhenScrollingAtEdge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id<AVTCollapsibleHeaderControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTCollapsibleHeaderControllerDelegate>)arg1 ;
-(double)minHeight;
-(void)setMinHeight:(double)arg1 ;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(UIView *)headerView;
-(UIScrollView *)scrollView;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)setPreviousOffset:(double)arg1 ;
-(double)previousOffset;
-(unsigned long long)currentScrollDirection;
-(void)setCurrentScrollDirection:(unsigned long long)arg1 ;
-(UIEdgeInsets)updatedScrollViewInsetsFromExistingInsets:(UIEdgeInsets)arg1 ;
-(void)updateInsetsIfNeeded;
-(BOOL)shouldPushContentOffsetOnExpandOrCollapse;
-(void)updateHeaderForHeight:(double)arg1 withOffset:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldSnapToMinOrMax;
-(double)currentHeightForHeader;
-(void)expandAnimated:(BOOL)arg1 ;
-(void)collapseAnimated:(BOOL)arg1 ;
-(void)setShouldResizeHeaderForScrolling:(BOOL)arg1 ;
-(void)updateHeaderSizeForGlobalHeaderHeight:(double)arg1 ;
-(void)setSingleTouchOffset:(double)arg1 ;
-(CGPoint)topContentOffsetWithHeaderHeight:(double)arg1 ;
-(double)singleTouchOffset;
-(double)expandMarginalScrollDistance;
-(double)collapseMarginalScrollDistance;
-(double)headerHeightForContentOffset:(double)arg1 contentInset:(UIEdgeInsets)arg2 ;
-(BOOL)shouldResizeGivenMarginalScrollDistancesForScrollDirection:(unsigned long long)arg1 ;
-(BOOL)shouldResizeGivenScrollDirection:(unsigned long long)arg1 currentHeaderHeight:(double)arg2 targetHeaderHeight:(double)arg3 ;
-(BOOL)shouldOnlyExpandWhenScrollingAtEdge;
-(double)additionalTopContentInset;
-(double)scrollToCompressionMultiplier;
-(BOOL)shouldCollapseOnBottomBounceScroll;
-(BOOL)shouldResizeHeaderForScrolling;
-(void)updateHeaderHeightToMatchScrollViewStateForScrollDirection:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)snapToMinMaxIfNeededAnimated:(BOOL)arg1 ;
-(id)initWithScrollView:(id)arg1 headerView:(id)arg2 minHeight:(double)arg3 maxHeight:(double)arg4 ;
-(void)setAdditionalTopContentInset:(double)arg1 ;
-(void)updateMinHeight:(double)arg1 maxHeight:(double)arg2 animated:(BOOL)arg3 ;
-(void)expandAnimated:(BOOL)arg1 withFocusRect:(CGRect)arg2 ;
-(void)scrollToTopPreservingHeaderHeight:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShouldSnapToMinOrMax:(BOOL)arg1 ;
-(void)setShouldOnlyExpandWhenScrollingAtEdge:(BOOL)arg1 ;
-(void)setScrollToCompressionMultiplier:(double)arg1 ;
-(void)setExpandMarginalScrollDistance:(double)arg1 ;
-(void)setCollapseMarginalScrollDistance:(double)arg1 ;
-(void)setShouldPushContentOffsetOnExpandOrCollapse:(BOOL)arg1 ;
-(void)setShouldCollapseOnBottomBounceScroll:(BOOL)arg1 ;
@end
