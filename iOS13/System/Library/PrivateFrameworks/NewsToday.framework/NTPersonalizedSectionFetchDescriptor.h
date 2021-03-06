/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionFetchDescriptor.h>

@class NTPBPersonalizedTodaySectionSpecificConfig, NTCatchUpOperationArticleIDsRequest, NSString;

@interface NTPersonalizedSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {

	NTPBPersonalizedTodaySectionSpecificConfig* _personalizedConfiguration;
	NTCatchUpOperationArticleIDsRequest* _mandatoryArticleIDsRequest;
	NTCatchUpOperationArticleIDsRequest* _personalizedArticleIDsRequest;

}

@property (nonatomic,copy) NTPBPersonalizedTodaySectionSpecificConfig * personalizedConfiguration;              //@synthesize personalizedConfiguration=_personalizedConfiguration - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationArticleIDsRequest * mandatoryArticleIDsRequest;                    //@synthesize mandatoryArticleIDsRequest=_mandatoryArticleIDsRequest - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationArticleIDsRequest * personalizedArticleIDsRequest;                 //@synthesize personalizedArticleIDsRequest=_personalizedArticleIDsRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)assembleResultsWithCatchUpOperation:(id)arg1 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(id)initWithPersonalizedConfiguration:(id)arg1 ;
-(NTCatchUpOperationArticleIDsRequest *)mandatoryArticleIDsRequest;
-(NTCatchUpOperationArticleIDsRequest *)personalizedArticleIDsRequest;
-(NTPBPersonalizedTodaySectionSpecificConfig *)personalizedConfiguration;
-(void)setPersonalizedConfiguration:(NTPBPersonalizedTodaySectionSpecificConfig *)arg1 ;
-(void)setMandatoryArticleIDsRequest:(NTCatchUpOperationArticleIDsRequest *)arg1 ;
-(void)setPersonalizedArticleIDsRequest:(NTCatchUpOperationArticleIDsRequest *)arg1 ;
@end

