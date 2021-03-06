/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/RCOperationRetrySignal.h>

@protocol OS_dispatch_group;
@class NSObject, NSString;

@interface RCOperationExternalSignal : NSObject <RCOperationRetrySignal> {

	BOOL _result;
	NSObject*<OS_dispatch_group> _group;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)onQueue:(id)arg1 signal:(/*^block*/id)arg2 ;
-(void)triggerWithRetry:(BOOL)arg1 ;
@end

