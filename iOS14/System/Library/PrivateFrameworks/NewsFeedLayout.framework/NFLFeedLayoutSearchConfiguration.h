/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

@class NSArray;


@protocol NFLFeedLayoutSearchConfiguration <NSObject,NFCopying>
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showAccessoryText; 
@property (nonatomic,readonly) unsigned long long preferredTileInfoBatchSize; 
@property (nonatomic,readonly) NSArray * allRowTypes; 
@optional
-(BOOL)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3;
-(id)preferredOrderingOfTileInfos:(id)arg1;

@required
-(void)setShowAccessoryText:(BOOL)arg1;
-(Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
-(BOOL)isShowingAccessoryText;
-(SCD_Struct_NF1*)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
-(Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
-(id)descriptionForRowType:(unsigned long long)arg1;
-(id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
-(unsigned long long)preferredTileInfoBatchSize;
-(unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
-(double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
-(double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;
-(BOOL)supportsTileInfoType:(unsigned long long)arg1;
-(NSArray *)allRowTypes;
-(double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;

@end

