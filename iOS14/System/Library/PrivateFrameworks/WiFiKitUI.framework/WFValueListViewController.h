/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WFInsetTableViewController.h>

@class NSString, NSArray, UISwitch, NSMutableArray;

@interface WFValueListViewController : WFInsetTableViewController {

	BOOL _switchOn;
	BOOL _hasSwitch;
	NSString* _selectedTitle;
	/*^block*/id _completionHandler;
	/*^block*/id _footerHandler;
	NSArray* _titles;
	UISwitch* _configSwitch;
	NSMutableArray* _sections;
	NSString* _switchTitle;

}

@property (nonatomic,retain) NSArray * titles;                       //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) BOOL hasSwitch;                         //@synthesize hasSwitch=_hasSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * configSwitch;                //@synthesize configSwitch=_configSwitch - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * switchTitle;                   //@synthesize switchTitle=_switchTitle - In the implementation block
@property (nonatomic,retain) NSString * selectedTitle;               //@synthesize selectedTitle=_selectedTitle - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id footerHandler;                         //@synthesize footerHandler=_footerHandler - In the implementation block
@property (assign,nonatomic) BOOL switchOn;                          //@synthesize switchOn=_switchOn - In the implementation block
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)setSwitchOn:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSMutableArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setTitles:(NSArray *)arg1 ;
-(id)completionHandler;
-(void)viewDidLoad;
-(NSArray *)titles;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(NSString *)selectedTitle;
-(id)initWithTitles:(id)arg1 switchTitle:(id)arg2 ;
-(void)setSelectedTitle:(NSString *)arg1 ;
-(void)setFooterHandler:(id)arg1 ;
-(UISwitch *)configSwitch;
-(NSString *)switchTitle;
-(id)cellForTitleAtIndexPath:(id)arg1 ;
-(id)footerHandler;
-(BOOL)switchOn;
-(BOOL)hasSwitch;
-(void)setHasSwitch:(BOOL)arg1 ;
-(void)setConfigSwitch:(UISwitch *)arg1 ;
-(void)setSwitchTitle:(NSString *)arg1 ;
@end
