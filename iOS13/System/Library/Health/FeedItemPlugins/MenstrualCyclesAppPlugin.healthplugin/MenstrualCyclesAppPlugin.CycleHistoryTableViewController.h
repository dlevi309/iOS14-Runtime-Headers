/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegatePrivate.h>
#import <libobjc.A.dylib/HKMCAnalysisProviderObserver.h>

@interface MenstrualCyclesAppPlugin.CycleHistoryTableViewController : UITableViewController <UITableViewDelegatePrivate, HKMCAnalysisProviderObserver> {

	 maxCyclesInSectionView;
	 $__lazy_storage_$_yearDateFormatter;
	 viewIsSection;
	 cycles;
	 viewModelProviders;
	 sectionedCycles;
	 years;
	 selectedFilter;
	 calendarCache;
	 today;
	 analysisProvider;
	 providedHealthStore;

}

@property (readonly,nonatomic) BOOL axFilterSelected; 
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)analysisProvider:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)axFilterSelected;
-(void)pushFilterView;
@end

