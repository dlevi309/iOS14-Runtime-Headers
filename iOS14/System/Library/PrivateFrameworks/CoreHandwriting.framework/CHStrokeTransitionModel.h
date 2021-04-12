/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHRecurrentNeuralNetworkMontreal.h>

@class NSString;

@interface CHStrokeTransitionModel : CHRecurrentNeuralNetworkMontreal {

	long long _distanceFeatureIndex;
	long long _sinAlphaFeatureIndex;
	long long _cosAlphaFeatureIndex;
	long long _gapFeatureIndex;
	NSString* _directionalFeaturesInputName;
	NSString* _spaceProbabilityOutputName;
	NSString* _charBoundaryProbabilityOutputName;
	NSString* _delayedStrokeProbabilityOutputName;

}

@property (nonatomic,readonly) long long distanceFeatureIndex;                                    //@synthesize distanceFeatureIndex=_distanceFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long sinAlphaFeatureIndex;                                    //@synthesize sinAlphaFeatureIndex=_sinAlphaFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long cosAlphaFeatureIndex;                                    //@synthesize cosAlphaFeatureIndex=_cosAlphaFeatureIndex - In the implementation block
@property (nonatomic,readonly) long long gapFeatureIndex;                                         //@synthesize gapFeatureIndex=_gapFeatureIndex - In the implementation block
@property (nonatomic,retain,readonly) NSString * directionalFeaturesInputName;                    //@synthesize directionalFeaturesInputName=_directionalFeaturesInputName - In the implementation block
@property (nonatomic,retain,readonly) NSString * spaceProbabilityOutputName;                      //@synthesize spaceProbabilityOutputName=_spaceProbabilityOutputName - In the implementation block
@property (nonatomic,retain,readonly) NSString * charBoundaryProbabilityOutputName;               //@synthesize charBoundaryProbabilityOutputName=_charBoundaryProbabilityOutputName - In the implementation block
@property (nonatomic,retain,readonly) NSString * delayedStrokeProbabilityOutputName;              //@synthesize delayedStrokeProbabilityOutputName=_delayedStrokeProbabilityOutputName - In the implementation block
-(long long)maxSequenceLength;
-(void)dealloc;
-(BOOL)classifyStrokesInDrawing:(id)arg1 minimumDrawingSize:(CGSize)arg2 outDelayedStrokeProbabilities:(vector<double, std::__1::allocator<double> >*)arg3 outSpaceProbabilities:(vector<double, std::__1::allocator<double> >*)arg4 outCharBoundaryProbabilities:(vector<double, std::__1::allocator<double> >*)arg5 ;
-(set<long, std::__1::less<long>, std::__1::allocator<long> >*)detectedDelayedStrokes:(const vector<double, std::__1::allocator<double> >*)arg1 ;
-(NSString *)directionalFeaturesInputName;
-(long long)gapFeatureIndex;
-(long long)distanceFeatureIndex;
-(long long)sinAlphaFeatureIndex;
-(long long)cosAlphaFeatureIndex;
-(vector<float, std::__1::allocator<float> >*)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id*)arg4 ;
-(id)initWithModelName:(id)arg1 ;
-(long long)windowOverlap;
-(NSString *)spaceProbabilityOutputName;
-(NSString *)charBoundaryProbabilityOutputName;
-(NSString *)delayedStrokeProbabilityOutputName;
@end
