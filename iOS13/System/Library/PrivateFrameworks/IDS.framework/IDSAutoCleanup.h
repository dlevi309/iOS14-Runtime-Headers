/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@interface IDSAutoCleanup : NSObject {

	/*^block*/id _cleanupBlock;
	int _accessCount;

}
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)incrementAccessCount;
@end
