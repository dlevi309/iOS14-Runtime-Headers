/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionTask.h>
#import <libobjc.A.dylib/NSURLSessionTaskSubclass.h>
#import <libobjc.A.dylib/NSURLSessionDataTaskSubclass.h>
#import <libobjc.A.dylib/NSURLSessionUploadTaskSubclass.h>
#import <libobjc.A.dylib/__NSCFURLSessionConnectionDelegate.h>

@protocol OS_dispatch_data, OS_dispatch_source;
@class __NSCFURLSessionConnection, NSURL, NSObject, NSInputStream, NSOutputStream, NSOperationQueue, NSString;

@interface __NSCFLocalSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass, NSURLSessionDataTaskSubclass, NSURLSessionUploadTaskSubclass, __NSCFURLSessionConnectionDelegate> {

	__NSCFURLSessionConnection* _cfConn;
	NSURL* _uploadFile;
	NSObject*<OS_dispatch_data> _dataTaskData;
	/*^block*/id _dataTaskCompletion;
	NSObject*<OS_dispatch_data> _pendingResponseBytes;
	unsigned long long _suspendCount;
	/*^block*/id _async_initialization;
	NSObject*<OS_dispatch_source> _resourceTimeout;
	os_unfair_lock_s _connKeyLock;
	HTTPConnectionCacheKey* _connKey;
	double _startTimeoutTime;
	NSObject*<OS_dispatch_source> _startTimeoutTimer;
	NSObject*<OS_dispatch_source> _payloadTransmissionTimer;
	NSObject*<OS_dispatch_source> _willSendRequestTimer;
	NSInputStream* _socketReadStreamForUpgrade;
	NSOutputStream* _socketWriteStreamForUpgrade;
	shared_ptr<TransportConnection>* _connectionForUpgrade;
	NSObject*<OS_dispatch_data> _extraBytes;
	NSOperationQueue* _connectionWorkQueue;
	int _connectionWorkQueueSuspensionCount;
	BOOL _pendingResponseDisposition;
	BOOL _pendingResponseDisposition_didFinish;
	BOOL _didIssueWaitingForConnectivity;
	BOOL _didIssueDidFinish;
	BOOL _suspendedForDisposition;
	BOOL _didCheckMixedReplace;
	BOOL _isMixedReplace;
	BOOL _sentDidFinishCollectingMetrics;

}

@property (retain) __NSCFURLSessionConnection * cfConn;              //@synthesize cfConn=_cfConn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resourceTimeoutError;
-(id)error:(id)arg1 code:(long long)arg2 ;
-(void)_onqueue_didFinishCollectingMetrics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 didReceiveTCPConnection:(shared_ptr<TransportConnection>*)arg2 extraBytes:(id)arg3 ;
-(void)connectionWillFinishLoading:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 challenged:(id)arg2 authCallback:(/*^block*/id)arg3 ;
-(id)_onqueue_strippedMutableRequest;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(/*^block*/id)arg4 ;
-(void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3 ;
-(void)_askForConnectedSocketLater;
-(void)_onqueue_conditionalRequirementsChanged:(BOOL)arg1 ;
-(void)_private_onqueue_didReceiveResponseDisposition:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onqueue_setupNextEffectiveConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_needSendingMetrics;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_didReceiveDispatchData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onqueue_expectedProgressTargetChanged;
-(void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2 ;
-(void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4 ;
-(void)_didSendMetrics;
-(void)_onqueue_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)cancel_with_error:(id)arg1 ;
-(void)_onqueue_adjustPoolPriority;
-(__NSCFURLSessionConnection *)cfConn;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)startResourceTimer;
-(void)connection:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithBackgroundTaskInfo:(id)arg1 taskGroup:(id)arg2 ;
-(void)_setConnectionCacheKey:(HTTPConnectionCacheKey*)arg1 ;
-(void)set_timeoutIntervalForResource:(double)arg1 ;
-(void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_completeInitialization;
-(void)_onqueue_connectionWaitingWithReason:(long long)arg1 ;
-(void)_task_onqueue_didFinish;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 waitingWithReason:(long long)arg2 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCfConn:(__NSCFURLSessionConnection *)arg1 ;
-(void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_onqueue_cancel_with_error:(id)arg1 ;
-(void)_onqueue_suspend;
-(void)_onqueue_adjustPriorityHint:(float)arg1 incremental:(BOOL)arg2 ;
-(void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1 ;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3 ;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_resume;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)_onqueue_cancel;
-(void)dealloc;
@end
