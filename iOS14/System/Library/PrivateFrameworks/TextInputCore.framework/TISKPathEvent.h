/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate, TIKeyboardTouchEvent;

@interface TISKPathEvent : TISKEvent {

	TIKeyboardCandidate* _candidate;
	TIKeyboardTouchEvent* _pathTouchUp;

}
-(id)description;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(BOOL)isMissingATouch;
-(id)init:(id)arg1 candidate:(id)arg2 order:(long long)arg3 ;
@end

