/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding> {

	UIColor* _backgroundColor;
	UIColor* _highlightedTextColor;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;

}

@property (nonatomic,readonly) long long schemeStyle; 
@property (nonatomic,copy) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * highlightedTextColor;              //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,copy) UIColor * primaryTextColor;                  //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryTextColor;                //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)highlightedTextColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithColorSchemeDictionary:(id)arg1 ;
-(long long)schemeStyle;
@end

