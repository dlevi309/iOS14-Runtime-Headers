/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>

@protocol STContentPrivacyViewModelCoordinator;
@class NSObject, STContentPrivacyMediaRestrictionsDetailController;

@interface STWebFilterDetailController : PSListController {

	NSObject*<STContentPrivacyViewModelCoordinator> _coordinator;
	STContentPrivacyMediaRestrictionsDetailController* _parentMediaRestrictionsController;

}

@property (__weak) STContentPrivacyMediaRestrictionsDetailController * parentMediaRestrictionsController;              //@synthesize parentMediaRestrictionsController=_parentMediaRestrictionsController - In the implementation block
@property (nonatomic,retain) NSObject*<STContentPrivacyViewModelCoordinator> coordinator;                              //@synthesize coordinator=_coordinator - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(NSObject*<STContentPrivacyViewModelCoordinator>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)willResignActive;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(NSObject*<STContentPrivacyViewModelCoordinator>)coordinator;
-(id)getItemSpecifierValue:(id)arg1 ;
-(id)groupSpecifierWithConfiguration:(id)arg1 key:(id)arg2 footerText:(id)arg3 radio:(BOOL)arg4 ;
-(id)listItemSpecifierWithGroup:(id)arg1 name:(id)arg2 value:(id)arg3 ;
-(id)_listItemSpecifiersForSitesGroup:(id)arg1 ;
-(void)addSite:(id)arg1 ;
-(id)_addButtonSpecifierWithGroup:(id)arg1 action:(SEL)arg2 ;
-(id)_listItemSpecifiersForNamedSitesGroup:(id)arg1 ;
-(void)addNamedSite:(id)arg1 ;
-(STContentPrivacyMediaRestrictionsDetailController *)parentMediaRestrictionsController;
-(void)setParentMediaRestrictionsController:(STContentPrivacyMediaRestrictionsDetailController *)arg1 ;
-(void)updateParent;
-(void)saveRemovingItem:(id)arg1 value:(id)arg2 ;
-(void)saveItemValue:(id)arg1 specifier:(id)arg2 ;
@end

