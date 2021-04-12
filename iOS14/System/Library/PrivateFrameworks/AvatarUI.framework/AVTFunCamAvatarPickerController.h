/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTViewSessionProviderDelegate.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>
#import <libobjc.A.dylib/AVTAvatarPicker.h>

@protocol AVTPresenterDelegate, AVTAvatarPickerDelegate, AVTAvatarRecord, AVTAvatarStoreInternal, AVTUILogger, NSObject;
@class AVTFunCamAvatarPickerStyle, UICollectionView, UIView, AVTFunCamAvatarPickerCollectionViewLayout, UICollectionViewFlowLayout, AVTCenteringCollectionViewDelegate, NSArray, AVTAvatarListImageItem, AVTUIEnvironment, _AVTAvatarRecordImageProvider, AVTRenderingScope, NSString;

@interface AVTFunCamAvatarPickerController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTViewSessionProviderDelegate, AVTObjectViewController, AVTAvatarPicker> {

	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTAvatarPickerDelegate> avatarPickerDelegate;
	unsigned long long _mode;
	AVTFunCamAvatarPickerStyle* _style;
	UICollectionView* _collectionView;
	UIView* _titlesContainer;
	UICollectionView* _titlesCollectionView;
	UIView* _titlesClippingView;
	id<AVTAvatarRecord> _selectedAvatarRecord;
	AVTFunCamAvatarPickerCollectionViewLayout* _listLayout;
	UICollectionViewFlowLayout* _gridLayout;
	AVTCenteringCollectionViewDelegate* _centeringDelegate;
	NSArray* _puppetRecords;
	NSArray* _editableRecords;
	NSArray* _items;
	AVTAvatarListImageItem* _noneItem;
	id<AVTAvatarStoreInternal> _store;
	AVTUIEnvironment* _environment;
	id<AVTUILogger> _logger;
	_AVTAvatarRecordImageProvider* _imageProvider;
	AVTRenderingScope* _editableRecordsListRenderingScope;
	AVTRenderingScope* _gridRenderingScope;
	id<NSObject> _changeNotificationToken;
	CGRect _lastUpdateViewBounds;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * titlesContainer;                                             //@synthesize titlesContainer=_titlesContainer - In the implementation block
@property (nonatomic,retain) UICollectionView * titlesCollectionView;                              //@synthesize titlesCollectionView=_titlesCollectionView - In the implementation block
@property (nonatomic,retain) UIView * titlesClippingView;                                          //@synthesize titlesClippingView=_titlesClippingView - In the implementation block
@property (assign,nonatomic) CGRect lastUpdateViewBounds;                                          //@synthesize lastUpdateViewBounds=_lastUpdateViewBounds - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> selectedAvatarRecord;                             //@synthesize selectedAvatarRecord=_selectedAvatarRecord - In the implementation block
@property (nonatomic,retain) AVTFunCamAvatarPickerCollectionViewLayout * listLayout;               //@synthesize listLayout=_listLayout - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * gridLayout;                              //@synthesize gridLayout=_gridLayout - In the implementation block
@property (nonatomic,retain) AVTCenteringCollectionViewDelegate * centeringDelegate;               //@synthesize centeringDelegate=_centeringDelegate - In the implementation block
@property (nonatomic,retain) NSArray * puppetRecords;                                              //@synthesize puppetRecords=_puppetRecords - In the implementation block
@property (nonatomic,retain) NSArray * editableRecords;                                            //@synthesize editableRecords=_editableRecords - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) AVTAvatarListImageItem * noneItem;                                    //@synthesize noneItem=_noneItem - In the implementation block
@property (nonatomic,retain) id<AVTAvatarStoreInternal> store;                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                             //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) _AVTAvatarRecordImageProvider * imageProvider;                      //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) AVTRenderingScope * editableRecordsListRenderingScope;              //@synthesize editableRecordsListRenderingScope=_editableRecordsListRenderingScope - In the implementation block
@property (nonatomic,readonly) AVTRenderingScope * gridRenderingScope;                             //@synthesize gridRenderingScope=_gridRenderingScope - In the implementation block
@property (nonatomic,retain) id<NSObject> changeNotificationToken;                                 //@synthesize changeNotificationToken=_changeNotificationToken - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) AVTFunCamAvatarPickerStyle * style;                                     //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
@property (assign,nonatomic,__weak) id<AVTAvatarPickerDelegate> avatarPickerDelegate; 
+(id)createClippingViewForSize:(CGSize)arg1 ;
+(id)itemsFromRecords:(id)arg1 ;
+(id)sessionProviderWithEnvironment:(id)arg1 delegate:(id)arg2 ;
+(id)funCamAvatarPickerControllerForStore:(id)arg1 style:(id)arg2 ;
+(id)newGridLayout;
-(void)viewWillLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(unsigned long long)mode;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setStore:(id<AVTAvatarStoreInternal>)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)buildCollectionView;
-(id<AVTAvatarStoreInternal>)store;
-(UIView *)titlesContainer;
-(id)initWithStore:(id)arg1 environment:(id)arg2 style:(id)arg3 ;
-(id<AVTAvatarRecord>)selectedAvatarRecord;
-(id)indexPathForNoneItem;
-(void)updateViewForCurrentMode;
-(CGRect)lastUpdateViewBounds;
-(id)buildCollectionViewLayout;
-(id)buildTitlesCollectionViewLayout;
-(UICollectionView *)titlesCollectionView;
-(void)setTitlesContainer:(UIView *)arg1 ;
-(void)setTitlesCollectionView:(UICollectionView *)arg1 ;
-(void)updateTitlesClippingViewMask;
-(void)setTitlesClippingView:(UIView *)arg1 ;
-(UIView *)titlesClippingView;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(id<NSObject>)changeNotificationToken;
-(void)setChangeNotificationToken:(id<NSObject>)arg1 ;
-(void)setNoneItem:(AVTAvatarListImageItem *)arg1 ;
-(void)setEditableRecords:(NSArray *)arg1 ;
-(void)setPuppetRecords:(NSArray *)arg1 ;
-(void)setLastUpdateViewBounds:(CGRect)arg1 ;
-(void)setSelectedAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(BOOL)isDisplayingGridLayout;
-(void)selectItemForAvatarRecord:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)sendSelectionEventToDelegateForItemAtIndexPath:(id)arg1 ;
-(AVTRenderingScope *)editableRecordsListRenderingScope;
-(AVTRenderingScope *)gridRenderingScope;
-(long long)indexForRecordIdentifier:(id)arg1 ;
-(void)selectItemAtCenterNotifyDelegate:(BOOL)arg1 ;
-(NSArray *)puppetRecords;
-(void)sessionProviderWillStartCameraSession:(id)arg1 ;
-(void)sessionProviderDidEndCameraSession:(id)arg1 ;
-(NSArray *)editableRecords;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)gridItemSize;
-(UICollectionView *)collectionView;
-(UICollectionViewFlowLayout *)gridLayout;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setMode:(unsigned long long)arg1 ;
-(BOOL)canCreateAvatar;
-(AVTFunCamAvatarPickerCollectionViewLayout *)listLayout;
-(NSArray *)items;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(AVTAvatarListImageItem *)noneItem;
-(void)setGridLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)reloadData;
-(id<AVTUILogger>)logger;
-(void)startObservingChangesIfNeeded;
-(void)setListLayout:(AVTFunCamAvatarPickerCollectionViewLayout *)arg1 ;
-(AVTUIEnvironment *)environment;
-(void)scrollViewDidScroll:(id)arg1 ;
-(_AVTAvatarRecordImageProvider *)imageProvider;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(void)setStyle:(AVTFunCamAvatarPickerStyle *)arg1 ;
-(void)loadView;
-(id<AVTAvatarPickerDelegate>)avatarPickerDelegate;
-(void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAvatarPickerDelegate:(id<AVTAvatarPickerDelegate>)arg1 ;
-(void)preloadAll;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCenteringDelegate:(AVTCenteringCollectionViewDelegate *)arg1 ;
-(AVTCenteringCollectionViewDelegate *)centeringDelegate;
-(void)viewDidLayoutSubviews;
-(long long)indexForRecord:(id)arg1 ;
-(AVTFunCamAvatarPickerStyle *)style;
-(id)selectedIndexPath;
-(void)reloadModel;
@end
