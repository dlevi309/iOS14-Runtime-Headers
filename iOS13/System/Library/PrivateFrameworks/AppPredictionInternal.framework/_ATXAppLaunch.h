/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXLaunchEventProtocol.h>

@class NSString, NSDate, NSTimeZone;

@interface _ATXAppLaunch : NSObject <ATXLaunchEventProtocol> {

	NSString* _bundleId;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                    //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;               //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)reason;
-(NSTimeZone *)timeZone;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)bundleId;
-(id)initWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 reason:(id)arg5 ;
-(BOOL)isEqualToLaunch:(id)arg1 ;
@end
