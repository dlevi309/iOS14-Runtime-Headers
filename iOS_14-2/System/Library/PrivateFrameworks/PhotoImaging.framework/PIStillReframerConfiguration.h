/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@interface PIStillReframerConfiguration : NSObject {

	double _humanFaceBoundsContainmentThreshold;
	double _humanBodyBoundsContainmentThreshold;
	double _humanBodyExpandedBoundsContainmentThreshold;
	double _humanBodyBoundsContainmentCoefficient;
	double _petBoundsContainmentThreshold;
	double _petExpandedBoundsContainmentThreshold;
	double _petBoundsContainmentCoefficient;
	double _facePaddingFactor;
	double _bodyPaddingAmount;
	double _overscanPercentageAllowed;
	double _unwantedSubjectStartingThreshold;
	long long _imageOrientation;
	double _unwantedSubjectInclusionThreshold;
	double _dominantToPeripheralSubjectRatioThreshold;
	double _minimumCorrectionThreshold;

}

@property (assign,nonatomic) double unwantedSubjectInclusionThreshold;                        //@synthesize unwantedSubjectInclusionThreshold=_unwantedSubjectInclusionThreshold - In the implementation block
@property (assign,nonatomic) double dominantToPeripheralSubjectRatioThreshold;                //@synthesize dominantToPeripheralSubjectRatioThreshold=_dominantToPeripheralSubjectRatioThreshold - In the implementation block
@property (assign,nonatomic) double minimumCorrectionThreshold;                               //@synthesize minimumCorrectionThreshold=_minimumCorrectionThreshold - In the implementation block
@property (assign,nonatomic) double humanFaceBoundsContainmentThreshold;                      //@synthesize humanFaceBoundsContainmentThreshold=_humanFaceBoundsContainmentThreshold - In the implementation block
@property (assign,nonatomic) double humanBodyBoundsContainmentThreshold;                      //@synthesize humanBodyBoundsContainmentThreshold=_humanBodyBoundsContainmentThreshold - In the implementation block
@property (assign,nonatomic) double humanBodyExpandedBoundsContainmentThreshold;              //@synthesize humanBodyExpandedBoundsContainmentThreshold=_humanBodyExpandedBoundsContainmentThreshold - In the implementation block
@property (assign,nonatomic) double humanBodyBoundsContainmentCoefficient;                    //@synthesize humanBodyBoundsContainmentCoefficient=_humanBodyBoundsContainmentCoefficient - In the implementation block
@property (assign,nonatomic) double petBoundsContainmentThreshold;                            //@synthesize petBoundsContainmentThreshold=_petBoundsContainmentThreshold - In the implementation block
@property (assign,nonatomic) double petExpandedBoundsContainmentThreshold;                    //@synthesize petExpandedBoundsContainmentThreshold=_petExpandedBoundsContainmentThreshold - In the implementation block
@property (assign,nonatomic) double petBoundsContainmentCoefficient;                          //@synthesize petBoundsContainmentCoefficient=_petBoundsContainmentCoefficient - In the implementation block
@property (assign,nonatomic) double facePaddingFactor;                                        //@synthesize facePaddingFactor=_facePaddingFactor - In the implementation block
@property (assign,nonatomic) double bodyPaddingAmount;                                        //@synthesize bodyPaddingAmount=_bodyPaddingAmount - In the implementation block
@property (assign,nonatomic) double overscanPercentageAllowed;                                //@synthesize overscanPercentageAllowed=_overscanPercentageAllowed - In the implementation block
@property (assign,nonatomic) double unwantedSubjectStartingThreshold;                         //@synthesize unwantedSubjectStartingThreshold=_unwantedSubjectStartingThreshold - In the implementation block
@property (assign,nonatomic) long long imageOrientation;                                      //@synthesize imageOrientation=_imageOrientation - In the implementation block
-(long long)imageOrientation;
-(id)dictionaryRepresentation;
-(void)setImageOrientation:(long long)arg1 ;
-(double)humanFaceBoundsContainmentThreshold;
-(void)setHumanFaceBoundsContainmentThreshold:(double)arg1 ;
-(double)humanBodyBoundsContainmentThreshold;
-(void)setHumanBodyBoundsContainmentThreshold:(double)arg1 ;
-(double)humanBodyExpandedBoundsContainmentThreshold;
-(void)setHumanBodyExpandedBoundsContainmentThreshold:(double)arg1 ;
-(double)humanBodyBoundsContainmentCoefficient;
-(void)setHumanBodyBoundsContainmentCoefficient:(double)arg1 ;
-(double)petBoundsContainmentThreshold;
-(void)setPetBoundsContainmentThreshold:(double)arg1 ;
-(double)petExpandedBoundsContainmentThreshold;
-(void)setPetExpandedBoundsContainmentThreshold:(double)arg1 ;
-(double)petBoundsContainmentCoefficient;
-(void)setPetBoundsContainmentCoefficient:(double)arg1 ;
-(double)facePaddingFactor;
-(void)setFacePaddingFactor:(double)arg1 ;
-(double)bodyPaddingAmount;
-(void)setBodyPaddingAmount:(double)arg1 ;
-(double)overscanPercentageAllowed;
-(void)setOverscanPercentageAllowed:(double)arg1 ;
-(double)unwantedSubjectStartingThreshold;
-(void)setUnwantedSubjectStartingThreshold:(double)arg1 ;
-(double)unwantedSubjectInclusionThreshold;
-(void)setUnwantedSubjectInclusionThreshold:(double)arg1 ;
-(double)dominantToPeripheralSubjectRatioThreshold;
-(void)setDominantToPeripheralSubjectRatioThreshold:(double)arg1 ;
-(double)minimumCorrectionThreshold;
-(void)setMinimumCorrectionThreshold:(double)arg1 ;
@end
