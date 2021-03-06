/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewing_Internal.h>

@protocol UIViewControllerPreviewingDelegate;
@class UIView, UIViewController, _UIPreviewInteractionController, NSString, UIGestureRecognizer;

@interface _UIViewControllerPreviewingContext : NSObject <_UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal> {

	id<UIViewControllerPreviewingDelegate> _delegate;
	UIView* _customViewForInteractiveHighlight;
	UIView* _sourceView;
	UIViewController* _viewController;
	_UIPreviewInteractionController* _previewInteractionController;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIView * sourceView;                                                                    //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionController * previewInteractionController;                         //@synthesize previewInteractionController=_previewInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (assign,nonatomic) CGRect sourceRect;                                                                      //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) UIView * customViewForInteractiveHighlight;                                             //@synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight - In the implementation block
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(void)setDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3 ;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)unregister;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(UIView *)customViewForInteractiveHighlight;
-(void)setCustomViewForInteractiveHighlight:(UIView *)arg1 ;
-(CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1 ;
-(id)initWithSourceView:(id)arg1 viewController:(id)arg2 ;
-(_UIPreviewInteractionController *)previewInteractionController;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)setPreviewInteractionController:(_UIPreviewInteractionController *)arg1 ;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id*)arg4 ;
-(void)previewInteractionController:(id)arg1 commitViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(CGPoint)arg3 inSourceView:(id)arg4 ;
@end

