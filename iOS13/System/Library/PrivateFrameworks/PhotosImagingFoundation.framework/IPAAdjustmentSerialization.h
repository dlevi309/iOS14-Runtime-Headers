/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/


@interface IPAAdjustmentSerialization : NSObject
+(void)initialize;
+(id)deserialize:(id)arg1 originator:(id)arg2 format:(id)arg3 formatVersion:(id)arg4 error:(id*)arg5 ;
+(id)serialize:(id)arg1 error:(id*)arg2 ;
+(id)_serializerForFormat:(id)arg1 formatVersion:(id)arg2 error:(id*)arg3 ;
+(char)adjustmentTypeForFormat:(id)arg1 formatVersion:(id)arg2 ;
+(id)formatForAdjustmentStack:(id)arg1 ;
+(id)serializeWithCurrentDefaultFormat:(id)arg1 error:(id*)arg2 ;
+(id)serializeWithCurrentDefaultFormat:(id)arg1 format:(id*)arg2 formatVersion:(id*)arg3 error:(id*)arg4 ;
+(id)serialize:(id)arg1 format:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4 ;
+(id)debug_serializeEnvelope:(id)arg1 error:(id*)arg2 ;
+(char)debug_adjustmentTypeFromEnvelopeDictionary:(id)arg1 ;
+(id)debug_deserializeEnvelopeDictionary:(id)arg1 error:(id*)arg2 ;
@end
