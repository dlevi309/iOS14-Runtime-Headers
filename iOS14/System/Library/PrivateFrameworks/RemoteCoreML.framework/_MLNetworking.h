/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
*/


@protocol OS_nw_connection, OS_nw_listener, OS_nw_protocol_stack, OS_nw_parameters, OS_os_log, OS_dispatch_queue;
@class NSObject, _MLNetworkOptions;

@interface _MLNetworking : NSObject {

	BOOL _isClient;
	NSObject*<OS_nw_connection> _connection;
	NSObject*<OS_nw_listener> _listener;
	_MLNetworkOptions* _nwOptions;
	NSObject*<OS_nw_protocol_stack> _protocol_stack;
	NSObject*<OS_nw_parameters> _parameters;
	NSObject*<OS_os_log> _logType;
	NSObject*<OS_dispatch_queue> _q;

}

@property (nonatomic,retain) NSObject*<OS_nw_connection> connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_listener> listener;                          //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) _MLNetworkOptions * nwOptions;                               //@synthesize nwOptions=_nwOptions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_protocol_stack> protocol_stack;              //@synthesize protocol_stack=_protocol_stack - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_parameters> parameters;                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL isClient;                                               //@synthesize isClient=_isClient - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> logType;                                //@synthesize logType=_logType - In the implementation block
@property (q,nonatomic,readonly) NSObject*<OS_dispatch_queue> q;                            //@synthesize q=_q - In the implementation block
-(NSObject*<OS_dispatch_queue>)q;
-(NSObject*<OS_nw_parameters>)parameters;
-(NSObject*<OS_os_log>)logType;
-(void)sendData:(id)arg1 ;
-(BOOL)isClient;
-(void)stop;
-(NSObject*<OS_nw_listener>)listener;
-(NSObject*<OS_nw_connection>)connection;
-(void)startConnection;
-(void)setConnection:(NSObject*<OS_nw_connection>)arg1 ;
-(id)initConnection:(id)arg1 ;
-(_MLNetworkOptions *)nwOptions;
-(void)receiveLoop:(/*^block*/id)arg1 ;
-(id)initListener:(id)arg1 ;
-(void)restartConnection;
-(void)setReceiveDataCallBack:(/*^block*/id)arg1 ;
-(void)setListenerReceiveDataCallBack:(/*^block*/id)arg1 ;
-(NSObject*<OS_nw_protocol_stack>)protocol_stack;
@end

