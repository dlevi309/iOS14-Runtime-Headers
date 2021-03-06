/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <libobjc.A.dylib/SkipTimeIntentHandling.h>

@interface SiriPlaybackControlIntents.SkipTimeIntentHandler : NSObject <SkipTimeIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSkipTime:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDurationForSkipTime:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDevicesForSkipTime:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSkipTime:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

