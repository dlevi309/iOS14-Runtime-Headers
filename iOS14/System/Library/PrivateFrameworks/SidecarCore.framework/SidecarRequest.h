/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/

#import <SidecarCore/SidecarCore-Structs.h>
#import <SidecarCore/SidecarTransferDelegate.h>
#import <SidecarCore/SidecarSessionDelegate.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol SidecarRequestDelegate, SidecarMessage;
@class NSProgress, NSArray, SidecarDevice, SidecarSession, SidecarService, SidecarTransferReceiver, SidecarMapTable, NSError, NSUUID, NSString, NSData;

@interface SidecarRequest : NSObject <SidecarTransferDelegate, SidecarSessionDelegate, NSProgressReporting> {

	id<SidecarRequestDelegate> _delegate;
	os_unfair_lock_s _lock;
	NSArray* _devices_deprecated;
	SidecarDevice* _device;
	SidecarSession* _session;
	SidecarSession* _sessionZombie;
	NSArray* _items;
	id<SidecarMessage> _message;
	NSProgress* _progress;
	SidecarService* _service;
	SidecarTransferReceiver* _transferReceiver;
	SidecarMapTable* _sendTransfers;
	NSError* _error;
	Aq _state;
	double _timeStart;
	double _timeAccept;
	double _timeTransfer;
	double _timeFinish;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) BOOL didStart; 
@property (assign,nonatomic) double timeStart;                          //@synthesize timeStart=_timeStart - In the implementation block
@property (assign,nonatomic) double timeAccept;                         //@synthesize timeAccept=_timeAccept - In the implementation block
@property (assign,nonatomic) double timeTransfer;                       //@synthesize timeTransfer=_timeTransfer - In the implementation block
@property (assign,nonatomic) double timeFinish;                         //@synthesize timeFinish=_timeFinish - In the implementation block
@property (__weak) id<SidecarRequestDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSError * error; 
@property (nonatomic,readonly) id<SidecarMessage> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) SidecarSession * session; 
@property (readonly) NSString * localizedItemName; 
@property (readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) SidecarService * service; 
@property (copy) NSArray * devices; 
@property (nonatomic,readonly) SidecarDevice * device; 
@property (readonly) NSProgress * progress; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) NSArray * items; 
@property (readonly) NSString * localizedDescription; 
@property (readonly) NSData * data; 
@property (readonly) NSString * uniformTypeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSArray *)devices;
-(id<SidecarMessage>)message;
-(NSUUID *)uuid;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(NSProgress *)progress;
-(void)_sendMessage:(id)arg1 ;
-(id<SidecarRequestDelegate>)delegate;
-(void)start;
-(void)accept;
-(NSString *)uniformTypeIdentifier;
-(SidecarSession *)session;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(NSArray *)items;
-(SidecarDevice *)device;
-(void)setDelegate:(id<SidecarRequestDelegate>)arg1 ;
-(NSString *)description;
-(NSString *)localizedDescription;
-(NSData *)data;
-(BOOL)didStart;
-(void)cancel;
-(BOOL)isCancelled;
-(SidecarService *)service;
-(void)dealloc;
-(void)setTimeStart:(double)arg1 ;
-(double)timeStart;
-(id)initWithService:(id)arg1 device:(id)arg2 ;
-(id)initWithSession:(id)arg1 message:(id)arg2 ;
-(void)sidecarSessionStarted:(id)arg1 ;
-(void)sidecarSession:(id)arg1 receivedMessage:(id)arg2 ;
-(void)sidecarSession:(id)arg1 closedWithError:(id)arg2 ;
-(void)sidecarServiceTerminate;
-(NSString *)localizedItemName;
-(void)startWithTransport:(long long)arg1 ;
-(void)startWithTransport:(long long)arg1 reconnectToRequest:(id)arg2 ;
-(void)sendItems:(id)arg1 complete:(BOOL)arg2 ;
-(void)_registerStreamListeners;
-(void)_willConnect;
-(void)sidecarTransfer:(id)arg1 didComplete:(id)arg2 ;
-(void)sidecarTransfer:(id)arg1 receivedItems:(id)arg2 messageType:(long long)arg3 ;
-(void)sendItems:(id)arg1 ;
-(id)sessionForDevice:(id)arg1 ;
-(double)timeAccept;
-(void)setTimeAccept:(double)arg1 ;
-(double)timeTransfer;
-(void)setTimeTransfer:(double)arg1 ;
-(double)timeFinish;
-(void)setTimeFinish:(double)arg1 ;
-(void)listenForStreamType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)openStreamForType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)listenForStreamType:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)listenForStreamType:(long long)arg1 identifier:(id)arg2 processUniqueID:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)openStreamForType:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openStreamForType:(long long)arg1 identifier:(id)arg2 processUniqueID:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
@end

