/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class UIColor;

@interface WBSTemplateIconMonogramConfiguration : NSObject {

	BOOL _skipMonogramGeneration;
	double _fontSize;
	long long _fontWeight;
	double _baselineOffset;
	UIColor* _backgroundColor;
	double _cornerRadius;
	CGSize _iconSize;

}

@property (assign,nonatomic) BOOL skipMonogramGeneration;              //@synthesize skipMonogramGeneration=_skipMonogramGeneration - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) double fontSize;                          //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) long long fontWeight;                     //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) double baselineOffset;                    //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(id)configurationWithIconSize:(CGSize)arg1 fontSize:(double)arg2 fontWeight:(long long)arg3 baselineOffset:(double)arg4 backgroundColor:(id)arg5 cornerRadius:(double)arg6 ;
+(id)configurationWithBackgroundColor:(id)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setFontWeight:(long long)arg1 ;
-(long long)fontWeight;
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
-(BOOL)skipMonogramGeneration;
-(void)setSkipMonogramGeneration:(BOOL)arg1 ;
@end
