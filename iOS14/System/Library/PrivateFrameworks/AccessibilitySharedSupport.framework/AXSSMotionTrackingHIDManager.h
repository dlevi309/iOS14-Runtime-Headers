/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@protocol AXSSMotionTrackingHIDManagerDelegate, OS_dispatch_queue;
@class NSObject, HIDManager, NSMutableArray, NSArray;

@interface AXSSMotionTrackingHIDManager : NSObject {

	BOOL __monitoring;
	id<AXSSMotionTrackingHIDManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> __hidManagerDispatchQueue;
	HIDManager* __hidManager;
	NSMutableArray* __devices;

}

@property (assign,nonatomic) BOOL _monitoring;                                                      //@synthesize _monitoring=__monitoring - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _hidManagerDispatchQueue;                 //@synthesize _hidManagerDispatchQueue=__hidManagerDispatchQueue - In the implementation block
@property (nonatomic,retain) HIDManager * _hidManager;                                              //@synthesize _hidManager=__hidManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * _devices;                                             //@synthesize _devices=__devices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (assign,nonatomic,__weak) id<AXSSMotionTrackingHIDManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stopMonitoring;
-(NSArray *)devices;
-(id)init;
-(id<AXSSMotionTrackingHIDManagerDelegate>)delegate;
-(void)startMonitoring;
-(void)setDelegate:(id<AXSSMotionTrackingHIDManagerDelegate>)arg1 ;
-(NSMutableArray *)_devices;
-(HIDManager *)_hidManager;
-(BOOL)_monitoring;
-(void)dealloc;
-(void)set_monitoring:(BOOL)arg1 ;
-(void)set_hidManager:(HIDManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)_hidManagerDispatchQueue;
-(void)_deviceNotification:(id)arg1 added:(BOOL)arg2 ;
-(void)set_hidManagerDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_devices:(NSMutableArray *)arg1 ;
@end

