/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSDictionary;

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation {

	BOOL _forcePCSDecrypt;
	BOOL _started;
	BOOL _markedToFinish;
	NSMutableArray* _outstandingDecryptions;
	NSObject*<OS_dispatch_group> _recordDecryptGroup;
	NSObject*<OS_dispatch_queue> _recordDecryptQueue;
	unsigned long long _maxUnwrapAttempts;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,retain) NSMutableArray * outstandingDecryptions;                      //@synthesize outstandingDecryptions=_outstandingDecryptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> recordDecryptGroup;              //@synthesize recordDecryptGroup=_recordDecryptGroup - In the implementation block
@property (getter=isStarted) BOOL started;                                                 //@synthesize started=_started - In the implementation block
@property (getter=isMarkedToFinish) BOOL markedToFinish;                                   //@synthesize markedToFinish=_markedToFinish - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordDecryptQueue;              //@synthesize recordDecryptQueue=_recordDecryptQueue - In the implementation block
@property (assign,nonatomic) unsigned long long maxUnwrapAttempts;                         //@synthesize maxUnwrapAttempts=_maxUnwrapAttempts - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;              //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
@property (assign,nonatomic) BOOL forcePCSDecrypt;                                         //@synthesize forcePCSDecrypt=_forcePCSDecrypt - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(BOOL)isStarted;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setStarted:(BOOL)arg1 ;
-(BOOL)operationShouldBeFlowControlled;
-(BOOL)shouldCheckAppVersion;
-(void)setForcePCSDecrypt:(BOOL)arg1 ;
-(BOOL)supportsClearAssetEncryption;
-(id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4 ;
-(void)finishDecryption;
-(BOOL)forcePCSDecrypt;
-(void)decryptRecord:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isMarkedToFinish;
-(NSObject*<OS_dispatch_group>)recordDecryptGroup;
-(void)_recordInfoWasDecrypted:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSMutableArray *)outstandingDecryptions;
-(NSObject*<OS_dispatch_queue>)recordDecryptQueue;
-(void)_decryptRecordInfo:(id)arg1 ;
-(unsigned long long)maxUnwrapAttempts;
-(void)_clearProtectionDataForRecordInfo:(id)arg1 ;
-(void)_handleProtectionDataForRecordInfo:(id)arg1 ;
-(id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)_decryptRecordPCSForRecord:(id)arg1 usingZonePCS:(id)arg2 ;
-(id)_decryptRecordPCSForRecord:(id)arg1 usingSharePCS:(id)arg2 ;
-(id)_decryptRecordPCSForRecord:(id)arg1 usingChainPCS:(id)arg2 ;
-(void)_decryptRecordInfo:(id)arg1 usingWebSharingIdentityData:(id)arg2 ;
-(void)_handleZoneProtectionDataForRecordInfo:(id)arg1 ;
-(void)_handleShareProtectionDataForRecordInfo:(id)arg1 ;
-(id)_unwrapAssetKeyForAsset:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(OpaquePCSShareProtectionRef)arg4 ;
-(id)_unwrapPackageAssets:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(OpaquePCSShareProtectionRef)arg4 ;
-(id)_unwrapEncryptedPropertiesForRecordValueStore:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(void)setMarkedToFinish:(BOOL)arg1 ;
-(void)_finishDecryptOperation;
-(void)setOutstandingDecryptions:(NSMutableArray *)arg1 ;
-(void)setRecordDecryptGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRecordDecryptQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMaxUnwrapAttempts:(unsigned long long)arg1 ;
@end
