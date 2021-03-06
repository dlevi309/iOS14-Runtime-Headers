/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKColorPickerCrosshairViewDelegate.h>
#import <libobjc.A.dylib/_PKColorPickerImplementation.h>

@protocol _PKColorPickerImplementationDelegate;
@class UIColor, NSArray, NSString;

@interface PKColorMatrixView : UIView <PKColorPickerCrosshairViewDelegate, _PKColorPickerImplementation> {

	UIColor* selectedColor;
	id<_PKColorPickerImplementationDelegate> _colorPickerDelegate;
	long long _colorUserInterfaceStyle;
	NSArray* _colorMatrix;
	NSArray* _darkColorMatrix;
	NSArray* _colorButtons;

}

@property (nonatomic,retain) NSArray * colorMatrix;                                                            //@synthesize colorMatrix=_colorMatrix - In the implementation block
@property (nonatomic,retain) NSArray * darkColorMatrix;                                                        //@synthesize darkColorMatrix=_darkColorMatrix - In the implementation block
@property (nonatomic,retain) NSArray * colorButtons;                                                           //@synthesize colorButtons=_colorButtons - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor; 
@property (assign,nonatomic,__weak) id<_PKColorPickerImplementationDelegate> colorPickerDelegate;              //@synthesize colorPickerDelegate=_colorPickerDelegate - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle;                                                //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultColorMatrix;
+(id)flippedColorMatrix:(id)arg1 ;
+(id)_representableColorForColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)colorMatrix;
-(void)layoutSubviews;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)didTapColorButton:(id)arg1 ;
-(void)setColorButtons:(NSArray *)arg1 ;
-(id)_pointFromButton:(id)arg1 ;
-(id)_colorForPoint:(id)arg1 ;
-(id<_PKColorPickerImplementationDelegate>)colorPickerDelegate;
-(NSArray *)colorButtons;
-(id)uiColorMatrix;
-(long long)colorUserInterfaceStyle;
-(long long)_uiColorUserInterfaceStyle;
-(NSArray *)darkColorMatrix;
-(CGRect)_frameForViewWithPoint:(id)arg1 ;
-(id)_pointForColor:(id)arg1 ;
-(id)_boundedPointForPoint:(id)arg1 ;
-(id)_pointForCGPoint:(CGPoint)arg1 ;
-(CGRect)frameForColorPickerCrosshairView:(id)arg1 ;
-(id)colorForColorPickerCrosshairView:(id)arg1 frame:(CGRect)arg2 ;
-(unsigned long long)cornerPositionForColorPickerCrosshairView:(id)arg1 ;
-(void)colorPickerCrosshairViewShouldUpdateColor:(id)arg1 point:(CGPoint)arg2 ;
-(void)colorPickerCrosshairViewShouldUpdateWithColor:(id)arg1 ;
-(id)representableColorForColor:(id)arg1 ;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)setColorPickerDelegate:(id<_PKColorPickerImplementationDelegate>)arg1 ;
-(void)setColorMatrix:(NSArray *)arg1 ;
-(void)setDarkColorMatrix:(NSArray *)arg1 ;
@end

