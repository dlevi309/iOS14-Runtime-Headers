/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@interface PMLSparseVector : NSObject {

	unsigned long long _length;
	unsigned long long _numberOfNonZeroValues;
	long long* _sparseIndices;
	float* _sparseValues;

}

@property (assign,nonatomic) unsigned long long numberOfNonZeroValues;              //@synthesize numberOfNonZeroValues=_numberOfNonZeroValues - In the implementation block
@property (assign,nonatomic) long long* sparseIndices;                              //@synthesize sparseIndices=_sparseIndices - In the implementation block
@property (assign,nonatomic) float* sparseValues;                                   //@synthesize sparseValues=_sparseValues - In the implementation block
@property (nonatomic,readonly) unsigned long long length;                           //@synthesize length=_length - In the implementation block
+(id)sparseVectorFromDense:(const float*)arg1 length:(unsigned long long)arg2 ;
+(id)sparseVectorFromDense:(id)arg1 ;
+(id)sparseVectorEmptyWithLength:(unsigned long long)arg1 ;
+(id)sparseVectorFromNumbers:(id)arg1 ;
+(id)sparseVectorFromNumbers:(id)arg1 indices:(id)arg2 length:(unsigned long long)arg3 ;
-(float)valueAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)length;
-(float)l2norm;
-(float)maxValue;
-(float)minValue;
-(void)dealloc;
-(unsigned long long)numberOfNonZeroValues;
-(id)vectorWithConstantColumn;
-(void)scaleInPlaceWithInversedFactor:(float)arg1 ;
-(void)enumerateNonZeroValuesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indicesData:(id)arg3 valuesData:(id)arg4 ;
-(id)initWithLength:(unsigned long long)arg1 numberOfNonZeroValues:(unsigned long long)arg2 indices:(long long*)arg3 values:(float*)arg4 ;
-(id)indicesData;
-(id)valuesData;
-(id)indicesAsUInt16Data;
-(id)quantizedValuesAsUInt8DataWithMin:(float)arg1 max:(float)arg2 ;
-(float)maxAbsValue;
-(void)setSparseValues:(float*)arg1 ;
-(void)setSparseIndices:(long long*)arg1 ;
-(void)processNonZeroValuesInPlaceWithBlock:(/*^block*/id)arg1 ;
-(void)setNumberOfNonZeroValues:(unsigned long long)arg1 ;
-(long long*)sparseIndices;
-(float*)sparseValues;
@end
