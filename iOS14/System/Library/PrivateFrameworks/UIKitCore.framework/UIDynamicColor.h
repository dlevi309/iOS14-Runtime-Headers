/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIColor.h>

@interface UIDynamicColor : UIColor
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(void)setFill;
-(BOOL)isPatternColor;
-(id)_backgroundColorIgnoringHighContrast;
-(double)alphaComponent;
-(id)_highContrastDynamicColor;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(BOOL)_isDynamic;
-(void)setStroke;
-(void)set;
-(id)colorSpaceName;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(BOOL)_isDeepColor;
-(id)resolvedColorWithTraitCollection:(id)arg1 ;
@end

