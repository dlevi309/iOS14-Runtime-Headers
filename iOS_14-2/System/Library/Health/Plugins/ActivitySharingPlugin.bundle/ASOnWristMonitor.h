/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@protocol ASOnWristMonitorDelegate;
@interface ASOnWristMonitor : NSObject {

	id<ASOnWristMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASOnWristMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ASOnWristMonitorDelegate>)delegate;
-(void)setDelegate:(id<ASOnWristMonitorDelegate>)arg1 ;
-(void)getWristState:(/*^block*/id)arg1 ;
@end
