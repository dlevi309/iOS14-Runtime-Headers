/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPointerInteractionDriverSink.h>
#import <UIKit/UIInteraction_Internal.h>
#import <UIKit/UIInteraction.h>

@protocol UIPointerInteractionDelegate, _UIPointerInteractionDriver;
@class UIView, UIPointerRegion, NSMutableDictionary, NSString;

@interface UIPointerInteraction : NSObject <_UIPointerInteractionDriverSink, UIInteraction_Internal, UIInteraction> {

	SCD_Struct_UI64 _delegateImplements;
	unsigned long long _generationID;
	BOOL _enabled;
	BOOL __delegateProvidesRegionsAsynchronously;
	BOOL _pausesPointerUpdatesWhilePanning;
	UIView* _view;
	UIPointerRegion* _defaultRegion;
	id<UIPointerInteractionDelegate> _delegate;
	id<_UIPointerInteractionDriver> _driver;
	NSMutableDictionary* _contentEffects;
	UIPointerRegion* _currentRegion;
	long long _currentModifiers;

}

@property (nonatomic,retain) id<_UIPointerInteractionDriver> driver;                                                                                                   //@synthesize driver=_driver - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * contentEffects;                                                                                                   //@synthesize contentEffects=_contentEffects - In the implementation block
@property (nonatomic,copy) UIPointerRegion * currentRegion;                                                                                                            //@synthesize currentRegion=_currentRegion - In the implementation block
@property (assign,nonatomic) long long currentModifiers;                                                                                                               //@synthesize currentModifiers=_currentModifiers - In the implementation block
@property (nonatomic,readonly) UIPointerRegion * defaultRegion;                                                                                                        //@synthesize defaultRegion=_defaultRegion - In the implementation block
@property (assign,nonatomic) BOOL _delegateProvidesRegionsAsynchronously;                                                                                              //@synthesize _delegateProvidesRegionsAsynchronously=__delegateProvidesRegionsAsynchronously - In the implementation block
@property (assign,setter=_setPausesPointerUpdatesWhilePanning:,getter=_pausesPointerUpdatesWhilePanning,nonatomic) BOOL pausesPointerUpdatesWhilePanning;              //@synthesize pausesPointerUpdatesWhilePanning=_pausesPointerUpdatesWhilePanning - In the implementation block
@property (nonatomic,__weak,readonly) id<UIPointerInteractionDelegate> delegate;                                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                                            //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                                                                                   //@synthesize view=_view - In the implementation block
+(Class)_driverClass;
-(id)init;
-(void)invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(id<UIPointerInteractionDelegate>)delegate;
-(BOOL)isEnabled;
-(id)initWithDelegate:(id)arg1 ;
-(UIView *)view;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(NSMutableDictionary *)contentEffects;
-(void)_viewTraitCollectionDidChange:(id)arg1 ;
-(void)set_delegateProvidesRegionsAsynchronously:(BOOL)arg1 ;
-(void)_setPausesPointerUpdatesWhilePanning:(BOOL)arg1 ;
-(BOOL)_pausesPointerUpdatesWhilePanning;
-(BOOL)_delegateProvidesRegionsAsynchronously;
-(id)_pointerRegionAtPoint:(CGPoint)arg1 modifiers:(long long)arg2 ;
-(id)_pointerStyleForRegion:(id)arg1 ;
-(void)_cursorDidExit;
-(void)_updatePointerWithPoint:(CGPoint)arg1 modifiers:(long long)arg2 buttonMask:(long long)arg3 forReason:(long long)arg4 ;
-(void)_configureHoverGestureRecognizer:(id)arg1 forView:(id)arg2 ;
-(id<_UIPointerInteractionDriver>)driver;
-(void)setDriver:(id<_UIPointerInteractionDriver>)arg1 ;
-(void)_updateInteractionIsEnabled;
-(void)_updateCurrentRegionIfNecessary:(id)arg1 modifiers:(long long)arg2 reason:(long long)arg3 ;
-(void)_queryDelegateForRegionWithRequest:(id)arg1 completion:(/*^block*/id)arg2 forceSynchronous:(BOOL)arg3 ;
-(UIPointerRegion *)currentRegion;
-(BOOL)_regionContainsCurrentHoverLocation:(id)arg1 ;
-(long long)currentModifiers;
-(void)_pointerDidExitRegion:(id)arg1 willEnterNewRegion:(BOOL)arg2 ;
-(void)setCurrentRegion:(UIPointerRegion *)arg1 ;
-(void)setCurrentModifiers:(long long)arg1 ;
-(void)_pointerDidEnterRegion:(id)arg1 modifiers:(long long)arg2 ;
-(void)_modifiersDidChangeInRegion:(id)arg1 modifiers:(long long)arg2 ;
-(void)_updateDebugUIForRegionIfEnabled:(id)arg1 ;
-(id)_notifyDelegate_willEnterRegion:(id)arg1 ;
-(void)_updatePointerStyleForRegion:(id)arg1 modifiers:(long long)arg2 animator:(id)arg3 ;
-(id)_notifyDelegate_willExitRegion:(id)arg1 ;
-(void)_runAlongsideAnimator:(id)arg1 ;
-(void)_applyPointerStyle:(id)arg1 forRegion:(id)arg2 animator:(id)arg3 ;
-(id)_attemptToCommandeerEffectForStyle:(id)arg1 region:(id)arg2 ;
-(id)_newContentEffectForStyle:(id)arg1 region:(id)arg2 ;
-(UIPointerRegion *)defaultRegion;
-(void)_cursorDidHide;
@end
