/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTrendingStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	long long _desiredArticlesCount;

}

@property (assign,nonatomic) long long desiredArticlesCount;              //@synthesize desiredArticlesCount=_desiredArticlesCount - In the implementation block
-(void)performOperation;
-(void)_performOperation;
-(void)setDesiredArticlesCount:(long long)arg1 ;
-(id)_filterTrendingHeadlines:(id)arg1 ;
-(long long)desiredArticlesCount;
@end

