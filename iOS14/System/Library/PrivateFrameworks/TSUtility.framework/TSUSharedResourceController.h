/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol TSUSharedResourceControllerDelegate, OS_dispatch_group;
#import <TSUtility/TSUtility-Structs.h>
@class NSString, NSCondition, NSObject;

@interface TSUSharedResourceController : NSObject {

	int _acquirerCount;
	id<TSUSharedResourceControllerDelegate> _delegate;
	NSString* _resourceForThreadKey;
	NSString* _hasResourceForThreadKey;
	NSCondition* _resourceLock;
	id _resource;
	struct {
		unsigned canWaitOnMainThread : 1;
		unsigned acquiresResourceAsynchronously : 1;
		unsigned hasResource : 1;
	}  _flags;
	int _threadsAcquiringResourceCount;
	NSCondition* _waitLock;
	int _waitCount;
	NSObject*<OS_dispatch_group> _accessInProgressGroup;
	NSObject*<OS_dispatch_group> _willEndAccessGroup;
	NSString* _UUID;

}

@property (nonatomic,readonly) NSString * UUID;                     //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) BOOL canWaitOnMainThread; 
-(NSString *)UUID;
-(id)init;
-(id)description;
-(id)initWithName:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(void)didBeginAccessToResource:(id)arg1 isFromThreadWaitingToAcquireResource:(BOOL)arg2 ;
-(void)willEndAccessToResourceForcingToWaitForPendingAccesses:(BOOL)arg1 ;
-(void)wakeUpAllThreadsWaitingForResourceWithLock;
-(BOOL)performSynchronousAccessIfResourceIsAvailable:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)acquireResourceWithLockAndPerformSynchronousAccessUsingBlock:(/*^block*/id)arg1 ;
-(void)waitForResourceWithLockAndPerformSynchronousAccessUsingBlock:(/*^block*/id)arg1 ;
-(void)willEndAccessToResource;
-(BOOL)canWaitOnMainThread;
-(void)setCanWaitOnMainThread:(BOOL)arg1 ;
-(void)didBeginAccessToResource:(id)arg1 ;
-(void)performSynchronousAccessUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)performSynchronousAccessIfResourceIsAvailableUsingBlock:(/*^block*/id)arg1 ;
@end

