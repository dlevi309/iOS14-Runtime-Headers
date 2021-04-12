/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSMutableArray, HKSplashScreenView, UIButton, NSString;

@interface HKSplashScreenViewController : HKViewController <UITableViewDelegate, UITableViewDataSource> {

	NSMutableArray* _splashItems;
	long long _splashVersion;

}

@property (nonatomic,readonly) HKSplashScreenView * splashScreenView; 
@property (nonatomic,retain) NSMutableArray * splashItems;                         //@synthesize splashItems=_splashItems - In the implementation block
@property (assign,nonatomic) long long splashVersion;                              //@synthesize splashVersion=_splashVersion - In the implementation block
@property (readonly) UIButton * continueButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)markSplashScreenAtVersion:(long long)arg1 ;
+(id)splashScreenForSplashScreenVersion:(long long)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIButton *)continueButton;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initForSplashScreenVersion:(long long)arg1 ;
-(void)setSplashVersion:(long long)arg1 ;
-(HKSplashScreenView *)splashScreenView;
-(long long)splashVersion;
-(NSMutableArray *)splashItems;
-(void)setSplashItems:(NSMutableArray *)arg1 ;
-(void)addSplashScreenViewControllerItem:(id)arg1 ;
@end
