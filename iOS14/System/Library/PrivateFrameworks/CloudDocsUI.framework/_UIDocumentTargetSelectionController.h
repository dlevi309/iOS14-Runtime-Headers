/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIDocumentPickerServiceViewController.h>
#import <libobjc.A.dylib/_UIDocumentPickerServiceInvalidating.h>

@protocol _UIDocumentTargetSelectionControllerDelegate;
@class _UIDocumentPickerContainerViewController, UINavigationController, _UINavigationControllerPalette, UIImageView, UILabel, NSString, NSArray;

@interface _UIDocumentTargetSelectionController : UIViewController <_UIDocumentPickerServiceViewController, _UIDocumentPickerServiceInvalidating> {

	id<_UIDocumentTargetSelectionControllerDelegate> _weak_delegate;
	_UIDocumentPickerContainerViewController* _containerViewController;
	UINavigationController* _containedNavigationController;
	_UINavigationControllerPalette* _palette;
	UIImageView* _iconView;
	UILabel* _filesLabel;
	NSString* _containerName;
	id _firstFileThumbnailObservation;
	unsigned long long _targetSelectionType;
	BOOL _completedInitialDisplay;
	id<_UIDocumentTargetSelectionControllerDelegate> _delegate;
	NSArray* _itemsToMove;

}

@property (assign,nonatomic,__weak) id<_UIDocumentTargetSelectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * itemsToMove;                                                       //@synthesize itemsToMove=_itemsToMove - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_loadDocumentIconForURL:(id)arg1 size:(CGSize)arg2 ;
+(id)_loadThumbnailForURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 wantsBorder:(BOOL*)arg4 generatedThumbnail:(BOOL*)arg5 ;
-(int)sortOrder;
-(id<_UIDocumentTargetSelectionControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didSelectItem:(id)arg1 ;
-(long long)displayMode;
-(void)setDelegate:(id<_UIDocumentTargetSelectionControllerDelegate>)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(void)dismiss:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)_setupNavigationItem;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_updatePalette;
-(void)_setContainerViewController:(id)arg1 ;
-(id)pickableTypes;
-(unsigned long long)pickerMode;
-(id)initWithItemsToMove:(id)arg1 ;
-(void)setItemsToMove:(NSArray *)arg1 ;
-(void)_commonInitItems:(id)arg1 crossContainer:(BOOL)arg2 sourceContainer:(id)arg3 ;
-(void)_setupPalette;
-(id)navControllerForPalette;
-(void)_setIconViewImage:(id)arg1 border:(BOOL)arg2 ;
-(id)initForCrossContainerMoveWithItemsToMove:(id)arg1 ;
-(id)initForCopyWithItems:(id)arg1 ;
-(NSArray *)itemsToMove;
@end

