/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFDispatchQueueExtension.h>
#import <libobjc.A.dylib/PFDispatchQueueBlockOnDemandExecuting.h>

@class PFExtendedDispatchQueue;

@interface PFDispatchQueueBlockOnDemandExtension : PFDispatchQueueExtension <PFDispatchQueueBlockOnDemandExecuting> {

	PFExtendedDispatchQueue* _queue;
	AQ _countToExecute;
	AQ _enqueuedCount;

}
-(void)installOnQueue:(id)arg1 ;
-(void)queue:(id)arg1 willEnqueueSync:(id)arg2 ;
-(void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(/*^block*/id)arg3 ;
-(unsigned long long)runOneBlock;
-(unsigned long long)runBlockCount:(unsigned long long)arg1 ;
-(void)_willEnqueueOneBlock;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(id)newBlockInfo;
@end
