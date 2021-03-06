/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <libobjc.A.dylib/BNPresentedBannerAnimationCustomizing.h>
#import <libobjc.A.dylib/BNBannerTransitioningDelegate.h>

@class NSString;

@interface BNDefaultBannerTransitioningDelegate : NSObject <BNPresentedBannerAnimationCustomizing, BNBannerTransitioningDelegate> {

	BOOL _resizeAnimationCustomizationPermitted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isResizeAnimationCustomizationPermitted,nonatomic) BOOL resizeAnimationCustomizationPermitted;              //@synthesize resizeAnimationCustomizationPermitted=_resizeAnimationCustomizationPermitted - In the implementation block
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)init;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)sizeTransitionAnimationSettingsForPresentable:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 userInfo:(id)arg4 ;
-(id)animationControllerForDismissedController:(id)arg1 userInfo:(id)arg2 ;
-(Class)_bannerTransitionAnimatorClassForAnimationStyle:(long long)arg1 ;
-(id)_sizeTransitionAnimationSettingsForViewController:(id)arg1 ;
-(id)animationControllerForResizingController:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isResizeAnimationCustomizationPermitted;
-(void)setResizeAnimationCustomizationPermitted:(BOOL)arg1 ;
@end

