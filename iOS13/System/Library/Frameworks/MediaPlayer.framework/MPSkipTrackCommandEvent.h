/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent {

	BOOL _requestingDefermentToPlaybackQueuePosition;

}

@property (getter=isRequestingDefermentToPlaybackQueuePosition,nonatomic,readonly) BOOL requestingDefermentToPlaybackQueuePosition;              //@synthesize requestingDefermentToPlaybackQueuePosition=_requestingDefermentToPlaybackQueuePosition - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(BOOL)isRequestingDefermentToPlaybackQueuePosition;
@end

