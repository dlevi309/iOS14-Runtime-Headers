/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CFXTextEffectEditorViewDelegate.h>
#import <libobjc.A.dylib/JFXOverlayEffectDebugViewDelegate.h>

@protocol CFXEffectEditorViewDelegate, OS_dispatch_queue;
@class CFXEffect, UIButton, JFXOverlayEffectDebugView, CADisplayLink, CFXTextEffectEditorView, JFXEffectsPreviewGenerator, JFXImageView, NSObject, NSString, CFXFaceReticleView, JFXOverlayEffectAnimationView, NSMutableArray;

@interface CFXEffectEditorView : UIView <UIGestureRecognizerDelegate, CFXTextEffectEditorViewDelegate, JFXOverlayEffectDebugViewDelegate> {

	BOOL _displayLinkBusyOnRenderQueue;
	BOOL _isRenderingEditEffect;
	BOOL _isRenderPendingForEditEffect;
	BOOL _isTextEditing;
	BOOL _isEditing;
	BOOL _effectWasEdited;
	BOOL _truncateTextToMaximumLength;
	BOOL _isEndingEditing;
	BOOL _isBeginningEditing;
	BOOL _delegateSupportsCalculatingAnimatedFaceTrackingTransform;
	BOOL _delegateSupportsDidMoveEffect;
	BOOL _delegateSupportsApplyAnimationTransformsToEffect;
	id<CFXEffectEditorViewDelegate> _delegate;
	unsigned long long _mode;
	CFXEffect* _editEffect;
	double _displayScale;
	UIButton* _removeButton;
	JFXOverlayEffectDebugView* _debugOverlayView;
	CADisplayLink* _debugDisplayLink;
	CFXTextEffectEditorView* _textEditorView;
	JFXEffectsPreviewGenerator* _previewGenerator;
	JFXImageView* _editEffectPreview;
	NSObject*<OS_dispatch_queue> _effectRenderingQueue;
	NSString* _oldEditText;
	unsigned long long _maximumTextLength;
	CADisplayLink* _editControlsTrackingDisplayLink;
	CFXFaceReticleView* _faceTrackingReticle;
	JFXOverlayEffectAnimationView* _effectAnimationView;
	CADisplayLink* _effectAnimationDisplayLink;
	unsigned long long _appliedEditingGestures;
	double _lastFaceRectacleUpdateTime;
	double _lastEffectMovedNotifyTime;
	NSMutableArray* _beginEditingCompletionBlocks;
	NSMutableArray* _endEditingCompletionBlocks;
	CGPoint _lastTouchLocation;
	CGPoint _lastSpacingBetweenTouchAndCenterOfEffect;
	CGAffineTransform _editTransform;

}

