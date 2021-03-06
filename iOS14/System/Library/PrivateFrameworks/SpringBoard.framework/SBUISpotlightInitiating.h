/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBViewControllerTransitionContext;


@protocol SBUISpotlightInitiating <NSObject>
@property (nonatomic,retain) SBViewControllerTransitionContext * transitionContext; 
@required
-(void)cleanupAfterSpotlightDismissal;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1;
-(id)spotlightHeaderAcquiringViewController;
-(void)setTransitionContext:(id)arg1;
-(SBViewControllerTransitionContext *)transitionContext;
-(void)setDisplayLayoutElementActive:(BOOL)arg1;

@end

