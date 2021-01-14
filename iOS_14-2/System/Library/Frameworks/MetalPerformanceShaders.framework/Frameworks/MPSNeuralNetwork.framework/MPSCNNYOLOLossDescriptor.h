/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPSCNNLossDescriptor, NSData;

@interface MPSCNNYOLOLossDescriptor : NSObject <NSCopying> {

	MPSCNNLossDescriptor* _XYLossDescriptor;
	MPSCNNLossDescriptor* _WHLossDescriptor;
	MPSCNNLossDescriptor* _confidenceLossDescriptor;
	MPSCNNLossDescriptor* _classesLossDescriptor;
	int _reductionType;
	BOOL _rescore;
	float _scaleXY;
	float _scaleWH;
	float _scaleNoObject;
	float _scaleObject;
	float _scaleClass;
	float _minIOUForObjectPresence;
	float _maxIOUForObjectAbsence;
	NSData* _anchorBoxes;
	unsigned long long _numberOfAnchorBoxes;
	BOOL _reduceAcrossBatch;

}

@property (nonatomic,retain) MPSCNNLossDescriptor * XYLossDescriptor;                      //@synthesize XYLossDescriptor=_XYLossDescriptor - In the implementation block
@property (nonatomic,retain) MPSCNNLossDescriptor * WHLossDescriptor;                      //@synthesize WHLossDescriptor=_WHLossDescriptor - In the implementation block
@property (nonatomic,retain) MPSCNNLossDescriptor * confidenceLossDescriptor;              //@synthesize confidenceLossDescriptor=_confidenceLossDescriptor - In the implementation block
@property (nonatomic,retain) MPSCNNLossDescriptor * classesLossDescriptor;                 //@synthesize classesLossDescriptor=_classesLossDescriptor - In the implementation block
@property (assign,nonatomic) int reductionType;                                            //@synthesize reductionType=_reductionType - In the implementation block
@property (assign,nonatomic) BOOL reduceAcrossBatch;                                       //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
@property (assign,nonatomic) BOOL rescore;                                                 //@synthesize rescore=_rescore - In the implementation block
@property (assign,nonatomic) float scaleXY;                                                //@synthesize scaleXY=_scaleXY - In the implementation block
@property (assign,nonatomic) float scaleWH;                                                //@synthesize scaleWH=_scaleWH - In the implementation block
@property (assign,nonatomic) float scaleNoObject;                                          //@synthesize scaleNoObject=_scaleNoObject - In the implementation block
@property (assign,nonatomic) float scaleObject;                                            //@synthesize scaleObject=_scaleObject - In the implementation block
@property (assign,nonatomic) float scaleClass;                                             //@synthesize scaleClass=_scaleClass - In the implementation block
@property (assign,nonatomic) float minIOUForObjectPresence;                                //@synthesize minIOUForObjectPresence=_minIOUForObjectPresence - In the implementation block
@property (assign,nonatomic) float maxIOUForObjectAbsence;                                 //@synthesize maxIOUForObjectAbsence=_maxIOUForObjectAbsence - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAnchorBoxes;                       //@synthesize numberOfAnchorBoxes=_numberOfAnchorBoxes - In the implementation block
@property (nonatomic,retain) NSData * anchorBoxes;                                         //@synthesize anchorBoxes=_anchorBoxes - In the implementation block
+(id)cnnLossDescriptorWithXYLossType:(unsigned)arg1 WHLossType:(unsigned)arg2 confidenceLossType:(unsigned)arg3 classesLossType:(unsigned)arg4 reductionType:(int)arg5 anchorBoxes:(id)arg6 numberOfAnchorBoxes:(unsigned long long)arg7 ;
-(void)setAnchorBoxes:(NSData *)arg1 ;
-(void)setScaleXY:(float)arg1 ;
-(void)setNumberOfAnchorBoxes:(unsigned long long)arg1 ;
-(void)setScaleWH:(float)arg1 ;
-(void)setScaleNoObject:(float)arg1 ;
-(void)setScaleObject:(float)arg1 ;
-(void)setScaleClass:(float)arg1 ;
-(void)setMinIOUForObjectPresence:(float)arg1 ;
-(void)setMaxIOUForObjectAbsence:(float)arg1 ;
-(void)setRescore:(BOOL)arg1 ;
-(void)setXYLossDescriptor:(MPSCNNLossDescriptor *)arg1 ;
-(void)setWHLossDescriptor:(MPSCNNLossDescriptor *)arg1 ;
-(void)setConfidenceLossDescriptor:(MPSCNNLossDescriptor *)arg1 ;
-(MPSCNNLossDescriptor *)XYLossDescriptor;
-(void)setClassesLossDescriptor:(MPSCNNLossDescriptor *)arg1 ;
-(id)initWithXYLossType:(unsigned)arg1 WHLossType:(unsigned)arg2 confidenceLossType:(unsigned)arg3 classesLossType:(unsigned)arg4 reductionType:(int)arg5 anchorBoxes:(id)arg6 numberOfAnchorBoxes:(unsigned long long)arg7 ;
-(MPSCNNLossDescriptor *)WHLossDescriptor;
-(MPSCNNLossDescriptor *)confidenceLossDescriptor;
-(MPSCNNLossDescriptor *)classesLossDescriptor;
-(float)scaleNoObject;
-(float)scaleObject;
-(float)scaleClass;
-(float)minIOUForObjectPresence;
-(float)maxIOUForObjectAbsence;
-(NSData *)anchorBoxes;
-(unsigned long long)numberOfAnchorBoxes;
-(id)debugDescription;
-(BOOL)rescore;
-(float)scaleXY;
-(float)scaleWH;
-(int)reductionType;
-(BOOL)reduceAcrossBatch;
-(void)setReductionType:(int)arg1 ;
-(void)setReduceAcrossBatch:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
