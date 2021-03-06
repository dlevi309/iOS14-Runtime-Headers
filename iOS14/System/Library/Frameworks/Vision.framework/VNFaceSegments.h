/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSData, NSDictionary;

@interface VNFaceSegments : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {

	unsigned long long _requestRevision;
	unsigned long long _outputBufferWidth;
	unsigned long long _outputBufferHeight;
	NSData* _outputBufferData;
	unsigned long long _numberOfFaceSegments;
	CGRect _boundingBox;
	NSDictionary* _faceSegmentLabelToProbabilityMap;
	vector<float, std::__1::allocator<float> >* _probabilityNormSums;

}

@property (nonatomic,readonly) unsigned long long outputBufferWidth;                         //@synthesize outputBufferWidth=_outputBufferWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long outputBufferHeight;                        //@synthesize outputBufferHeight=_outputBufferHeight - In the implementation block
@property (nonatomic,readonly) NSData * outputBufferData;                                    //@synthesize outputBufferData=_outputBufferData - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFaceSegments;                      //@synthesize numberOfFaceSegments=_numberOfFaceSegments - In the implementation block
@property (nonatomic,readonly) NSDictionary * faceSegmentLabelToProbabilityMap;              //@synthesize faceSegmentLabelToProbabilityMap=_faceSegmentLabelToProbabilityMap - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                                           //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;                           //@synthesize requestRevision=_requestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)faceSegmentIndexToFlagMap;
+(unsigned long long)faceSegmentsPixelSizeInBytes;
+(id)faceSegmentToSegmentMaskGrayLevelDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)boundingBox;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(id)initWithRequestRevision:(unsigned long long)arg1 outputBufferWidth:(unsigned long long)arg2 outputBufferHeight:(unsigned long long)arg3 outputBufferData:(id)arg4 numberOfFaceSegments:(unsigned long long)arg5 faceSegmentBBox:(CGRect)arg6 faceSegmentLabelToProbabilityMap:(id)arg7 ;
-(CVBufferRef)createProbabilityImageOfFaceSegment:(unsigned long long)arg1 error:(id*)arg2 ;
-(CGRect)_normalizeRegion:(CGRect)arg1 ;
-(vImage_Buffer*)_makeFaceSegmentProbabilityDataImageBuffer:(id)arg1 rect:(CGRect)arg2 ;
-(CVBufferRef)_createFaceSegmentProabilityDataPixelBufferWithSize:(CGSize)arg1 error:(id*)arg2 ;
-(unsigned long long)outputBufferWidth;
-(void)_calculateProbabilityNormalSumsForRect:(CGRect)arg1 ;
-(unsigned long long)outputBufferHeight;
-(NSData *)outputBufferData;
-(unsigned long long)numberOfFaceSegments;
-(NSDictionary *)faceSegmentLabelToProbabilityMap;
-(CVBufferRef)createMaskImageOfFaceSegments:(unsigned long long)arg1 error:(id*)arg2 ;
-(CVBufferRef)createProbabilityImageOfFaceSegment:(unsigned long long)arg1 region:(CGRect)arg2 normalize:(BOOL)arg3 error:(id*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

