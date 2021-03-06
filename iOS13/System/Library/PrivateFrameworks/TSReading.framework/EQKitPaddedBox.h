/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@class EQKitBox;

@interface EQKitPaddedBox : EQKitBox {

	EQKitBox* mBox;
	double mHeight;
	double mDepth;
	double mWidth;
	double mLspace;
	double mVoffset;

}

@property (nonatomic,readonly) EQKitBox * box; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double lspace; 
@property (nonatomic,readonly) double voffset; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)depth;
-(double)width;
-(double)height;
-(EQKitBox *)box;
-(BOOL)p_getTransform:(CGAffineTransform*)arg1 fromDescendant:(id)arg2 ;
-(double)opticalAlignWidth;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(id)initWithBox:(id)arg1 height:(double)arg2 width:(double)arg3 depth:(double)arg4 lspace:(double)arg5 voffset:(double)arg6 ;
-(double)lspace;
-(double)voffset;
@end

