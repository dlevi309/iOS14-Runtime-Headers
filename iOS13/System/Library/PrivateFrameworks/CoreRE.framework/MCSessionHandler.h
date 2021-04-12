/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <libobjc.A.dylib/MCSessionPrivateDelegate.h>

@protocol MCSessionPrivateDelegate;
@class MCSession, NSMutableDictionary, NSMutableArray, NSLock, NSString;

@interface MCSessionHandler : NSObject <MCSessionPrivateDelegate> {

	MultipeerProtocolLayer* _protocolLayer;
	MCSession* _session;
	NSMutableDictionary* _peersToHandles;
	NSMutableArray* _pendingData;
	NSLock* _handlesLock;
	id<MCSessionPrivateDelegate> _nextDelegate;
	DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle> >* _handles;
	DynamicArray<unsigned char>* _tempBuf;

}

@property (assign,nonatomic) MultipeerProtocolLayer* protocolLayer;                                                       //@synthesize protocolLayer=_protocolLayer - In the implementation block
@property (nonatomic,retain) MCSession * session;                                                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peersToHandles;                                                        //@synthesize peersToHandles=_peersToHandles - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingData;                                                                //@synthesize pendingData=_pendingData - In the implementation block
@property (nonatomic,retain) NSLock * handlesLock;                                                                        //@synthesize handlesLock=_handlesLock - In the implementation block
@property (assign,nonatomic) DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle> >* handles;              //@synthesize handles=_handles - In the implementation block
@property (assign,nonatomic) DynamicArray<unsigned char>* tempBuf;                                                        //@synthesize tempBuf=_tempBuf - In the implementation block
@property (assign,nonatomic,__weak) id<MCSessionPrivateDelegate> nextDelegate;                                            //@synthesize nextDelegate=_nextDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MCSession *)session;
-(void)setSession:(MCSession *)arg1 ;
-(DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle> >*)handles;
-(void)setHandles:(DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle> >*)arg1 ;
-(NSMutableArray *)pendingData;
-(void)setPendingData:(NSMutableArray *)arg1 ;
-(void)setProtocolLayer:(MultipeerProtocolLayer*)arg1 ;
-(void)setPeersToHandles:(NSMutableDictionary *)arg1 ;
-(void)setHandlesLock:(NSLock *)arg1 ;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(BOOL*)arg4 ;
-(void)setNextDelegate:(id<MCSessionPrivateDelegate>)arg1 ;
-(id<MCSessionPrivateDelegate>)nextDelegate;
-(void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(BOOL*)arg5 ;
-(void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(BOOL*)arg6 ;
-(void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(BOOL*)arg5 ;
-(void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(BOOL*)arg4 ;
-(id)initWithSession:(id)arg1 protocolLayer:(MultipeerProtocolLayer*)arg2 ;
-(id)dataForPacket:(const Packet*)arg1 channel:(unsigned char)arg2 ;
-(MultipeerProtocolLayer*)protocolLayer;
-(NSMutableDictionary *)peersToHandles;
-(NSLock *)handlesLock;
-(DynamicArray<unsigned char>*)tempBuf;
-(void)setTempBuf:(DynamicArray<unsigned char>*)arg1 ;
@end
