/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSURLSessionStreamDelegate.h>

@protocol OS_os_log, OS_dispatch_queue, ACSURLSessionDelegate;
@class NSObject, NSURLSession, NSDictionary, NSOperationQueue, NSMutableDictionary, NSURLSessionConfiguration, NSString;

@interface ACSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionStreamDelegate> {

	BOOL _canUseCachingServer;
	int __phase;
	NSObject*<OS_os_log> __logHandle;
	NSObject*<OS_dispatch_queue> __queue;
	NSURLSession* __nsurlSession;
	NSDictionary* __locateOptions;
	id<ACSURLSessionDelegate> __clientDelegate;
	NSOperationQueue* __clientDelegateOpQueue;
	NSMutableDictionary* __tasks;

}

@property (assign) BOOL canUseCachingServer;                                      //@synthesize canUseCachingServer=_canUseCachingServer - In the implementation block
@property (retain) NSObject*<OS_os_log> _logHandle;                               //@synthesize _logHandle=__logHandle - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _queue;                           //@synthesize _queue=__queue - In the implementation block
@property (retain) NSURLSession * _nsurlSession;                                  //@synthesize _nsurlSession=__nsurlSession - In the implementation block
@property (retain) NSDictionary * _locateOptions;                                 //@synthesize _locateOptions=__locateOptions - In the implementation block
@property (retain) id<ACSURLSessionDelegate> _clientDelegate;                     //@synthesize _clientDelegate=__clientDelegate - In the implementation block
@property (retain) NSOperationQueue * _clientDelegateOpQueue;                     //@synthesize _clientDelegateOpQueue=__clientDelegateOpQueue - In the implementation block
@property (retain) NSMutableDictionary * _tasks;                                  //@synthesize _tasks=__tasks - In the implementation block
@property (assign) int _phase;                                                    //@synthesize _phase=__phase - In the implementation block
@property (retain,readonly) NSOperationQueue * delegateQueue; 
@property (retain,readonly) id<ACSURLSessionDelegate> delegate; 
@property (copy,readonly) NSURLSessionConfiguration * configuration; 
@property (copy,readonly) NSDictionary * locateOptions; 
@property (copy) NSString * sessionDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
+(id)sessionWithConfiguration:(id)arg1 canUseCachingServer:(BOOL)arg2 locateOptions:(id)arg3 ;
+(id)sessionWithConfiguration:(id)arg1 canUseCachingServer:(BOOL)arg2 locateOptions:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(NSMutableDictionary *)_tasks;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)_phase;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
-(void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2 ;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(id)dataTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2 ;
-(id)downloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(void)getAllTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(id<ACSURLSessionDelegate>)delegate;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_log>)_logHandle;
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 ;
-(void)setSessionDescription:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(NSString *)sessionDescription;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3 ;
-(NSString *)description;
-(NSURLSessionConfiguration *)configuration;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(NSOperationQueue *)delegateQueue;
-(void)set_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<ACSURLSessionDelegate>)_clientDelegate;
-(void)invalidateAndCancel;
-(void)finishTasksAndInvalidate;
-(void)dealloc;
-(void)_cancelTask:(id)arg1 ;
-(void)set_phase:(int)arg1 ;
-(id)initWithConfiguration:(id)arg1 canUseCachingServer:(BOOL)arg2 locateOptions:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(NSOperationQueue *)_clientDelegateOpQueue;
-(NSURLSession *)_nsurlSession;
-(NSDictionary *)_locateOptions;
-(BOOL)canUseCachingServer;
-(id)_onqueue_uniqueTasks;
-(void)_addTask:(id)arg1 ;
-(id)_downloadTaskWithResumeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCanUseCachingServer:(BOOL)arg1 ;
-(void)set_logHandle:(NSObject*<OS_os_log>)arg1 ;
-(void)set_nsurlSession:(NSURLSession *)arg1 ;
-(void)set_locateOptions:(NSDictionary *)arg1 ;
-(void)set_clientDelegate:(id<ACSURLSessionDelegate>)arg1 ;
-(void)set_clientDelegateOpQueue:(NSOperationQueue *)arg1 ;
-(void)set_tasks:(NSMutableDictionary *)arg1 ;
-(void)_onqueue_addTask:(id)arg1 forNSURLTask:(id)arg2 ;
-(id)_keyForNSURLTask:(id)arg1 ;
-(void)_onqueue_removeTaskForNSURLTask:(id)arg1 ;
-(id)_resumeDataWithNSURLResumeData:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3 error:(id*)arg4 ;
-(BOOL)_resumeData:(id)arg1 toNSURLResumeData:(id*)arg2 originalRequest:(id*)arg3 currentRequest:(id*)arg4 error:(id*)arg5 ;
-(void)_downloadTask:(id)arg1 completedWithLocation:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_copyAttributesFromNSURLTask:(id)arg1 toNSURLTask:(id)arg2 ;
-(void)_onqueue_resumeTask:(id)arg1 ;
-(void)_onqueue_task:(id)arg1 willUseCachingServer:(BOOL)arg2 newRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_locateCachingServerForURL:(id)arg1 isUpload:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_errorWithResumeDataFromError:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3 ;
-(void)_removeTask:(id)arg1 ;
-(id)_linkedLocationWithLocation:(id)arg1 ;
-(id)_onqueue_taskForNSURLTask:(id)arg1 ;
-(NSDictionary *)locateOptions;
-(void)_cancelDownloadTask:(id)arg1 byProducingResumeData:(/*^block*/id)arg2 ;
-(void)_suspendTask:(id)arg1 ;
-(void)_resumeTask:(id)arg1 ;
-(void)_dataTask:(id)arg1 completedWithData:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end
