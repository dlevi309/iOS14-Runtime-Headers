/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, UILabel, NSString, NSMutableArray, NSMutableDictionary, CLKFont, UIColor;

@interface NTKTimeIntervalLabel : UIView {

	CLKDevice* _device;
	double _time;
	double _currentTextTime;
	BOOL _showSubSeconds;
	long long _style;
	UILabel* _label;
	UILabel* _suffix;
	UILabel* _prefix;
	NSString* _text;
	NSMutableArray* _digits;
	NSMutableDictionary* _images;
	double _staticLabelWidth;
	double _digitWidth;
	CGSize _textSize;
	BOOL _isShowingDigits;
	BOOL _labelWasSized;
	BOOL _isSigned;
	BOOL _suffixSmallCaps;
	BOOL _frozen;
	CLKFont* _font;
	/*^block*/id _didResizeHandler;

}

@property (assign,nonatomic) double time;                        //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * suffix; 
@property (assign,nonatomic) BOOL suffixSmallCaps;               //@synthesize suffixSmallCaps=_suffixSmallCaps - In the implementation block
@property (nonatomic,copy) NSString * prefix; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) CLKFont * font;                     //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) BOOL showSubSeconds;              //@synthesize showSubSeconds=_showSubSeconds - In the implementation block
@property (assign,nonatomic) BOOL frozen;                        //@synthesize frozen=_frozen - In the implementation block
@property (nonatomic,readonly) CGSize textSize;                  //@synthesize textSize=_textSize - In the implementation block
@property (nonatomic,readonly) double actualWidth; 
@property (nonatomic,copy) id didResizeHandler;                  //@synthesize didResizeHandler=_didResizeHandler - In the implementation block
-(void)dealloc;
-(double)time;
-(void)setTime:(double)arg1 ;
-(NSString *)prefix;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(CLKFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CLKFont *)font;
-(UIColor *)textColor;
-(void)setFrozen:(BOOL)arg1 ;
-(CGSize)textSize;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setLabelText:(id)arg1 ;
-(NSString *)suffix;
-(double)_labelWidth;
-(void)calculateMetrics;
-(void)setSuffix:(NSString *)arg1 ;
-(void)_localeChanged;
-(BOOL)frozen;
-(double)actualWidth;
-(id)didResizeHandler;
-(void)setDidResizeHandler:(id)arg1 ;
-(void)forceTime:(double)arg1 ;
-(id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2 style:(long long)arg3 signed:(BOOL)arg4 forDevice:(id)arg5 ;
-(id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2 style:(long long)arg3 forDevice:(id)arg4 ;
-(id)_cachedImageForDigit:(unsigned long long)arg1 ;
-(id)getTimeText;
-(id)_localImageForDigit:(unsigned long long)arg1 ;
-(BOOL)shouldShowDigits;
-(void)_invalidateDigitImages;
-(id)formatTimeInterval;
-(BOOL)showSubSeconds;
-(void)createDigitViews;
-(void)sizeToFitLabelIfNeeded;
-(void)recalculateSize;
-(id)initWithMonospacedFontOfSize:(double)arg1 forDevice:(id)arg2 ;
-(BOOL)suffixSmallCaps;
-(void)setSuffixSmallCaps:(BOOL)arg1 ;
@end
