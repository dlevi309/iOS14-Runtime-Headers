/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <libobjc.A.dylib/SSDataCollectible.h>

@class NSMutableArray, NSString, PRSL2FeatureVector, NSData, PRSRankingSpanCalculator, NSArray, NSDate;

@interface PRSRankingItem : NSObject <SSDataCollectible> {

	BOOL _isInternal;
	NSMutableArray* _matchedSenders;
	NSMutableArray* _matchedVipSenders;
	NSMutableArray* _matchedRecipients;
	BOOL _eligibleForDemotion;
	BOOL _shouldHideUnderShowMore;
	BOOL _shouldHideUnderShowMoreIfNotTophit;
	BOOL _recentForTopHit;
	BOOL _recentForAboveThresholdTopHit;
	BOOL _matchedQueryTerms;
	BOOL _hasPolicyMultipleTermsPhraseMatch;
	BOOL _isSafariTopHit;
	BOOL _isBundleDemotedForBullseyeCommittedSearch;
	BOOL _hasShortCut;
	BOOL _displayNameInitialsPrefixMatchOnly;
	BOOL _vendorNameIsDisplayNamePrefix;
	BOOL _isNotExecutable;
	BOOL _isKeywordMatch;
	BOOL _isPrepared;
	float _rawScore;
	float _feedbackScore;
	float _score;
	float _withinBundleScore;
	int _topHitReason;
	unsigned _bundleIDType;
	NSString* _identifier;
	double _suggestionScore;
	NSString* _sectionBundleIdentifier;
	NSString* _firstMatchedAltName;
	NSString* _exactMatchedKeyword;
	NSString* _displayNameInitials;
	PRSL2FeatureVector* _L2FeatureVector;
	NSData* _serverFeaturesJSON;
	NSData* _serverSuggestionsData;
	NSData* _localSuggestionsData;
	double _mostRecentUsedDate;
	double _closestUpComingDate;
	SCD_Struct_PR8* _attributes;
	PRSRankingSpanCalculator* _spanCalculator;
	NSString* _contentType;
	unsigned long long _importantPropertiesPrefixMatched;
	unsigned long long _importantPropertiesWordMatched;
	NSArray* _emailAddresses;
	T _inputToModelScore;
	T _indexScore;

}

