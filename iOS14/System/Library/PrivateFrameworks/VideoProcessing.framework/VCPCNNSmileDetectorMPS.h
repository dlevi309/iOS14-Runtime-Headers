/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNSmileDetector.h>

@class VCPCNNModel, VCPCNNData;

@interface VCPCNNSmileDetectorMPS : VCPCNNSmileDetector {

	VCPCNNModel* _model;
	VCPCNNData* _input;

}
-(id)init;
-(int)computeSmileScore:(float*)arg1 ;
-(float*)getInputBuffer;
@end

