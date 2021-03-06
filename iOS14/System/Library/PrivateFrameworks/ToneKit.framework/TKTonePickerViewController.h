/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDismissalDelegate.h>
#import <libobjc.A.dylib/TKTonePickerControllerDelegate.h>
#import <libobjc.A.dylib/TKTonePickerControllerDelegateInternal.h>
#import <libobjc.A.dylib/TKTonePickerTableViewControllerHelper.h>
#import <libobjc.A.dylib/TKTonePickerTableViewLayoutMarginsObserver.h>
#import <libobjc.A.dylib/TKTonePickerTableViewSeparatorObserver.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegate.h>

@protocol TKTonePickerViewControllerDelegate, TKTonePickerStyleProvider;
@class TKTonePickerController, UIImage, TKTonePickerTableViewCellLayoutManager, UIBarButtonItem, NSMutableDictionary, MPMediaPickerController, NSMutableArray, MPMusicPlayerController, NSNumber, TKToneClassicsTableViewController, TKVibrationPickerViewController, NSString;

@interface TKTonePickerViewController : UITableViewController <TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKTonePickerTableViewControllerHelper, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver, MPMediaPickerControllerDelegate> {

	TKTonePickerController* _tonePickerController;
	UIImage* _checkmarkImage;
	TKTonePickerTableViewCellLayoutManager* _tableViewCellLayoutManagerForIndentedRows;
	TKTonePickerTableViewCellLayoutManager* _tableViewCellLayoutManagerForUnindentedRows;
	long long _tonePickerTableViewStyle;
	BOOL _showsToneStoreWasSetExplicitly;
	BOOL _needsScrollPositionReset;
	UIBarButtonItem* _storeBarButtonItem;
	NSMutableDictionary* _toneSectionHeaderViews;
	MPMediaPickerController* _mediaPickerController;
	NSMutableArray* _mediaItems;
	MPMusicPlayerController* _musicPlayer;
	NSNumber* _playingMediaItemIdentifier;
	TKToneClassicsTableViewController* _toneClassicsTableViewController;
	TKVibrationPickerViewController* _vibrationPickerViewController;
	BOOL _isHandlingSwitchControlValueChanged;
	NSMutableArray* _switchControlsBeingObserved;
	BOOL _showsToneStore;
	BOOL _showsIgnoreMute;
	BOOL _showsMedia;
	id<TKTonePickerViewControllerDelegate> _delegate;
	id<TKTonePickerStyleProvider> _styleProvider;

}

