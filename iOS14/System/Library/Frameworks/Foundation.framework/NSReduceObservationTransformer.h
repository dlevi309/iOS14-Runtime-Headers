/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSObservationTransformer.h>

@interface NSReduceObservationTransformer : NSObservationTransformer {

	/*^block*/id _reducer;
	id _accumulator;

}
+(id)reduceValue:(id)arg1 withReducer:(/*^block*/id)arg2 ;
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 initialValue:(id)arg2 ;
-(void)dealloc;
@end

