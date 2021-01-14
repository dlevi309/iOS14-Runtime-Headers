/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatMatrix, AWDProactiveModelFittingQuantizedSparseMatrix;

@interface AWDProactiveModelFittingLinRegFeatureMatrix : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	float _featureMatrixL2norm;
	float _featureMatrixScaleFactor;
	AWDProactiveModelFittingMinibatchStats* _minibatchStats;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingSparseFloatMatrix* _sparseFloatFeatureMatrix;
	AWDProactiveModelFittingQuantizedSparseMatrix* _sparseQuantizedFeatureMatrix;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                                             //@synthesize modelInfo=_modelInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseFloatFeatureMatrix; 
@property (nonatomic,retain) AWDProactiveModelFittingSparseFloatMatrix * sparseFloatFeatureMatrix;                      //@synthesize sparseFloatFeatureMatrix=_sparseFloatFeatureMatrix - In the implementation block
@property (nonatomic,readonly) BOOL hasMinibatchStats; 
@property (nonatomic,retain) AWDProactiveModelFittingMinibatchStats * minibatchStats;                                   //@synthesize minibatchStats=_minibatchStats - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseQuantizedFeatureMatrix; 
@property (nonatomic,retain) AWDProactiveModelFittingQuantizedSparseMatrix * sparseQuantizedFeatureMatrix;              //@synthesize sparseQuantizedFeatureMatrix=_sparseQuantizedFeatureMatrix - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureMatrixScaleFactor; 
@property (assign,nonatomic) float featureMatrixScaleFactor;                                                            //@synthesize featureMatrixScaleFactor=_featureMatrixScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureMatrixL2norm; 
@property (assign,nonatomic) float featureMatrixL2norm;                                                                 //@synthesize featureMatrixL2norm=_featureMatrixL2norm - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasModelInfo;
-(BOOL)hasMinibatchStats;
-(AWDProactiveModelFittingMinibatchStats *)minibatchStats;
-(void)setMinibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg1 ;
-(BOOL)hasSparseFloatFeatureMatrix;
-(BOOL)hasSparseQuantizedFeatureMatrix;
-(void)setFeatureMatrixScaleFactor:(float)arg1 ;
-(void)setHasFeatureMatrixScaleFactor:(BOOL)arg1 ;
-(BOOL)hasFeatureMatrixScaleFactor;
-(void)setFeatureMatrixL2norm:(float)arg1 ;
-(void)setHasFeatureMatrixL2norm:(BOOL)arg1 ;
-(BOOL)hasFeatureMatrixL2norm;
-(AWDProactiveModelFittingSparseFloatMatrix *)sparseFloatFeatureMatrix;
-(void)setSparseFloatFeatureMatrix:(AWDProactiveModelFittingSparseFloatMatrix *)arg1 ;
-(AWDProactiveModelFittingQuantizedSparseMatrix *)sparseQuantizedFeatureMatrix;
-(void)setSparseQuantizedFeatureMatrix:(AWDProactiveModelFittingQuantizedSparseMatrix *)arg1 ;
-(float)featureMatrixScaleFactor;
-(float)featureMatrixL2norm;
-(BOOL)hasFeatureMatrix;
-(float)featureMatrixValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
@end
