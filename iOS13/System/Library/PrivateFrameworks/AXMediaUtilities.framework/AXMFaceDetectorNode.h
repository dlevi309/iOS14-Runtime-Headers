/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMEvaluationNode.h>

@class AXMVisionFaceNameHelper, VNDetectFaceRectanglesRequest, VNCreateFaceprintRequest, VNClassifyFaceAttributesRequest, VNDetectFaceExpressionsRequest, VNDetectFaceLandmarksRequest, VNDetectFacePoseRequest;

@interface AXMFaceDetectorNode : AXMEvaluationNode {

	AXMVisionFaceNameHelper* __faceNameHelper;
	VNDetectFaceRectanglesRequest* __faceRectanglesRequest;
	VNCreateFaceprintRequest* __faceprintRequest;
	VNClassifyFaceAttributesRequest* __faceAttributesRequest;
	VNDetectFaceExpressionsRequest* __faceExpressionsRequest;
	VNDetectFaceLandmarksRequest* __faceLandmarksRequest;
	VNDetectFacePoseRequest* __facePoseRequest;

}

@property (nonatomic,retain) AXMVisionFaceNameHelper * _faceNameHelper;                             //@synthesize _faceNameHelper=__faceNameHelper - In the implementation block
@property (nonatomic,retain) VNDetectFaceRectanglesRequest * _faceRectanglesRequest;                //@synthesize _faceRectanglesRequest=__faceRectanglesRequest - In the implementation block
@property (nonatomic,retain) VNCreateFaceprintRequest * _faceprintRequest;                          //@synthesize _faceprintRequest=__faceprintRequest - In the implementation block
@property (nonatomic,retain) VNClassifyFaceAttributesRequest * _faceAttributesRequest;              //@synthesize _faceAttributesRequest=__faceAttributesRequest - In the implementation block
@property (nonatomic,retain) VNDetectFaceExpressionsRequest * _faceExpressionsRequest;              //@synthesize _faceExpressionsRequest=__faceExpressionsRequest - In the implementation block
@property (nonatomic,retain) VNDetectFaceLandmarksRequest * _faceLandmarksRequest;                  //@synthesize _faceLandmarksRequest=__faceLandmarksRequest - In the implementation block
@property (nonatomic,retain) VNDetectFacePoseRequest * _facePoseRequest;                            //@synthesize _facePoseRequest=__facePoseRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(BOOL)requiresVisionFramework;
-(AXMVisionFaceNameHelper *)_faceNameHelper;
-(void)set_faceNameHelper:(AXMVisionFaceNameHelper *)arg1 ;
-(VNCreateFaceprintRequest *)_faceprintRequest;
-(void)set_faceprintRequest:(VNCreateFaceprintRequest *)arg1 ;
-(VNClassifyFaceAttributesRequest *)_faceAttributesRequest;
-(void)set_faceAttributesRequest:(VNClassifyFaceAttributesRequest *)arg1 ;
-(VNDetectFaceExpressionsRequest *)_faceExpressionsRequest;
-(void)set_faceExpressionsRequest:(VNDetectFaceExpressionsRequest *)arg1 ;
-(VNDetectFaceLandmarksRequest *)_faceLandmarksRequest;
-(void)set_faceLandmarksRequest:(VNDetectFaceLandmarksRequest *)arg1 ;
-(VNDetectFacePoseRequest *)_facePoseRequest;
-(void)set_facePoseRequest:(VNDetectFacePoseRequest *)arg1 ;
-(VNDetectFaceRectanglesRequest *)_faceRectanglesRequest;
-(void)set_faceRectanglesRequest:(VNDetectFaceRectanglesRequest *)arg1 ;
-(id)_faceResultForUUID:(id)arg1 inFaceDictionary:(id)arg2 ;
-(id)_createRequestsForContext:(id)arg1 ;
-(id)_faceDetectionResultsForVisionRequests:(id)arg1 canvasSize:(CGSize)arg2 ;
@end
