/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

@class NSString;


@protocol IAMMessageTarget <NSObject>
@property (nonatomic,readonly) NSString * targetIdentifier; 
@required
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;
-(NSString *)targetIdentifier;

@end

