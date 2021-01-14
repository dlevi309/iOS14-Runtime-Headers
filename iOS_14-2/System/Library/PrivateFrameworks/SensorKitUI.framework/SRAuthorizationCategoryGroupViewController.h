/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <SensorKitUI/SensorKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SRAuthorizationCellDelegate.h>
#import <UIKit/UITableViewDelegatePrivate.h>

@class NSBundle, NSMutableDictionary, NSArray, NSString;

@interface SRAuthorizationCategoryGroupViewController : UITableViewController <SRAuthorizationCellDelegate, UITableViewDelegatePrivate> {

	NSBundle* _appBundle;
	NSMutableDictionary* _authState;
	NSArray* _allKeys;

}

@property (nonatomic,retain) NSArray * allKeys;                            //@synthesize allKeys=_allKeys - In the implementation block
@property (nonatomic,retain) NSBundle * appBundle;                         //@synthesize appBundle=_appBundle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * authState;              //@synthesize authState=_authState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(NSBundle *)appBundle;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setAllKeys:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(NSArray *)allKeys;
-(void)dealloc;
-(void)setAppBundle:(NSBundle *)arg1 ;
-(NSMutableDictionary *)authState;
-(void)setAuthState:(NSMutableDictionary *)arg1 ;
-(void)openPrivacy;
-(void)confirmAuthChangeForService:(id)arg1 value:(BOOL)arg2 ;
-(void)setValue:(BOOL)arg1 indexPath:(id)arg2 ;
@end
