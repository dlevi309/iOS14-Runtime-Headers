/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsUI2.PaidBundleBackgroundWorkerManager : NSObject <FCBundleSubscriptionChangeObserver> {

	 backgroundFetchManager;
	 workerFactory;
	 bundleSubscriptionManager;
	 registeredWorkers;

}
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(id)init;
@end
