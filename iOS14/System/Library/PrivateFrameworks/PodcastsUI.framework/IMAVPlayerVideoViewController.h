/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/

#import <AVKit/AVPlayerViewController.h>

@class IMAVPlayer;

@interface IMAVPlayerVideoViewController : AVPlayerViewController {

	IMAVPlayer* _im_player;

}

@property (assign,nonatomic,__weak) IMAVPlayer * im_player;              //@synthesize im_player=_im_player - In the implementation block
-(void)mediaItemDidChange;
-(id)initWithPlayer:(id)arg1 ;
-(void)setIm_player:(IMAVPlayer *)arg1 ;
-(void)playbackSpeedDidChange;
-(IMAVPlayer *)im_player;
@end

