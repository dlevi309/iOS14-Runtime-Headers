/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/


@protocol IDSPushHandlerDelegate <NSObject>
@optional
-(void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;
-(void)handler:(id)arg1 receivedNoStorageResponseForTopic:(id)arg2 messageContext:(id)arg3;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 checkpointTrace:(id)arg5 messageContext:(id)arg6;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forUnknownTopic:(id)arg3 messageContext:(id)arg4;
-(void)handler:(id)arg1 isConnectedChanged:(BOOL)arg2;
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2;

@end

