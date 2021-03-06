/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@interface SAPAStyleSymbolOwner : NSObject {

	BOOL _hasTextExecSegment;
	unsigned long long _textSegmentLength;

}

@property (assign) unsigned long long textSegmentLength;              //@synthesize textSegmentLength=_textSegmentLength - In the implementation block
@property (assign) BOOL hasTextExecSegment;                           //@synthesize hasTextExecSegment=_hasTextExecSegment - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA26*)arg1 bufferLength:(unsigned long long)arg2 ;
-(BOOL)hasTextExecSegment;
-(unsigned long long)textSegmentLength;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA26*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)setHasTextExecSegment:(BOOL)arg1 ;
-(void)setTextSegmentLength:(unsigned long long)arg1 ;
@end

