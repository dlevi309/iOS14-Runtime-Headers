/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUControlAppearance, NSMutableDictionary, UIImage;

@interface SUSegmentedControlAppearance : NSObject <NSCopying> {

	SUControlAppearance* _backgroundImages;
	NSMutableDictionary* _dividerImages;
	UIImage* _optionsBackgroundImage;
	NSMutableDictionary* _titleTextAttributes;

}

@property (nonatomic,retain) UIImage * optionsBackgroundImage;              //@synthesize optionsBackgroundImage=_optionsBackgroundImage - In the implementation block
+(id)defaultBarAppearance;
+(id)defaultOptionsAppearanceForTintStyle:(long long)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4 ;
-(void)styleSegmentedControl:(id)arg1 ;
-(void)setOptionsBackgroundImage:(UIImage *)arg1 ;
-(id)_newDividerImageKeyWithLeftState:(unsigned long long)arg1 rightState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(UIImage *)optionsBackgroundImage;
@end
