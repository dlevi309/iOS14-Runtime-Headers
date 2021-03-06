/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol _NSURLSessionEventDelegate <NSObject>
@optional
-(void)sessionDelegateEnd:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)connectionEstablish:(id)arg1 properties:(id)arg2 absoluteTime:(double)arg3;
-(void)transactionResponseBody:(id)arg1 data:(id)arg2 absoluteTime:(double)arg3;
-(void)taskResume:(id)arg1 absoluteTime:(double)arg2;
-(void)connectionWait:(id)arg1 absoluteTime:(double)arg2;
-(void)transactionCreate:(id)arg1 withRequest:(id)arg2 fromTask:(id)arg3 absoluteTime:(double)arg4;
-(void)taskCreate:(id)arg1 pointer:(unsigned long long)arg2 withRequest:(id)arg3 fromSession:(id)arg4 absoluteTime:(double)arg5;
-(void)transactionRequestHeaderEnd:(id)arg1 request:(id)arg2 size:(long long)arg3 absoluteTime:(double)arg4;
-(void)taskCompletionHandlerEvent:(id)arg1 absoluteTime:(double)arg2;
-(void)transactionRequestEnd:(id)arg1 size:(long long)arg2 transferSize:(long long)arg3 absoluteTime:(double)arg4;
-(void)sessionDelegateEvent:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)taskDelegateEvent:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)transactionRequestBegin:(id)arg1 onConnection:(id)arg2 absoluteTime:(double)arg3;
-(void)taskDelegateEnd:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)sessionDelegateBegin:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)sessionCreate:(id)arg1 pointer:(unsigned long long)arg2 absoluteTime:(double)arg3;
-(void)transactionResponseEnd:(id)arg1 size:(long long)arg2 transferSize:(long long)arg3 absoluteTime:(double)arg4;
-(void)transactionResponseBegin:(id)arg1 absoluteTime:(double)arg2;
-(void)transactionEnd:(id)arg1 reason:(unsigned long long)arg2 absoluteTime:(double)arg3;
-(void)sessionDestroy:(id)arg1 absoluteTime:(double)arg2;
-(void)transactionResponseHeaderEnd:(id)arg1 response:(id)arg2 size:(long long)arg3 absoluteTime:(double)arg4;
-(void)transactionRequestBody:(id)arg1 data:(id)arg2 absoluteTime:(double)arg3;
-(void)taskSuspend:(id)arg1 absoluteTime:(double)arg2;
-(void)transactionCacheLookupEnd:(id)arg1 cachedResponse:(id)arg2 absoluteTime:(double)arg3;
-(void)taskDelegateBegin:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3;
-(void)transactionCacheLookupBegin:(id)arg1 absoluteTime:(double)arg2;
-(void)taskComplete:(id)arg1 withError:(id)arg2 absoluteTime:(double)arg3;
-(void)connectionBegin:(id)arg1 fromTransaction:(id)arg2 properties:(id)arg3 absoluteTime:(double)arg4;
-(void)connectionEnd:(id)arg1 absoluteTime:(double)arg2;

@end

