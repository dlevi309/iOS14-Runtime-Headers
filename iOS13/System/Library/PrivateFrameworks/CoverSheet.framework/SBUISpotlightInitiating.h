/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class SBViewControllerTransitionContext;


@protocol SBUISpotlightInitiating <NSObject>
@property (nonatomic,retain) SBViewControllerTransitionContext * transitionContext; 
@required
-(SBViewControllerTransitionContext *)transitionContext;
-(void)setTransitionContext:(id)arg1;
-(void)setDisplayLayoutElementActive:(BOOL)arg1;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1;
-(void)cleanupAfterSpotlightDismissal;
-(id)spotlightHeaderAcquiringViewController;

@end

