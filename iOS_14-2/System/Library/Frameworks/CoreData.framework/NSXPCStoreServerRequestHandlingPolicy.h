/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@interface NSXPCStoreServerRequestHandlingPolicy : NSObject
+(void)initialize;
-(id)processPersistentHistoryRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processFetchRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)prefetchRelationships:(id)arg1 forFetch:(id)arg2 sourceOIDs:(id)arg3 fromClientWithContext:(id)arg4 ;
-(id)processBatchDeleteRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)processFaultForObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processSaveRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)processFaultForRelationshipWithName:(id)arg1 onObjectWithID:(id)arg2 fromClientWithContext:(id)arg3 error:(id*)arg4 ;
-(id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)getIDsForEntity:(id)arg1 count:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5 ;
-(id)_coreProcessFetchRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processRelationshipSourceObjectID:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processBatchInsertRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processFetchResults:(id)arg1 prefetchedObjects:(id)arg2 ofType:(unsigned long long)arg3 ;
-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1 ;
-(id)processBatchUpdateRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)_coreFaultForObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1 ;
-(id)processObtainRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end
