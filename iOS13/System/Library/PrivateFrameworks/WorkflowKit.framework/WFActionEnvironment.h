/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@interface WFActionEnvironment : NSObject

@property (nonatomic,readonly) BOOL isMemoryConstrained; 
@property (nonatomic,readonly) BOOL isWatchOS; 
@property (nonatomic,readonly) BOOL isAppExtension; 
+(id)currentEnvironment;
+(id)environmentForWorkflowType:(id)arg1 ;
-(BOOL)isAppExtension;
-(BOOL)isWatchOS;
-(BOOL)isMemoryConstrained;
@end
