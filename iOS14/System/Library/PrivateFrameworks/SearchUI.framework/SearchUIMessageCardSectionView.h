/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/CKBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKAudioControllerDelegate.h>

@class CKBalloonView, CKVibrantBalloonContainerView, CKAudioController, NUIContainerBoxView, NSString;

@interface SearchUIMessageCardSectionView : SearchUICardSectionView <CKBalloonViewDelegate, CKAudioControllerDelegate> {

	CKBalloonView* _balloonView;
	CKVibrantBalloonContainerView* _vibrantBalloon;
	CKAudioController* _audioController;

}

@property (nonatomic,retain) NUIContainerBoxView * contentView; 
@property (nonatomic,retain) CKBalloonView * balloonView;                                 //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) CKVibrantBalloonContainerView * vibrantBalloon;              //@synthesize vibrantBalloon=_vibrantBalloon - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;                         //@synthesize audioController=_audioController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)balloonViewLongTouched:(id)arg1 ;
-(void)balloonViewShowInlineReply:(id)arg1 ;
-(void)balloonViewTapped:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)balloonViewDoubleTapped:(id)arg1 ;
-(void)balloonViewSelected:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)balloonViewTextViewDidChangeSelection:(id)arg1 selectedText:(id)arg2 textView:(id)arg3 ;
-(void)liveBalloonTouched:(id)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 userDidDragOutsideBalloonWithPoint:(CGPoint)arg2 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)balloonViewShouldCopyToPasteboard:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(CKBalloonView *)balloonView;
-(void)didMoveToWindow;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(id)audioBalloonViewWithFileURL:(id)arg1 ;
-(id)textBalloonView;
-(void)balloonViewRequestsDeselection:(id)arg1 ;
-(void)balloonViewSelected:(id)arg1 toggleSelection:(BOOL)arg2 ;
-(CKVibrantBalloonContainerView *)vibrantBalloon;
-(void)setVibrantBalloon:(CKVibrantBalloonContainerView *)arg1 ;
-(CKAudioController *)audioController;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(id)setupContentView;
@end

