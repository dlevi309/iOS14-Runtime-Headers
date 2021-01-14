/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class WFWorkflowIconDrawerContext, WFColor, NSData;

@interface WFWorkflowIconDrawer : NSObject {

	BOOL _drawBackground;
	BOOL _useCustomImage;
	BOOL _rounded;
	BOOL _dark;
	BOOL _highContrast;
	BOOL _outline;
	unsigned short _glyphCharacter;
	WFWorkflowIconDrawerContext* _drawerContext;
	WFColor* _backgroundColor;
	NSData* _customImageData;
	WFColor* _glyphColor;
	double _cornerRadius;
	CGSize _glyphSize;

}

@property (nonatomic,readonly) WFWorkflowIconDrawerContext * drawerContext;              //@synthesize drawerContext=_drawerContext - In the implementation block
@property (assign,nonatomic) unsigned short glyphCharacter;                              //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,retain) WFColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSData * customImageData;                                     //@synthesize customImageData=_customImageData - In the implementation block
@property (nonatomic,retain) WFColor * glyphColor;                                       //@synthesize glyphColor=_glyphColor - In the implementation block
@property (assign,nonatomic) CGSize glyphSize;                                           //@synthesize glyphSize=_glyphSize - In the implementation block
@property (assign,nonatomic) BOOL drawBackground;                                        //@synthesize drawBackground=_drawBackground - In the implementation block
@property (assign,nonatomic) BOOL useCustomImage;                                        //@synthesize useCustomImage=_useCustomImage - In the implementation block
@property (assign,nonatomic) BOOL rounded;                                               //@synthesize rounded=_rounded - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL dark;                                                  //@synthesize dark=_dark - In the implementation block
@property (assign,nonatomic) BOOL highContrast;                                          //@synthesize highContrast=_highContrast - In the implementation block
@property (assign,nonatomic) BOOL outline;                                               //@synthesize outline=_outline - In the implementation block
+(id)imageWithIcon:(id)arg1 size:(CGSize)arg2 background:(BOOL)arg3 ;
+(id)imageWithIcon:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 glyphColor:(id)arg4 background:(BOOL)arg5 ;
+(id)imageWithIcon:(id)arg1 size:(CGSize)arg2 ;
+(id)glyphImageWithIcon:(id)arg1 size:(CGSize)arg2 ;
+(id)pngDataForImageWithIcon:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)outline;
-(id)init;
-(void)setGlyphColor:(WFColor *)arg1 ;
-(BOOL)dark;
-(WFColor *)glyphColor;
-(void)setIcon:(id)arg1 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(void)setBackgroundColor:(WFColor *)arg1 ;
-(id)initWithIcon:(id)arg1 ;
-(WFColor *)backgroundColor;
-(double)cornerRadius;
-(CGSize)glyphSize;
-(void)setDark:(BOOL)arg1 ;
-(unsigned short)glyphCharacter;
-(void)setOutline:(BOOL)arg1 ;
-(BOOL)rounded;
-(void)setCornerRadius:(double)arg1 ;
-(void)setGlyphSize:(CGSize)arg1 ;
-(void)drawInContext:(id)arg1 inRect:(CGRect)arg2 ;
-(void)setDrawBackground:(BOOL)arg1 ;
-(id)initWithIcon:(id)arg1 drawerContext:(id)arg2 ;
-(NSData *)customImageData;
-(id)initWithHomeScreenIcon:(id)arg1 ;
-(id)initWithDrawerContext:(id)arg1 ;
-(id)imageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(WFWorkflowIconDrawerContext *)drawerContext;
-(void)setGlyphCharacter:(unsigned short)arg1 ;
-(void)setCustomImageData:(NSData *)arg1 ;
-(BOOL)drawBackground;
-(BOOL)useCustomImage;
-(void)setUseCustomImage:(BOOL)arg1 ;
-(void)setRounded:(BOOL)arg1 ;
-(BOOL)highContrast;
-(void)setHighContrast:(BOOL)arg1 ;
@end
