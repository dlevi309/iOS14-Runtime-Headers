/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <libobjc.A.dylib/NWMDataFormatter.h>

@class NSLocale, NSMeasurement, NSNumberFormatter, NSMeasurementFormatter, NSString;

@interface NWMTemperatureFormatter : NSObject <NWMDataFormatter> {

	BOOL _celsiusPreferred;
	BOOL _avoidDegreeSymbolOnly;
	int _temperatureUnit;
	NSLocale* _locale;
	NSMeasurement* _noMeasurement;
	NSNumberFormatter* _noUnitFormatter;
	NSMeasurementFormatter* _degreeSymbolOnlyFormatter;
	NSMeasurementFormatter* _unitFormatter;
	NSString* _formattedStaleTemperatureWithDegreeSymbol;
	NSString* _formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
	NSString* _formattedStaleTemperatureWithUnit;
	NSString* _formattedStaleTemperatureWithUnitRoundedVariant;
	NSString* _formattedStaleTemperatureWithoutUnit;
	NSString* _formattedStaleTemperatureWithoutUnitRoundedVariant;

}

@property (getter=isCelsiusPreferred) BOOL celsiusPreferred;                                                  //@synthesize celsiusPreferred=_celsiusPreferred - In the implementation block
@property (getter=shouldAvoidDegreeSymbolOnly) BOOL avoidDegreeSymbolOnly;                                    //@synthesize avoidDegreeSymbolOnly=_avoidDegreeSymbolOnly - In the implementation block
@property (readonly) NSLocale * locale;                                                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) int temperatureUnit;                                                           //@synthesize temperatureUnit=_temperatureUnit - In the implementation block
@property (nonatomic,retain) NSMeasurement * noMeasurement;                                                   //@synthesize noMeasurement=_noMeasurement - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * noUnitFormatter;                                             //@synthesize noUnitFormatter=_noUnitFormatter - In the implementation block
@property (nonatomic,retain) NSMeasurementFormatter * degreeSymbolOnlyFormatter;                              //@synthesize degreeSymbolOnlyFormatter=_degreeSymbolOnlyFormatter - In the implementation block
@property (nonatomic,retain) NSMeasurementFormatter * unitFormatter;                                          //@synthesize unitFormatter=_unitFormatter - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithDegreeSymbol;                            //@synthesize formattedStaleTemperatureWithDegreeSymbol=_formattedStaleTemperatureWithDegreeSymbol - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithDegreeSymbolRoundedVariant;              //@synthesize formattedStaleTemperatureWithDegreeSymbolRoundedVariant=_formattedStaleTemperatureWithDegreeSymbolRoundedVariant - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithUnit;                                    //@synthesize formattedStaleTemperatureWithUnit=_formattedStaleTemperatureWithUnit - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithUnitRoundedVariant;                      //@synthesize formattedStaleTemperatureWithUnitRoundedVariant=_formattedStaleTemperatureWithUnitRoundedVariant - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithoutUnit;                                 //@synthesize formattedStaleTemperatureWithoutUnit=_formattedStaleTemperatureWithoutUnit - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithoutUnitRoundedVariant;                   //@synthesize formattedStaleTemperatureWithoutUnitRoundedVariant=_formattedStaleTemperatureWithoutUnitRoundedVariant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoupdatingSharedFormatter;
+(id)autoupdatingFormatter;
-(id)initWithLocale:(id)arg1 ;
-(int)temperatureUnit;
-(NSLocale *)locale;
-(id)init;
-(void)_localeChanged:(id)arg1 ;
-(double)_value:(id)arg1 ;
-(void)dealloc;
-(id)formattedWithDegreeSymbol:(id)arg1 style:(unsigned long long)arg2 fallbackStyle:(unsigned long long)arg3 ;
-(id)formattedWithDegreeSymbol:(id)arg1 fallbackStyle:(unsigned long long)arg2 ;
-(id)formattedWithoutUnit:(id)arg1 ;
-(id)formattedWithoutUnit:(id)arg1 style:(unsigned long long)arg2 ;
-(id)initWithLocale:(id)arg1 temperatureUnit:(int)arg2 ;
-(void)reloadWithLocale:(id)arg1 ;
-(BOOL)shouldAvoidDegreeSymbolOnly;
-(id)formattedWithUnit:(id)arg1 ;
-(id)_measurementForTemperature:(id)arg1 ;
-(NSMeasurementFormatter *)degreeSymbolOnlyFormatter;
-(id)_formattedStaleTemperatureWithDegreeSymbol:(unsigned long long)arg1 ;
-(id)formattedWithUnit:(id)arg1 style:(unsigned long long)arg2 ;
-(NSMeasurementFormatter *)unitFormatter;
-(id)_formattedStaleTemperatureWithUnit:(unsigned long long)arg1 ;
-(NSNumberFormatter *)noUnitFormatter;
-(id)_formattedStaleTemperatureWithoutUnit:(unsigned long long)arg1 ;
-(void)setCelsiusPreferred:(BOOL)arg1 ;
-(void)setAvoidDegreeSymbolOnly:(BOOL)arg1 ;
-(void)setFormattedStaleTemperatureWithoutUnit:(NSString *)arg1 ;
-(void)setFormattedStaleTemperatureWithoutUnitRoundedVariant:(NSString *)arg1 ;
-(void)setNoUnitFormatter:(NSNumberFormatter *)arg1 ;
-(void)setDegreeSymbolOnlyFormatter:(NSMeasurementFormatter *)arg1 ;
-(void)setUnitFormatter:(NSMeasurementFormatter *)arg1 ;
-(NSMeasurement *)noMeasurement;
-(NSString *)formattedStaleTemperatureWithoutUnit;
-(void)setFormattedStaleTemperatureWithUnit:(NSString *)arg1 ;
-(NSString *)formattedStaleTemperatureWithoutUnitRoundedVariant;
-(void)setFormattedStaleTemperatureWithUnitRoundedVariant:(NSString *)arg1 ;
-(void)setFormattedStaleTemperatureWithDegreeSymbol:(NSString *)arg1 ;
-(void)setFormattedStaleTemperatureWithDegreeSymbolRoundedVariant:(NSString *)arg1 ;
-(NSString *)formattedStaleTemperatureWithDegreeSymbol;
-(NSString *)formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
-(NSString *)formattedStaleTemperatureWithUnit;
-(NSString *)formattedStaleTemperatureWithUnitRoundedVariant;
-(BOOL)isCelsiusPreferred;
-(void)setNoMeasurement:(NSMeasurement *)arg1 ;
@end

