/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <libobjc.A.dylib/PARSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue, DESRecipeEvaluation;
@class NSObject, DESServiceConnection, DESRecordSet, NSString, NSURL, PARSession, NSURLSession;

@interface DESEvaluationSession : NSObject <PARSessionDelegate, NSURLSessionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	DESServiceConnection* _serviceConnection;
	DESRecordSet* _recordSet;
	NSString* _recipeType;
	NSString* _localeIdentifier;
	NSString* _deviceIdentifier;
	NSURL* _baseURL;
	NSURL* _postbackBaseURL;
	PARSession* _parSession;
	id<DESRecipeEvaluation> _evaluator;
	unsigned long long _recipeCountLimit;
	double _timeLimit;
	BOOL _enableOriginReturnRoute;
	BOOL _enableParsecReturnRoute;
	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BOOL isPFLPlugin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)downloadedRecipeWithID:(id)arg1 recipeType:(id)arg2 baseURL:(id)arg3 protocolClass:(Class)arg4 error:(id*)arg5 ;
+(void)downloadAttachments:(id)arg1 signatures:(id)arg2 certificate:(id)arg3 session:(id)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
+(BOOL)verifyAttachment:(id)arg1 attachmentURL:(id)arg2 attachmentSignature:(id)arg3 ;
-(BOOL)taskIsDeferred;
-(NSURLSession *)session;
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3 ;
-(void)invalidate;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(void)session:(id)arg1 didDownloadResource:(id)arg2 ;
-(void)session:(id)arg1 didDeleteResource:(id)arg2 ;
-(id)initWithServiceConnection:(id)arg1 baseURL:(id)arg2 recordSet:(id)arg3 recipeType:(id)arg4 localeIdentifier:(id)arg5 evaluatorOverride:(id)arg6 protocolClass:(Class)arg7 ;
-(void)sendRecipeResponseWithJSONResult:(id)arg1 binaryResult:(id)arg2 recipe:(id)arg3 duration:(double)arg4 error:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithServiceConnection:(id)arg1 baseURL:(id)arg2 recordSet:(id)arg3 recipeType:(id)arg4 localeIdentifier:(id)arg5 deviceIdentifier:(id)arg6 evaluatorOverride:(id)arg7 protocolClass:(Class)arg8 ;
-(id)telemetryResponse;
-(id)initWithServiceConnection:(id)arg1 baseURL:(id)arg2 recordSet:(id)arg3 recipeType:(id)arg4 localeIdentifier:(id)arg5 evaluatorOverride:(id)arg6 ;
-(void)postRecipeResponse:(id)arg1 recipeId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_runPOSTRequestWithHTTPBody:(id)arg1 contentType:(id)arg2 URL:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_runJSONPOSTRequest:(id)arg1 URL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleTelemetry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runJSONGETRequestWithPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_ensureEvaluatorWithError:(id*)arg1 ;
-(BOOL)isPFLPlugin;
-(void)_attemptRecipeMatchWithRecipes:(id)arg1 keepGoing:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchRecipe:(id)arg1 matchingRecordSet:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendRecipeResponseWithJSONResult:(id)arg1 binaryResult:(id)arg2 recipe:(id)arg3 duration:(double)arg4 error:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_handleRecipeResponse:(id)arg1 recipeId:(id)arg2 matchingRecordSet:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_downloadAttachments:(id)arg1 signatures:(id)arg2 certificate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)maybePostRecipeResponseToParsec:(id)arg1 recipeId:(id)arg2 ;
-(BOOL)_originReturnRouteEnabled;
-(void)_runJSONOrMultipartPOSTRequest:(id)arg1 path:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchPolicyWithCompletion:(/*^block*/id)arg1 ;
-(id)_requestObjectWithJSONResult:(id)arg1 binaryResult:(id)arg2 recipe:(id)arg3 duration:(double)arg4 error:(id)arg5 ;
-(BOOL)_parsecReturnRouteEnabled;
@end
