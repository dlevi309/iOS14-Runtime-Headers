/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NDBackgroundSessionClient <NSObject>
@required
-(void)backgroundTaskDidResume:(unsigned long long)arg1;
-(void)backgroundTaskDidSuspend:(unsigned long long)arg1;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(/*^block*/id)arg3;
-(void)backgroundTask:(unsigned long long)arg1 willBeginDelayedRequest:(id)arg2 reply:(/*^block*/id)arg3;
-(void)backgroundTask:(unsigned long long)arg1 willPerformHTTPRedirection:(id)arg2 withNewRequest:(id)arg3 reply:(/*^block*/id)arg4;
-(void)backgroundTask:(unsigned long long)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(/*^block*/id)arg3;
-(void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1;
-(void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithReason:(long long)arg2;
-(void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithError:(id)arg2;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 transactionMetrics:(id)arg3;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 transactionMetrics:(id)arg3 reply:(/*^block*/id)arg4;
-(void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
-(void)backgroundTask:(unsigned long long)arg1 needNewBodyStream:(BOOL)arg2 withReply:(/*^block*/id)arg3;
-(void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 taskMetrics:(id)arg3 info:(id)arg4 reply:(/*^block*/id)arg5;
-(void)backgroundDataTask:(unsigned long long)arg1 didReceiveData:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)backgroundTask:(unsigned long long)arg1 getAuthHeadersForResponse:(id)arg2 reply:(/*^block*/id)arg3;
-(void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1;
-(void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(id)arg2 transactionMetrics:(id)arg3;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(/*^block*/id)arg3;
-(void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(/*^block*/id)arg3;
-(void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned long long)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
-(void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
-(void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4;
-(void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didResolveMediaSelectionProperyList:(id)arg2 reply:(/*^block*/id)arg3;
-(void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 willDownloadToURL:(id)arg2;
-(void)backgroundSessionDidStartAppWake:(id)arg1 reply:(/*^block*/id)arg2;
-(void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(/*^block*/id)arg2;
-(void)credStorage_getInitialCredentialDictionariesWithReply:(/*^block*/id)arg1;
-(void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(/*^block*/id)arg2;
-(void)credStorage_allCredentialsWithReply:(/*^block*/id)arg1;
-(void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
-(void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
-(void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(/*^block*/id)arg2;
-(void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;

@end
