/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeQuerying;
@class _CDClientContext, NSObject, _DKKnowledgeStore;

@interface HMDDuetEventManager : HMFObject {

	_CDClientContext* _context;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<_DKKnowledgeSaving> _saveStore;
	_DKKnowledgeStore* _deleteStore;
	id<_DKKnowledgeQuerying> _queryStore;

}

@property (nonatomic,retain) _CDClientContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving> saveStore;                    //@synthesize saveStore=_saveStore - In the implementation block
@property (nonatomic,retain) _DKKnowledgeStore * deleteStore;                     //@synthesize deleteStore=_deleteStore - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> queryStore;                 //@synthesize queryStore=_queryStore - In the implementation block
+(id)eventTypeAsString:(unsigned long long)arg1 ;
+(id)sharedInstance;
+(id)identifierForType:(unsigned long long)arg1 eventValue:(id)arg2 ;
+(id)eventStreamForType:(unsigned long long)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)_handleServiceRemovedNotification:(id)arg1 ;
-(_CDClientContext *)context;
-(void)_handleAccessoryRemovedNotification:(id)arg1 ;
-(_DKKnowledgeStore *)deleteStore;
-(void)_handleHomeRemovedNotification:(id)arg1 ;
-(void)_handleRoomRemovedNotification:(id)arg1 ;
-(void)setContext:(_CDClientContext *)arg1 ;
-(void)_handleActionSetRemovedNotification:(id)arg1 ;
-(id<_DKKnowledgeSaving>)saveStore;
-(void)_logToCoreDuetStoreEventWithType:(unsigned long long)arg1 metadata:(id)arg2 ;
-(void)_logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5 ;
-(id<_DKKnowledgeQuerying>)queryStore;
-(id)_queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)_deleteEventsForHomeUUID:(id)arg1 ;
-(void)_deleteEventsForAccessoryUUID:(id)arg1 ;
-(void)_deleteEventsForServiceUUID:(id)arg1 ;
-(void)_deleteEventsForRoomUUID:(id)arg1 ;
-(void)_deleteEventsForActionSetUUID:(id)arg1 ;
-(void)_deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(id)_dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5 ;
-(id)queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)resetAllEvents;
-(id)dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(id)dumpAllEvents;
-(id)queryMostRecentEventWithCharacteristicType:(id)arg1 serviceType:(id)arg2 homeUUID:(id)arg3 ;
-(void)setSaveStore:(id<_DKKnowledgeSaving>)arg1 ;
-(void)setDeleteStore:(_DKKnowledgeStore *)arg1 ;
-(void)setQueryStore:(id<_DKKnowledgeQuerying>)arg1 ;
@end

