/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <AVKit/AVPlayerViewController.h>
#import <libobjc.A.dylib/VUIPlayerViewController.h>

@class AVPlayer, UIView, NSString, NSArray, UIViewController, AVPlayerViewControllerCustomControlsView;

@interface VUIAVPlayerViewController : AVPlayerViewController <VUIPlayerViewController> {

	BOOL _allowAutorotate;

}

@property (assign,nonatomic) BOOL allowAutorotate;                                                         //@synthesize allowAutorotate=_allowAutorotate - In the implementation block
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback; 
@property (assign,nonatomic) BOOL requiresLinearPlayback; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (nonatomic,copy) NSArray * customControlItems; 
@property (assign,nonatomic) BOOL playbackControlsIncludeTransportControls; 
@property (assign,nonatomic) BOOL playbackControlsIncludeDisplayModeControls; 
@property (assign,nonatomic) BOOL playbackControlsIncludeVolumeControls; 
@property (nonatomic,readonly) UIViewController * viewControllerForFullScreenPresentation; 
@property (nonatomic,readonly) AVPlayerViewControllerCustomControlsView * customControlsView; 
@property (nonatomic,readonly) CGSize videoDisplaySize; 
@property (nonatomic,readonly) double videoDisplayScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)allowAutorotate;
-(void)setAllowAutorotate:(BOOL)arg1 ;
@end

