/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKModularSmallActivityTemplateView : NTKModularTemplateView {

	NTKRingsAndDotsView* _ringsView;
	NSMutableArray* _ringsFillFractions;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)_update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(void)_layoutContentView;
-(void)setIsXL:(BOOL)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5 ;
-(void)applyColorScheme:(id)arg1 ;
-(void)_configureContentSubviews;
-(void)_setLayoutEmptyRings;
@end

