/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject {

	NSMutableDictionary* _resourceIDsToDownloadTasks;
	NSMutableDictionary* _taskIDsToDownloadTasks;

}
-(id)init;
-(void)cancelTaskWithTaskIdentifier:(id)arg1 ;
-(void)reportCompletionForResource:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(void)setTransferTask:(id)arg1 forResource:(id)arg2 ;
-(BOOL)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg1 taskIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_identifierForResource:(id)arg1 ;
-(void)reset;
@end

