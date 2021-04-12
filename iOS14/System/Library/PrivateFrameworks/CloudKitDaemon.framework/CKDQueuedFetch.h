/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_os_activity, OS_dispatch_queue;
@class NSDate, NSObject, NSMutableDictionary, CKDClientContext, NSOperationQueue, NSString, NSMutableSet, CKDOperation;

@interface CKDQueuedFetch : NSObject {

	BOOL _isFinished;
	BOOL _isCancelled;
	NSDate* _queuedDate;
	/*^block*/id _completionHandler;
	CKDQueuedFetch* _equivalentRunningFetch;
	NSObject*<OS_os_activity> _osActivity;
	NSMutableDictionary* _completionHandlersByItemID;
	unsigned long long _lastCompletionHandlerCount;
	NSDate* _startDate;
	NSDate* _lastRequestDate;
	CKDClientContext* _context;
	NSOperationQueue* _operationQueue;
	long long _scope;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	long long _highestQOS;
	NSString* _runningOperationID;
	NSMutableSet* _dependentOperationIDs;
	NSMutableDictionary* _dependentOperationIDsByItemID;
	NSMutableDictionary* _unitTestOverrides;
	CKDOperation* _initialOperation;

}

@property (nonatomic,retain) NSObject*<OS_os_activity> osActivity;                             //@synthesize osActivity=_osActivity - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionHandlersByItemID;                 //@synthesize completionHandlersByItemID=_completionHandlersByItemID - In the implementation block
@property (assign,nonatomic) unsigned long long lastCompletionHandlerCount;                    //@synthesize lastCompletionHandlerCount=_lastCompletionHandlerCount - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * lastRequestDate;                                         //@synthesize lastRequestDate=_lastRequestDate - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;                                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) long long scope;                                                  //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                       //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) long long highestQOS;                                             //@synthesize highestQOS=_highestQOS - In the implementation block
@property (nonatomic,retain) NSString * runningOperationID;                                    //@synthesize runningOperationID=_runningOperationID - In the implementation block
@property (nonatomic,retain) NSMutableSet * dependentOperationIDs;                             //@synthesize dependentOperationIDs=_dependentOperationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dependentOperationIDsByItemID;              //@synthesize dependentOperationIDsByItemID=_dependentOperationIDsByItemID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unitTestOverrides;                          //@synthesize unitTestOverrides=_unitTestOverrides - In the implementation block
@property (nonatomic,retain) CKDOperation * initialOperation;                                  //@synthesize initialOperation=_initialOperation - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                  //@synthesize isFinished=_isFinished - In the implementation block
@property (assign,nonatomic) BOOL isCancelled;                                                 //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,retain) NSDate * queuedDate;                                              //@synthesize queuedDate=_queuedDate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic,__weak) CKDQueuedFetch * equivalentRunningFetch;                   //@synthesize equivalentRunningFetch=_equivalentRunningFetch - In the implementation block
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setScope:(long long)arg1 ;
-(NSOperationQueue *)operationQueue;
-(long long)scope;
-(NSMutableDictionary *)unitTestOverrides;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)start;
-(NSDate *)startDate;
-(id)CKPropertiesDescription;
-(void)setOsActivity:(NSObject*<OS_os_activity>)arg1 ;
-(id)allItemIDs;
-(id)completionHandler;
-(CKDClientContext *)context;
-(BOOL)isFinished;
-(id)description;
-(NSObject*<OS_os_activity>)osActivity;
-(void)createFetchOperationForItemIDs:(id)arg1 operationQueue:(id)arg2 operationConfigurationBlock:(/*^block*/id)arg3 ;
-(void)setUnitTestOverrides:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)lastRequestDate;
-(void)setIsFinished:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(void)setContext:(CKDClientContext *)arg1 ;
-(NSDate *)queuedDate;
-(void)setIsCancelled:(BOOL)arg1 ;
-(void)addCallbackForItemWithID:(id)arg1 operation:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)setLastRequestDate:(NSDate *)arg1 ;
-(long long)highestQOS;
-(void)setHighestQOS:(long long)arg1 ;
-(CKDOperation *)initialOperation;
-(void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)completionHandlersByItemID;
-(NSMutableDictionary *)dependentOperationIDsByItemID;
-(NSMutableSet *)dependentOperationIDs;
-(id)callbacksForItemWithID:(id)arg1 ;
-(void)removeCallbacksForItemWithID:(id)arg1 ;
-(void)finishFetchOperationWithError:(id)arg1 ;
-(int)numberOfCallbacks;
-(NSString *)runningOperationID;
-(void)setRunningOperationID:(NSString *)arg1 ;
-(id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3 ;
-(void)cancelFetchOperation;
-(BOOL)canBeUsedForOperation:(id)arg1 ;
-(BOOL)canBeUsedForPendingFetch:(id)arg1 ;
-(BOOL)dependentOperationListContainsRunningFetch:(id)arg1 ;
-(BOOL)dependentOperationListContainsOperationID:(id)arg1 ;
-(void)setQueuedDate:(NSDate *)arg1 ;
-(CKDQueuedFetch *)equivalentRunningFetch;
-(void)setEquivalentRunningFetch:(CKDQueuedFetch *)arg1 ;
-(void)setCompletionHandlersByItemID:(NSMutableDictionary *)arg1 ;
-(unsigned long long)lastCompletionHandlerCount;
-(void)setLastCompletionHandlerCount:(unsigned long long)arg1 ;
-(void)setDependentOperationIDs:(NSMutableSet *)arg1 ;
-(void)setDependentOperationIDsByItemID:(NSMutableDictionary *)arg1 ;
-(void)setInitialOperation:(CKDOperation *)arg1 ;
@end
