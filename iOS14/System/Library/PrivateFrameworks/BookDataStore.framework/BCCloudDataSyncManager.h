/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BCCloudKitDatabaseObserver.h>

@protocol BCCloudDataSyncManagerDelegate, BCCloudDataMapper, OS_dispatch_queue;
@class BCCloudKitController, NSObject, NSString;

@interface BCCloudDataSyncManager : NSObject <BCCloudKitDatabaseObserver> {

	BOOL _processingCloudData;
	BOOL _serverPushPostponed;
	id<BCCloudDataSyncManagerDelegate> _delegate;
	BCCloudKitController* _cloudKitController;
	id<BCCloudDataMapper> _dataMapper;
	NSObject*<OS_dispatch_queue> _syncQueue;
	double _backOffInterval;
	unsigned long long _tooBigBatch;

}

@property (nonatomic,retain) BCCloudKitController * cloudKitController;                       //@synthesize cloudKitController=_cloudKitController - In the implementation block
@property (nonatomic,retain) id<BCCloudDataMapper> dataMapper;                                //@synthesize dataMapper=_dataMapper - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                          //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) BOOL processingCloudData;                                        //@synthesize processingCloudData=_processingCloudData - In the implementation block
@property (assign,nonatomic) double backOffInterval;                                          //@synthesize backOffInterval=_backOffInterval - In the implementation block
@property (assign,nonatomic) unsigned long long tooBigBatch;                                  //@synthesize tooBigBatch=_tooBigBatch - In the implementation block
@property (assign,nonatomic) BOOL serverPushPostponed;                                        //@synthesize serverPushPostponed=_serverPushPostponed - In the implementation block
@property (assign,nonatomic,__weak) id<BCCloudDataSyncManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setBackOffInterval:(double)arg1 ;
-(id<BCCloudDataSyncManagerDelegate>)delegate;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)backOffInterval;
-(void)setDelegate:(id<BCCloudDataSyncManagerDelegate>)arg1 ;
-(BCCloudKitController *)cloudKitController;
-(void)setCloudKitController:(BCCloudKitController *)arg1 ;
-(id)initWithCloudKitController:(id)arg1 ;
-(void)startSyncToCKWithCompletion:(/*^block*/id)arg1 ;
-(void)databaseController:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3 ;
-(void)databaseController:(id)arg1 reachabilityChanged:(BOOL)arg2 ;
-(void)databaseController:(id)arg1 attachmentChanged:(BOOL)arg2 ;
-(void)databaseController:(id)arg1 recordsChanged:(id)arg2 ;
-(void)databaseController:(id)arg1 fetchedAllRecordsInZone:(id)arg2 ;
-(void)fetchRecordForRecordID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCloudKitController:(id)arg1 dataMapper:(id)arg2 ;
-(void)_syncQueueSyncForCloudData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)serverPushPostponed;
-(unsigned long long)tooBigBatch;
-(unsigned long long)_maxCloudDataPerBatch;
-(id<BCCloudDataMapper>)dataMapper;
-(void)setTooBigBatch:(unsigned long long)arg1 ;
-(void)_leaveDispatchGroup:(id)arg1 times:(unsigned long long)arg2 ;
-(void)setServerPushPostponed:(BOOL)arg1 ;
-(void)_updateRetryParametersFromModifyRecordsOperationError:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)setProcessingCloudData:(BOOL)arg1 ;
-(id)_batchFromCloudData:(id)arg1 ;
-(void)_fromBatch:(id)arg1 getRecordsToSave:(id*)arg2 recordIDsToDelete:(id*)arg3 buildingMap:(id*)arg4 ;
-(void)_enterDispatchGroup:(id)arg1 times:(unsigned long long)arg2 ;
-(/*^block*/id)_modifyRecordsCompletionBlockWithDispatchGroup:(id)arg1 cloudDataMap:(id)arg2 recordCount:(unsigned long long)arg3 operation:(id)arg4 ;
-(void)syncCloudData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signalSyncToCK;
-(void)setDataMapper:(id<BCCloudDataMapper>)arg1 ;
-(BOOL)processingCloudData;
@end

