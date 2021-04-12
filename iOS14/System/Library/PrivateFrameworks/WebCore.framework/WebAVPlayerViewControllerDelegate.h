/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate_WebKitOnly.h>

@class NSString;

@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly> {

	WeakPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::EmptyCounter>* _fullscreenInterface;

}

@property (assign) VideoFullscreenInterfaceAVKit* fullscreenInterface; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VideoFullscreenInterfaceAVKit*)fullscreenInterface;
-(BOOL)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2 ;
-(BOOL)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(id)arg1 ;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1 ;
-(void)setFullscreenInterface:(VideoFullscreenInterfaceAVKit*)arg1 ;
-(void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1 ;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1 ;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
@end
