/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAWeatherForecast.h>

@class NSNumber;

@interface SAWeatherHourlyForecast : SAWeatherForecast

@property (nonatomic,copy) NSNumber * temperature; 
+(id)hourlyForecast;
+(id)hourlyForecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)temperature;
-(void)setTemperature:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

