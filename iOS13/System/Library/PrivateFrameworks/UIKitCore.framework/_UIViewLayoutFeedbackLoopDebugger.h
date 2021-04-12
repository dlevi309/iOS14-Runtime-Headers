/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSMutableSet, NSMutableArray, NSArray;

@interface _UIViewLayoutFeedbackLoopDebugger : NSObject {

	long long _debuggingState;
	UIView* _rootView;
	NSMutableSet* _viewsWithChangingGeometry;
	NSMutableSet* _viewsWithVariableChangesTriggeringLayout;
	NSMutableSet* _turningPointViews;
	NSMutableSet* _involvedViews;
	NSMutableArray* _layoutList;
	NSArray* _reducedLayoutList;
	BOOL _rootViewConfirmed;
	BOOL _feedbackLoopConfirmed;
	long long _rootViewLayoutCount;
	UIView* _currentLayoutView;

}

@property (nonatomic,retain) UIView * currentLayoutView;              //@synthesize currentLayoutView=_currentLayoutView - In the implementation block
+(id)layoutFeedbackLoopDebugger;
+(void)createLayoutFeedbackLoopDebuggerForUnitTests;
+(void)destroyLayoutFeedbackLoopDebuggerForUnitTests;
-(id)description;
-(void)willSendSetNeedsLayoutToView:(id)arg1 becauseOfChangeInVariable:(id)arg2 inLayoutEngine:(id)arg3 ;
-(void)willSendSetPosition:(CGPoint)arg1 toLayerOfView:(id)arg2 ;
-(void)willSendSetFrame:(CGRect)arg1 toLayerOfView:(id)arg2 ;
-(void)willSendSetBounds:(CGRect)arg1 toLayerOfView:(id)arg2 ;
-(void)didSendSetNeedsLayoutToLayerOfView:(id)arg1 ;
-(void)willSendSetNeedsLayoutToLayerOfView:(id)arg1 ;
-(void)didEnterLayoutSublayersOfLayerForView:(id)arg1 ;
-(void)willSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1 ;
-(void)didSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1 ;
-(void)willSendLayoutSubviewsToView:(id)arg1 ;
-(void)didSendLayoutSubviewsToView:(id)arg1 ;
-(void)willSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1 ;
-(void)didSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1 ;
-(void)willExitLayoutSublayersOfLayerForView:(id)arg1 ;
-(UIView *)currentLayoutView;
-(void)dumpInfoWithInfoCollectionSuccess:(BOOL)arg1 ;
-(id)viewsWithVariableChangesTriggeringLayoutCreateIfNecessary;
-(id)turningPointViewsCreateIfNecessary;
-(void)_recordSetNeedsLayoutToLayerOfView:(id)arg1 ;
-(void)willChangeGeometryForLayerOfView:(id)arg1 ;
-(id)viewsWithChangingGeometryCreateIfNecessary;
-(id)topLevelViewHierarchyTrace;
-(void)setCurrentLayoutView:(UIView *)arg1 ;
@end
