/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFMakeVideoFromGIFAction : WFAction {

	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id cancelBlock;              //@synthesize cancelBlock=_cancelBlock - In the implementation block
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)cancel;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
@end

