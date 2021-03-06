/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFAlarmChooserViewControllerDelegate.h>

@class UITableView, NSArray, MTAlarmDataSource, NSString;

@interface WFAlarmTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFAlarmChooserViewControllerDelegate> {

	UITableView* _tableView;
	NSArray* _sections;
	MTAlarmDataSource* _alarmDataSource;

}

@property (nonatomic,readonly) UITableView * tableView;                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) MTAlarmDataSource * alarmDataSource;              //@synthesize alarmDataSource=_alarmDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(void)alarmChooserViewController:(id)arg1 didFinishWithChosenAlarms:(id)arg2 ;
-(void)alarmChooserViewControllerDidCancel:(id)arg1 ;
-(id)titleForCellInSection:(id)arg1 item:(id)arg2 ;
-(id)extraTextForCellInSection:(id)arg1 item:(id)arg2 ;
-(long long)accessoryTypeForCellInSection:(id)arg1 item:(id)arg2 ;
-(void)presentAlarmChooserViewController;
-(MTAlarmDataSource *)alarmDataSource;
@end

