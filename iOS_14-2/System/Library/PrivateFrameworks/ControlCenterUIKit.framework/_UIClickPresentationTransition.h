/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

@class UITargetedPreview, UIViewPropertyAnimator;


@protocol _UIClickPresentationTransition <NSObject>
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@optional
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
-(UIViewPropertyAnimator *)customAnimator;
-(void)transitionWillReverse;
-(UITargetedPreview *)sourcePreview;
-(void)setSourcePreview:(id)arg1;

@required
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
-(void)transitionDidEnd:(BOOL)arg1;

@end