@property (nonatomic,retain) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) float rawScore;                                              //@synthesize rawScore=_rawScore - In the implementation block
@property (assign,nonatomic) float feedbackScore;                                         //@synthesize feedbackScore=_feedbackScore - In the implementation block
@property (assign,nonatomic) float score;                                                 //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) float withinBundleScore;                                     //@synthesize withinBundleScore=_withinBundleScore - In the implementation block
@property (assign,nonatomic) double suggestionScore;                                      //@synthesize suggestionScore=_suggestionScore - In the implementation block
@property (nonatomic,retain) NSString * sectionBundleIdentifier;                          //@synthesize sectionBundleIdentifier=_sectionBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * firstMatchedAltName;                              //@synthesize firstMatchedAltName=_firstMatchedAltName - In the implementation block
@property (nonatomic,retain) NSString * exactMatchedKeyword;                              //@synthesize exactMatchedKeyword=_exactMatchedKeyword - In the implementation block
@property (nonatomic,retain) NSString * displayNameInitials;                              //@synthesize displayNameInitials=_displayNameInitials - In the implementation block
@property (nonatomic,retain) PRSL2FeatureVector * L2FeatureVector;                        //@synthesize L2FeatureVector=_L2FeatureVector - In the implementation block
@property (nonatomic,retain) NSData * serverFeaturesJSON;                                 //@synthesize serverFeaturesJSON=_serverFeaturesJSON - In the implementation block
@property (nonatomic,retain) NSData * serverSuggestionsData;                              //@synthesize serverSuggestionsData=_serverSuggestionsData - In the implementation block
@property (nonatomic,retain) NSData * localSuggestionsData;                               //@synthesize localSuggestionsData=_localSuggestionsData - In the implementation block
@property (assign,nonatomic) BOOL eligibleForDemotion;                                    //@synthesize eligibleForDemotion=_eligibleForDemotion - In the implementation block
@property (assign,nonatomic) BOOL shouldHideUnderShowMore;                                //@synthesize shouldHideUnderShowMore=_shouldHideUnderShowMore - In the implementation block
@property (assign,nonatomic) BOOL shouldHideUnderShowMoreIfNotTophit;                     //@synthesize shouldHideUnderShowMoreIfNotTophit=_shouldHideUnderShowMoreIfNotTophit - In the implementation block
@property (assign,nonatomic) BOOL recentForTopHit;                                        //@synthesize recentForTopHit=_recentForTopHit - In the implementation block
@property (assign,nonatomic) BOOL recentForAboveThresholdTopHit;                          //@synthesize recentForAboveThresholdTopHit=_recentForAboveThresholdTopHit - In the implementation block
@property (assign,nonatomic) BOOL matchedQueryTerms;                                      //@synthesize matchedQueryTerms=_matchedQueryTerms - In the implementation block
@property (assign,nonatomic) BOOL hasPolicyMultipleTermsPhraseMatch;                      //@synthesize hasPolicyMultipleTermsPhraseMatch=_hasPolicyMultipleTermsPhraseMatch - In the implementation block
@property (assign,nonatomic) BOOL isSafariTopHit;                                         //@synthesize isSafariTopHit=_isSafariTopHit - In the implementation block
@property (assign,nonatomic) BOOL isBundleDemotedForBullseyeCommittedSearch;              //@synthesize isBundleDemotedForBullseyeCommittedSearch=_isBundleDemotedForBullseyeCommittedSearch - In the implementation block
@property (assign,nonatomic) BOOL hasShortCut;                                            //@synthesize hasShortCut=_hasShortCut - In the implementation block
@property (assign,nonatomic) BOOL displayNameInitialsPrefixMatchOnly;                     //@synthesize displayNameInitialsPrefixMatchOnly=_displayNameInitialsPrefixMatchOnly - In the implementation block
@property (assign,nonatomic) BOOL vendorNameIsDisplayNamePrefix;                          //@synthesize vendorNameIsDisplayNamePrefix=_vendorNameIsDisplayNamePrefix - In the implementation block
@property (assign,nonatomic) BOOL isNotExecutable;                                        //@synthesize isNotExecutable=_isNotExecutable - In the implementation block
@property (assign,nonatomic) BOOL isKeywordMatch;                                         //@synthesize isKeywordMatch=_isKeywordMatch - In the implementation block
@property (assign,nonatomic) double mostRecentUsedDate;                                   //@synthesize mostRecentUsedDate=_mostRecentUsedDate - In the implementation block
@property (assign,nonatomic) double closestUpComingDate;                                  //@synthesize closestUpComingDate=_closestUpComingDate - In the implementation block
@property (assign,nonatomic) int topHitReason;                                            //@synthesize topHitReason=_topHitReason - In the implementation block
@property (assign,nonatomic) SCD_Struct_PR8* attributes;                                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) T test_inputToModelScore; 
@property (assign,nonatomic) T test_indexScore; 
@property (nonatomic,readonly) NSDate * interestingDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)rankingDescriptorForBundleFeature:(unsigned long long)arg1 ;
+(unsigned short)featureFromVirtualIdx:(unsigned long long)arg1 ;
-(void)setSectionBundleIdentifier:(NSString *)arg1 ;
-(id)dueDate;
-(float)score;
-(void)setAttributes:(SCD_Struct_PR8*)arg1 ;
-(void)setScore:(float)arg1 ;
-(SCD_Struct_PR8*)attributes;
-(NSString *)description;
-(NSString *)sectionBundleIdentifier;
-(float)rawScore;
-(NSDate *)interestingDate;
-(void)setRawScore:(float)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)displayName;
-(void)dealloc;
-(id)dataCollectionBundle;
-(BOOL)serializeToJSON:(void*)arg1 valuesOnly:(BOOL)arg2 ;
-(BOOL)isSafariTopHit;
-(void)setIsSafariTopHit:(BOOL)arg1 ;
-(BOOL)hasShortCut;
-(void)updateAccumulatedBundleFeatures:(float*)arg1 values:(float*)arg2 feature:(unsigned long long)arg3 ;
-(void)updateScoreDescriptorBundleFeatures:(float*)arg1 feature:(unsigned long long)arg2 ;
-(void)updateNumScoreDescriptorBundleFeatures:(float*)arg1 feature:(unsigned long long)arg2 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg3 ;
-(void)populateContactFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 ;
-(void)populateMailFeatures:(PRSL2FeatureScoreInfo*)arg1 ;
-(void)populateSMSFeatures:(PRSL2FeatureScoreInfo*)arg1 ;
-(void)populateParsecAlbumFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecAppFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecEPubBookFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecMovieFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecPodcastFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecProfileFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecSongFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecTvShowFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecWebVideoFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecAnyFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)inferDateBinsFromDates:(id)arg1 intoBins:(int*)arg2 ;
-(void)setHasShortCut:(BOOL)arg1 ;
-(PRSL2FeatureVector *)L2FeatureVector;
-(void)setFirstMatchedAltName:(NSString *)arg1 ;
-(NSString *)firstMatchedAltName;
-(id)getBundleSpecificValue:(id)arg1 forPropertyName:(id)arg2 withQueryString:(id)arg3 isCJK:(BOOL)arg4 isBullseyeSearch:(BOOL)arg5 withEvaluator:(id)arg6 ;
-(void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float*)arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(prs_feature_population_ctx_t*)arg5 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg6 propertyCanFuzzyMatch:(BOOL)arg7 keyboardLanguage:(id)arg8 isCJK:(BOOL)arg9 propertyName:(id)arg10 ;
-(void)populateCrossAttributeDerivedFeaturesWithContext:(prs_feature_population_ctx_t*)arg1 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg2 ;
-(void)populateBundleSpecificFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 ;
-(void)populateOtherFeatures:(PRSL2FeatureScoreInfo*)arg1 withEvaluator:(id)arg2 ;
-(void)updateBundleFeatures:(float*)arg1 withArrValues:(float*)arg2 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg3 ;
-(void)populateRemainingFeaturesWithRanker:(id)arg1 ;
-(void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float*)arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(prs_feature_population_ctx_t*)arg5 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg6 propertyCanFuzzyMatch:(BOOL)arg7 keyboardLanguage:(id)arg8 isCJK:(BOOL)arg9 featureList:(const unsigned short*)arg10 propertyName:(id)arg11 ;
-(void)populateParsecBundleSpecificFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecRoundTripFeatures:(id)arg1 forParsecResult:(id)arg2 ;
-(void)populateParsecRemainingFeatures;
-(id)moreRecentDateFromDate1:(id)arg1 date2:(id)arg2 ;
-(float)withinBundleScore;
-(id)likelyDisplayTitle;
-(double)mostRecentUsedDate;
-(T)test_inputToModelScore;
-(T)test_indexScore;
-(void)setTest_inputToModelScore:(T)arg1 ;
-(void)setTest_indexScore:(T)arg1 ;
-(id)initWithAttrs:(SCD_Struct_PR8*)arg1 ;
-(id)initForParsecResultWithBundleID:(id)arg1 ;
-(BOOL)didMatchRankingDescriptor:(id)arg1 ;
-(long long)compare:(id)arg1 currentTime:(double)arg2 ;
-(float)feedbackScore;
-(void)setFeedbackScore:(float)arg1 ;
-(void)setWithinBundleScore:(float)arg1 ;
-(double)suggestionScore;
-(void)setSuggestionScore:(double)arg1 ;
-(NSString *)exactMatchedKeyword;
-(void)setExactMatchedKeyword:(NSString *)arg1 ;
-(NSString *)displayNameInitials;
-(void)setDisplayNameInitials:(NSString *)arg1 ;
-(void)setL2FeatureVector:(PRSL2FeatureVector *)arg1 ;
-(NSData *)serverFeaturesJSON;
-(void)setServerFeaturesJSON:(NSData *)arg1 ;
-(NSData *)serverSuggestionsData;
-(void)setServerSuggestionsData:(NSData *)arg1 ;
-(NSData *)localSuggestionsData;
-(void)setLocalSuggestionsData:(NSData *)arg1 ;
-(BOOL)eligibleForDemotion;
-(void)setEligibleForDemotion:(BOOL)arg1 ;
-(BOOL)shouldHideUnderShowMore;
-(void)setShouldHideUnderShowMore:(BOOL)arg1 ;
-(BOOL)shouldHideUnderShowMoreIfNotTophit;
-(void)setShouldHideUnderShowMoreIfNotTophit:(BOOL)arg1 ;
-(BOOL)recentForTopHit;
-(void)setRecentForTopHit:(BOOL)arg1 ;
-(BOOL)recentForAboveThresholdTopHit;
-(void)setRecentForAboveThresholdTopHit:(BOOL)arg1 ;
-(BOOL)matchedQueryTerms;
-(void)setMatchedQueryTerms:(BOOL)arg1 ;
-(BOOL)hasPolicyMultipleTermsPhraseMatch;
-(void)setHasPolicyMultipleTermsPhraseMatch:(BOOL)arg1 ;
-(BOOL)isBundleDemotedForBullseyeCommittedSearch;
-(void)setIsBundleDemotedForBullseyeCommittedSearch:(BOOL)arg1 ;
-(BOOL)displayNameInitialsPrefixMatchOnly;
-(void)setDisplayNameInitialsPrefixMatchOnly:(BOOL)arg1 ;
-(BOOL)vendorNameIsDisplayNamePrefix;
-(void)setVendorNameIsDisplayNamePrefix:(BOOL)arg1 ;
-(BOOL)isNotExecutable;
-(void)setIsNotExecutable:(BOOL)arg1 ;
-(BOOL)isKeywordMatch;
-(void)setIsKeywordMatch:(BOOL)arg1 ;
-(void)setMostRecentUsedDate:(double)arg1 ;
-(double)closestUpComingDate;
-(void)setClosestUpComingDate:(double)arg1 ;
-(int)topHitReason;
-(void)setTopHitReason:(int)arg1 ;
@end

