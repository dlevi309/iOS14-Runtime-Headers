/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface CSDispatchGroup : NSObject {

	NSObject*<OS_dispatch_group> _dispatchGroup;
	int _dispatchGroupCounter;

}
-(id)init;
-(long long)waitWithTimeout:(unsigned long long)arg1 ;
-(void)leave;
-(void)enter;
@end

