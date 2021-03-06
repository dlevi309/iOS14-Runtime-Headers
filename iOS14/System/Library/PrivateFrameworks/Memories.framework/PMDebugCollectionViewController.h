/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PMDebugCollectionViewControllerProtocol.h>

@class MiroAutoEditController, Project, MiroPickList, PHAssetCollection, MiroBlueprint, NSDictionary, NSURL, NSArray, VEKProduction, VEKResult, NSMutableDictionary, PHFetchResult, UIBarButtonItem, UIProgressView, UIAlertController, UIView, MiroMemory, NSString;

@interface PMDebugCollectionViewController : UICollectionViewController <PMDebugCollectionViewControllerProtocol> {

	NSArray* _prohibitedDataExportLocations;
	BOOL _isSaveMode;
	BOOL _textOnly;
	BOOL _hackReuseCell;
	BOOL _cancelled;
	BOOL _syncPreview;
	VEKProduction* _production;
	VEKResult* _result;
	unsigned long long _currentSortType;
	NSArray* _sortTitles;
	MiroAutoEditController* _autoEditController;
	NSMutableDictionary* _projectMoodNamedTransitions;
	PHFetchResult* _curatedAssets;
	UIBarButtonItem* _sortBarButton;
	UIProgressView* _progressView;
	UIAlertController* _alertController;
	UIView* _textContainerView;
	UIView* _sourceView;
	MiroMemory* _memory;
	Project* _project;
	MiroPickList* _picklist;
	PHAssetCollection* _assetCollection;
	MiroBlueprint* _blueprint;
	NSDictionary* _freezeRanges;
	NSURL* _localPersistentFile;
	double _duration;
	long long _pickedItemCount;
	long long _allAssetCount;
	CGRect _sourceRect;
	Buckets _buckets;

}

