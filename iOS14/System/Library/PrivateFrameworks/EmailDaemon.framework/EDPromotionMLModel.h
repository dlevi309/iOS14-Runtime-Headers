/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class MLModel;

@interface EDPromotionMLModel : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)loadWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(MLModel *)model;
-(id)init;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)initWithMLModel:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromHeader_key_filtered:(id)arg1 to_count:(double)arg2 error:(id*)arg3 ;
@end

