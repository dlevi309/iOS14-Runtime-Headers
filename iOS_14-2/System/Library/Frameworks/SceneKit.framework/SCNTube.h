/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNTube : SCNGeometry {

	double _tubeinnerRadius;
	double _tubeouterRadius;
	double _tubeheight;
	double _tuberadialSpan;
	long long _tubeheightSegmentCount;
	long long _tuberadialSegmentCount;
	long long _tubeprimitiveType;

}

@property (assign,nonatomic) double innerRadius; 
@property (assign,nonatomic) double outerRadius; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) long long radialSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
+(BOOL)supportsSecureCoding;
+(id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3 ;
-(void)setHeight:(double)arg1 ;
-(id)init;
-(long long)primitiveType;
-(void)encodeWithCoder:(id)arg1 ;
-(double)height;
-(id)description;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)outerRadius;
-(void)setOuterRadius:(double)arg1 ;
-(void)setInnerRadius:(double)arg1 ;
-(double)innerRadius;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)setRadialSpan:(double)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)heightSegmentCount;
-(void)setHeightSegmentCount:(long long)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(double)radialSpan;
-(long long)radialSegmentCount;
-(void)setRadialSegmentCount:(long long)arg1 ;
-(id)presentationTube;
@end
