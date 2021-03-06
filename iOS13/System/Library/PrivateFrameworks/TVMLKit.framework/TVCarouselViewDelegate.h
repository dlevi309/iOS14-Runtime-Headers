/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@protocol TVCarouselViewDelegate <NSObject>
@optional
-(BOOL)carouselView:(id)arg1 shouldHighlightItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didUnhighlightItemAtIndex:(unsigned long long)arg2;
-(BOOL)carouselView:(id)arg1 shouldSelectItemAtIndex:(unsigned long long)arg2;
-(BOOL)carouselView:(id)arg1 shouldDeselectItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didDeselectItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)carouselView:(id)arg1 willDisplayItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didEndDisplayingItemAtIndex:(unsigned long long)arg2;
-(void)carouselViewDidScroll:(id)arg1;
-(void)carouselView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;
-(void)carouselView:(id)arg1 didCenterItemAtIndex:(unsigned long long)arg2;

@end

