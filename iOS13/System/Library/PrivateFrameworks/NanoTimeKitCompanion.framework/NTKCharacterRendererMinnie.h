/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCharacterRenderer.h>

@class _Flower, _Skirt, NSMutableArray;

@interface NTKCharacterRendererMinnie : NTKCharacterRenderer {

	_Flower* _flower;
	_Skirt* _skirt;
	NSMutableArray* _footTexs[2];

}
-(id)initWithLoader:(id)arg1 ;
-(void)setupGeometry;
-(void)setupBodyState;
-(void)loadFootTextures;
-(int)getBlinkFrameFor15sTime:(float)arg1 ;
-(void)_drawBodyWithEncoder:(id)arg1 ;
-(void)_drawTappingFootWithEncoder:(id)arg1 ;
-(void)_drawHeadWithEncoder:(id)arg1 ;
-(float)_getBlinkDuration;
-(void)_drawFlowerWithEncoder:(id)arg1 ;
-(void)_drawSkirtWithEncoder:(id)arg1 ;
@end

