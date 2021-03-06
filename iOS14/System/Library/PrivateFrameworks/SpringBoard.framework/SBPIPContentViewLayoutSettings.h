/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBPIPContentViewLayoutSettings : NSObject {

	BOOL _defaultToMinimumPreferredContentSize;
	BOOL _sizeChanged;
	double _defaultSize;
	double _minimumSize;
	double _maximumSize;
	double _currentSize;
	double _minimumSizePreference;
	double _maximumSizePreference;
	double _minimumSizeSpanBetweenPreferredSizes;
	double _maximumSizeSpanForPreferredSizeTuning;
	unsigned long long _currentPosition;

}

@property (assign,nonatomic) double defaultSize;                                        //@synthesize defaultSize=_defaultSize - In the implementation block
@property (assign,nonatomic) double minimumSize;                                        //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) double maximumSize;                                        //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) double currentSize;                                        //@synthesize currentSize=_currentSize - In the implementation block
@property (assign,nonatomic) double minimumSizePreference;                              //@synthesize minimumSizePreference=_minimumSizePreference - In the implementation block
@property (assign,nonatomic) double maximumSizePreference;                              //@synthesize maximumSizePreference=_maximumSizePreference - In the implementation block
@property (assign,nonatomic) double minimumSizeSpanBetweenPreferredSizes;               //@synthesize minimumSizeSpanBetweenPreferredSizes=_minimumSizeSpanBetweenPreferredSizes - In the implementation block
@property (assign,nonatomic) double maximumSizeSpanForPreferredSizeTuning;              //@synthesize maximumSizeSpanForPreferredSizeTuning=_maximumSizeSpanForPreferredSizeTuning - In the implementation block
@property (assign,nonatomic) unsigned long long currentPosition;                        //@synthesize currentPosition=_currentPosition - In the implementation block
@property (assign,nonatomic) BOOL defaultToMinimumPreferredContentSize;                 //@synthesize defaultToMinimumPreferredContentSize=_defaultToMinimumPreferredContentSize - In the implementation block
@property (getter=hasSizeChanged,nonatomic,readonly) BOOL sizeChanged;                  //@synthesize sizeChanged=_sizeChanged - In the implementation block
+(id)_sharedInstance;
+(double)contentViewPadding;
+(void)setContentViewPosition:(unsigned long long)arg1 ;
+(double)_maximumSize;
+(double)_minimumSize;
+(void)setContentViewSize:(CGSize)arg1 ;
+(double)_defaultSize;
+(CGSize)minimumStashTabSize;
+(CGSize)defaultContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(double)contentViewPaddingWhileStashed;
+(void)setMaximumSizeSpanForPreferredSizeTuning:(double)arg1 ;
+(void)setMinimumSizeSpanBetweenPreferredSizes:(double)arg1 ;
+(unsigned long long)currentContentViewPosition;
+(CGSize)currentContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)minimumPreferredContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)maximumPreferredContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)minimumPossibleContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)maximumPossibleContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(double)_contentViewPaddingWhileStashed:(BOOL)arg1 ;
+(CGSize)_contentViewSizeForAspectRatio:(CGSize)arg1 currentSize:(double)arg2 ;
+(CGSize)_minimumContentViewSizeForAspectRatio:(CGSize)arg1 minimumReferenceSize:(double)arg2 ;
+(CGSize)_maximumContentViewSizeForAspectRatio:(CGSize)arg1 maximumReferenceSize:(double)arg2 ;
+(void)setShouldDefaultToMinimumPreferredContentSize:(BOOL)arg1 ;
-(unsigned long long)position;
-(id)init;
-(double)maximumSize;
-(double)size;
-(double)currentSize;
-(unsigned long long)currentPosition;
-(void)setSize:(double)arg1 ;
-(double)defaultSize;
-(void)setMinimumSize:(double)arg1 ;
-(double)minimumSize;
-(void)setPosition:(unsigned long long)arg1 ;
-(void)setMaximumSize:(double)arg1 ;
-(void)setCurrentPosition:(unsigned long long)arg1 ;
-(double)maximumSizeSpanForPreferredSizeTuning;
-(void)setMaximumSizeSpanForPreferredSizeTuning:(double)arg1 ;
-(double)minimumSizeSpanBetweenPreferredSizes;
-(void)setMinimumSizeSpanBetweenPreferredSizes:(double)arg1 ;
-(void)setDefaultToMinimumPreferredContentSize:(BOOL)arg1 ;
-(BOOL)defaultToMinimumPreferredContentSize;
-(double)minimumSizePreference;
-(BOOL)hasSizeChanged;
-(double)maximumSizePreference;
-(void)setDefaultSize:(double)arg1 ;
-(void)setCurrentSize:(double)arg1 ;
-(void)setMinimumSizePreference:(double)arg1 ;
-(void)setMaximumSizePreference:(double)arg1 ;
@end

