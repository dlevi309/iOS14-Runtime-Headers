/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedPersonalizing;
@class NSArray, NSString;

@interface FCFeedTransformationPersonalizedSortAndDiversify : NSObject <FCFeedTransforming> {

	unsigned long long _limit;
	id<FCFeedPersonalizing> _feedPersonalizer;
	long long _sortOptions;
	NSArray* _preselectedItems;

}

@property (assign,nonatomic) unsigned long long limit;                              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;              //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (assign,nonatomic) long long sortOptions;                                 //@synthesize sortOptions=_sortOptions - In the implementation block
@property (nonatomic,retain) NSArray * preselectedItems;                            //@synthesize preselectedItems=_preselectedItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3 preselectedItems:(id)arg4 ;
+(id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2 limit:(unsigned long long)arg3 ;
+(id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(unsigned long long)limit;
-(void)setPreselectedItems:(NSArray *)arg1 ;
-(NSArray *)preselectedItems;
-(void)setSortOptions:(long long)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(long long)sortOptions;
@end

