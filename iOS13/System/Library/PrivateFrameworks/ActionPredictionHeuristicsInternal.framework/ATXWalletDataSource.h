/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice;

@interface ATXWalletDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(void)passesWithStyle:(id)arg1 callback:(/*^block*/id)arg2 ;
-(long long)_getPassStyleForString:(id)arg1 ;
-(id)_extractRelevantSemanticTagsFromPass:(id)arg1 ;
@end

