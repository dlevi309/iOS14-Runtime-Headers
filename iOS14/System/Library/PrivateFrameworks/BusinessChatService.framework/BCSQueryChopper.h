/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSQueryChopperProtocol.h>

@protocol OS_dispatch_queue, BCSMetricFactoryProtocol;
@class NSObject, NSString;

@interface BCSQueryChopper : NSObject <BCSQueryChopperProtocol> {

	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	id<BCSMetricFactoryProtocol> _metricFactory;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialDispatchQueue;              //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
@property (nonatomic,readonly) id<BCSMetricFactoryProtocol> metricFactory;                    //@synthesize metricFactory=_metricFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(id<BCSMetricFactoryProtocol>)metricFactory;
-(id)initWithMetricFactory:(id)arg1 ;
-(void)queryChopperDelegate:(id)arg1 fetchLinkItemModelWithURL:(id)arg2 forClientBundleID:(id)arg3 metric:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)queryChopperDelegate:(id)arg1 isBusinessRegisteredForURL:(id)arg2 forClientBundleID:(id)arg3 metric:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_chopItemIdentifiersToFetchFromURL:(id)arg1 ;
-(long long)_indexOfItemIdentifierInfo:(id)arg1 inItemIdentifierInfos:(id)arg2 ;
-(BOOL)_allHigherPriorityRemoteFetchesHaveCompletedWithLinkItemIdentifier:(id)arg1 itemsFound:(id)arg2 itemIdentifiersToFetch:(id)arg3 ;
-(void)_returnHighestPriorityLinkItemWithItemIdentifiersToFetch:(id)arg1 fetchedItems:(id)arg2 fetchedErrors:(id)arg3 metric:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_removeLinkItemDuplicatesInOrderFromArray:(id)arg1 ;
@end
