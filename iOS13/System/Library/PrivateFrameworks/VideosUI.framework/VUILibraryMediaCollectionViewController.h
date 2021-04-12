/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryStackViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/VUIProductLockupViewDelegate.h>
#import <libobjc.A.dylib/TVShelfViewLayoutDelegate.h>
#import <libobjc.A.dylib/VUILibraryEpisodeFooterCellDelegate.h>
#import <libobjc.A.dylib/VUILibraryEpisodeShelfViewControllerDelegate.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>

@class VUIMediaCollection, VUIViewControllerContentPresenter, NSArray, VUILibraryMediaCollectionViewModel, NSMutableDictionary, NSString, VUIMediaEntitiesDataSource, UICollectionViewDiffableDataSource;

@interface VUILibraryMediaCollectionViewController : VUILibraryStackViewController <UICollectionViewDelegate, VUIProductLockupViewDelegate, TVShelfViewLayoutDelegate, VUILibraryEpisodeFooterCellDelegate, VUILibraryEpisodeShelfViewControllerDelegate, VUILibraryDataSourceDelegate> {

	BOOL _canShowMultipleSeasons;
	BOOL _seasonsFetchHasCompleted;
	BOOL _episodesFetchHasCompleted;
	VUIMediaCollection* _mediaCollection;
	VUIViewControllerContentPresenter* _contentPresenter;
	NSArray* _seasons;
	NSArray* _episodes;
	NSArray* _episodeGroups;
	VUILibraryMediaCollectionViewModel* _mediaCollectionViewModel;
	NSMutableDictionary* _downloadButtonBySeasonIdentifier;
	NSString* _showTitle;
	VUIMediaEntitiesDataSource* _seasonsDataSource;
	VUIMediaEntitiesDataSource* _episodesDataSource;
	UICollectionViewDiffableDataSource* _diffableDataSource;

}

@property (nonatomic,retain) NSArray * seasons;                                                          //@synthesize seasons=_seasons - In the implementation block
@property (nonatomic,retain) NSArray * episodes;                                                         //@synthesize episodes=_episodes - In the implementation block
@property (nonatomic,retain) NSArray * episodeGroups;                                                    //@synthesize episodeGroups=_episodeGroups - In the implementation block
@property (nonatomic,retain) VUILibraryMediaCollectionViewModel * mediaCollectionViewModel;              //@synthesize mediaCollectionViewModel=_mediaCollectionViewModel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadButtonBySeasonIdentifier;                     //@synthesize downloadButtonBySeasonIdentifier=_downloadButtonBySeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSString * showTitle;                                                       //@synthesize showTitle=_showTitle - In the implementation block
@property (nonatomic,retain) VUIMediaEntitiesDataSource * seasonsDataSource;                             //@synthesize seasonsDataSource=_seasonsDataSource - In the implementation block
@property (nonatomic,retain) VUIMediaEntitiesDataSource * episodesDataSource;                            //@synthesize episodesDataSource=_episodesDataSource - In the implementation block
@property (assign,nonatomic) BOOL seasonsFetchHasCompleted;                                              //@synthesize seasonsFetchHasCompleted=_seasonsFetchHasCompleted - In the implementation block
@property (assign,nonatomic) BOOL episodesFetchHasCompleted;                                             //@synthesize episodesFetchHasCompleted=_episodesFetchHasCompleted - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                    //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (assign,nonatomic) BOOL canShowMultipleSeasons;                                                //@synthesize canShowMultipleSeasons=_canShowMultipleSeasons - In the implementation block
@property (nonatomic,retain) VUIMediaCollection * mediaCollection;                                       //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                       //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)setShowTitle:(NSString *)arg1 ;
-(NSString *)showTitle;
-(VUIMediaCollection *)mediaCollection;
-(void)setMediaCollection:(VUIMediaCollection *)arg1 ;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(NSArray *)episodes;
-(id)_createDiffableDataSourceSnapshot;
-(id)_createDiffableDataSourceForCollectionView:(id)arg1 ;
-(void)libraryEpisodesShelfViewController:(id)arg1 didRemoveDownloadForAssetController:(id)arg2 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(NSArray *)seasons;
-(void)setSeasons:(NSArray *)arg1 ;
-(void)_updateAfterContentWasManuallyDeleted:(BOOL)arg1 ;
-(void)contentDescriptionExpanded;
-(void)setEpisodes:(NSArray *)arg1 ;
-(void)titleButtonPressedForStoreId:(id)arg1 ;
-(id)initWithTitle:(id)arg1 withSeasonsDataSource:(id)arg2 withEpisodesDataSource:(id)arg3 ;
-(void)setCanShowMultipleSeasons:(BOOL)arg1 ;
-(BOOL)_allFetchesHaveCompleted;
-(VUIMediaEntitiesDataSource *)episodesDataSource;
-(VUIMediaEntitiesDataSource *)seasonsDataSource;
-(void)setSeasonsFetchHasCompleted:(BOOL)arg1 ;
-(void)setEpisodesFetchHasCompleted:(BOOL)arg1 ;
-(BOOL)_usingEpisodesGroupFetch;
-(void)setEpisodeGroups:(NSArray *)arg1 ;
-(VUILibraryMediaCollectionViewModel *)mediaCollectionViewModel;
-(void)_buildMediaCollectionViewModel;
-(void)_updateDeletedContentErrorMessage;
-(id)_seasonViewModelsWithSeasons:(id)arg1 ;
-(void)_updateMediaCollectionViewModelWithSeasonViewModels:(id)arg1 ;
-(void)_updateEpisodeShelvesWithLatestEpisodes;
-(void)_updateProductLockupViewWithSeasonIdentifier:(id)arg1 ;
-(BOOL)canShowMultipleSeasons;
-(id)_episodesBySeasonIdentifier;
-(id)_productLockupViewWithSeason:(id)arg1 ;
-(id)_episodeShelfViewControllerWithSeason:(id)arg1 episodes:(id)arg2 ;
-(void)_updateProductLockupView:(id)arg1 withSeason:(id)arg2 ;
-(void)addDownloadButtonToProductLockupView:(id)arg1 forSeason:(id)arg2 ;
-(BOOL)episodesFetchHasCompleted;
-(BOOL)seasonsFetchHasCompleted;
-(NSArray *)episodeGroups;
-(void)setMediaCollectionViewModel:(VUILibraryMediaCollectionViewModel *)arg1 ;
-(NSMutableDictionary *)downloadButtonBySeasonIdentifier;
-(void)setDownloadButtonBySeasonIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setSeasonsDataSource:(VUIMediaEntitiesDataSource *)arg1 ;
-(void)setEpisodesDataSource:(VUIMediaEntitiesDataSource *)arg1 ;
@end
