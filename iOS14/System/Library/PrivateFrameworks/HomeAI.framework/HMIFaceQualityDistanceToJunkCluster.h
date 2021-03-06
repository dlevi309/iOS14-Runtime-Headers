/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIDESMutableFloatArray, NSString;

@interface HMIFaceQualityDistanceToJunkCluster : HMFObject <HMFLogging> {

	float _maxDistanceScore;
	HMIDESMutableFloatArray* _junkCentroid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(float)computeJunkScoreForFacePrint:(id)arg1 ;
@end

