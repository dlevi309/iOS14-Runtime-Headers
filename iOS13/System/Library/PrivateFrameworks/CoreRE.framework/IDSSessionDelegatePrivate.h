/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/


@protocol IDSSessionDelegatePrivate <IDSSessionDelegate>
@optional
-(void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(BOOL)arg3;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;
-(void)session:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3;
-(void)session:(id)arg1 receivedSessionEndFromID:(id)arg2 withData:(id)arg3;
-(void)session:(id)arg1 invitationSentToTokens:(id)arg2;

@end

