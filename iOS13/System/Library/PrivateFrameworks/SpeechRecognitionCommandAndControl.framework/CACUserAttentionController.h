/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <libobjc.A.dylib/CMWakeGestureDelegate.h>

@protocol OS_dispatch_queue, CACUserAttentionControllerDelegate;
@class CACUserAttentionSignalProviderFactory, AWAttentionAwarenessClient, CMWakeGestureManager, NSObject, NSMutableDictionary, NSString;

@interface CACUserAttentionController : NSObject <CMWakeGestureDelegate> {

	CACUserAttentionSignalProviderFactory* _userAttentionSignalProviderFactory;
	unsigned long long _supportedAttentionAwarenessEvents;
	BOOL _deviceSupportsRaiseGestureDetection;
	AWAttentionAwarenessClient* _faceAttentionAwarenessClient;
	AWAttentionAwarenessClient* _touchAttentionAwarenessClient;
	CMWakeGestureManager* _wakeGestureManager;
	NSObject*<OS_dispatch_queue> _attentionAwarenessHandlerQueue;
	NSMutableDictionary* _attentionDetectionStatuses;
	NSObject*<OS_dispatch_queue> _asynchronousCallQueue;
	BOOL _deviceLowered;
	id<CACUserAttentionControllerDelegate> _delegate;

}

@property (assign,setter=_setDeviceLowered:,getter=_isDeviceLowered,nonatomic) BOOL deviceLowered;              //@synthesize deviceLowered=_deviceLowered - In the implementation block
@property (assign,nonatomic,__weak) id<CACUserAttentionControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CACUserAttentionControllerDelegate>)delegate;
-(void)setDelegate:(id<CACUserAttentionControllerDelegate>)arg1 ;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(BOOL)_deviceSupportsFaceDetection;
-(id)initWithSignalProviderFactory:(id)arg1 supportedAttentionAwarenessEvents:(unsigned long long)arg2 deviceSupportsRaiseGestureDetection:(BOOL)arg3 ;
-(BOOL)stopIfNeeded:(id*)arg1 ;
-(BOOL)startIfNeededForTypes:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_detectionStartedForType:(unsigned long long)arg1 ;
-(BOOL)_startFaceAttentionAwarenessClient:(id*)arg1 ;
-(void)_setDetectionStarted:(BOOL)arg1 forType:(unsigned long long)arg2 ;
-(BOOL)_startTouchAttentionAwarenessClient:(id*)arg1 ;
-(void)_startWakeGestureManagerIfNeeded;
-(BOOL)stopIfNeededForTypes:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_stopFaceAttentionAwarenessClient:(id*)arg1 ;
-(BOOL)_stopTouchAttentionAwarenessClient:(id*)arg1 ;
-(void)_stopWakeGestureManagerIfNeeded;
-(void)_handleFaceAttentionEvent:(id)arg1 ;
-(void)_handleFaceInterruptNotification:(unsigned long long)arg1 ;
-(void)_handleTouchAttentionEvent:(id)arg1 ;
-(BOOL)_isDeviceLowered;
-(void)_setDeviceLowered:(BOOL)arg1 ;
-(BOOL)_restartFaceAttentionAwarenessClient:(id*)arg1 ;
-(id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3 deviceSupportsRaiseGestureDetection:(BOOL)arg4 ;
-(BOOL)startIfNeeded:(id*)arg1 ;
-(void)startIfNeededForTypes:(unsigned long long)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
