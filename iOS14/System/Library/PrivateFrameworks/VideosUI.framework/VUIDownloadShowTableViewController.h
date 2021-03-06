/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <libobjc.A.dylib/VUIDownloadEntityTableViewCellDelegate.h>

@class VUIDownloadShowDataSource, VUIMediaEntitiesDataSource, VUIDownloadShowTableHeaderView, NSMutableArray, UIBarButtonItem, NSArray, NSString;

@interface VUIDownloadShowTableViewController : UITableViewController <VUILibraryDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate> {

	VUIDownloadShowDataSource* _downloadDataSource;
	VUIMediaEntitiesDataSource* _seasonsDataSource;
	VUIDownloadShowTableHeaderView* _sizingHeader;
	NSMutableArray* _groupings;
	UIBarButtonItem* _rightBarButtonItem;
	UIBarButtonItem* _leftBarButtonItem;
	UIBarButtonItem* _backBarButtonItem;
	NSArray* _seasons;
	NSMutableArray* _assetControllersToRemove;

}

@property (nonatomic,retain) VUIDownloadShowDataSource * downloadDataSource;              //@synthesize downloadDataSource=_downloadDataSource - In the implementation block
@property (nonatomic,retain) VUIMediaEntitiesDataSource * seasonsDataSource;              //@synthesize seasonsDataSource=_seasonsDataSource - In the implementation block
@property (nonatomic,retain) VUIDownloadShowTableHeaderView * sizingHeader;               //@synthesize sizingHeader=_sizingHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupings;                                  //@synthesize groupings=_groupings - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem;                        //@synthesize rightBarButtonItem=_rightBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftBarButtonItem;                         //@synthesize leftBarButtonItem=_leftBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem;                         //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,retain) NSArray * seasons;                                           //@synthesize seasons=_seasons - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetControllersToRemove;                   //@synthesize assetControllersToRemove=_assetControllersToRemove - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)seasons;
-(void)_cancelPressed;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(UIBarButtonItem *)rightBarButtonItem;
-(UIBarButtonItem *)leftBarButtonItem;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)setLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)backBarButtonItem;
-(void)_editToggled;
-(void)_exitEditingMode;
-(void)setSizingHeader:(VUIDownloadShowTableHeaderView *)arg1 ;
-(VUIDownloadShowDataSource *)downloadDataSource;
-(void)setGroupings:(NSMutableArray *)arg1 ;
-(VUIMediaEntitiesDataSource *)seasonsDataSource;
-(void)setSeasons:(NSArray *)arg1 ;
-(void)_popIfNeeded;
-(id)_moreEpisodesURLForSection:(long long)arg1 ;
-(void)_didPressGetMoreEpisodes:(id)arg1 ;
-(id)_configureRenewAlertControllerForIndexPath:(id)arg1 forPreferredStyle:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_configureDeleteAlertControllerForIndexPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_mediaItemShouldShowRenewOption:(id)arg1 ;
-(NSMutableArray *)groupings;
-(void)setAssetControllersToRemove:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assetControllersToRemove;
-(BOOL)_episodeHasAllCanonicalIDs:(id)arg1 ;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(void)downloadCellDidRequestCancelDownload:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 seasonsDataSource:(id)arg2 ;
-(void)setDownloadDataSource:(VUIDownloadShowDataSource *)arg1 ;
-(void)setSeasonsDataSource:(VUIMediaEntitiesDataSource *)arg1 ;
-(VUIDownloadShowTableHeaderView *)sizingHeader;
@end

