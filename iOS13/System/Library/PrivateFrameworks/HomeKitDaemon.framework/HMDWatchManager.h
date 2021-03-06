/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSArray, IDSService, NSString;

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _pairedWithWatch;
	NSArray* _connectedWatches;
	IDSService* _service;

}

@property (nonatomic,readonly) IDSService * service;                             //@synthesize service=_service - In the implementation block
@property (copy,readonly) NSArray * watches; 
@property (copy,readonly) NSArray * connectedWatches;                            //@synthesize connectedWatches=_connectedWatches - In the implementation block
@property (getter=isPairedWithWatch,readonly) BOOL pairedWithWatch;              //@synthesize pairedWithWatch=_pairedWithWatch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)shortDescription;
+(id)logCategory;
+(BOOL)isCompatibleWatchDevice:(id)arg1 ;
-(id)init;
-(IDSService *)service;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(id)attributeDescriptions;
-(BOOL)isPairedWithWatch;
-(NSArray *)connectedWatches;
-(void)__initializeConnectedDevices;
-(NSArray *)watches;
-(id)connectedWatchFromDeviceID:(id)arg1 ;
@end

