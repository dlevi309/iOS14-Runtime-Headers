/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSURLBag.h>

@class ISURLBag, NSMutableArray, ISLoadURLBagOperation;

@interface SKUIURLBag : SSURLBag {

	ISURLBag* _bag;
	NSMutableArray* _completionBlocks;
	BOOL _forceInvalidationForNextLoad;
	ISLoadURLBagOperation* _operation;

}
+(id)URLBagForContext:(id)arg1 ;
+(id)bagQueue;
-(void)invalidate;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(id)storeFrontIdentifier;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)existingBagDictionary;
-(void)_enqueueOperationWithContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2 ;
@end

