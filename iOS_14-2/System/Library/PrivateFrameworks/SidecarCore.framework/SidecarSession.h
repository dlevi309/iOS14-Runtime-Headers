/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/


@protocol SidecarSessionDelegate, OS_dispatch_queue;
@class SidecarDevice, SidecarService, NSUUID, NSObject;

@interface SidecarSession : NSObject {

	id<SidecarSessionDelegate> _delegate;
	SidecarDevice* _device;
	SidecarService* _service;
	long long _transport;
	NSUUID* _uuid;
	long long _dataLink;
	long long _handle;
	unsigned _isRemote : 1;
	Aq _state;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) long long handle; 
@property (readonly) NSUUID * uuid;                                   //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long transport; 
@property (nonatomic,readonly) int dataLink; 
@property (__weak) id<SidecarSessionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SidecarDevice * device; 
@property (nonatomic,readonly) SidecarService * service; 
-(NSUUID *)uuid;
-(long long)handle;
-(long long)transport;
-(id)init;
-(id<SidecarSessionDelegate>)delegate;
-(SidecarDevice *)device;
-(void)setDelegate:(id<SidecarSessionDelegate>)arg1 ;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_closeWithError:(id)arg1 ;
-(void)sendMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SidecarService *)service;
-(void)dealloc;
-(id)initWithService:(id)arg1 device:(id)arg2 ;
-(void)closeWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)dataLink;
-(void)connectWithTransport:(long long)arg1 reconnectToSession:(id)arg2 ;
-(id)initWithRemote:(id)arg1 device:(id)arg2 dataLink:(int)arg3 service:(id)arg4 error:(id*)arg5 ;
-(void)timeSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)listenForStreamType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)openStreamForType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
@end
