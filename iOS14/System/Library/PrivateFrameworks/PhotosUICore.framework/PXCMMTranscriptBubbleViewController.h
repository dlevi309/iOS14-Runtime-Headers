/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTranscriptBubbleViewController.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXTouchingUIGestureRecognizerDelegate.h>

@protocol PXUIImageProvider, PXCMMTranscriptBubbleTouchDelegate;
@class PHPhotoLibrary, PHFetchResult, PXMomentShareStatusPresentation, PXCMMTranscriptBubbleView, PXCMMTranscriptBubbleStatusView, PXCMMSpecManager, PXCMMPreviewAsset, PXCMMPreviewUIImageProvider, NSURL, NSError, PHMomentShare, NSString;

@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXTouchingUIGestureRecognizerDelegate> {

	PHPhotoLibrary* _photoLibrary;
	PHFetchResult* _backingFetchResult;
	PHFetchResult* _keyAssetFetch;
	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	long long _saveInProgressTotal;
	PXCMMTranscriptBubbleView* _bubbleView;
	PXCMMTranscriptBubbleStatusView* _errorStatusView;
	PXCMMTranscriptBubbleStatusView* _loadingStatusView;
	id<PXUIImageProvider> _mediaProvider;
	PXCMMSpecManager* _specManager;
	PXCMMPreviewAsset* _previewAsset;
	PXCMMPreviewUIImageProvider* _previewImageProvider;
	BOOL _readyForBubbleStateTransitions;
	BOOL _isExpungingAndRefetching;
	BOOL _triggeredForcedSync;
	BOOL _isSender;
	BOOL _isPending;
	BOOL _highlighted;
	NSURL* _url;
	id<PXCMMTranscriptBubbleTouchDelegate> _touchDelegate;
	long long _bubbleState;
	long long _targetState;
	NSError* _error;

}

@property (assign,nonatomic) long long bubbleState;                                                        //@synthesize bubbleState=_bubbleState - In the implementation block
@property (assign,nonatomic) long long targetState;                                                        //@synthesize targetState=_targetState - In the implementation block
@property (nonatomic,readonly) PHMomentShare * momentShare; 
@property (nonatomic,retain) NSError * error;                                                              //@synthesize error=_error - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                        //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) PXMomentShareStatusPresentation * momentShareStatusPresentation;              //@synthesize momentShareStatusPresentation=_momentShareStatusPresentation - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isSender;                                                              //@synthesize isSender=_isSender - In the implementation block
@property (nonatomic,readonly) BOOL isPending;                                                             //@synthesize isPending=_isPending - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMTranscriptBubbleTouchDelegate> touchDelegate;                  //@synthesize touchDelegate=_touchDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_registerPermanentFailureURL:(id)arg1 ;
+(BOOL)_isPermanentFailureURL:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(void)setTouchDelegate:(id<PXCMMTranscriptBubbleTouchDelegate>)arg1 ;
-(id<PXCMMTranscriptBubbleTouchDelegate>)touchDelegate;
-(id)init;
-(long long)targetState;
-(BOOL)isPending;
-(BOOL)isSender;
-(void)setError:(NSError *)arg1 ;
-(void)setTargetState:(long long)arg1 ;
-(NSURL *)url;
-(NSError *)error;
-(NSString *)description;
-(void)_tapGesture:(id)arg1 ;
-(void)viewDidLoad;
-(CGSize)contentSizeThatFits:(CGSize)arg1 ;
-(BOOL)isHighlighted;
-(id)initWithURL:(id)arg1 isSender:(BOOL)arg2 isPending:(BOOL)arg3 ;
-(void)setBubbleState:(long long)arg1 ;
-(id)_primaryDescription;
-(id)_secondaryDescription;
-(id)_debugStatusDescription;
-(BOOL)_canFetchAssetsFromMomentShare:(id)arg1 ;
-(long long)bubbleState;
-(id)_fetchKeyAssetsFromBackingCollection;
-(void)_fetchMomentShareFromNetworkURL:(id)arg1 ;
-(void)_momentShareURL:(id)arg1 fetchDidFailWithError:(id)arg2 ;
-(void)_autoAcceptMomentShareIfNeeded:(id)arg1 ;
-(void)_acceptMomentShareIfNeeded:(id)arg1 ;
-(void)_triggerForcedSyncIfNeeded;
-(void)_retryMomentShareFetch;
-(BOOL)_shouldNavigateToContent;
-(BOOL)_shouldRetryOnTap;
-(BOOL)_shouldOpenInSafari;
-(BOOL)_shouldOpenCloudSettings;
-(void)_doubleTapGesture:(id)arg1 ;
-(void)_longPressGesture:(id)arg1 ;
-(BOOL)_shouldShowContent;
-(void)_updateBubbleView;
-(void)_updateMomentShareStatusPresentation;
-(void)_updateBubbleState;
-(void)_ensureBubbleStateTransition;
-(void)_readyForStateTransition;
-(void)_updateContent;
-(id)initWithCoder:(id)arg1 ;
-(PHMomentShare *)momentShare;
-(void)touchingUIGestureRecognizerWillBeginTouching:(id)arg1 ;
-(void)touchingUIGestureRecognizerWillEndTouching:(id)arg1 ;
-(void)_panGesture:(id)arg1 ;
-(CGSize)workaroundSizeForSize:(CGSize)arg1 ;
-(void)setMomentShareStatusPresentation:(PXMomentShareStatusPresentation *)arg1 ;
-(PXMomentShareStatusPresentation *)momentShareStatusPresentation;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