@property (assign,nonatomic) unsigned long long currentSortType;                             //@synthesize currentSortType=_currentSortType - In the implementation block
@property (nonatomic,retain) NSArray * sortTitles;                                           //@synthesize sortTitles=_sortTitles - In the implementation block
@property (nonatomic,retain) MiroAutoEditController * autoEditController;                    //@synthesize autoEditController=_autoEditController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * projectMoodNamedTransitions;              //@synthesize projectMoodNamedTransitions=_projectMoodNamedTransitions - In the implementation block
@property (assign,nonatomic) BOOL isSaveMode;                                                //@synthesize isSaveMode=_isSaveMode - In the implementation block
@property (assign,nonatomic) BOOL textOnly;                                                  //@synthesize textOnly=_textOnly - In the implementation block
@property (assign,nonatomic) BOOL hackReuseCell;                                             //@synthesize hackReuseCell=_hackReuseCell - In the implementation block
@property (nonatomic,retain) PHFetchResult * curatedAssets;                                  //@synthesize curatedAssets=_curatedAssets - In the implementation block
@property (assign) BOOL cancelled;                                                           //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * sortBarButton;                         //@synthesize sortBarButton=_sortBarButton - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                  //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                            //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) UIView * textContainerView;                                     //@synthesize textContainerView=_textContainerView - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                            //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                              //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign) BOOL syncPreview;                                                         //@synthesize syncPreview=_syncPreview - In the implementation block
@property (nonatomic,retain) MiroMemory * memory;                                            //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) Project * project;                                              //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) MiroPickList * picklist;                                        //@synthesize picklist=_picklist - In the implementation block
@property (nonatomic,retain) PHAssetCollection * assetCollection;                            //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,retain) MiroBlueprint * blueprint;                                      //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) NSDictionary * freezeRanges;                                    //@synthesize freezeRanges=_freezeRanges - In the implementation block
@property (nonatomic,retain) NSURL * localPersistentFile;                                    //@synthesize localPersistentFile=_localPersistentFile - In the implementation block
@property (assign,nonatomic) Buckets buckets;                                                //@synthesize buckets=_buckets - In the implementation block
@property (assign,nonatomic) double duration;                                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long pickedItemCount;                                      //@synthesize pickedItemCount=_pickedItemCount - In the implementation block
@property (assign,nonatomic) long long allAssetCount;                                        //@synthesize allAssetCount=_allAssetCount - In the implementation block
@property (nonatomic,retain) VEKProduction * production;                                     //@synthesize production=_production - In the implementation block
@property (nonatomic,retain) VEKResult * result;                                             //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(VEKResult *)arg1 ;
-(MiroMemory *)memory;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(void)setDuration:(double)arg1 ;
-(MiroBlueprint *)blueprint;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)done:(id)arg1 ;
-(Buckets)buckets;
-(UIView *)sourceView;
-(void)setCuratedAssets:(PHFetchResult *)arg1 ;
-(UIAlertController *)alertController;
-(void)setSourceRect:(CGRect)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(void)viewDidLoad;
-(VEKProduction *)production;
-(void)setTextContainerView:(UIView *)arg1 ;
-(UIView *)textContainerView;
-(CGRect)sourceRect;
-(PHAssetCollection *)assetCollection;
-(void)setBlueprint:(MiroBlueprint *)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(PHFetchResult *)curatedAssets;
-(VEKResult *)result;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setBuckets:(Buckets)arg1 ;
-(double)duration;
-(Project *)project;
-(id)allAssets;
-(void)setProduction:(VEKProduction *)arg1 ;
-(void)setSortTitles:(NSArray *)arg1 ;
-(NSArray *)sortTitles;
-(BOOL)textOnly;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)renderKBRects;
-(void)setCurrentSortType:(unsigned long long)arg1 ;
-(void)setSyncPreview:(BOOL)arg1 ;
-(UIBarButtonItem *)sortBarButton;
-(void)setProject:(Project *)arg1 ;
-(void)setPicklist:(MiroPickList *)arg1 ;
-(void)setFreezeRanges:(NSDictionary *)arg1 ;
-(void)setLocalPersistentFile:(NSURL *)arg1 ;
-(void)setPickedItemCount:(long long)arg1 ;
-(void)setAllAssetCount:(long long)arg1 ;
-(MiroPickList *)picklist;
-(id)allAssetsAsArray;
-(void)createDebugGraphics;
-(id)_framingTestingCSV;
-(void)pickInfoAndAsset:(id*)arg1 asset:(id*)arg2 fromIndexPath:(id*)arg3 ;
-(BOOL)syncPreview;
-(void)closeMemoryTransition:(id)arg1 ;
-(id)requestedSongString;
-(id)logFeaturedPeopleInMemory;
-(id)replaceEmojiWithPrintName:(id)arg1 ;
-(void)showTextViewWith:(id)arg1 ;
-(NSMutableDictionary *)projectMoodNamedTransitions;
-(void)setProjectMoodNamedTransitions:(NSMutableDictionary *)arg1 ;
-(id)prettyTransitionNameFromID:(id)arg1 fromBlueprint:(id)arg2 ;
-(void)resetMemoryToCleanState:(id)arg1 ;
-(void)saveDebugPanelForMemory:(id)arg1 ;
-(void)processSaliencyAO;
-(void)showMemoryTransitions;
-(void)showScoreLog;
-(void)showTextVersion;
-(void)showProject;
-(void)_exportFramingDecisions;
-(void)fixPopoverForViewController:(id)arg1 withSender:(id)arg2 ;
-(id)makeEnhancedStringFromPlainOne:(id)arg1 ;
-(void)drawImageInContext:(id)arg1 andFrame:(CGRect)arg2 ;
-(void)drawSeperatingBorderInRect:(CGRect)arg1 withColor:(id)arg2 ;
-(id)makeEnhancedStringFromPlainOne:(id)arg1 size:(int)arg2 ;
-(unsigned long long)_getCurrentCountOfItems;
-(id)renderBoundingBoxToImage:(id)arg1 ;
-(void)presentAirdropControllerWithDebugImageArray:(id)arg1 ;
-(id)renderBoundingBoxToImage:(id)arg1 metadataRects:(id)arg2 normalized:(BOOL)arg3 ;
-(void)writeTextToImageContextWithSize:(CGSize)arg1 ;
-(void)writeTextToImageContextWithSize:(CGSize)arg1 andCell:(id)arg2 andLocation:(CGPoint)arg3 ;
-(id)createDebugPageWithInfoWithStartingIndex:(unsigned long long)arg1 andEndingIndex:(unsigned long long)arg2 ;
-(id)createKBFramingToAssetMapWithAspect:(id)arg1 ;
-(id)createKBPlaybackSizeToAssetMap;
-(void)presentAirDropControllerWithDebugString:(id)arg1 ;
-(MiroAutoEditController *)autoEditController;
-(NSDictionary *)freezeRanges;
-(NSURL *)localPersistentFile;
-(long long)pickedItemCount;
-(long long)allAssetCount;
-(void)bringUpActions:(id)arg1 ;
-(void)bringUpSortOptions:(id)arg1 ;
-(void)presentModelImageViewWithImage:(id)arg1 ;
-(unsigned long long)numberRowsWithCurrentCount;
-(void)presentAirdropControllerWithDebugImage:(id)arg1 ;
-(unsigned long long)currentSortType;
-(void)setAutoEditController:(MiroAutoEditController *)arg1 ;
-(BOOL)isSaveMode;
-(void)setIsSaveMode:(BOOL)arg1 ;
-(void)setTextOnly:(BOOL)arg1 ;
-(BOOL)hackReuseCell;
-(void)setHackReuseCell:(BOOL)arg1 ;
-(void)setSortBarButton:(UIBarButtonItem *)arg1 ;
@end

