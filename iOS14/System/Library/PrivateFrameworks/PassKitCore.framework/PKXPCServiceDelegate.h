/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKXPCServiceDelegate <NSObject>
@optional
-(void)remoteServiceDidResume:(id)arg1;
-(void)remoteServiceDidSuspend:(id)arg1;

@required
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;

@end

