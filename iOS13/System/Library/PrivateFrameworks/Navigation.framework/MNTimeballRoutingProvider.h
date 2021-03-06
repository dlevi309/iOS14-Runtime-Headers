/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol OS_dispatch_queue;
@class NSObject, MNTimeballCache, MNTimeballNetworkRequester;

@interface MNTimeballRoutingProvider : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	MNTimeballCache* _cache;
	MNTimeballNetworkRequester* _networkRequester;

}
-(id)initWithCache:(id)arg1 ;
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 fromOrigin:(id)arg4 auditToken:(id)arg5 callbackBlock:(/*^block*/id)arg6 callbackQueue:(id)arg7 ;
-(void)_gotoNetworkForOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(void)_checkCacheForOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 fromOrigin:(id)arg4 callbackBlock:(/*^block*/id)arg5 callbackQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)setNetworkRequester:(id)arg1 ;
@end

