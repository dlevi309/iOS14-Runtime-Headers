/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout, NFLPairSubBatchLayout;

@interface NFLTwelveSixNoExcerptSubBatchLayout : NFLSubBatchLayout {

	NFLSingleComponentLayout* _largeComponent;
	NFLPairSubBatchLayout* _topPairComponent;
	NFLPairSubBatchLayout* _bottomPairComponent;
	NFLSingleComponentLayout* _bottomComponent;

}

@property (nonatomic,retain) NFLSingleComponentLayout * largeComponent;                //@synthesize largeComponent=_largeComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * topPairComponent;                 //@synthesize topPairComponent=_topPairComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * bottomPairComponent;              //@synthesize bottomPairComponent=_bottomPairComponent - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * bottomComponent;               //@synthesize bottomComponent=_bottomComponent - In the implementation block
-(BOOL)isValid;
-(double)rank;
-(unsigned long long)rowSpan;
-(id)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)singleComponentLayouts;
-(void)setLargeComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setBottomComponent:(NFLSingleComponentLayout *)arg1 ;
-(void)setTopPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setBottomPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(NFLPairSubBatchLayout *)topPairComponent;
-(NFLSingleComponentLayout *)largeComponent;
-(NFLPairSubBatchLayout *)bottomPairComponent;
-(NFLSingleComponentLayout *)bottomComponent;
@end

