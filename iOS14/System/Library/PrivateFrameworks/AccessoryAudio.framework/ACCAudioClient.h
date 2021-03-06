/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryAudio.framework/AccessoryAudio
*/

#import <libobjc.A.dylib/ACCAudioXPCClientProtocol.h>

@protocol ACCAudioClientProtocol, ACCAudioXPCServerProtocol;
@class NSXPCConnection, NSString;

@interface ACCAudioClient : NSObject <ACCAudioXPCClientProtocol> {

	id<ACCAudioClientProtocol> _delegate;
	NSXPCConnection* _serverConnection;
	id<ACCAudioXPCServerProtocol> _remoteObject;

}

@property (nonatomic,retain) NSXPCConnection * serverConnection;                      //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCAudioXPCServerProtocol> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (assign,nonatomic,__weak) id<ACCAudioClientProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)serverConnection;
-(id<ACCAudioClientProtocol>)delegate;
-(void)setDelegate:(id<ACCAudioClientProtocol>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(id<ACCAudioXPCServerProtocol>)remoteObject;
-(void)setRemoteObject:(id<ACCAudioXPCServerProtocol>)arg1 ;
-(void)dealloc;
-(void)connectToServer;
-(BOOL)setDigitalAudioSampleRate:(unsigned)arg1 ;
-(unsigned)supportedDigitalAudioSampleRate:(unsigned)arg1 ;
-(id)supportedDigitalAudioSampleRates;
-(id)deviceAudioStates;
-(BOOL)allowBackgroundAudioForClient:(id)arg1 ;
-(void)registerForAccessoryDigitalAudioNotifications;
-(void)unregisterForAccessoryDigitalAudioNotifications;
@end

