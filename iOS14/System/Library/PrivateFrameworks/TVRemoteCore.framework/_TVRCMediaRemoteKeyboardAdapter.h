/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol _TVRCMediaRemoteKeyboardAdapterDelegate;
@class _TVRCMRTelevisionWrapper, NSString, NSMutableArray, NSTimer;

@interface _TVRCMediaRemoteKeyboardAdapter : NSObject {

	_TVRCMRTelevisionWrapper* _television;
	id<_TVRCMediaRemoteKeyboardAdapterDelegate> _delegate;
	NSString* _text;
	NSMutableArray* _typedStringsAwaitingAcknowledgement;
	NSTimer* _acknowledgementTimer;

}

@property (nonatomic,copy) NSString * text;                                                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSMutableArray * typedStringsAwaitingAcknowledgement;                     //@synthesize typedStringsAwaitingAcknowledgement=_typedStringsAwaitingAcknowledgement - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * acknowledgementTimer;                                    //@synthesize acknowledgementTimer=_acknowledgementTimer - In the implementation block
@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                                    //@synthesize television=_television - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRCMediaRemoteKeyboardAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<_TVRCMediaRemoteKeyboardAdapterDelegate>)delegate;
-(void)setText:(NSString *)arg1 ;
-(void)setDelegate:(id<_TVRCMediaRemoteKeyboardAdapterDelegate>)arg1 ;
-(NSString *)text;
-(_TVRCMRTelevisionWrapper *)television;
-(void)sessionEnded;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)userEnteredText:(id)arg1 ;
-(void)sessionBeganWithInitialText:(id)arg1 ;
-(void)receivedRemotelyUpdatedText:(id)arg1 ;
-(void)_acknowledgementTimerExpired:(id)arg1 ;
-(void)_resetTextValueToSessionValue;
-(NSMutableArray *)typedStringsAwaitingAcknowledgement;
-(void)setTypedStringsAwaitingAcknowledgement:(NSMutableArray *)arg1 ;
-(NSTimer *)acknowledgementTimer;
-(void)setAcknowledgementTimer:(NSTimer *)arg1 ;
@end

