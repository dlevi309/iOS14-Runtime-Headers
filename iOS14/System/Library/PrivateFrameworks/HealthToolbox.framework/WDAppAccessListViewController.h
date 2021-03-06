/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKAuthorizationStore, NSArray, HKSample, UIFont;

@interface WDAppAccessListViewController : HKTableViewController {

	HKHealthStore* _healthStore;
	HKAuthorizationStore* _authorizationStore;
	NSArray* _allowedApps;
	NSArray* _disallowedApps;
	HKSample* _sample;
	UIFont* _bodyFont;

}

@property (nonatomic,retain) NSArray * allowedApps;                 //@synthesize allowedApps=_allowedApps - In the implementation block
@property (nonatomic,retain) NSArray * disallowedApps;              //@synthesize disallowedApps=_disallowedApps - In the implementation block
@property (nonatomic,retain) HKSample * sample;                     //@synthesize sample=_sample - In the implementation block
@property (nonatomic,retain) UIFont * bodyFont;                     //@synthesize bodyFont=_bodyFont - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(HKSample *)sample;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setBodyFont:(UIFont *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)_sourceForIndexPath:(id)arg1 ;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5 ;
-(UIFont *)bodyFont;
-(void)setSample:(HKSample *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
-(void)_refreshAppAuthorizationData;
-(void)setAllowedApps:(NSArray *)arg1 ;
-(void)setDisallowedApps:(NSArray *)arg1 ;
-(id)_identifierForCellInSection:(long long)arg1 ;
-(id)_textForCellAtIndexPath:(id)arg1 ;
-(void)_loadIconForSource:(id)arg1 onCell:(id)arg2 ofTableView:(id)arg3 ;
-(void)resetAccess;
-(NSArray *)allowedApps;
-(NSArray *)disallowedApps;
@end

