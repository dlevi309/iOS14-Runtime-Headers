/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_nw_listener, NWUDPListenerDelegate;
@class NWEndpoint, NSError, NSObject, NWParameters;

@interface NWUDPListener : NSObject {

	NWEndpoint* _localEndpoint;
	NSError* _error;
	NSObject*<OS_nw_listener> _internalListener;
	NWParameters* _parameters;
	NWEndpoint* _endpoint;
	id<NWUDPListenerDelegate> _delegate;

}

@property (retain) NSObject*<OS_nw_listener> internalListener;              //@synthesize internalListener=_internalListener - In the implementation block
@property (retain) NWParameters * parameters;                               //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (__weak) id<NWUDPListenerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NWEndpoint * localEndpoint;                    //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(id<NWUDPListenerDelegate>)delegate;
-(void)setDelegate:(id<NWUDPListenerDelegate>)arg1 ;
-(void)handleError:(id)arg1 ;
-(NSError *)error;
-(NWEndpoint *)endpoint;
-(void)setError:(NSError *)arg1 ;
-(NWParameters *)parameters;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(void)setParameters:(NWParameters *)arg1 ;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(NWEndpoint *)localEndpoint;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(void)handleConnection:(id)arg1 ;
-(NSObject*<OS_nw_listener>)internalListener;
-(void)setInternalListener:(NSObject*<OS_nw_listener>)arg1 ;
@end

