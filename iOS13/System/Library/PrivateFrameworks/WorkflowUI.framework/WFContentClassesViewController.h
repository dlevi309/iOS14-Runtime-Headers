/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFContentClassesViewControllerDelegate;
@class NSOrderedSet, NSMutableOrderedSet, UIBarButtonItem, NSArray;

@interface WFContentClassesViewController : UITableViewController {

	id<WFContentClassesViewControllerDelegate> _delegate;
	NSOrderedSet* _contentClasses;
	NSMutableOrderedSet* _selectedClassesSet;
	UIBarButtonItem* _selectButtonItem;

}

@property (nonatomic,readonly) NSOrderedSet * contentClasses;                                         //@synthesize contentClasses=_contentClasses - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * selectedClassesSet;                              //@synthesize selectedClassesSet=_selectedClassesSet - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * selectButtonItem;                                      //@synthesize selectButtonItem=_selectButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<WFContentClassesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * selectedClasses; 
-(id<WFContentClassesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFContentClassesViewControllerDelegate>)arg1 ;
-(void)done;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSOrderedSet *)contentClasses;
-(void)updateSelectButton;
-(void)notifyChanged;
-(void)selectAction;
-(void)selectContentClasses:(id)arg1 ;
-(void)setSelectedClasses:(NSArray *)arg1 ;
-(NSArray *)selectedClasses;
-(NSMutableOrderedSet *)selectedClassesSet;
-(UIBarButtonItem *)selectButtonItem;
-(void)setSelectButtonItem:(UIBarButtonItem *)arg1 ;
@end

