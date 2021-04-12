/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKOverlayContext.h>

@protocol _HKContextChangeDelegate;
@class HKInteractiveChartOverlayViewController, HKDisplayType, _HKSleepDurationAverageFormatter, HKDisplayTypeContextItem, _HKSleepDurationAverageSeries, NSString;

@interface _HKSleepDurationAverageContext : NSObject <HKOverlayContext> {

	BOOL _useInBedAverage;
	HKInteractiveChartOverlayViewController* _overlayChartController;
	HKDisplayType* _baseDisplayType;
	HKDisplayType* _overlayDisplayType;
	_HKSleepDurationAverageFormatter* _averageChartFormatter;
	HKDisplayTypeContextItem* _lastUpdatedItem;
	id<_HKContextChangeDelegate> _contextChangeDelegate;
	_HKSleepDurationAverageSeries* _overlayAverageSeries;

}

@property (nonatomic,retain) HKDisplayTypeContextItem * lastUpdatedItem;                                      //@synthesize lastUpdatedItem=_lastUpdatedItem - In the implementation block
@property (nonatomic,__weak,readonly) id<_HKContextChangeDelegate> contextChangeDelegate;                     //@synthesize contextChangeDelegate=_contextChangeDelegate - In the implementation block
@property (nonatomic,readonly) _HKSleepDurationAverageSeries * overlayAverageSeries;                          //@synthesize overlayAverageSeries=_overlayAverageSeries - In the implementation block
@property (nonatomic,readonly) HKInteractiveChartOverlayViewController * overlayChartController;              //@synthesize overlayChartController=_overlayChartController - In the implementation block
@property (nonatomic,readonly) HKDisplayType * baseDisplayType;                                               //@synthesize baseDisplayType=_baseDisplayType - In the implementation block
@property (nonatomic,readonly) HKDisplayType * overlayDisplayType;                                            //@synthesize overlayDisplayType=_overlayDisplayType - In the implementation block
@property (nonatomic,readonly) BOOL useInBedAverage;                                                          //@synthesize useInBedAverage=_useInBedAverage - In the implementation block
@property (nonatomic,readonly) _HKSleepDurationAverageFormatter * averageChartFormatter;                      //@synthesize averageChartFormatter=_averageChartFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextItemForLastUpdate;
-(void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)sampleTypeForDateRangeUpdates;
-(id)overlayDisplayTypeForTimeScope:(long long)arg1 ;
-(void)overlayStateWillChange:(BOOL)arg1 contextItem:(id)arg2 chartController:(id)arg3 ;
-(id)baseDisplayTypeForOverlay:(long long)arg1 ;
-(BOOL)unselectedContextShouldUseContextBaseType;
-(HKInteractiveChartOverlayViewController *)overlayChartController;
-(HKDisplayType *)overlayDisplayType;
-(id)initWithBaseDisplayType:(id)arg1 overlayDisplayType:(id)arg2 overlayChartController:(id)arg3 useInBedAverage:(BOOL)arg4 contextChangeDelegate:(id)arg5 overlayAverageSeries:(id)arg6 averageChartFormatter:(id)arg7 ;
-(HKDisplayTypeContextItem *)lastUpdatedItem;
-(HKDisplayType *)baseDisplayType;
-(void)setLastUpdatedItem:(HKDisplayTypeContextItem *)arg1 ;
-(id<_HKContextChangeDelegate>)contextChangeDelegate;
-(id)_contextItemWithAverageString:(id)arg1 ;
-(BOOL)useInBedAverage;
-(double)_averageValueFromChartPoints:(id)arg1 ;
-(id)_averagePhraseFromAverageValue:(double)arg1 shortForm:(BOOL)arg2 ;
-(_HKSleepDurationAverageSeries *)overlayAverageSeries;
-(_HKSleepDurationAverageFormatter *)averageChartFormatter;
-(id)_findSleepDurationSeries;
@end
