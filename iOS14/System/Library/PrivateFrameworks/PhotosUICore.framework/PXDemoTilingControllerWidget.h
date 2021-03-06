/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXAssetsSceneDelegate.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXWidget.h>

@protocol PXWidgetDelegate;
@class PXPhotosDetailsContext, PXAssetsDataSourceManager, PXPhotoKitUIMediaProvider, PXTilingController, PXBasicUIViewTileAnimator, NSMutableSet, PXUIAssetsScene, NSString, PXWidgetSpec, PXSectionedSelectionManager;

@interface PXDemoTilingControllerWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXWidget> {

	id<PXWidgetDelegate> _widgetDelegate;
	PXPhotosDetailsContext* _context;
	PXAssetsDataSourceManager* __dataSourceManager;
	PXPhotoKitUIMediaProvider* __mediaProvider;
	PXTilingController* __tilingController;
	PXBasicUIViewTileAnimator* __tileAnimator;
	NSMutableSet* __tilesInUse;
	PXUIAssetsScene* __scene;
	NSString* _localizedSubtitle;

}

@property (nonatomic,readonly) PXAssetsDataSourceManager * _dataSourceManager;                         //@synthesize _dataSourceManager=__dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXPhotoKitUIMediaProvider * _mediaProvider;                             //@synthesize _mediaProvider=__mediaProvider - In the implementation block
@property (nonatomic,readonly) PXTilingController * _tilingController;                                 //@synthesize _tilingController=__tilingController - In the implementation block
@property (nonatomic,readonly) PXBasicUIViewTileAnimator * _tileAnimator;                              //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _tilesInUse;                                             //@synthesize _tilesInUse=__tilesInUse - In the implementation block
@property (nonatomic,readonly) PXUIAssetsScene * _scene;                                               //@synthesize _scene=__scene - In the implementation block
@property (setter=_setLocalizedSubtitle:,nonatomic,retain) NSString * localizedSubtitle;               //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                               //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec; 
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) BOOL hasLoadedContentData; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
@property (nonatomic,readonly) long long contentViewAnchoringType; 
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
-(PXUIAssetsScene *)_scene;
-(NSString *)localizedTitle;
-(id)init;
-(NSString *)localizedCaption;
-(PXPhotoKitUIMediaProvider *)_mediaProvider;
-(PXPhotosDetailsContext *)context;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(NSMutableSet *)_tilesInUse;
-(NSString *)localizedSubtitle;
-(PXAssetsDataSourceManager *)_dataSourceManager;
-(PXBasicUIViewTileAnimator *)_tileAnimator;
-(id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(void)_loadTilingController;
-(PXTilingController *)_tilingController;
-(id)_demoTilingLayoutForDataSource:(id)arg1 ;
-(void)_setLocalizedSubtitle:(id)arg1 ;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(void)userDidSelectSubtitle;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(PXTilingController *)contentTilingController;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
@end

