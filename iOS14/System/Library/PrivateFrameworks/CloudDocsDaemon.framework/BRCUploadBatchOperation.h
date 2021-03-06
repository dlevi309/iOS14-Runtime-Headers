/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class BRCClientZone;

@interface BRCUploadBatchOperation : BRCTransferBatchOperation {

	BRCClientZone* _clientZone;
	/*^block*/id _perUploadCompletionBlock;

}

@property (copy) id perUploadCompletionBlock;              //@synthesize perUploadCompletionBlock=_perUploadCompletionBlock - In the implementation block
-(id)createActivity;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)perUploadCompletionBlock;
-(void)_uploadRecordsByID:(id)arg1 ;
-(void)setPerUploadCompletionBlock:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 clientZone:(id)arg2 ;
-(void)addItem:(id)arg1 stageID:(id)arg2 record:(id)arg3 transferSize:(unsigned long long)arg4 ;
-(void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2 ;
-(void)mainWithTransfers:(id)arg1 ;
-(id)actionPrettyName;
@end

