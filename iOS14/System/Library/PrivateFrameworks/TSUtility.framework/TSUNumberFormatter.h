/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableDictionary, NSString, NSMutableArray;

@interface TSUNumberFormatter : NSObject {

	CFLocaleRef mLocale;
	CFArrayRef mDecimalFormatters;
	CFArrayRef mCurrencyFormatters;
	CFArrayRef mPercentageFormatters;
	CFArrayRef mScientificFormatters;
	CFNumberFormatterRef mFractionFormatter;
	NSMutableDictionary* mCurrencyCodeToSymbolMap;
	NSMutableDictionary* mCurrencyCodeToHalfWidthSymbolMap;
	NSString* mCurrencyString;
	NSString* mPercentageString;
	NSString* mScientificString;
	NSString* mDecimalString;
	NSString* mPercentSymbol;
	NSMutableArray* mTransformedDecimalStrings;
	NSMutableArray* mTransformedCurrencyStrings;
	NSMutableArray* mTransformedPercentageStrings;
	NSMutableArray* mTransformedScientificStrings;
	CFStringRef mAdditionalCurrencyCode;
	CFArrayRef mAdditionalCurrencyCodeFormatters;

}
+(void)initialize;
+(id)currentLocaleCurrencyCode;
+(id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2 ;
+(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
+(id)currencySymbolForCurrencyCode:(id)arg1 ;
+(id)userVisibleCurrencyCodes;
+(id)formatterForLocale:(CFLocaleRef)arg1 ;
+(int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2 ;
+(void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1 ;
+(id)displayNameForCurrencyCode:(id)arg1 ;
+(id)defaultFormatStringForValueType:(int)arg1 ;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1 ;
+(id)availableCurrencyCodes;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1 ;
+(id)currentLocaleDecimalSeparator;
+(id)numberFormatStringSpecialSymbols;
+(id)localizedPercentSymbol;
+(id)currentNonCachedLocaleCurrencyCode;
+(id)currentNonCachedLocaleDecimalSeparator;
+(id)currentLocaleListSeparator;
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(void)dealloc;
-(id)currentLocaleCurrencyCode;
-(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
-(id)currencySymbolForCurrencyCode:(id)arg1 ;
-(BOOL)decimalFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(BOOL)currencyFromString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 currencyCode:(const _CFString*)arg5 ;
-(BOOL)percentageFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(BOOL)scientificFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(BOOL)fractionFromString:(CFStringRef)arg1 value:(double*)arg2 ;
-(id)displayNameForCurrencyCode:(id)arg1 ;
-(id)defaultFormatStringForValueType:(int)arg1 ;
-(CFArrayRef)p_decimalFormatters;
-(CFArrayRef)p_currencyFormatters;
-(CFArrayRef)p_percentageFormatters;
-(CFArrayRef)p_scientificFormatters;
-(id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1 ;
-(id)localizedPercentSymbol;
-(void)numberPreferencesChanged:(id)arg1 ;
-(BOOL)valueFromString:(CFStringRef)arg1 formatters:(CFArrayRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 currencyCode:(const _CFString*)arg5 ;
-(BOOL)findCurrencySymbolInString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 successTSUlString:(const _CFString*)arg3 ;
@end

