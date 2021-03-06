/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSaliencyRegion : NSObject {

	float _confidence;
	CGRect _bound;

}

@property (assign) CGRect bound;                  //@synthesize bound=_bound - In the implementation block
@property (assign) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)salientRegionsFromPixelBuffer:(CVBufferRef)arg1 ;
+(void)attachSalientRegions:(id)arg1 toPixelBuffer:(CVBufferRef)arg2 ;
-(float)confidence;
-(void)setBound:(CGRect)arg1 ;
-(id)initWith:(CGRect)arg1 confidence:(float)arg2 ;
-(CGRect)bound;
-(void)setConfidence:(float)arg1 ;
-(id)plistRepresentation;
-(id)initWithPlistRepresentation:(id)arg1 ;
@end

