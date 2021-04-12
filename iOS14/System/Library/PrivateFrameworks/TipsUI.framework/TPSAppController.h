/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI
*/


@protocol OS_dispatch_queue;
@class TPSFullTipContentManager, TPSAssetSizes, NSUserDefaults, TPSCollection, NSArray, NSError, NSObject, NSBundle, NSDictionary, NSHashTable, NSMutableDictionary;

@interface TPSAppController : NSObject {

	unsigned long long _supportedInterfaceOrientations;
	BOOL _contentHasLoaded;
	BOOL _updatingContent;
	BOOL _appInBackground;
	BOOL _alwaysShowIntro;
	TPSFullTipContentManager* _fullTipContentManager;
	TPSAssetSizes* _assetSizes;
	NSUserDefaults* _appGroupDefaults;
	TPSCollection* _featuredCollection;
	NSArray* _collections;
	NSError* _lastFetchError;
	long long _userInterfaceStyle;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSBundle* _frameworkBundle;
	NSDictionary* _collectionMap;
	NSDictionary* _tipMap;
	NSHashTable* _delegates;
	NSMutableDictionary* _attributedStringCacheMap;

}

@property (assign,nonatomic) BOOL alwaysShowIntro;                                          //@synthesize alwaysShowIntro=_alwaysShowIntro - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                                  //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                        //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSBundle * frameworkBundle;                                    //@synthesize frameworkBundle=_frameworkBundle - In the implementation block
@property (nonatomic,retain) TPSCollection * featuredCollection;                            //@synthesize featuredCollection=_featuredCollection - In the implementation block
@property (nonatomic,retain) NSError * lastFetchError;                                      //@synthesize lastFetchError=_lastFetchError - In the implementation block
@property (nonatomic,retain) NSArray * collections;                                         //@synthesize collections=_collections - In the implementation block
@property (nonatomic,retain) NSDictionary * collectionMap;                                  //@synthesize collectionMap=_collectionMap - In the implementation block
@property (nonatomic,retain) NSDictionary * tipMap;                                         //@synthesize tipMap=_tipMap - In the implementation block
@property (nonatomic,retain) TPSFullTipContentManager * fullTipContentManager;              //@synthesize fullTipContentManager=_fullTipContentManager - In the implementation block
@property (nonatomic,retain) TPSAssetSizes * assetSizes;                                    //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                       //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSUserDefaults * appGroupDefaults;                             //@synthesize appGroupDefaults=_appGroupDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributedStringCacheMap;                //@synthesize attributedStringCacheMap=_attributedStringCacheMap - In the implementation block
@property (assign,nonatomic) BOOL contentHasLoaded;                                         //@synthesize contentHasLoaded=_contentHasLoaded - In the implementation block
@property (assign,nonatomic) BOOL updatingContent;                                          //@synthesize updatingContent=_updatingContent - In the implementation block
@property (assign,nonatomic) BOOL appInBackground;                                          //@synthesize appInBackground=_appInBackground - In the implementation block
@property (nonatomic,readonly) NSArray * tips; 
+(id)sharedInstance;
-(NSHashTable *)delegates;
-(void)updateContent;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(long long)userInterfaceStyle;
-(id)imageNamed:(id)arg1 ;
-(id)init;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)tipMap;
-(NSArray *)tips;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setAppGroupDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)appGroupDefaults;
-(void)reloadAppGroupDefaults;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(TPSAssetSizes *)assetSizes;
-(void)setAssetSizes:(TPSAssetSizes *)arg1 ;
-(void)setTipMap:(NSDictionary *)arg1 ;
-(NSDictionary *)collectionMap;
-(void)setCollectionMap:(NSDictionary *)arg1 ;
-(void)setFrameworkBundle:(NSBundle *)arg1 ;
-(NSBundle *)frameworkBundle;
-(void)networkStateDidChange:(BOOL)arg1 ;
-(NSArray *)collections;
-(void)setCollections:(NSArray *)arg1 ;
-(void)contentSizeCategoryDidChange;
-(TPSCollection *)featuredCollection;
-(NSError *)lastFetchError;
-(void)dealloc;
-(BOOL)updatingContent;
-(void)setUpdatingContent:(BOOL)arg1 ;
-(TPSFullTipContentManager *)fullTipContentManager;
-(void)updateWithDeviceMeta;
-(void)setLastFetchError:(NSError *)arg1 ;
-(id)topFeatureCollectionFromCollections:(id)arg1 ;
-(void)resetAttributedStringCache;
-(void)setFeaturedCollection:(TPSCollection *)arg1 ;
-(void)setContentHasLoaded:(BOOL)arg1 ;
-(NSMutableDictionary *)attributedStringCacheMap;
-(BOOL)alwaysShowIntro;
-(id)tipsForCollection:(id)arg1 ;
-(id)assetConfigurationForAssets:(id)arg1 language:(id)arg2 sizeClass:(long long)arg3 userInterfaceStyle:(long long)arg4 ;
-(id)attributedStringCacheForIdentifier:(id)arg1 ;
-(void)updateAttributedStringCache:(id)arg1 forIdentifier:(id)arg2 ;
-(id)collectionForIdentifier:(id)arg1 ;
-(id)tipForIdentifier:(id)arg1 ;
-(id)tipsForCollectionIdentifier:(id)arg1 ;
-(void)tipViewed:(id)arg1 ;
-(BOOL)contentHasLoaded;
-(BOOL)appInBackground;
-(void)setAppInBackground:(BOOL)arg1 ;
-(void)setFullTipContentManager:(TPSFullTipContentManager *)arg1 ;
-(void)setAlwaysShowIntro:(BOOL)arg1 ;
-(void)setAttributedStringCacheMap:(NSMutableDictionary *)arg1 ;
@end
