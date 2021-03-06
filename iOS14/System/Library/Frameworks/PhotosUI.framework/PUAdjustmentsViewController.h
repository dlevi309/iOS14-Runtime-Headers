/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUPhotoEditBaseAdjustmentCellDelegate.h>
#import <libobjc.A.dylib/CEKSliderDelegate.h>

@protocol PUAdjustmentsViewDataSource, PUAdjustmentViewControllerDelegate;
@class UIImage, PXUISnappingController, PUAdjustmentInfo, UICollectionView, PUAdjustmentsViewFlowLayout, CEKSlider, NSIndexPath, PUSelectionFeedbackGenerator, NSString;

@interface PUAdjustmentsViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate, PUPhotoEditBaseAdjustmentCellDelegate, CEKSliderDelegate> {

	CGPoint _lastOffset;
	double _previousTimeStamp;
	UIImage* _selectedItemBackgroundImage;
	UIImage* _itemBackgroundImage;
	BOOL _sliderIsScrubbing;
	PXUISnappingController* _snappingController;
	BOOL _shouldDisplayControlValues;
	BOOL _shouldDisplayMappedValues;
	BOOL _didSetupControls;
	BOOL _isAnimatingScroll;
	BOOL _didPerformHapticFeedback;
	id<PUAdjustmentsViewDataSource> _dataSource;
	id<PUAdjustmentViewControllerDelegate> _delegate;
	long long _layoutDirection;
	PUAdjustmentInfo* _selectedAdjustmentInfo;
	UICollectionView* _collectionView;
	PUAdjustmentsViewFlowLayout* _collectionViewLayout;
	CEKSlider* _slider;
	NSIndexPath* _selectedIndexPath;
	PUSelectionFeedbackGenerator* _selectionFeedbackGenerator;
	CGSize _controlSize;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) PUAdjustmentsViewFlowLayout * collectionViewLayout;                     //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) CEKSlider * slider;                                                     //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                        //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (assign,nonatomic) CGSize controlSize;                                                     //@synthesize controlSize=_controlSize - In the implementation block
@property (assign,nonatomic) BOOL didSetupControls;                                                  //@synthesize didSetupControls=_didSetupControls - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingScroll;                                                 //@synthesize isAnimatingScroll=_isAnimatingScroll - In the implementation block
@property (nonatomic,retain) PUSelectionFeedbackGenerator * selectionFeedbackGenerator;              //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL didPerformHapticFeedback;                                          //@synthesize didPerformHapticFeedback=_didPerformHapticFeedback - In the implementation block
@property (assign,nonatomic,__weak) id<PUAdjustmentsViewDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PUAdjustmentViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                              //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayControlValues;                                        //@synthesize shouldDisplayControlValues=_shouldDisplayControlValues - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayMappedValues;                                         //@synthesize shouldDisplayMappedValues=_shouldDisplayMappedValues - In the implementation block
@property (nonatomic,readonly) PUAdjustmentInfo * selectedAdjustmentInfo;                            //@synthesize selectedAdjustmentInfo=_selectedAdjustmentInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setControlSize:(CGSize)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(CEKSlider *)slider;
-(CGSize)controlSize;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<PUAdjustmentViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)updateControls;
-(PUAdjustmentInfo *)selectedAdjustmentInfo;
-(UICollectionView *)collectionView;
-(void)sliderWillBeginScrolling:(id)arg1 ;
-(void)slider:(id)arg1 willUpdateValue:(double*)arg2 withVelocity:(double)arg3 ;
-(void)sliderDidEndScrolling:(id)arg1 ;
-(BOOL)canToggleCell:(id)arg1 ;
-(void)sliderWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)didToggleCell:(id)arg1 ;
-(void)_updateViewLayout;
-(void)_updateSliderForControlAtIndexPath:(id)arg1 ;
-(void)_updateCollectionViewLayoutDirection:(long long)arg1 ;
-(void)_updateSelectedInfo;
-(void)resetControls;
-(void)_resetControlsAtIndexPath:(id)arg1 ;
-(id)_circularImageWithSize:(CGSize)arg1 color:(id)arg2 ;
-(void)_setupCellBackgroundImagesIfNeeded;
-(id)_backgroundImageForItemAtIndexPath:(id)arg1 ;
-(void)_updateCell:(id)arg1 withInfo:(id)arg2 ;
-(void)_sliderDidEndScrolling;
-(void)_performFeedbackIfNeeded;
-(BOOL)shouldDisplayControlValues;
-(void)setShouldDisplayControlValues:(BOOL)arg1 ;
-(BOOL)shouldDisplayMappedValues;
-(void)setShouldDisplayMappedValues:(BOOL)arg1 ;
-(BOOL)didSetupControls;
-(void)setDidSetupControls:(BOOL)arg1 ;
-(BOOL)didPerformHapticFeedback;
-(void)setDidPerformHapticFeedback:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setIsAnimatingScroll:(BOOL)arg1 ;
-(id<PUAdjustmentsViewDataSource>)dataSource;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)isAnimatingScroll;
-(PUSelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(void)setDelegate:(id<PUAdjustmentViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setDataSource:(id<PUAdjustmentsViewDataSource>)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)setSelectionFeedbackGenerator:(PUSelectionFeedbackGenerator *)arg1 ;
-(void)viewDidLoad;
-(long long)preferredUserInterfaceStyle;
-(void)setSlider:(CEKSlider *)arg1 ;
-(void)sliderValueChanged:(id)arg1 ;
-(void)setCollectionViewLayout:(PUAdjustmentsViewFlowLayout *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(PUAdjustmentsViewFlowLayout *)collectionViewLayout;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setLayoutDirection:(long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)layoutDirection;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

