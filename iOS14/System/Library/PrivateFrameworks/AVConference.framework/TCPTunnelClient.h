/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoConferenceRealTimeChannel.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString, NSMutableDictionary, NSDictionary, NSData, NSMutableData, TCPBufferPool;

@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel> {

	int _connectState;
	int _connectedFD;
	int _isChannelBound;
	/*^block*/id _handler;
	/*^block*/id _allocationResponseHandler;
	/*^block*/id _terminationHandler;
	/*^block*/id _bindingResponseHandler;
	/*^block*/id _destroyHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_source> _writeSource;
	unsigned char _writeSourceSuspended;
	NSObject*<OS_dispatch_source> _timer;
	float _fTimeout;
	NSString* _participantID;
	unsigned short _channelNumber;
	NSMutableDictionary* _reqRespDict;
	NSDictionary* _relayUpdateDict;
	tagIPPORT _serverIPPort;
	NSData* _allocateReq;
	NSData* _channelBReq;
	double _allocationTimestamp;
	NSMutableData* _currentlyReadingMessage;
	long long _currentlyReadingDataGoalLength;
	unsigned short _currentMsgType;
	long long _currentPadding;
	char* _writeBuf;
	int _head;
	int _tail;
	TCPBufferPool* _bufferPool;

}

@property (copy) id receiveHandler;                         //@synthesize handler=_handler - In the implementation block
@property (copy) id allocationResponseHandler;              //@synthesize allocationResponseHandler=_allocationResponseHandler - In the implementation block
@property (copy) id terminationHandler;                     //@synthesize terminationHandler=_terminationHandler - In the implementation block
@property (copy) id bindingResponseHandler;                 //@synthesize bindingResponseHandler=_bindingResponseHandler - In the implementation block
@property (copy) id destroyHandler;                         //@synthesize destroyHandler=_destroyHandler - In the implementation block
@property (copy) NSString * participantID;                  //@synthesize participantID=_participantID - In the implementation block
-(unsigned)connectionType;
-(void)resetConnection;
-(id)terminationHandler;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(id)receiveHandler;
-(void)setReceiveHandler:(id)arg1 ;
-(void)setTerminationHandler:(id)arg1 ;
-(void)dealloc;
-(void)setAllocationResponseHandler:(id)arg1 ;
-(void)setBindingResponseHandler:(id)arg1 ;
-(void)setDestroyHandler:(id)arg1 ;
-(void)destroyDispatchTimer;
-(void)reportErrorAndTerminate:(long long)arg1 detail:(long long)arg2 returnCode:(long long)arg3 description:(id)arg4 reason:(id)arg5 ;
-(void)receivedControlData:(id)arg1 ;
-(void)sendTCPData:(const void*)arg1 bufSize:(int)arg2 ;
-(void)createDispatchTimer:(float)arg1 withDetailedError:(long long)arg2 ;
-(id)allocationResponseHandler;
-(void)vcArg:(id)arg1 sendControlData:(id)arg2 isTypeSSL:(BOOL)arg3 withTimeout:(float)arg4 withDetail:(long long)arg5 ;
-(id)bindingResponseHandler;
-(BOOL)sendRefreshMsg:(unsigned)arg1 error:(id*)arg2 ;
-(id)destroyHandler;
-(BOOL)sendChannelBindingMsgWithDict:(id)arg1 error:(id*)arg2 ;
-(void)receivedSSLConnectionData:(id)arg1 recordType:(unsigned short)arg2 ;
-(void)processSocketWrite:(unsigned char)arg1 ;
-(void)processSocketRead;
-(void)processSocketReadSSL;
-(void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3 ;
-(id)initWithRelayRequestDictionary:(id)arg1 withCallID:(unsigned)arg2 relayType:(unsigned char)arg3 errorCode:(int*)arg4 ;
-(BOOL)sendAllocateMsg:(id*)arg1 ;
-(void)unbindChannel;
-(void)closeTunnelSocket;
-(BOOL)isTunnelSocketClosed;
@end
