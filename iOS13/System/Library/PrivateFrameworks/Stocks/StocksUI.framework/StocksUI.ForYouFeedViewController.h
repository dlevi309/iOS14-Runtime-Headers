/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface StocksUI.ForYouFeedViewController : UIViewController <UICollectionViewDelegate> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 cardViewScrollViewCoordinator;
	 statusBarView;
	 toolbarBehavior;
	 collapsingAnimator;
	 sharingActivityProviderFactory;
	 eventManager;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

