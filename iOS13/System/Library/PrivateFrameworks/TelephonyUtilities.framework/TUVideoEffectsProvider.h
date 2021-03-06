/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

@class TUVideoEffect, NSArray;


@protocol TUVideoEffectsProvider <NSObject>
@property (nonatomic,retain) TUVideoEffect * currentVideoEffect; 
@property (nonatomic,readonly) NSArray * availableVideoEffects; 
@required
-(void)setCurrentVideoEffect:(id)arg1;
-(TUVideoEffect *)currentVideoEffect;
-(NSArray *)availableVideoEffects;
-(id)thumbnailImageForVideoEffectName:(id)arg1;

@end

