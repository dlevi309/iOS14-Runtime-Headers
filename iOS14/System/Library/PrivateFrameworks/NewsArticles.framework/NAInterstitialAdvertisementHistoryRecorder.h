/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/


@protocol NAInterstitialAdvertisementHistoryRecorder
@property (readonly,nonatomic) long long articlesSeenSinceLastInterstitial; 
@required
-(long long)articlesSeenSinceLastInterstitial;
-(void)recordInterstitialAdView;
-(void)recordArticleView;

@end

