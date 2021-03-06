/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKSessionDelegate <NSObject>
@required
-(void)sessionDidDisconnect:(id)arg1;
-(void)sessionDidInvalidate:(id)arg1;
-(id)clientIdentityForSession:(id)arg1;
-(id)trustedAnchorCertificatesForSession:(id)arg1;
-(void)session:(id)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
-(void)sessionDidLoseBeacon:(id)arg1;
-(void)sessionDidBecomeConnectable:(id)arg1;
-(void)sessionDidBecomeNotConnectable:(id)arg1;
-(void)session:(id)arg1 didConnectWithTransport:(id)arg2;
-(void)session:(id)arg1 encounteredUntrustedConnection:(/*^block*/id)arg2;

@end

