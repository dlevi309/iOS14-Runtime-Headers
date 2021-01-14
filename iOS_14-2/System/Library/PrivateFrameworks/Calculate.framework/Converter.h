/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
*/


#import <Calculate/Calculate-Structs.h>
@class NSString, NSNumber, NSArray;

@interface Converter : NSObject {

	NSString* _inputString;
	NSString* _inputUnit;
	NSString* _outputUnit;
	NSNumber* _outputValue;
	NSNumber* _inputValue;
	NSString* _localizedInputValueAndUnit;
	NSString* _localizedOutputValueAndUnit;
	NSString* _localizedOutputValue;
	NSString* _localizedOutputUnit;
	BOOL _isCurrency;
	float _currencyUpdateTimeOut;
	NSArray* _additionalResults;
	NSString* _conversionType;

}

@property (nonatomic,retain) NSString * inputString;                              //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,retain) NSString * inputUnit;                                //@synthesize inputUnit=_inputUnit - In the implementation block
@property (nonatomic,retain) NSString * outputUnit;                               //@synthesize outputUnit=_outputUnit - In the implementation block
@property (nonatomic,retain) NSNumber * inputValue;                               //@synthesize inputValue=_inputValue - In the implementation block
@property (nonatomic,retain) NSNumber * outputValue;                              //@synthesize outputValue=_outputValue - In the implementation block
@property (nonatomic,retain) NSString * localizedInputValueAndUnit;               //@synthesize localizedInputValueAndUnit=_localizedInputValueAndUnit - In the implementation block
@property (nonatomic,retain) NSString * localizedOutputValueAndUnit;              //@synthesize localizedOutputValueAndUnit=_localizedOutputValueAndUnit - In the implementation block
@property (nonatomic,retain) NSString * localizedOutputValue;                     //@synthesize localizedOutputValue=_localizedOutputValue - In the implementation block
@property (nonatomic,retain) NSString * localizedOutputUnit;                      //@synthesize localizedOutputUnit=_localizedOutputUnit - In the implementation block
@property (nonatomic,retain) NSString * conversionType;                           //@synthesize conversionType=_conversionType - In the implementation block
@property (nonatomic,retain) NSArray * additionalResults;                         //@synthesize additionalResults=_additionalResults - In the implementation block
@property (assign) float currencyUpdateTimeOut;                                   //@synthesize currencyUpdateTimeOut=_currencyUpdateTimeOut - In the implementation block
@property (readonly) BOOL isCurrency;                                             //@synthesize isCurrency=_isCurrency - In the implementation block
+(void)initialize;
+(id)dispatchQueue;
+(BOOL)refreshCurrencyCache;
+(id)currencyCacheLastRefreshDate;
-(void)setInputString:(NSString *)arg1 ;
-(void)setInputUnit:(NSString *)arg1 ;
-(NSNumber *)outputValue;
-(NSString *)inputUnit;
-(BOOL)isCurrency;
-(NSNumber *)inputValue;
-(void)setOutputUnit:(NSString *)arg1 ;
-(NSString *)outputUnit;
-(void)setInputValue:(NSNumber *)arg1 ;
-(NSString *)inputString;
-(id)initWithInput:(id)arg1 ;
-(NSArray *)additionalResults;
-(void)setAdditionalResults:(NSArray *)arg1 ;
-(void)processConversionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_parseInputQuery;
-(id)_safe_subStringOf:(id)arg1 withRange:(NSRange)arg2 ;
-(void)_updateInputValueFromMatch:(id)arg1 ;
-(id)_normalizedUnitNamesForName:(id)arg1 ;
-(void)_standardizeInputAndOutputUnits;
-(id)_unitInfoForNormalizedName:(id)arg1 ;
-(id)similarUnitsForNormalizedName:(id)arg1 ;
-(void)_performUnitPluralization;
-(id)_operateConversionForOutputUnit:(id)arg1 ;
-(double)_doubleWithoutUnrelevantDecimalsForNumber:(id)arg1 ;
-(id)_localizedPluralizedStringsforNumber:(id)arg1 unit:(id)arg2 ;
-(void)setOutputValue:(NSNumber *)arg1 ;
-(NSString *)localizedInputValueAndUnit;
-(void)setLocalizedInputValueAndUnit:(NSString *)arg1 ;
-(NSString *)localizedOutputValueAndUnit;
-(void)setLocalizedOutputValueAndUnit:(NSString *)arg1 ;
-(NSString *)localizedOutputValue;
-(void)setLocalizedOutputValue:(NSString *)arg1 ;
-(NSString *)localizedOutputUnit;
-(void)setLocalizedOutputUnit:(NSString *)arg1 ;
-(float)currencyUpdateTimeOut;
-(void)setCurrencyUpdateTimeOut:(float)arg1 ;
-(NSString *)conversionType;
-(void)setConversionType:(NSString *)arg1 ;
@end
