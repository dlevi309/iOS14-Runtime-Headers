/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXEffectEditorViewDelegate.h>
#import <libobjc.A.dylib/CFXFullScreenTextEditViewControllerDelegate.h>
#import <libobjc.A.dylib/JFXCompositionPlayerViewControllerDelegate.h>
#import <libobjc.A.dylib/JFXExportDelegate.h>
#import <libobjc.A.dylib/CFXPlayButtonViewDelegate.h>
#import <UIKit/UIViewWindowListener.h>

@protocol CFXPreviewViewControllerDelegate;
@class CFXControlsViewController, UIView, UIButton, NSLayoutConstraint, CFXEffectBrowserContentPresenterViewController, UISlider, CFXPlayButtonView, CFXMediaItem, CFXClipPlayerViewController, JFXCompositionExporter, JFXEffectsPreviewGenerator, JFXOrientationMonitor, CFXEffectEditorView, NSString, CFXClip;

@interface CFXPreviewViewController : UIViewController <CFXEffectEditorViewDelegate, CFXFullScreenTextEditViewControllerDelegate, JFXCompositionPlayerViewControllerDelegate, JFXExportDelegate, CFXPlayButtonViewDelegate, UIViewWindowListener> {

	BOOL _presentingFilterPicker;
	BOOL _capturedWithBackCamera;
	BOOL _userInterfaceHidden;
	BOOL _saveMediaItemToFunCamPhotosAlbumUponExport;
	BOOL _dockIsMagnified;
	id<CFXPreviewViewControllerDelegate> _delegate;
	CFXControlsViewController* _previewControls;
	UIView* _playerContainerView;
	UIView* _appStripAndPreviewControlsContainer;
	UIButton* _exportButton;
	NSLayoutConstraint* _previewControlsContainerHeightConstraint;
	NSLayoutConstraint* _previewControlsContainerWidthConstraint;
	NSLayoutConstraint* _previewControlsContainerTrailingConstraint;
	NSLayoutConstraint* _previewControlsContainerLeadingConstraint;
	NSLayoutConstraint* _previewControlsContainerTopConstraint;
	unsigned long long _appliedDirectOverlayEditingGestures;
	UIView* _bottomControlsDrawer;
	double _dockMagnifiedHeightDelta;
	CFXEffectBrowserContentPresenterViewController* _effectBrowserContentPresenterViewController;
	UISlider* _playbackSlider;
	UIView* _previewControlsContainerView;
	CFXPlayButtonView* _playButton;
	CFXMediaItem* _mediaItem;
	CFXClipPlayerViewController* _previewPlayer;
	JFXCompositionExporter* _exporter;
	JFXEffectsPreviewGenerator* _stillImagePreviewGenerator;
	JFXOrientationMonitor* _orientationMonitor;
	CFXEffectEditorView* _effectEditor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIView * playerContainerView;                                                                       //@synthesize playerContainerView=_playerContainerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * appStripAndPreviewControlsContainer;                                                       //@synthesize appStripAndPreviewControlsContainer=_appStripAndPreviewControlsContainer - In the implementation block
@property (assign,nonatomic,__weak) UIButton * exportButton;                                                                            //@synthesize exportButton=_exportButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * previewControlsContainerHeightConstraint;                                             //@synthesize previewControlsContainerHeightConstraint=_previewControlsContainerHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * previewControlsContainerWidthConstraint;                                              //@synthesize previewControlsContainerWidthConstraint=_previewControlsContainerWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * previewControlsContainerTrailingConstraint;                                           //@synthesize previewControlsContainerTrailingConstraint=_previewControlsContainerTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * previewControlsContainerLeadingConstraint;                                            //@synthesize previewControlsContainerLeadingConstraint=_previewControlsContainerLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * previewControlsContainerTopConstraint;                                                //@synthesize previewControlsContainerTopConstraint=_previewControlsContainerTopConstraint - In the implementation block
@property (assign,getter=userInterfaceIsHidden,nonatomic) BOOL userInterfaceHidden;                                                     //@synthesize userInterfaceHidden=_userInterfaceHidden - In the implementation block
@property (assign,nonatomic) BOOL saveMediaItemToFunCamPhotosAlbumUponExport;                                                           //@synthesize saveMediaItemToFunCamPhotosAlbumUponExport=_saveMediaItemToFunCamPhotosAlbumUponExport - In the implementation block
@property (assign,nonatomic) unsigned long long appliedDirectOverlayEditingGestures;                                                    //@synthesize appliedDirectOverlayEditingGestures=_appliedDirectOverlayEditingGestures - In the implementation block
@property (nonatomic,retain) UIView * bottomControlsDrawer;                                                                             //@synthesize bottomControlsDrawer=_bottomControlsDrawer - In the implementation block
@property (assign,nonatomic) BOOL dockIsMagnified;                                                                                      //@synthesize dockIsMagnified=_dockIsMagnified - In the implementation block
@property (assign,nonatomic) double dockMagnifiedHeightDelta;                                                                           //@synthesize dockMagnifiedHeightDelta=_dockMagnifiedHeightDelta - In the implementation block
@property (nonatomic,retain) CFXEffectBrowserContentPresenterViewController * effectBrowserContentPresenterViewController;              //@synthesize effectBrowserContentPresenterViewController=_effectBrowserContentPresenterViewController - In the implementation block
@property (nonatomic,retain) UISlider * playbackSlider;                                                                                 //@synthesize playbackSlider=_playbackSlider - In the implementation block
@property (assign,nonatomic,__weak) UIView * previewControlsContainerView;                                                              //@synthesize previewControlsContainerView=_previewControlsContainerView - In the implementation block
@property (assign,nonatomic,__weak) CFXPlayButtonView * playButton;                                                                     //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) CFXMediaItem * mediaItem;                                                                                  //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) CFXClip * previewClip; 
@property (nonatomic,retain) CFXClipPlayerViewController * previewPlayer;                                                               //@synthesize previewPlayer=_previewPlayer - In the implementation block
@property (nonatomic,retain) JFXCompositionExporter * exporter;                                                                         //@synthesize exporter=_exporter - In the implementation block
@property (nonatomic,retain) JFXEffectsPreviewGenerator * stillImagePreviewGenerator;                                                   //@synthesize stillImagePreviewGenerator=_stillImagePreviewGenerator - In the implementation block
@property (nonatomic,retain) JFXOrientationMonitor * orientationMonitor;                                                                //@synthesize orientationMonitor=_orientationMonitor - In the implementation block
@property (nonatomic,retain) CFXEffectEditorView * effectEditor;                                                                        //@synthesize effectEditor=_effectEditor - In the implementation block
@property (nonatomic,readonly) CGSize normalizedMinimumHitTestArea; 
@property (assign,nonatomic,__weak) id<CFXPreviewViewControllerDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * effectsPickerDrawer; 
@property (assign,getter=isPresentingFilterPicker,nonatomic) BOOL presentingFilterPicker;                                               //@synthesize presentingFilterPicker=_presentingFilterPicker - In the implementation block
@property (assign,nonatomic) BOOL capturedWithBackCamera;                                                                               //@synthesize capturedWithBackCamera=_capturedWithBackCamera - In the implementation block
@property (assign,nonatomic,__weak) CFXControlsViewController * previewControls;                                                        //@synthesize previewControls=_previewControls - In the implementation block
+(void)setLiveCaptureSnapshotView:(id)arg1 ;
+(id)liveCaptureSnapshotView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setMediaItem:(CFXMediaItem *)arg1 ;
-(id<CFXPreviewViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CFXPlayButtonView *)playButton;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(void)exportMediaItemToFileURL:(id)arg1 ;
-(void)setEffectsPickerDrawer:(UIView *)arg1 ;
-(void)setDelegate:(id<CFXPreviewViewControllerDelegate>)arg1 ;
-(JFXCompositionExporter *)exporter;
-(CFXMediaItem *)mediaItem;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setPlayButton:(CFXPlayButtonView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)playbackDidStart:(id)arg1 ;
-(CFXClip *)previewClip;
-(id)bottomControlsSnapshot;
-(CGPoint)bottomControlsCenter;
-(void)hideBottomControls;
-(void)showBottomControls;
-(UIView *)effectsPickerDrawer;
-(void)setPresentingFilterPicker:(BOOL)arg1 ;
-(void)addOverlayEffect:(id)arg1 atScreenLocation:(CGPoint)arg2 atScreenSize:(CGSize)arg3 rotationAngle:(double)arg4 completion:(/*^block*/id)arg5 ;
-(CFXClipPlayerViewController *)previewPlayer;
-(void)addEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateUIForDockMagnify:(BOOL)arg1 dockHeightDelta:(double)arg2 ;
-(void)filterPickerPreviewBackgroundImageAtSizeInPixels:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCapturedWithBackCamera:(BOOL)arg1 ;
-(CFXControlsViewController *)previewControls;
-(CFXEffectBrowserContentPresenterViewController *)effectBrowserContentPresenterViewController;
-(BOOL)capturedWithBackCamera;
-(void)configureUIForOrientation;
-(JFXOrientationMonitor *)orientationMonitor;
-(void)setOrientationMonitor:(JFXOrientationMonitor *)arg1 ;
-(CGSize)normalizedMinimumHitTestArea;
-(BOOL)dockIsMagnified;
-(void)setDockIsMagnified:(BOOL)arg1 ;
-(void)setDockMagnifiedHeightDelta:(double)arg1 ;
-(double)dockMagnifiedHeightDelta;
-(BOOL)shouldExportOnly;
-(UIButton *)exportButton;
-(UIView *)playerContainerView;
-(void)CFX_setFrameAndRenderSizes;
-(void)setPlayButtonHiddenIfPossible:(BOOL)arg1 ;
-(void)setEffectAnimationsEnabledIfPossible:(BOOL)arg1 ;
-(NSLayoutConstraint *)previewControlsContainerHeightConstraint;
-(void)setAppliedDirectOverlayEditingGestures:(unsigned long long)arg1 ;
-(UISlider *)playbackSlider;
-(NSLayoutConstraint *)previewControlsContainerTopConstraint;
-(NSLayoutConstraint *)previewControlsContainerWidthConstraint;
-(NSLayoutConstraint *)previewControlsContainerLeadingConstraint;
-(NSLayoutConstraint *)previewControlsContainerTrailingConstraint;
-(UIView *)bottomControlsDrawer;
-(void)configureBottomControlsForOrientation;
-(void)setPreviewPlayer:(CFXClipPlayerViewController *)arg1 ;
-(void)setPreviewControls:(CFXControlsViewController *)arg1 ;
-(void)setBottomControlsDrawer:(UIView *)arg1 ;
-(UIView *)appStripAndPreviewControlsContainer;
-(UIView *)previewControlsContainerView;
-(BOOL)CFX_canApplyFaceTracking;
-(void)CFX_addEffect:(id)arg1 ;
-(void)CFX_prepareFaceTrackingDataForOverlayInsertionWithCompletion:(/*^block*/id)arg1 ;
-(void)removeEffectEditor;
-(BOOL)presentFullScreenTextEditorForEffect:(id)arg1 insertingEffect:(BOOL)arg2 ;
-(void)setStillImagePreviewGenerator:(JFXEffectsPreviewGenerator *)arg1 ;
-(JFXEffectsPreviewGenerator *)stillImagePreviewGenerator;
-(BOOL)CFX_saveImageToURL:(id)arg1 image:(id)arg2 compressionQuality:(double)arg3 asHEIF:(BOOL)arg4 metadata:(CGImageMetadataRef)arg5 ;
-(void)CFX_notifyDelegateExportMediaItemFinishedWithError:(id)arg1 ;
-(void)setSaveMediaItemToFunCamPhotosAlbumUponExport:(BOOL)arg1 ;
-(void)CFX_setIsExporting:(BOOL)arg1 ;
-(void)CFX_setEffectAnimationsEnabledIfPossible:(BOOL)arg1 updatePlayer:(BOOL)arg2 ;
-(void)CFX_exportPhotoWithEffects;
-(void)setExporter:(JFXCompositionExporter *)arg1 ;
-(void)CFX_hidePreviewUI;
-(void)CFX_showPreviewUI;
-(void)displayEffectEditorForEffect:(id)arg1 forMode:(unsigned long long)arg2 ;
-(void)CFX_togglePreviewUI;
-(unsigned long long)appliedDirectOverlayEditingGestures;
-(CFXEffectEditorView *)effectEditor;
-(BOOL)isEditingEffect;
-(void)setEffectEditor:(CFXEffectEditorView *)arg1 ;
-(CGRect)playerContentFrame;
-(void)CFX_layoutPlayerContainerView;
-(BOOL)isPresentingFilterPicker;
-(BOOL)shouldKeepPlayButtonHidden;
-(BOOL)userInterfaceIsHidden;
-(void)setUserInterfaceHidden:(BOOL)arg1 ;
-(void)updateEffectEditorLayout;
-(void)updateFullScreenTextEditorLayout;
-(BOOL)saveMediaItemToFunCamPhotosAlbumUponExport;
-(void)CFX_addURLToCameraRoll:(id)arg1 isStill:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldUseFaceTracking;
-(void)CFX_addAssetWithIdentifier:(id)arg1 intoAlbum:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)CFX_addAssetAtURL:(id)arg1 resourceType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)CFX_createAlbumWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)CFX_fetchAssetWithLocalIdentifier:(id)arg1 ;
-(void)playbackTimeDidChange:(id)arg1 currentTime:(int)arg2 ;
-(void)playbackDidStop:(id)arg1 currentTime:(int)arg2 ;
-(void)playbackAreaTapped:(id)arg1 normalizedClipPoint:(CGPoint)arg2 normalizedMinimumSize:(CGSize)arg3 atTime:(int)arg4 ;
-(void)playbackAreaPanned:(id)arg1 gesture:(id)arg2 normalizedClipPoint:(CGPoint)arg3 normalizedMinimumSize:(CGSize)arg4 translationDelta:(CGPoint)arg5 atTime:(int)arg6 timeScale:(int)arg7 ;
-(void)playbackAreaPinched:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(CGPoint)arg4 normalizedMinimumSize:(CGSize)arg5 scaleDelta:(double)arg6 atTime:(int)arg7 timeScale:(int)arg8 ;
-(void)playbackAreaRotated:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(CGPoint)arg4 normalizedMinimumSize:(CGSize)arg5 rotateDelta:(double)arg6 atTime:(int)arg7 ;
-(void)playbackAreaDoubleTapped:(id)arg1 ;
-(void)exportProgressedTo:(float)arg1 ;
-(void)didFinishExport:(long long)arg1 ;
-(void)playButtonViewDidTapPlay:(id)arg1 ;
-(void)playButtonViewDidTapPause:(id)arg1 ;
-(void)view:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)exportButtonTapped:(id)arg1 ;
-(void)playbackSliderValueChanged:(id)arg1 ;
-(double)animationDurationForCompositionTransition:(id)arg1 shouldScale:(BOOL*)arg2 ;
-(CGRect)bottomControlsBounds;
-(void)setPlayerContainerView:(UIView *)arg1 ;
-(void)setAppStripAndPreviewControlsContainer:(UIView *)arg1 ;
-(void)setExportButton:(UIButton *)arg1 ;
-(void)setPreviewControlsContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPreviewControlsContainerWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPreviewControlsContainerTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPreviewControlsContainerLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPreviewControlsContainerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEffectBrowserContentPresenterViewController:(CFXEffectBrowserContentPresenterViewController *)arg1 ;
-(void)setPlaybackSlider:(UISlider *)arg1 ;
-(void)setPreviewControlsContainerView:(UIView *)arg1 ;
-(void)fullScreenTextEditViewController:(id)arg1 didBeginEditingEffect:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg1 didFinishEditingEffect:(id)arg2 withUpdatedText:(id)arg3 ;
-(void)fullScreenTextEditViewController:(id)arg1 didFinishEditingByRemovingEffect:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg1 willBeginAnimationBeforeEditingEffect:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg1 didBeginAnimationBeforeEditingEffect:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fullScreenTextEditViewController:(id)arg1 willBeginAnimationAfterEditingEffect:(id)arg2 updatedText:(id)arg3 ;
-(void)fullScreenTextEditViewController:(id)arg1 didFinishAnimationAfterEditingEffect:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)faceTrackingInterfaceOrientationForfullScreenTextEditViewController:(id)arg1 ;
-(id)effectEditorView:(id)arg1 effectAtPoint:(CGPoint)arg2 ;
-(BOOL)effectEditorView:(id)arg1 isEffectAtPoint:(CGPoint)arg2 effect:(id)arg3 ;
-(CGRect)effectEditorView:(id)arg1 frameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(CGRect)effectEditorView:(id)arg1 hitAreaBoundingFrameForEffect:(id)arg2 adjustForMinimumSize:(BOOL)arg3 relativeToBounds:(CGRect)arg4 ;
-(id)effectEditorView:(id)arg1 overlayEffectFrameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(CGPoint)effectEditorView:(id)arg1 removeButtonPositionForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(BOOL)effectEditorView:(id)arg1 isFaceTrackingEffect:(id)arg2 ;
-(BOOL)effectEditorView:(id)arg1 isFaceTrackingDataAvailableForEffect:(id)arg2 ;
-(CGPoint)effectEditorView:(id)arg1 spacingBetweenCenterPointOfEffect:(id)arg2 point:(CGPoint)arg3 relativeToBounds:(CGRect)arg4 ;
-(void)effectEditorView:(id)arg1 didTransformEffect:(id)arg2 transform:(CGAffineTransform)arg3 relativeToBounds:(CGRect)arg4 ;
-(BOOL)effectEditorView:(id)arg1 shouldEditTextForEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 didBeginEditingTextForEffect:(id)arg2 ;
-(id)effectEditorView:(id)arg1 textEditingPropertiesForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(id)effectEditorView:(id)arg1 textForEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 didEditTextForEffect:(id)arg2 newText:(id)arg3 ;
-(void)effectEditorView:(id)arg1 didEndEditingTextForEffect:(id)arg2 wasCancelled:(BOOL)arg3 ;
-(id)orientationStateForEffectEditorView:(id)arg1 ;
-(void)effectEditorView:(id)arg1 didRemoveEffect:(id)arg2 ;
-(void)effectEditorViewDidBeginEditing:(id)arg1 ;
-(void)effectEditorViewDidEndEditing:(id)arg1 ;
-(void)effectEditorView:(id)arg1 didEndEditingByTappingOutSideEffectAtScreenPoint:(CGPoint)arg2 ;
-(void)effectEditorView:(id)arg1 didMoveEffect:(id)arg2 withTouchPoint:(CGPoint)arg3 ;
-(BOOL)effectEditorView:(id)arg1 presentCustomTextEditingUI:(id)arg2 ;
-(unsigned long long)effectEditorView:(id)arg1 maximumTextLengthForEffect:(id)arg2 ;
-(BOOL)effectEditorViewShouldShowFaceReticle:(id)arg1 ;
-(SCD_Struct_JF3)CFX_previewPlayerCurrentTime;
-(void)dispatchWhenPlayerReadyForDisplayEffectUpdate:(/*^block*/id)arg1 ;
@end

