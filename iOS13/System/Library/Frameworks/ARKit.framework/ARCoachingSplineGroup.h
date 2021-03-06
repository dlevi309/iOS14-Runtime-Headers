/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@interface ARCoachingSplineGroup : NSObject {

	vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint> >* _controlPoints;
	vector<ARCoachingPatchData, std::__1::allocator<ARCoachingPatchData> >* _patchData;
	vector<unsigned short, std::__1::allocator<unsigned short> >* _indices;

}

@property (nonatomic,readonly) compressed_pair<float *, std::__1::allocator<float> >* controlPoints; 
@property (nonatomic,readonly) unsigned numControlPoints; 
@property (nonatomic,readonly) compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* patchData; 
@property (nonatomic,readonly) unsigned patchDataLength; 
@property (nonatomic,readonly) unsigned short* indices; 
@property (nonatomic,readonly) unsigned numIndices; 
-(unsigned short*)indices;
-(compressed_pair<float *, std::__1::allocator<float> >*)controlPoints;
-(unsigned)patchDataLength;
-(unsigned)numControlPoints;
-(unsigned)numIndices;
-(compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >*)patchData;
-(id)initWithSplines:(id)arg1 ;
@end

