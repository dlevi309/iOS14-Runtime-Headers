/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSString;

@interface HMDObjectLookup : HMFObject <HMFLogging> {

	NSMapTable* _uuidToObjectMapping;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMapTable * uuidToObjectMapping;                    //@synthesize uuidToObjectMapping=_uuidToObjectMapping - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithWorkQueue:(id)arg1 ;
-(void)scanObjects;
-(NSMapTable *)uuidToObjectMapping;
-(id)_lookUpObjectWithUUID:(id)arg1 applyObjectChange:(id)arg2 previous:(id)arg3 result:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)applyChange:(id)arg1 previous:(id)arg2 onObject:(id)arg3 result:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)resetObjects;
-(void)lookUpAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

