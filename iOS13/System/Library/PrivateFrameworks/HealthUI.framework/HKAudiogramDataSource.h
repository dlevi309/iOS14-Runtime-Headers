/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKAudiogramDataSource : HKGraphSeriesDataSource {

	HKGraphSeriesDataBlock* _dataBlock;

}

@property (nonatomic,readonly) HKGraphSeriesDataBlock * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(HKGraphSeriesDataBlock *)dataBlock;
-(id)cachedBlockForPath:(SCD_Struct_HK0)arg1 context:(id)arg2 ;
-(SCD_Struct_HK0)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK0)arg1 toPath:(SCD_Struct_HK0)arg2 ;
-(id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2 ;
-(id)_flatPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2 ;
-(id)initWithSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2 ;
-(id)initWithFlatSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2 ;
@end

