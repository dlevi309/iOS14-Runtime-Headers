/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest {

	PHMediaFormatConversionRequest* _independentRequest;
	PHMediaFormatConversionRequest* _dependentRequest;
	/*^block*/id _successUpdateHandler;

}

@property (retain) PHMediaFormatConversionRequest * independentRequest;              //@synthesize independentRequest=_independentRequest - In the implementation block
@property (retain) PHMediaFormatConversionRequest * dependentRequest;                //@synthesize dependentRequest=_dependentRequest - In the implementation block
@property (copy) id successUpdateHandler;                                            //@synthesize successUpdateHandler=_successUpdateHandler - In the implementation block
+(id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3 ;
+(id)chainedRequestForAdjustmentRenderRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id*)arg3 ;
+(id)chainedRequestForRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id*)arg3 successUpdateHandler:(/*^block*/id)arg4 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(void)setSuccessUpdateHandler:(id)arg1 ;
-(void)setDependentRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(void)setIndependentRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(PHMediaFormatConversionRequest *)independentRequest;
-(PHMediaFormatConversionRequest *)dependentRequest;
-(id)successUpdateHandler;
@end

