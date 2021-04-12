/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class IKAppDocument, SKUILayoutCache, SKUIViewElementLayoutContext, SKUIHorizontalLockupView, SUPlayerStatus, UITapGestureRecognizer, NSString;

@interface SKUIPreviewOverlayViewController : SKUIViewController <SKUIItemStateCenterObserver, SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, UIGestureRecognizerDelegate> {

	long long _backgroundStyle;
	IKAppDocument* _document;
	SKUILayoutCache* _layoutCache;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIHorizontalLockupView* _lockupView;
	SUPlayerStatus* _previewStatus;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (assign,nonatomic) long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(id)initWithDocument:(id)arg1 ;
-(void)_tapAction:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)prepareOverlayView;
-(void)showPreviewProgressWithStatus:(id)arg1 animated:(BOOL)arg2 ;
-(id)_layoutCache;
-(double)_overlayWidth;
-(void)reloadOverlayView;
@end
