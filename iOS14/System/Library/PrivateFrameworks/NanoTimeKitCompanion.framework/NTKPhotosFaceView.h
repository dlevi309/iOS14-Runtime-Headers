/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKBasePhotosFaceView.h>
#import <libobjc.A.dylib/NTKPhotosReaderDelegate.h>

@class NTKPhotosReader, _NTKPhotoIndexGenerator, UITapGestureRecognizer, UIView, NSMutableArray, NTKCachedPhoto, NSString;

@interface NTKPhotosFaceView : NTKBasePhotosFaceView <NTKPhotosReaderDelegate> {

	unsigned _isContentLoaded : 1;
	unsigned _isTimetravelScrubbing : 1;
	unsigned _isAnalysisOperationInProgress : 1;
	unsigned _inPhotoTransition : 1;
	NTKPhotosReader* _reader;
	_NTKPhotoIndexGenerator* _generator;
	unsigned long long _currentContent;
	unsigned long long _currentAnalysisOperationID;
	UITapGestureRecognizer* _singleTapGesture;
	UIView* _photoTransitionSnapshotView;
	UIView* _photoTransitionCornerView;
	unsigned long long _queuedTransitionCount;
	unsigned long long _preloadGeneration;
	unsigned long long _numberOfPhotos;
	/*^block*/id _enqueuePreloadedPhotoCompletion;
	NSMutableArray* _preloaded;
	NSMutableArray* _toload;
	unsigned long long _deviceSizeClass;
	NTKCachedPhoto* _presentedPhoto;

}

@property (nonatomic,retain) NTKCachedPhoto * presentedPhoto;              //@synthesize presentedPhoto=_presentedPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handleSingleTap:(id)arg1 ;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_cleanupAfterEditing;
-(void)_finalizeForSnapshotting:(/*^block*/id)arg1 ;
-(void)_applyFrozen;
-(void)_updateImageToBlur;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(double)_backgroundImageAlphaForEditMode:(long long)arg1 ;
-(BOOL)_preloadNextPhoto;
-(void)_didStartPlayingIrisOnSingleTap;
-(double)_timeLabelAlphaForEditMode:(long long)arg1 ;
-(void)_updateContents:(BOOL)arg1 ;
-(void)_updateDateAttributesAnimated:(BOOL)arg1 ;
-(void)_updateForResourceDirectoryChange:(id)arg1 ;
-(void)_nextPhotoAnimated:(BOOL)arg1 preroll:(BOOL)arg2 method:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_clearPreloaded;
-(void)_resetTapAnimationState;
-(void)setPresentedPhoto:(NTKCachedPhoto *)arg1 ;
-(void)_updateDateAttributesAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_dequeueToLoadIfMatchingGeneration:(unsigned long long)arg1 ;
-(BOOL)_enqueuePreloadedPhoto:(id)arg1 ifMatchingGeneration:(unsigned long long)arg2 ;
-(void)_displayCachedPhoto:(id)arg1 animated:(BOOL)arg2 preroll:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_startBackgroundRefill;
-(NTKCachedPhoto *)presentedPhoto;
-(void)_nextPhotoReadyAnimated:(BOOL)arg1 preroll:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_animationFinished:(BOOL)arg1 ;
-(BOOL)_shouldAnimationContinue:(BOOL)arg1 ;
-(void)_animationStart;
-(id)_analysisCacheKeyFor:(id)arg1 ;
-(id)_cachedAnalysisForKey:(id)arg1 ;
-(BOOL)_canOperationProceed:(unsigned long long)arg1 ;
-(id)_createAndCachePhotoAnalysisForKey:(id)arg1 dateAlignment:(unsigned long long)arg2 image:(id)arg3 ;
-(void)_operationIsDone;
-(id)_analysisForAlignment:(unsigned long long)arg1 ;
-(void)_updateReader:(BOOL)arg1 ;
-(void)readerDidChange:(id)arg1 ;
@end

