/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@protocol VideoEncoderInterfaceDelegate <NSObject>
@required
-(void)encoder:(id)arg1 encodedSampleBuffer:(opaqueCMSampleBufferRef)arg2 metadata:(id)arg3 presentationTime:(SCD_Struct_MO5)arg4 streamId:(id)arg5;
-(void)encoder:(id)arg1 encodingFailedForStream:(id)arg2;
-(id)encoder:(id)arg1 overrideVideoEncoderSpecificationForstreamId:(id)arg2;
-(BOOL)encoder:(id)arg1 configureSessionOverride:(OpaqueVTCompressionSessionRef)arg2 streamId:(id)arg3;
-(unsigned)encoder:(id)arg1 codecTypeOverrideForstreamId:(id)arg2;

@end

