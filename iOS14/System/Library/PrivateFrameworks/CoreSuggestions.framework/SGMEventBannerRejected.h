/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMEventBannerRejected : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 app:(SGMBannerDisplayApp_)arg2 category:(SGMEventCategory_)arg3 extracted:(SGMEventExtractionType_)arg4 ;
-(PETScalarEventTracker *)tracker;
@end

