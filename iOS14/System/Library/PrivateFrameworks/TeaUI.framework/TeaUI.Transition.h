/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>

@interface TeaUI.Transition : NSObject <UIViewControllerTransitioningDelegate> {

	 interactiveTransition;
	 presentationTransitionFactory;
	 dismissalTransitionFactory;
	 presentationControllerFactory;

}
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)init;
@end

