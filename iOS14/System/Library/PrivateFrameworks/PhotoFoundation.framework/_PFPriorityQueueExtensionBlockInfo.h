/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface _PFPriorityQueueExtensionBlockInfo : NSObject {

	unsigned _qos;
	/*^block*/id _block;
	unsigned long long _priority;

}

@property (readonly) id block;                                 //@synthesize block=_block - In the implementation block
@property (readonly) unsigned qos;                             //@synthesize qos=_qos - In the implementation block
@property (readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
-(unsigned)qos;
-(id)block;
-(id)initWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3 ;
-(unsigned long long)priority;
@end

