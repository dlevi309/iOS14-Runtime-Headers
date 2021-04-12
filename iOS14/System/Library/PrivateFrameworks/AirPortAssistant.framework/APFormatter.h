/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface APFormatter : NSFormatter {

	NSCharacterSet* _characterSet;
	NSCharacterSet* _invertedCharacterSet;
	unsigned long long _maxLength;

}

@property (assign,nonatomic) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
+(id)hexSet;
+(id)formatterForBSFormatter:(int)arg1 withMaxLen:(long long)arg2 ;
+(id)hexFormatter:(unsigned long long)arg1 ;
+(id)numberOnlyFormatter:(unsigned long long)arg1 ;
+(id)sharedIPFormatter;
+(id)sharedIPv6Formatter;
+(id)ipOctetFormatter:(unsigned long long)arg1 ;
+(id)sharedIPv4PrefixFormatter;
+(id)sharedPhoneNumberFormatter;
+(id)portRangeFormatter:(unsigned long long)arg1 ;
+(id)romanSet;
+(id)ipv4AddressSet;
+(id)ipv6AddressSet;
+(id)ipv4AddressWithPrefixSet;
+(id)multipleIpAddressesSet;
+(id)portRangeSet;
+(id)phoneNumberSet;
+(id)asciiSet;
+(id)romanFormatter:(unsigned long long)arg1 ;
+(id)ipFormatter:(unsigned long long)arg1 ;
+(id)sharedMultipleIPFormatter;
+(id)multipleIPFormatter:(unsigned long long)arg1 ;
+(id)maxLengthFormatter:(unsigned long long)arg1 ;
+(id)nonZeroNumberOnly:(unsigned long long)arg1 ;
+(id)phoneNumberFormatter:(unsigned long long)arg1 ;
+(id)asciiFormatter:(unsigned long long)arg1 ;
+(id)pogoPasswordSet;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(unsigned long long)maxLength;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)characterSet;
-(void)setCharacterSet:(id)arg1 ;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned long long)arg2 ;
-(void)setInvertedCharacterSet:(id)arg1 ;
-(id)invertedCharacterSet;
-(id)initWithMaxLength:(unsigned long long)arg1 ;
-(id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(unsigned long long)arg2 ;
@end
