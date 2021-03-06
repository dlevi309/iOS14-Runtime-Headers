/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPCancellable.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class FPDMoveOperation, FPMoveInfo, FPDActionOperationQueue, FPDMoveWriter, NSMutableSet, NSError, NSObject;

@interface FPDMoveReader : NSObject <FPCancellable> {

	FPDMoveOperation* _operation;
	FPMoveInfo* _info;
	FPDActionOperationQueue* _moveQueue;
	FPDMoveWriter* _writer;
	BOOL _startedPreflight;
	BOOL _finishedPreflight;
	BOOL _willMaterializeTargetFolder;
	BOOL _isTargetFolderMaterialized;
	unsigned long long _depth;
	NSMutableSet* _cancelledRoots;
	BOOL __cancelled;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _logSection;
	NSObject*<OS_dispatch_semaphore> _clientUnblockSema;
	/*^block*/id _rootPreflightCompletionBlock;
	/*^block*/id _preflightCompletionBlock;
	/*^block*/id _startDownloadBlock;
	/*^block*/id _errorBlock;

}

@property (nonatomic,copy) id rootPreflightCompletionBlock;              //@synthesize rootPreflightCompletionBlock=_rootPreflightCompletionBlock - In the implementation block
@property (nonatomic,copy) id preflightCompletionBlock;                  //@synthesize preflightCompletionBlock=_preflightCompletionBlock - In the implementation block
@property (nonatomic,copy) id startDownloadBlock;                        //@synthesize startDownloadBlock=_startDownloadBlock - In the implementation block
@property (nonatomic,copy) id errorBlock;                                //@synthesize errorBlock=_errorBlock - In the implementation block
+(BOOL)_hasDiskWriterSupportForDomain:(id)arg1 ;
-(void)_run;
-(id)init;
-(void)start;
-(void)_finishWithError:(id)arg1 ;
-(void)setErrorBlock:(id)arg1 ;
-(BOOL)_isCancelled;
-(void)dumpStateTo:(id)arg1 ;
-(void)cancelRoot:(id)arg1 ;
-(void)cancel;
-(id)errorBlock;
-(id)initWithMoveWriter:(id)arg1 operation:(id)arg2 queue:(id)arg3 ;
-(void)setRootPreflightCompletionBlock:(id)arg1 ;
-(void)setPreflightCompletionBlock:(id)arg1 ;
-(void)setStartDownloadBlock:(id)arg1 ;
-(void)_t_unblock;
-(void)_progressComputationPreflight;
-(void)verifyTargetURL:(/*^block*/id)arg1 ;
-(long long)_filesizeBitsSupportAtPath:(id)arg1 ;
-(BOOL)_shouldCheckFileSystemBitsForRoot:(id)arg1 targetFolderURL:(id)arg2 ;
-(BOOL)_shouldCheckSpaceForRoot:(id)arg1 targetFolderURL:(id)arg2 ;
-(BOOL)_isRootCancelled:(id)arg1 ;
-(id)rootPreflightCompletionBlock;
-(BOOL)_isSpaceAvailableForWrite:(long long)arg1 atTargetPath:(id)arg2 ;
-(id)preflightCompletionBlock;
-(id)_getTargetFolderFor:(id)arg1 root:(id)arg2 error:(id*)arg3 ;
-(id)_targetNameForSource:(id)arg1 ;
-(id)startDownloadBlock;
-(BOOL)_isSingleMoveForRoot:(id)arg1 ;
-(BOOL)_shouldUseDiskWriterToPerformMoveForItem:(id)arg1 ;
-(BOOL)_enqueueItem:(id)arg1 forRoot:(id)arg2 atomically:(BOOL)arg3 useDiskWriter:(BOOL)arg4 ;
-(void)_t_waitForUnblock;
-(void)_bailOutOfRoot:(id)arg1 ;
-(void)_enqueueAtomsForRoot:(id)arg1 ;
@end

