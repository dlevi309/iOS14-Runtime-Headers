/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SSVMediaContentTasteController : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	unsigned long long _currentResponseRevisionID;
	unsigned long long _lastNotificationReceivedResponseRevisionID;
	BOOL _havePendingRetryOperation;
	int _itemsDidChangeNotifyToken;
	int _exponentialBackOffSeconds;
	long long _pendingMutateRequestCount;
	NSMutableDictionary* _playlistGlobalIDToContentTasteItem;
	NSMutableDictionary* _playlistGlobalIDToPendingContentTasteItem;
	NSMutableDictionary* _contentTasteItemsToRetry;
	NSMutableDictionary* _storeAdamIDToContentTasteItem;
	NSMutableDictionary* _storeAdamIDToPendingContentTasteItem;

}
+(id)defaultMediaTasteController;
-(id)init;
-(void)_refreshContentTasteItems;
-(void)_contentTasteForItemUpdate:(id)arg1 finishedWithError:(id)arg2 ;
-(void)_sendUpdateWithItemUpdates:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleContentTasteItemsUpdateResponse:(id)arg1 allowNotifications:(BOOL)arg2 ;
-(BOOL)_isRetryableError:(id)arg1 ;
-(void)_scheduleContentTasteUpdateOperationForFailedItems;
-(void)_retryOperationForItemUpdates:(id)arg1 finishedWithError:(id)arg2 ;
-(unsigned long long)contentTasteTypeForPlaylistGlobalID:(id)arg1 ;
-(unsigned long long)contentTasteTypeForStoreAdamID:(long long)arg1 ;
-(void)setContentTasteType:(unsigned long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setContentTasteType:(unsigned long long)arg1 forStoreAdamID:(long long)arg2 withContentType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