@property (nonatomic,retain) CFXEffect * editEffect;                                                       //@synthesize editEffect=_editEffect - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                                                               //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) BOOL isTextEditing;                                                           //@synthesize isTextEditing=_isTextEditing - In the implementation block
@property (assign,nonatomic) CGAffineTransform editTransform;                                              //@synthesize editTransform=_editTransform - In the implementation block
@property (assign,nonatomic) double displayScale;                                                          //@synthesize displayScale=_displayScale - In the implementation block
@property (assign,nonatomic) BOOL effectWasEdited;                                                         //@synthesize effectWasEdited=_effectWasEdited - In the implementation block
@property (nonatomic,retain) UIButton * removeButton;                                                      //@synthesize removeButton=_removeButton - In the implementation block
@property (nonatomic,retain) JFXOverlayEffectDebugView * debugOverlayView;                                 //@synthesize debugOverlayView=_debugOverlayView - In the implementation block
@property (nonatomic,retain) CADisplayLink * debugDisplayLink;                                             //@synthesize debugDisplayLink=_debugDisplayLink - In the implementation block
@property (nonatomic,retain) CFXTextEffectEditorView * textEditorView;                                     //@synthesize textEditorView=_textEditorView - In the implementation block
@property (nonatomic,retain) JFXEffectsPreviewGenerator * previewGenerator;                                //@synthesize previewGenerator=_previewGenerator - In the implementation block
@property (nonatomic,retain) JFXImageView * editEffectPreview;                                             //@synthesize editEffectPreview=_editEffectPreview - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> effectRenderingQueue;                          //@synthesize effectRenderingQueue=_effectRenderingQueue - In the implementation block
@property (nonatomic,retain) NSString * oldEditText;                                                       //@synthesize oldEditText=_oldEditText - In the implementation block
@property (assign,nonatomic) BOOL truncateTextToMaximumLength;                                             //@synthesize truncateTextToMaximumLength=_truncateTextToMaximumLength - In the implementation block
@property (assign,nonatomic) unsigned long long maximumTextLength;                                         //@synthesize maximumTextLength=_maximumTextLength - In the implementation block
@property (nonatomic,retain) CADisplayLink * editControlsTrackingDisplayLink;                              //@synthesize editControlsTrackingDisplayLink=_editControlsTrackingDisplayLink - In the implementation block
@property (nonatomic,retain) CFXFaceReticleView * faceTrackingReticle;                                     //@synthesize faceTrackingReticle=_faceTrackingReticle - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchLocation;                                                    //@synthesize lastTouchLocation=_lastTouchLocation - In the implementation block
@property (assign,nonatomic) CGPoint lastSpacingBetweenTouchAndCenterOfEffect;                             //@synthesize lastSpacingBetweenTouchAndCenterOfEffect=_lastSpacingBetweenTouchAndCenterOfEffect - In the implementation block
@property (nonatomic,retain) JFXOverlayEffectAnimationView * effectAnimationView;                          //@synthesize effectAnimationView=_effectAnimationView - In the implementation block
@property (nonatomic,retain) CADisplayLink * effectAnimationDisplayLink;                                   //@synthesize effectAnimationDisplayLink=_effectAnimationDisplayLink - In the implementation block
@property (assign,nonatomic) unsigned long long appliedEditingGestures;                                    //@synthesize appliedEditingGestures=_appliedEditingGestures - In the implementation block
@property (assign,nonatomic) double lastFaceRectacleUpdateTime;                                            //@synthesize lastFaceRectacleUpdateTime=_lastFaceRectacleUpdateTime - In the implementation block
@property (assign,nonatomic) double lastEffectMovedNotifyTime;                                             //@synthesize lastEffectMovedNotifyTime=_lastEffectMovedNotifyTime - In the implementation block
@property (assign,nonatomic) BOOL isEndingEditing;                                                         //@synthesize isEndingEditing=_isEndingEditing - In the implementation block
@property (assign,nonatomic) BOOL isBeginningEditing;                                                      //@synthesize isBeginningEditing=_isBeginningEditing - In the implementation block
@property (nonatomic,retain) NSMutableArray * beginEditingCompletionBlocks;                                //@synthesize beginEditingCompletionBlocks=_beginEditingCompletionBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * endEditingCompletionBlocks;                                  //@synthesize endEditingCompletionBlocks=_endEditingCompletionBlocks - In the implementation block
@property (nonatomic,readonly) BOOL delegateSupportsCalculatingAnimatedFaceTrackingTransform;              //@synthesize delegateSupportsCalculatingAnimatedFaceTrackingTransform=_delegateSupportsCalculatingAnimatedFaceTrackingTransform - In the implementation block
@property (nonatomic,readonly) BOOL delegateSupportsDidMoveEffect;                                         //@synthesize delegateSupportsDidMoveEffect=_delegateSupportsDidMoveEffect - In the implementation block
@property (nonatomic,readonly) BOOL delegateSupportsApplyAnimationTransformsToEffect;                      //@synthesize delegateSupportsApplyAnimationTransformsToEffect=_delegateSupportsApplyAnimationTransformsToEffect - In the implementation block
@property (nonatomic,readonly) id<CFXEffectEditorViewDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) CGRect textEditingFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLastTouchLocation:(CGPoint)arg1 ;
-(void)setDisplayScale:(double)arg1 ;
-(unsigned long long)mode;
-(double)displayScale;
-(void)didRotate:(id)arg1 ;
-(void)didTap:(id)arg1 ;
-(id<CFXEffectEditorViewDelegate>)delegate;
-(CGPoint)lastTouchLocation;
-(BOOL)isEditing;
-(void)handlePanGesture:(id)arg1 ;
-(void)layoutSubviews;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)didPan:(id)arg1 ;
-(void)setIsTextEditing:(BOOL)arg1 ;
-(void)handlePinchGesture:(id)arg1 ;
-(BOOL)isTextEditing;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)didPinch:(id)arg1 ;
-(BOOL)isEndingEditing;
-(void)setIsEndingEditing:(BOOL)arg1 ;
-(void)handleRotateGesture:(id)arg1 ;
-(void)beginTextEditing;
-(CGRect)textEditingFrame;
-(CFXEffect *)editEffect;
-(id)initWithMode:(unsigned long long)arg1 delegate:(id)arg2 ;
-(void)beginEditingEffect:(id)arg1 ;
-(void)endEditingAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)beginEditingEffect:(id)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)notifyEffectTransformDidChange;
-(void)textEffectEditorView:(id)arg1 textChanged:(id)arg2 shouldUpdateTextEditingProperties:(BOOL)arg3 ;
-(BOOL)textEffectEditorView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)notifyEffectTrackingDidChangeToType:(long long)arg1 ;
-(void)setPreviewGenerator:(JFXEffectsPreviewGenerator *)arg1 ;
-(JFXEffectsPreviewGenerator *)previewGenerator;
-(void)CFX_setupGestures;
-(void)CFX_setupControls;
-(void)CFX_setUserInteractionEnabledIfPossible:(BOOL)arg1 ;
-(void)startUpdatingDebugOverlayView;
-(void)initializeAvailabilityOfFrequentCalledDelegateMethods;
-(CADisplayLink *)editControlsTrackingDisplayLink;
-(CADisplayLink *)effectAnimationDisplayLink;
-(void)stopUpdatingDebugOverlayView;
-(void)CFX_effectPreviewBoundsDidChange;
-(void)CFX_updateEditControlsLayout;
-(void)CFX_updateTextEditFieldLayout;
-(NSObject*<OS_dispatch_queue>)effectRenderingQueue;
-(void)CFX_previewEditEffectIfNeeded;
-(BOOL)CFX_isPreviewingEditEffect;
-(void)CFX_endEditingEffect;
-(void)CFX_beginEditingEffect:(id)arg1 isAnimating:(BOOL)arg2 ;
-(void)CFX_beginTextEditing;
-(void)CFX_hideEditControls;
-(unsigned long long)appliedEditingGestures;
-(void)setAppliedEditingGestures:(unsigned long long)arg1 ;
-(void)CFX_scaleEffect:(double)arg1 ;
-(void)CFX_showEditControls;
-(void)CFX_rotateEffect:(double)arg1 ;
-(void)CFX_updateSpacingBetweenTouchAndCenterOfEffectWithGesture:(id)arg1 ;
-(void)setLastSpacingBetweenTouchAndCenterOfEffect:(CGPoint)arg1 ;
-(void)CFX_updateExternalEffectTrackingRunningState;
-(void)CFX_addBeginEditingCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isBeginningEditing;
-(void)setIsBeginningEditing:(BOOL)arg1 ;
-(NSMutableArray *)beginEditingCompletionBlocks;
-(void)setBeginEditingCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)CFX_performTextEditOnlyModeEnterAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)CFX_useFaceReticle;
-(CFXFaceReticleView *)faceTrackingReticle;
-(void)CFX_addEndEditingCompletionBlock:(/*^block*/id)arg1 ;
-(UIButton *)removeButton;
-(void)setEditEffect:(CFXEffect *)arg1 ;
-(void)CFX_stopTrackingExternalEffectChanges;
-(NSMutableArray *)endEditingCompletionBlocks;
-(void)setEndEditingCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)CFX_performTextEditOnlyModeExitAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)CFX_endTextEditing:(BOOL)arg1 ;
-(CGRect)CFX_textEditingFrame;
-(void)setEffectWasEdited:(BOOL)arg1 ;
-(void)setEditTransform:(CGAffineTransform)arg1 ;
-(void)CFX_beginPreviewingEditEffect;
-(void)CFX_endPreviewingEditEffect;
-(CGAffineTransform)editTransform;
-(void)CFX_applyEffectTransformChanges;
-(CGPoint)lastSpacingBetweenTouchAndCenterOfEffect;
-(double)lastEffectMovedNotifyTime;
-(void)setLastEffectMovedNotifyTime:(double)arg1 ;
-(BOOL)delegateSupportsDidMoveEffect;
-(BOOL)CFX_isRemoveAvailableInCurrentMode;
-(void)setRemoveButton:(UIButton *)arg1 ;
-(void)tapRemoveButton:(id)arg1 ;
-(void)setFaceTrackingReticle:(CFXFaceReticleView *)arg1 ;
-(void)CFX_hideEditControls:(BOOL)arg1 ;
-(BOOL)CFX_isRemoveAlwaysAvailableInCurrentMode;
-(void)CFX_removeEffect;
-(void)externalEffectTrackingDisplayLinkFired:(id)arg1 ;
-(void)setEditControlsTrackingDisplayLink:(CADisplayLink *)arg1 ;
-(void)CFX_startTrackingExternalEffectChanges;
-(BOOL)CFX_updateOverlayForTranslation;
-(BOOL)CFX_updateTrackingTypeForTouchLocation;
-(double)lastFaceRectacleUpdateTime;
-(void)setLastFaceRectacleUpdateTime:(double)arg1 ;
-(id)CFX_getTextEditingProperties;
-(void)setOldEditText:(NSString *)arg1 ;
-(void)setMaximumTextLength:(unsigned long long)arg1 ;
-(void)setTextEditorView:(CFXTextEffectEditorView *)arg1 ;
-(CFXTextEffectEditorView *)textEditorView;
-(void)setTruncateTextToMaximumLength:(BOOL)arg1 ;
-(NSString *)oldEditText;
-(void)CFX_updateEffectText:(id)arg1 updateTextProperties:(BOOL)arg2 ;
-(BOOL)truncateTextToMaximumLength;
-(unsigned long long)maximumTextLength;
-(void)setEditEffectPreview:(JFXImageView *)arg1 ;
-(JFXImageView *)editEffectPreview;
-(void)CFX_effectAnimationDisplayLinkFired:(id)arg1 ;
-(void)setEffectAnimationDisplayLink:(CADisplayLink *)arg1 ;
-(void)CFX_applyEffectAnimationView:(BOOL)arg1 ;
-(JFXOverlayEffectAnimationView *)effectAnimationView;
-(BOOL)delegateSupportsCalculatingAnimatedFaceTrackingTransform;
-(void)setEffectAnimationView:(JFXOverlayEffectAnimationView *)arg1 ;
-(void)CFX_startApplyingEffectAnimationViewDisplayLink;
-(id)CFX_springForTextEditAnimation;
-(void)CFX_stopApplyingEffectAnimationViewDisplayLink;
-(void)CFX_forceHideEditControls;
-(void)onDebugDisplayLink:(id)arg1 ;
-(void)setDebugDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)debugDisplayLink;
-(JFXOverlayEffectDebugView *)debugOverlayView;
-(id)overlayEffectDebugViewOptions;
-(void)endTextEditing:(BOOL)arg1 ;
-(BOOL)effectWasEdited;
-(void)setDebugOverlayView:(JFXOverlayEffectDebugView *)arg1 ;
-(BOOL)delegateSupportsApplyAnimationTransformsToEffect;
@end

