/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSTimeZone, NSString;


@protocol GEOServerFormatTokenTimeStampValue <NSObject,NSCoding>
@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * formatPattern; 
@required
-(NSTimeZone *)timeZone;
-(NSString *)formatPattern;
-(double)timeStamp;

@end

