/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/

#import <SiriTape/SiriTape-Structs.h>
#import <SiriTape/STProxyConnection.h>
#import <libobjc.A.dylib/STMockSessionDJDelegate.h>

@protocol OS_dispatch_data;
@class NSObject, SiriCoreDataCompressor, NSURL, STMockSessionDJ, NSString;

@interface STClientConnection : STProxyConnection <STMockSessionDJDelegate> {

	NSObject*<OS_dispatch_data> _bufferedGeneralOutputData;
	SiriCoreDataCompressor* _outputCompressor;
	double _lastReplayEvent;
	NSURL* _replayFileURL;
	STMockSessionDJ* _sessionDJ;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initializeBufferedGeneralOutputDataWithInitialPayload:(BOOL)arg1 ;
-(void)_bufferGeneralData:(id)arg1 ;
-(BOOL)_hasBufferedDataOrOutstandingPings;
-(void)_tryToWriteBufferedOutputData;
-(void)_sendGeneralData:(id)arg1 ;
-(void)_handleAceNop;
-(void)_handleAcePing:(unsigned)arg1 ;
-(void)_handleAcePong:(unsigned)arg1 ;
-(void)_handleAceEnd;
-(BOOL)_sendAcePongWithId:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithSocket:(id)arg1 handler:(id)arg2 replayFileURL:(id)arg3 ;
-(void)handleAceObject:(id)arg1 ;
-(void)handlePacket:(SCD_Struct_ST2*)arg1 ;
-(void)_handleLoadAssistant:(id)arg1 ;
-(void)_addStartRequestIDToReplay:(id)arg1 ;
-(void)_startReplayWithAceID:(id)arg1 atURL:(id)arg2 ;
-(BOOL)_sendAceCommand:(id)arg1 error:(id*)arg2 ;
-(void)_checkForReplayTimeout;
-(BOOL)_sendAceEndWithError:(id*)arg1 ;
-(void)sessionDJ:(id)arg1 replayAceCommand:(id)arg2 ;
-(void)sessionDJReplayDidFinish:(id)arg1 ;
@end

