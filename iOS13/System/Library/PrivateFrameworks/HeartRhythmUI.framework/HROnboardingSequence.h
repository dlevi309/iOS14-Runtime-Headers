/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@class NSArray;

@interface HROnboardingSequence : NSObject {

	NSArray* _pages;

}

@property (nonatomic,readonly) NSArray * pages;              //@synthesize pages=_pages - In the implementation block
+(id)firstTimeElectrocardiogramOnboardingSequence;
+(id)firstTimeAntimonyOnlyOnboardingSequence;
-(NSArray *)pages;
-(id)_initWithPages:(id)arg1 ;
@end

