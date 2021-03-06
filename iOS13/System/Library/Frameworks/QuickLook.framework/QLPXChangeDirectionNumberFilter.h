/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLPXNumberFilter.h>

@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter {

	double _threshold;
	double _minimumChange;

}

@property (assign,nonatomic) double minimumChange;              //@synthesize minimumChange=_minimumChange - In the implementation block
-(id)initWithInput:(double)arg1 ;
-(void)setMinimumChange:(double)arg1 ;
-(double)minimumChange;
-(double)updatedOutput;
-(double)initialOutputForInput:(double)arg1 ;
@end

