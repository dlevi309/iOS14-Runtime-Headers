/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKOverlayRoomViewController.h>
#import <libobjc.A.dylib/HKCurrentValueViewDataSourceDelegate.h>
#import <libobjc.A.dylib/_HKContextChangeDelegate.h>

@protocol HKSleepDataSourceProvider;
@class HKInteractiveChartDataFormatter, HKDisplayType, HKChartCache, NSString;

@interface HKOverlayRoomSleepViewController : HKOverlayRoomViewController <HKCurrentValueViewDataSourceDelegate, _HKContextChangeDelegate> {

	BOOL durationContextSelected;
	BOOL scheduleContextSelected;
	BOOL baseDisplayIsSchedule;
	BOOL shouldHighlightBaseDisplayContext;
	id<HKSleepDataSourceProvider> _sleepDataSourceProvider;
	HKInteractiveChartDataFormatter* _sleepChartFormatter;
	HKDisplayType* _sleepDisplayType;
	HKChartCache* _sharedSleepCache;

}

@property (assign,nonatomic,__weak) id<HKSleepDataSourceProvider> sleepDataSourceProvider;              //@synthesize sleepDataSourceProvider=_sleepDataSourceProvider - In the implementation block
@property (nonatomic,retain) HKInteractiveChartDataFormatter * sleepChartFormatter;                     //@synthesize sleepChartFormatter=_sleepChartFormatter - In the implementation block
@property (nonatomic,retain) HKDisplayType * sleepDisplayType;                                          //@synthesize sleepDisplayType=_sleepDisplayType - In the implementation block
@property (nonatomic,retain) HKChartCache * sharedSleepCache;                                           //@synthesize sharedSleepCache=_sharedSleepCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL durationContextSelected; 
@property (assign,nonatomic) BOOL scheduleContextSelected; 
@property (assign,nonatomic) BOOL baseDisplayIsSchedule; 
@property (assign,nonatomic) BOOL shouldHighlightBaseDisplayContext; 
-(id)titleForSelectedRangeData:(id)arg1 ;
-(id)stringForValueRange:(id)arg1 timeScope:(long long)arg2 ;
-(void)viewDidLoad;
-(id)createChartOverlayViewController;
-(id)controllerTitleWithApplicationItems:(id)arg1 ;
-(id)primaryDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 ;
-(id)initialSelectedContextForMode:(long long)arg1 ;
-(id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3 ;
-(id<HKSleepDataSourceProvider>)sleepDataSourceProvider;
-(HKInteractiveChartDataFormatter *)sleepChartFormatter;
-(id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 sleepDataSourceProvider:(id)arg3 sleepChartFormatter:(id)arg4 mode:(long long)arg5 ;
-(void)setSleepDataSourceProvider:(id<HKSleepDataSourceProvider>)arg1 ;
-(void)setSleepChartFormatter:(HKInteractiveChartDataFormatter *)arg1 ;
-(void)_setDefaultChartFormatterFonts;
-(void)_installUpdateObserversForGoalsAndSchedulesWithApplicationItems:(id)arg1 ;
-(void)setBaseDisplayIsDuration;
-(void)setBaseDisplayIsSchedule;
-(HKDisplayType *)sleepDisplayType;
-(HKChartCache *)sharedSleepCache;
-(id)_buildSleepDisplayTypeWithApplicationItems:(id)arg1 sleepSeriesType:(long long)arg2 customSleepSeries:(id)arg3 customSleepChartFormatter:(id)arg4 ;
-(id)_primaryContextForApplicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)_fullContextsForApplicationItems:(id)arg1 overlayChartController:(id)arg2 ;
-(id)_consistencyContextForApplicationItems:(id)arg1 overlayMode:(long long)arg2 isPrimaryContext:(BOOL)arg3 ;
-(id)_buildDurationDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)_durationAmountContextForApplicationItems:(id)arg1 durationDisplayType:(id)arg2 ;
-(id)_durationGoalContextForApplicationItems:(id)arg1 durationDisplayType:(id)arg2 overlayMode:(long long)arg3 isPrimaryContext:(BOOL)arg4 ;
-(id)_durationAverageContextForApplicationItems:(id)arg1 durationDisplayType:(id)arg2 useInBedAverage:(BOOL)arg3 ;
-(id)_buildDurationGoalDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)_buildConsistencyDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)_buildScheduleDisplayTypeWithApplicationItems:(id)arg1 ;
-(id)_buildDurationAverageSeries;
-(id)_buildDurationAverageFormatter;
-(id)_buildDurationAverageDisplayTypeWithApplicationItems:(id)arg1 customSleepSeries:(id)arg2 customSleepChartFormatter:(id)arg3 ;
-(id)_sleepColorForSelectedRangeData:(id)arg1 ;
-(BOOL)durationContextSelected;
-(BOOL)scheduleContextSelected;
-(void)setDurationContextSelected:(BOOL)arg1 ;
-(void)setScheduleContextSelected:(BOOL)arg1 ;
-(BOOL)baseDisplayIsSchedule;
-(void)setBaseDisplayIsSchedule:(BOOL)arg1 ;
-(BOOL)shouldHighlightBaseDisplayContext;
-(void)setShouldHighlightBaseDisplayContext:(BOOL)arg1 ;
-(void)setShouldHighlightBaseDisplayContext;
-(void)setSleepDisplayType:(HKDisplayType *)arg1 ;
-(void)setSharedSleepCache:(HKChartCache *)arg1 ;
@end
