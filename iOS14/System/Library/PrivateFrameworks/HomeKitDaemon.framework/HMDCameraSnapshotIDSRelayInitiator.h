/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraSnapshotIDSRelay.h>
#import <libobjc.A.dylib/IDSSessionDelegate.h>

@protocol HMDCameraSnapshotIDSRelayInitiatorDelegate, OS_dispatch_source;
@class HMFActivity, IDSSession, HMDDevice, NSMutableData, NSObject, NSString;

@interface HMDCameraSnapshotIDSRelayInitiator : HMDCameraSnapshotIDSRelay <IDSSessionDelegate> {

	HMFActivity* _activity;
	BOOL _idsSessionStarted;
	IDSSession* _idsSession;
	id<HMDCameraSnapshotIDSRelayInitiatorDelegate> _delegate;
	HMDDevice* _device;
	NSMutableData* _data;
	NSObject*<OS_dispatch_source> _socketSource;

}

@property (retain) IDSSession * idsSession;                                                       //@synthesize idsSession=_idsSession - In the implementation block
@property (__weak,readonly) id<HMDCameraSnapshotIDSRelayInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL idsSessionStarted;                                                        //@synthesize idsSessionStarted=_idsSessionStarted - In the implementation block
@property (readonly) HMDDevice * device;                                                          //@synthesize device=_device - In the implementation block
@property (retain) NSMutableData * data;                                                          //@synthesize data=_data - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> socketSource;                                    //@synthesize socketSource=_socketSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraSnapshotIDSRelayInitiatorDelegate>)delegate;
-(void)sendData:(id)arg1 ;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 ;
-(void)setData:(NSMutableData *)arg1 ;
-(HMDDevice *)device;
-(NSMutableData *)data;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)dealloc;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3 device:(id)arg4 delegate:(id)arg5 ;
-(void)sendIDSInvitation;
-(void)_sendData;
-(BOOL)idsSessionStarted;
-(void)_startDataTransfer;
-(void)_callFileTransferFailed:(id)arg1 ;
-(void)setSocketSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)socketSource;
-(void)setIdsSessionStarted:(BOOL)arg1 ;
@end

