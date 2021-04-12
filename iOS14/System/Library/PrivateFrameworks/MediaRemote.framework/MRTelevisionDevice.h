/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRTransportExternalDevice.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, RTIInputSystemSourceSession, NSString;

@interface MRTelevisionDevice : MRTransportExternalDevice <RTIInputSystemPayloadDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _hiliteMode;
	unsigned _gameControllerInputMode;
	/*^block*/id _gameControllerInputModeCallback;
	NSObject*<OS_dispatch_queue> _gameControllerInputModeCallbackQueue;
	/*^block*/id _gameControllerPropertiesCallback;
	NSObject*<OS_dispatch_queue> _gameControllerPropertiesCallbackQueue;
	/*^block*/id _recordingStateCallback;
	NSObject*<OS_dispatch_queue> _recordingStateCallbackQueue;
	/*^block*/id _textInputCallback;
	NSObject*<OS_dispatch_queue> _textInputCallbackQueue;
	/*^block*/id _rtiCallback;
	NSObject*<OS_dispatch_queue> _rtiCallbackQueue;
	RTIInputSystemSourceSession* _rtiSourceSession;
	/*^block*/id _hiliteModeCallback;
	NSObject*<OS_dispatch_queue> _hiliteModeCallbackQueue;

}

@property (nonatomic,copy) id gameControllerInputModeCallback;                                                //@synthesize gameControllerInputModeCallback=_gameControllerInputModeCallback - In the implementation block
@property (assign,nonatomic) unsigned gameControllerInputMode;                                                //@synthesize gameControllerInputMode=_gameControllerInputMode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> gameControllerInputModeCallbackQueue;               //@synthesize gameControllerInputModeCallbackQueue=_gameControllerInputModeCallbackQueue - In the implementation block
@property (nonatomic,copy) id gameControllerPropertiesCallback;                                               //@synthesize gameControllerPropertiesCallback=_gameControllerPropertiesCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> gameControllerPropertiesCallbackQueue;              //@synthesize gameControllerPropertiesCallbackQueue=_gameControllerPropertiesCallbackQueue - In the implementation block
@property (nonatomic,copy) id recordingStateCallback;                                                         //@synthesize recordingStateCallback=_recordingStateCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordingStateCallbackQueue;                        //@synthesize recordingStateCallbackQueue=_recordingStateCallbackQueue - In the implementation block
@property (nonatomic,copy) id textInputCallback;                                                              //@synthesize textInputCallback=_textInputCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> textInputCallbackQueue;                             //@synthesize textInputCallbackQueue=_textInputCallbackQueue - In the implementation block
@property (nonatomic,copy) id rtiCallback;                                                                    //@synthesize rtiCallback=_rtiCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> rtiCallbackQueue;                                   //@synthesize rtiCallbackQueue=_rtiCallbackQueue - In the implementation block
@property (nonatomic,retain) RTIInputSystemSourceSession * rtiSourceSession;                                  //@synthesize rtiSourceSession=_rtiSourceSession - In the implementation block
@property (nonatomic,copy) id hiliteModeCallback;                                                             //@synthesize hiliteModeCallback=_hiliteModeCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> hiliteModeCallbackQueue;                            //@synthesize hiliteModeCallbackQueue=_hiliteModeCallbackQueue - In the implementation block
@property (nonatomic,readonly) BOOL hiliteMode;                                                               //@synthesize hiliteMode=_hiliteMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleTextActionPayload:(id)arg1 ;
-(id)initWithTransport:(id)arg1 ;
-(BOOL)hiliteMode;
-(void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)setRtiCallback:(id)arg1 ;
-(void)setGameControllerInputModeCallback:(id)arg1 ;
-(void)setTextInputCallback:(id)arg1 ;
-(void)setGameControllerInputModeCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setGameControllerPropertiesCallback:(id)arg1 ;
-(void)setGameControllerPropertiesCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTextInputCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRtiCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRecordingStateCallback:(id)arg1 ;
-(void)setHiliteModeCallback:(id)arg1 ;
-(void)setRecordingStateCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHiliteModeCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setGameControllerInputMode:(unsigned)arg1 ;
-(id)textInputCallback;
-(id)rtiCallback;
-(void)setRtiSourceSession:(RTIInputSystemSourceSession *)arg1 ;
-(void)setGameControllerInputModeCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setTextEditingCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setGameControllerPropertiesCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setRTICallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setVoiceRecordingStateCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)exitHiliteMode;
-(void)setHiliteModeCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(id)currentClientUpdatesConfigMessage;
-(void)registerTouchDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendTouchEvent:(MRHIDTouchEvent)arg1 toVirtualDeviceWithID:(unsigned long long)arg2 ;
-(void)getTextEditingSessionWithReplyQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTextOnActiveTextEditingSessionWithText:(id)arg1 ;
-(void)insertTextIntoActiveTextEditingSessionWithText:(id)arg1 ;
-(void)deleteBackwardInActiveTextEditingSession;
-(void)clearActiveTextEditingSessionData;
-(void)getRTISessionWithReplyQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerGameControllerWithProperties:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unregisterGameController:(unsigned long long)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2 ;
-(void)registerVoiceInputDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned)gameControllerInputMode;
-(void)processVoiceInputAudioDataForDeviceID:(unsigned)arg1 withBuffer:(id)arg2 time:(SCD_Struct_MR14)arg3 gain:(float)arg4 ;
-(id)gameControllerInputModeCallback;
-(NSObject*<OS_dispatch_queue>)gameControllerInputModeCallbackQueue;
-(id)gameControllerPropertiesCallback;
-(NSObject*<OS_dispatch_queue>)gameControllerPropertiesCallbackQueue;
-(id)recordingStateCallback;
-(NSObject*<OS_dispatch_queue>)recordingStateCallbackQueue;
-(NSObject*<OS_dispatch_queue>)textInputCallbackQueue;
-(NSObject*<OS_dispatch_queue>)rtiCallbackQueue;
-(RTIInputSystemSourceSession *)rtiSourceSession;
-(id)hiliteModeCallback;
-(NSObject*<OS_dispatch_queue>)hiliteModeCallbackQueue;
-(void)wake;
@end
