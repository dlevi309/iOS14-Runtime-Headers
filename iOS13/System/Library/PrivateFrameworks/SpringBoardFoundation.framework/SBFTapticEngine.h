/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@protocol OS_dispatch_queue;
@class _UITapticEngine, NSMutableSet, NSObject;

@interface SBFTapticEngine : NSObject {

	_UITapticEngine* _tapticEngine;
	NSMutableSet* _previewReasons;
	NSMutableSet* _commitReasons;
	NSMutableSet* _cancelledReasons;
	NSObject*<OS_dispatch_queue> _previewReasonsQueue;
	NSObject*<OS_dispatch_queue> _commitReasonsQueue;
	NSObject*<OS_dispatch_queue> _cancelledReasonsQueue;
	BOOL _supportsFeedbackActuation;

}

@property (nonatomic,readonly) BOOL supportsFeedbackActuation;              //@synthesize supportsFeedbackActuation=_supportsFeedbackActuation - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)actuateFeedback:(long long)arg1 ;
-(BOOL)supportsFeedbackActuation;
-(void)warmUpForFeedback:(unsigned long long)arg1 withReason:(id)arg2 ;
-(void)coolDownForFeedback:(unsigned long long)arg1 withReason:(id)arg2 ;
@end

