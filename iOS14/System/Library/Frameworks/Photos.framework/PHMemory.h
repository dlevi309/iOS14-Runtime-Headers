/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>

@class NSString, NSData, NSDictionary, NSDate, PHMemoryFeature, NSSet, NSArray;

@interface PHMemory : PHAssetCollection {

	NSString* _title;
	NSString* _localizedSubtitle;
	NSData* _photosGraphData;
	long long _photosGraphVersion;
	NSDictionary* _transientMemoryProperties;
	NSDate* _creationDate;
	unsigned long long _category;
	unsigned long long _subcategory;
	unsigned long long _notificationState;
	unsigned long long _featuredState;
	BOOL _rejected;
	BOOL _favorite;
	BOOL _pending;
	BOOL _userCreated;
	NSDictionary* _movieAssetState;
	NSData* _movieData;
	double _score;
	NSDate* _lastViewedDate;
	NSDate* _lastMoviePlayedDate;
	NSString* _titleFontName;
	NSData* _assetListPredicate;
	PHMemoryFeature* _blacklistedFeature;
	long long _syncedPlayCount;
	long long _syncedShareCount;
	long long _syncedViewCount;
	long long _pendingPlayCount;
	long long _pendingShareCount;
	long long _pendingViewCount;
	BOOL _didLoadTitleCategory;
	long long _titleCategory;
	NSDictionary* _photosGraphProperties;

}

