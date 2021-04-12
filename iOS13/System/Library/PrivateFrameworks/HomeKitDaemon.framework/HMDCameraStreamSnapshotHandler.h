/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraStreamSnapshotCaptureDelegate.h>
#import <libobjc.A.dylib/HMDCameraGetSnapshotProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString, NSMutableDictionary, NSMapTable;

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol> {

	BOOL _streamAvailable;
	BOOL _streamSetupInProgress;
	NSMutableSet* _streamSnapshotCaptures;
	NSMutableSet* _retiredStreamSnapshotCaptures;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSString* _logID;
	NSMutableDictionary* _serviceInstanceStreamStatus;
	NSMapTable* _delegateTable;

}

@property (nonatomic,readonly) NSMutableSet * streamSnapshotCaptures;                                  //@synthesize streamSnapshotCaptures=_streamSnapshotCaptures - In the implementation block
@property (nonatomic,readonly) NSMutableSet * retiredStreamSnapshotCaptures;                           //@synthesize retiredStreamSnapshotCaptures=_retiredStreamSnapshotCaptures - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                             //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                                       //@synthesize logID=_logID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * serviceInstanceStreamStatus;                      //@synthesize serviceInstanceStreamStatus=_serviceInstanceStreamStatus - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateTable;                                             //@synthesize delegateTable=_delegateTable - In the implementation block
@property (getter=isStreamAvailable,nonatomic,readonly) BOOL streamAvailable;                          //@synthesize streamAvailable=_streamAvailable - In the implementation block
@property (getter=isStreamSetupInProgress,nonatomic,readonly) BOOL streamSetupInProgress;              //@synthesize streamSetupInProgress=_streamSetupInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)removeDelegate:(id)arg1 ;
-(id)logIdentifier;
-(NSString *)logID;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)removeVideoStreamInterface:(id)arg1 ;
-(void)addVideoStreamInterface:(id)arg1 ;
-(NSMapTable *)delegateTable;
-(void)callStreamSetupInProgress:(BOOL)arg1 ;
-(NSMutableDictionary *)serviceInstanceStreamStatus;
-(void)setStreamSetupInProgress:(BOOL)arg1 ;
-(NSMutableSet *)streamSnapshotCaptures;
-(void)setStreamAvailable:(BOOL)arg1 ;
-(NSMutableSet *)retiredStreamSnapshotCaptures;
-(void)_callDidGetNewSnapshot:(id)arg1 ;
-(void)_callDidGetLastSnapshot:(id)arg1 ;
-(void)_callStreamSetupInProgress:(BOOL)arg1 ;
-(void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2 ;
-(void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3 ;
-(void)addDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(BOOL)isStreamAvailable;
-(BOOL)isStreamSetupInProgress;
-(void)setStreamSetupStatusForService:(id)arg1 inProgress:(BOOL)arg2 ;
@end
