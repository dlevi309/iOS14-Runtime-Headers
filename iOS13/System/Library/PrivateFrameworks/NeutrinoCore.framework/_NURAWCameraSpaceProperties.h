/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSArray;

@interface _NURAWCameraSpaceProperties : NSObject {

	NSArray* _xyzToCamera1;
	NSArray* _xyzToCamera2;
	double _whiteValue;
	double _whiteFactor;

}

@property (retain) NSArray * xyzToCamera1;              //@synthesize xyzToCamera1=_xyzToCamera1 - In the implementation block
@property (retain) NSArray * xyzToCamera2;              //@synthesize xyzToCamera2=_xyzToCamera2 - In the implementation block
@property (assign) double whiteValue;                   //@synthesize whiteValue=_whiteValue - In the implementation block
@property (assign) double whiteFactor;                  //@synthesize whiteFactor=_whiteFactor - In the implementation block
-(id)description;
-(void)setWhiteFactor:(double)arg1 ;
-(void)setWhiteValue:(double)arg1 ;
-(void)setXyzToCamera2:(NSArray *)arg1 ;
-(void)setXyzToCamera1:(NSArray *)arg1 ;
-(NSArray *)xyzToCamera1;
-(NSArray *)xyzToCamera2;
-(double)whiteValue;
-(double)whiteFactor;
@end

