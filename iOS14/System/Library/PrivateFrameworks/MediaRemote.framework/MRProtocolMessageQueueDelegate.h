/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MRProtocolMessageQueueDelegate <NSObject>
@required
-(unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
-(void)messageQueue:(id)arg1 didSendMessage:(id)arg2;
-(void)messageQueue:(id)arg1 didPurgeMessage:(id)arg2;

@end