@property (getter=isPresentedFromURLNavigation,nonatomic,readonly) BOOL presentedFromURLNavigation; 
@property (nonatomic,copy,readonly) NSString * URLNavigationSourceIdentifier; 
@property (nonatomic,readonly) unsigned long long category;                                                      //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long subcategory;                                                   //@synthesize subcategory=_subcategory - In the implementation block
@property (nonatomic,readonly) unsigned long long notificationState;                                             //@synthesize notificationState=_notificationState - In the implementation block
@property (nonatomic,readonly) unsigned long long featuredState;                                                 //@synthesize featuredState=_featuredState - In the implementation block
@property (getter=isRejected,nonatomic,readonly) BOOL rejected;                                                  //@synthesize rejected=_rejected - In the implementation block
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite;                                                  //@synthesize favorite=_favorite - In the implementation block
@property (getter=isPending,nonatomic,readonly) BOOL pending;                                                    //@synthesize pending=_pending - In the implementation block
@property (getter=isUserCreated,nonatomic,readonly) BOOL userCreated;                                            //@synthesize userCreated=_userCreated - In the implementation block
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSData * movieData;                                                               //@synthesize movieData=_movieData - In the implementation block
@property (nonatomic,readonly) long long photosGraphVersion;                                                     //@synthesize photosGraphVersion=_photosGraphVersion - In the implementation block
@property (nonatomic,readonly) NSDictionary * photosGraphProperties;                                             //@synthesize photosGraphProperties=_photosGraphProperties - In the implementation block
@property (nonatomic,readonly) double score;                                                                     //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSDate * lastViewedDate;                                                          //@synthesize lastViewedDate=_lastViewedDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastMoviePlayedDate;                                                     //@synthesize lastMoviePlayedDate=_lastMoviePlayedDate - In the implementation block
@property (nonatomic,readonly) NSSet * featuredPeopleIdentifiers; 
@property (nonatomic,readonly) NSData * assetListPredicate;                                                      //@synthesize assetListPredicate=_assetListPredicate - In the implementation block
@property (nonatomic,readonly) BOOL isContiguous; 
@property (nonatomic,readonly) NSArray * blacklistableFeatures; 
@property (nonatomic,readonly) PHMemoryFeature * blacklistedFeature;                                             //@synthesize blacklistedFeature=_blacklistedFeature - In the implementation block
@property (nonatomic,readonly) long long playCount; 
@property (nonatomic,readonly) long long shareCount; 
@property (nonatomic,readonly) long long viewCount; 
@property (nonatomic,readonly) BOOL isMustSee; 
@property (nonatomic,readonly) BOOL isStellar; 
@property (nonatomic,readonly) BOOL isGreat; 
@property (nonatomic,readonly) BOOL isCurrentlyRelevant; 
@property (nonatomic,readonly) double currentRelevanceScore; 
@property (nonatomic,readonly) NSDictionary * musicGenreDistribution; 
+(id)entityKeyMap;
+(void)setCurrentMemoryForURLNavigation:(id)arg1 ;
+(id)movieDataWithTitleFontName:(id)arg1 ;
+(id)_fetchOptionsForTransientMemoryAssetsWithOptions:(id)arg1 ;
+(BOOL)managedObjectSupportsPendingState;
+(id)transientMemoryWithInfo:(id)arg1 photoLibrary:(id)arg2 ;
+(id)mostRelevantMemoryInMemories:(id)arg1 atDate:(id)arg2 ;
+(void)generateMemoriesWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)stringForNotificationState:(unsigned long long)arg1 ;
+(BOOL)managedObjectSupportsRejectedState;
+(id)identifierCode;
+(id)stringForSubcategory:(unsigned long long)arg1 ;
+(id)fetchMostRelevantMemoryWithOptions:(id)arg1 ;
+(id)fetchMostRelevantMemoryAtDate:(id)arg1 options:(id)arg2 ;
+(id)fetchType;
+(id)blockedPersonLocalIdentifiersInPhotoLibrary:(id)arg1 ;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)stringForFeaturedState:(unsigned long long)arg1 ;
+(id)stringForCategory:(unsigned long long)arg1 ;
+(BOOL)isTriggeredMemoryCategory:(unsigned long long)arg1 ;
+(id)fetchBlacklistedMemoriesWithOptions:(id)arg1 ;
+(void)clearCurrentMemoryForURLNavigation;
+(id)memoryTreeLevelWithOptions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchBestRecentMemoryWithOptions:(id)arg1 ;
+(BOOL)managedObjectSupportsTrashedState;
+(unsigned long long)_contextualScoreForMemory:(id)arg1 ;
+(id)memoryInfosWithOptions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)assetListPredicateFromQueryHintObjects:(id)arg1 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
+(id)titleFontNameFromMovieData:(id)arg1 ;
-(id)meaningLabels;
-(BOOL)isFavorite;
-(id)query;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(long long)playCount;
-(id)titleFontName;
-(BOOL)collectionHasFixedOrder;
-(BOOL)isTransient;
-(BOOL)isUserCreated;
-(BOOL)isPresentedFromURLNavigation;
-(NSString *)URLNavigationSourceIdentifier;
-(double)score;
-(BOOL)isGreat;
-(BOOL)isPending;
-(NSString *)subtitle;
-(unsigned long long)category;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(id)movieStateDataForAsset:(id)arg1 ;
-(NSSet *)featuredPeopleIdentifiers;
-(NSArray *)blacklistableFeatures;
-(unsigned long long)suggestedMood;
-(BOOL)hasBlacklistableFeature;
-(id)defaultSortDescriptor;
-(id)predicateForAllAssetsWithLibrary:(id)arg1 ;
-(id)predicateForAllMomentsFromRepresentativeAssets;
-(id)_representativeAndCuratedAssetIDs;
-(id)moodKeywords;
-(unsigned long long)subcategory;
-(id)localizedSubtitle;
-(id)_curatedAssetIDsWithLibrary:(id)arg1 ;
-(id)_extendedCuratedAssetIDsWithLibrary:(id)arg1 ;
-(NSDictionary *)musicGenreDistribution;
-(id)presentationHints;
-(NSDictionary *)photosGraphProperties;
-(BOOL)isCurrentlyRelevant;
-(double)currentRelevanceScore;
-(unsigned long long)notificationState;
-(unsigned long long)featuredState;
-(long long)photosGraphVersion;
-(NSDate *)lastMoviePlayedDate;
-(NSData *)assetListPredicate;
-(PHMemoryFeature *)blacklistedFeature;
-(long long)shareCount;
-(id)description;
-(id)creationDate;
-(long long)viewCount;
-(BOOL)isRejected;
-(BOOL)isContiguous;
-(BOOL)canShowAvalancheStacks;
-(long long)titleCategory;
-(BOOL)canContainAssets;
-(unsigned long long)titleFontNameHash;
-(double)relevanceScoreAtDate:(id)arg1 ;
-(BOOL)isRelevantAtDate:(id)arg1 ;
-(BOOL)isMustSee;
-(void)setupTransientMemory;
-(id)queryForExtendedCuratedAssetsWithOptions:(id)arg1 ;
-(id)queryForCuratedAssetsWithOptions:(id)arg1 ;
-(id)queryForKeyAssetWithOptions:(id)arg1 ;
-(id)transientRepresentativeAndCuratedAssetIDs;
-(id)rejectionCause;
-(id)transientMemoryStartDate;
-(NSDate *)lastViewedDate;
-(BOOL)isStellar;
-(NSData *)movieData;
@end