@property (nonatomic,copy) NSString * accountIdentifier; 
@property (assign,nonatomic) BOOL showsStoreButtonInNavigationBar; 
@property (nonatomic,readonly) long long alertType; 
@property (nonatomic,copy) NSString * topic; 
@property (assign,nonatomic) BOOL showsDefault; 
@property (nonatomic,copy) NSString * defaultToneIdentifier; 
@property (assign,nonatomic) BOOL showsNone; 
@property (assign,getter=isNoneAtTop,nonatomic) BOOL noneAtTop; 
@property (nonatomic,copy) NSString * noneString; 
@property (assign,nonatomic) BOOL showsNothingSelected; 
@property (assign,nonatomic) BOOL showsToneStore;                                                 //@synthesize showsToneStore=_showsToneStore - In the implementation block
@property (nonatomic,copy) NSString * selectedToneIdentifier; 
@property (assign,nonatomic,__weak) id<TKTonePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsIgnoreMute;                                                //@synthesize showsIgnoreMute=_showsIgnoreMute - In the implementation block
@property (assign,nonatomic) BOOL ignoreMute; 
@property (assign,nonatomic) BOOL showsMedia;                                                     //@synthesize showsMedia=_showsMedia - In the implementation block
@property (assign,getter=isMediaAtTop,nonatomic) BOOL mediaAtTop; 
@property (nonatomic,copy) NSNumber * selectedMediaIdentifier; 
@property (assign,nonatomic) BOOL showsVibrations; 
@property (nonatomic,copy) NSString * selectedVibrationIdentifier; 
@property (nonatomic,retain) id<TKTonePickerStyleProvider> styleProvider;                         //@synthesize styleProvider=_styleProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hksh_alarmPickerWithToneIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 styleProvider:(id)arg3 ;
+(id)hksh_alarmPickerWithToneIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 ;
+(id)_checkmarkImage;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)alertType;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setTopic:(NSString *)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(NSString *)topic;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<TKTonePickerViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)accountIdentifier;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_reloadData;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)setDelegate:(id<TKTonePickerViewControllerDelegate>)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)ignoreMute;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<TKTonePickerStyleProvider>)styleProvider;
-(void)loadView;
-(void)setIgnoreMute:(BOOL)arg1 ;
-(void)setNoneAtTop:(BOOL)arg1 ;
-(void)setShowsNone:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)setStyleProvider:(id<TKTonePickerStyleProvider>)arg1 ;
-(NSString *)selectedVibrationIdentifier;
-(NSString *)selectedToneIdentifier;
-(void)setSelectedVibrationIdentifier:(NSString *)arg1 ;
-(void)setSelectedToneIdentifier:(NSString *)arg1 ;
-(void)setShowsDefault:(BOOL)arg1 ;
-(void)setShowsVibrations:(BOOL)arg1 ;
-(void)setShowsIgnoreMute:(BOOL)arg1 ;
-(id)initWithAlertType:(long long)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)addMediaItems:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)_initWithAlertType:(long long)arg1 tableViewStyle:(long long)arg2 ;
-(void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2 ;
-(NSString *)noneString;
-(void)setDefaultToneIdentifier:(NSString *)arg1 ;
-(void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1 ;
-(void)separatorColorDidChangeInTonePickerTableView:(id)arg1 ;
-(void)tonePickerController:(id)arg1 didUpdateIgnoreMute:(BOOL)arg2 forTonePickerItem:(id)arg3 atIndexPath:(id)arg4 ;
-(BOOL)isNoneAtTop;
-(NSString *)defaultToneIdentifier;
-(id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)showsNothingSelected;
-(void)_didSelectToneWithIdentifier:(id)arg1 ;
-(void)setShowsNothingSelected:(BOOL)arg1 ;
-(void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1 ;
-(void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(BOOL)arg3 ;
-(void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1 ;
-(void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2 ;
-(void)_didSelectMediaItemWithIdentifier:(id)arg1 ;
-(void)tonePickerController:(id)arg1 requestsPerformingBatchUpdates:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)tonePickerController:(id)arg1 didDeletePickerRowItems:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didDeleteTonePickerSectionItems:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didInsertPickerRowItems:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didInsertTonePickerSectionItems:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didUpdateHeaderTextOfTonePickerSectionItems:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didUpdateFooterTextOfTonePickerSectionItems:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didUpdateDownloadProgressOfTonePickerItem:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didUpdateTonePickerItem:(id)arg2 ;
-(void)tonePickerController:(id)arg1 willBeginPlaybackOfToneWithIdentifier:(id)arg2 ;
-(void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2 ;
-(BOOL)tonePickerControllerShouldShowMedia:(id)arg1 ;
-(BOOL)isMediaAtTop;
-(unsigned long long)numberOfMediaItemsInTonePickerController:(id)arg1 ;
-(id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2 ;
-(void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2 ;
-(void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1 ;
-(void)tonePickerControllerDidReloadTones:(id)arg1 ;
-(void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(BOOL)arg2 ofTonePickerItem:(id)arg3 ;
-(void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3 ;
-(void)setShowsToneStore:(BOOL)arg1 ;
-(void)setNoneString:(NSString *)arg1 ;
-(id)selectedTonePickerItem;
-(void)setMediaAtTop:(BOOL)arg1 ;
-(BOOL)showsDefault;
-(BOOL)showsNone;
-(BOOL)showsToneStore;
-(BOOL)showsVibrations;
-(BOOL)showsIgnoreMute;
-(void)_handlePreferredContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(BOOL)showsMedia;
-(void)tonePickerTableViewControllerWillBeDeallocated:(id)arg1 ;
-(void)_handleSwitchControlValueChanged:(id)arg1 ;
-(void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2 ;
-(void)loadViewForTonePickerTableViewController:(id)arg1 ;
-(void)_updateMinimumTextIndentation;
-(double)_minimumTextIndentationForTableView:(id)arg1 withCheckmarkImage:(id)arg2 ;
-(void)_resetScrollingPosition;
-(void)_handleMediaLibraryDidChangeNotification;
-(void)setSelectedMediaIdentifier:(NSNumber *)arg1 ;
-(id)selectedIdentifier:(BOOL*)arg1 ;
-(id)_mediaItemForIdentifier:(id)arg1 ;
-(unsigned long long)_addMediaIdentifierToList:(id)arg1 ;
-(void)_playMediaItemWithIdentifier:(id)arg1 ;
-(id)_musicPlayer;
-(void)_didFinishPreparingToPlayMediaItemWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)_configureTextColorOfLabelInCell:(id)arg1 shouldTintText:(BOOL)arg2 checked:(BOOL)arg3 ;
-(void)updateCell:(id)arg1 withCheckedStatus:(BOOL)arg2 forTonePickerItem:(id)arg3 ;
-(BOOL)_shouldShowCheckmarkOnTrailingEdge;
-(void)_updateCell:(id)arg1 withDownloadProgress:(float)arg2 animated:(BOOL)arg3 ;
-(void)tableView:(id)arg1 updateCell:(id)arg2 withSeparatorForPickerRowItem:(id)arg3 ;
-(id)_pickerRowItemForIndexPath:(id)arg1 ;
-(void)updateDividerContentColorToMatchSeparatorColorInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForPickerRowItem:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 forPickerRowItem:(id)arg3 ;
-(id)_customHeaderViewForHeaderInSection:(long long)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forPickerRowItem:(id)arg3 ;
-(void)updateCell:(id)arg1 withDetailText:(id)arg2 ;
-(void)_togglePlayMediaItemWithIdentifier:(id)arg1 ;
-(void)_stopMediaItemPlaybackWithFadeOutDuration:(double)arg1 ;
-(void)vibrationPickerViewControllerWasDismissed:(id)arg1 ;
-(void)tonePickerController:(id)arg1 requestsPresentingAlertWithTitle:(id)arg2 message:(id)arg3 ;
-(void)tonePickerTableViewWillDisappear:(BOOL)arg1 ;
-(void)setShowsMedia:(BOOL)arg1 ;
-(NSNumber *)selectedMediaIdentifier;
-(void)removeMediaItems:(id)arg1 ;
-(BOOL)showsStoreButtonInNavigationBar;
-(void)setShowsStoreButtonInNavigationBar:(BOOL)arg1 ;
@end

