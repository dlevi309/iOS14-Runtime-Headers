/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKInternetDateFetching.h>

@protocol CRKInternetDateFetching;
@class NSDate, NSMutableArray, NSString;

@interface CRKPlatformInternetDateProvider : NSObject <CRKInternetDateFetching> {

	id<CRKInternetDateFetching> _dateFetchingProvider;
	NSDate* _internetDateAndTime;
	double _uptimeAtInternetDateAndTimeFetch;
	NSMutableArray* _completionQueue;

}

@property (nonatomic,retain) id<CRKInternetDateFetching> dateFetchingProvider;              //@synthesize dateFetchingProvider=_dateFetchingProvider - In the implementation block
@property (nonatomic,retain) NSDate * internetDateAndTime;                                  //@synthesize internetDateAndTime=_internetDateAndTime - In the implementation block
@property (assign,nonatomic) double uptimeAtInternetDateAndTimeFetch;                       //@synthesize uptimeAtInternetDateAndTimeFetch=_uptimeAtInternetDateAndTimeFetch - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionQueue;                              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProvider;
-(id)init;
-(void)setCompletionQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)completionQueue;
-(void)fetchInternetDateWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchExistingInternetDate;
-(id<CRKInternetDateFetching>)dateFetchingProvider;
-(void)setInternetDateAndTime:(NSDate *)arg1 ;
-(void)setUptimeAtInternetDateAndTimeFetch:(double)arg1 ;
-(NSDate *)internetDateAndTime;
-(double)uptimeAtInternetDateAndTimeFetch;
-(void)setDateFetchingProvider:(id<CRKInternetDateFetching>)arg1 ;
@end

