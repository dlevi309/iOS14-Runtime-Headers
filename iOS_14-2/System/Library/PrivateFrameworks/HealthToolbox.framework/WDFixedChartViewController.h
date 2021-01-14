/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HKValueRange, HKInteractiveChartViewController, HKDataMetadataDetailSection, NSString;

@interface WDFixedChartViewController : HKTableViewController <WDUserActivityResponder> {

	HKValueRange* _fixedRange;
	HKInteractiveChartViewController* _chartController;
	HKDataMetadataDetailSection* _metadataSection;

}

@property (nonatomic,readonly) HKValueRange * fixedRange;                                       //@synthesize fixedRange=_fixedRange - In the implementation block
@property (nonatomic,readonly) HKInteractiveChartViewController * chartController;              //@synthesize chartController=_chartController - In the implementation block
@property (nonatomic,readonly) HKDataMetadataDetailSection * metadataSection;                   //@synthesize metadataSection=_metadataSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(HKValueRange *)fixedRange;
-(HKInteractiveChartViewController *)chartController;
-(id)cellForChart;
-(id)initWithInteractiveChartViewController:(id)arg1 sessionSample:(id)arg2 profile:(id)arg3 title:(id)arg4 ;
-(HKDataMetadataDetailSection *)metadataSection;
@end
