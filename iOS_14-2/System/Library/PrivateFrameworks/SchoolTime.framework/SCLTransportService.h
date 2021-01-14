/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSHashTable, NSObject, NSString;

@interface SCLTransportService : NSObject <IDSServiceDelegate, IDSServiceDelegatePrivate> {

	IDSService* _service;
	NSHashTable* _transportControllers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (nonatomic,readonly) NSHashTable * transportControllers;                    //@synthesize transportControllers=_transportControllers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                  //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(IDSService *)service;
-(NSHashTable *)transportControllers;
-(id)transportControllerForDevice:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 service:(id)arg2 ;
-(void)addTransportController:(id)arg1 ;
-(void)removeTransportController:(id)arg1 ;
-(BOOL)sendProtobuf:(id)arg1 toDevice:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
@end
