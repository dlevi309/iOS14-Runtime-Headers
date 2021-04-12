/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEEarthquake : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA79*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 inputInfo:(SCD_Struct_PA80)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(void)getEdgeMode:(unsigned*)arg1 withInfo:(SCD_Struct_PA79*)arg2 ;
-(BOOL)variesOverTime;
-(HGRef<HGNode>*)quakeHeliumNodeWithInputImage:(HGRef<HGNode>*)arg1 inputImage:(id)arg2 outputImage:(id)arg3 renderInfo:(SCD_Struct_PA79*)arg4 twist:(float)arg5 horizontalShake:(float)arg6 verticalShake:(float)arg7 layers:(float)arg8 centerX:(float)arg9 centerY:(float)arg10 randomSeed:(int)arg11 ;
@end
