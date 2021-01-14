/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardSplitTransitionView.h>

@class CALayer, NSMutableDictionary, UIKBCacheToken;

@interface UIKeyboardSliceTransitionView : UIKeyboardSplitTransitionView {

	CGImageRef _defaultKeyplaneImage;
	CGImageRef _splitKeyplaneImage;
	CALayer* _leftKeys;
	CALayer* _rightKeys;
	CALayer* _spaceFill;
	NSMutableDictionary* _controlKeys;
	CALayer* _topEdgeHighlight;
	UIKBCacheToken* _keyplaneToken;
	long long _orientation;
	struct {
		unsigned position : 1;
		unsigned slices : 1;
		unsigned backgroundAndShadows : 1;
		unsigned backgroundGradients : 1;
		unsigned topEdgeHighlight : 1;
		unsigned shiftKeys : 1;
		unsigned returnKeys : 1;
		unsigned moreIntlKeys : 1;
	}  _rebuildFlags;

}
-(void)updateTransitionForSlice:(id)arg1 withStart:(id)arg2 startContents:(id)arg3 end:(id)arg4 endContents:(id)arg5 updateContents:(BOOL)arg6 ;
-(void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)rebuildTransitionForSplitStyleChange:(id)arg1 ;
-(void)transformForProgress:(double)arg1 ;
-(CGImageRef)defaultKeyboardImage;
-(CGImageRef)splitKeyboardImage;
-(void)initializeLayers;
-(void)rebuildMoreIntlKeys;
-(void)rebuildShiftSlices;
-(void)rebuildReturnSlices;
-(void)updateTransition;
-(void)_delayedUpdateTransition;
-(void)setRebuildFlags;
-(id)crossfadeOpacityAnimation;
-(void)rebuildShadows;
-(double)adjustedLeftWidthAtMergePoint;
-(double)adjustedRightWidthAtMergePoint;
-(void)rebuildTopEdgeHighlightTransition;
-(CGImageRef)getKeyboardImageAsSplit:(BOOL)arg1 ;
-(id)meshTransformForProgress:(double)arg1 ;
-(void)rebuildPositionTransition;
-(void)rebuildBackgroundAndShadowTransitions;
-(void)refreshKeyplaneImages;
-(void)rebuildBackgroundGradientTransitions;
-(void)rebuildSliceTransitions;
-(void)rebuildControlKeys:(unsigned long long)arg1 ;
-(BOOL)canDisplayTransition;
-(void)updateWithProgress:(double)arg1 ;
-(void)dealloc;
@end
