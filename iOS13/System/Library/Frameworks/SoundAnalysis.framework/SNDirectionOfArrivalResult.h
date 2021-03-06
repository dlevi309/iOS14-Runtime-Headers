/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class NSArray, NSString;

@interface SNDirectionOfArrivalResult : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	float _azimuth;
	NSArray* _spatialSpectrum;
	SCD_Struct_SN4 timeRange;

}

@property (assign,nonatomic) float azimuth;                           //@synthesize azimuth=_azimuth - In the implementation block
@property (nonatomic,retain) NSArray * spatialSpectrum;               //@synthesize spatialSpectrum=_spatialSpectrum - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_SN4 timeRange; 
-(NSString *)description;
-(float)azimuth;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(void)setAzimuth:(float)arg1 ;
-(NSArray *)spatialSpectrum;
-(void)setSpatialSpectrum:(NSArray *)arg1 ;
@end

