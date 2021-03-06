/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKFetchShareMetadataOperationCallbacks.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSDictionary, CKFetchShareMetadataOperationInfo;

@interface CKFetchShareMetadataOperation : CKOperation <CKFetchShareMetadataOperationCallbacks> {

	BOOL _shouldFetchRootRecord;
	/*^block*/id _perShareMetadataBlock;
	/*^block*/id _fetchShareMetadataCompletionBlock;
	NSArray* _shareURLs;
	NSArray* _rootRecordDesiredKeys;
	NSMutableDictionary* _errorsByURL;
	NSMutableSet* _packagesToDestroy;
	NSDictionary* _shareInvitationTokensByShareURL;

}

@property (nonatomic,retain) NSMutableDictionary * errorsByURL;                                                      //@synthesize errorsByURL=_errorsByURL - In the implementation block
@property (nonatomic,retain) NSMutableSet * packagesToDestroy;                                                       //@synthesize packagesToDestroy=_packagesToDestroy - In the implementation block
@property (nonatomic,readonly) id<CKFetchShareMetadataOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchShareMetadataOperationInfo * operationInfo; 
@property (nonatomic,copy) NSDictionary * shareInvitationTokensByShareURL;                                           //@synthesize shareInvitationTokensByShareURL=_shareInvitationTokensByShareURL - In the implementation block
@property (nonatomic,copy) NSArray * shareURLs;                                                                      //@synthesize shareURLs=_shareURLs - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                                                             //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,copy) NSArray * rootRecordDesiredKeys;                                                          //@synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys - In the implementation block
@property (nonatomic,copy) id perShareMetadataBlock;                                                                 //@synthesize perShareMetadataBlock=_perShareMetadataBlock - In the implementation block
@property (nonatomic,copy) id fetchShareMetadataCompletionBlock;                                                     //@synthesize fetchShareMetadataCompletionBlock=_fetchShareMetadataCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(BOOL)claimPackagesInRecord:(id)arg1 error:(id*)arg2 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSMutableSet *)packagesToDestroy;
-(void)setPackagesToDestroy:(NSMutableSet *)arg1 ;
-(void)setPerShareMetadataBlock:(id)arg1 ;
-(void)setFetchShareMetadataCompletionBlock:(id)arg1 ;
-(id)initWithShareURLs:(id)arg1 ;
-(NSArray *)shareURLs;
-(NSMutableDictionary *)errorsByURL;
-(void)setShareURLs:(NSArray *)arg1 ;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(NSArray *)rootRecordDesiredKeys;
-(id)perShareMetadataBlock;
-(void)setRootRecordDesiredKeys:(NSArray *)arg1 ;
-(NSDictionary *)shareInvitationTokensByShareURL;
-(void)setShareInvitationTokensByShareURL:(NSDictionary *)arg1 ;
-(id)fetchShareMetadataCompletionBlock;
-(void)handleShareMetadataFetchForURL:(id)arg1 shareMetadata:(id)arg2 error:(id)arg3 ;
-(void)setErrorsByURL:(NSMutableDictionary *)arg1 ;
-(id)initWithShareURLs:(id)arg1 invitationTokensByShareURL:(id)arg2 ;
@end

