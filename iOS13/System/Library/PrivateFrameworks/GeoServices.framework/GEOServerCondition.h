/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSDate, NSArray;


@protocol GEOServerCondition <NSObject,NSCoding>
@property (nonatomic,readonly) long long conditionType; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSArray * subconditions; 
@required
-(NSDate *)expirationDate;
-(long long)conditionType;
-(NSArray *)subconditions;

@end

