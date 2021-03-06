/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/FLTelemetryController.h>

@class NSString;

@interface FLTelemetryAggregateController : NSObject <FLTelemetryController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureItemRemoval:(id)arg1 ;
-(void)captureItemAddition:(id)arg1 ;
-(void)captureCurrentState:(id)arg1 ;
-(void)captureActionForItemIdentifier:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3 ;
-(void)captureActionForItem:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3 ;
-(void)captureItemView:(id)arg1 ;
-(void)captureGroupAddition:(id)arg1 ;
-(void)captureGroupRemoval:(id)arg1 ;
-(void)captureClientAddition:(id)arg1 ;
-(void)captureClientRemoval:(id)arg1 ;
@end

