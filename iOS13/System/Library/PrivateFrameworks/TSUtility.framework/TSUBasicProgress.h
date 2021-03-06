/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUProgress.h>

@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {

	TSUBasicProgressStorage* mStorage;

}

@property (assign) double value; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(id)init;
-(void)dealloc;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(double)maxValue;
-(id)initWithMaxValue:(double)arg1 ;
@end

