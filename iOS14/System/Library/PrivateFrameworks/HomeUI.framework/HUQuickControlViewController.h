/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveContentContaining.h>
#import <libobjc.A.dylib/HUQuickControlContentCharacteristicWriting.h>
#import <libobjc.A.dylib/HUQuickControlItemHosting.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlContentHosting, HULayoutAnchorProviding, HUQuickControlItemUpdating, HUQuickControlViewControllerDelegate;
@class NSSet, HMHome, HUQuickControlSimpleItemUpdater, NSString;

@interface HUQuickControlViewController : UIViewController <HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlItemHosting, HUPreloadableViewController> {

	BOOL _controlsVisible;
	BOOL _userInteractionEnabled;
	BOOL _areControlItemsRequestingToBeHidden;
	id<HUQuickControlContentCharacteristicWritingDelegate> _characteristicWritingDelegate;
	id<HUQuickControlContentHosting> _quickControlHost;
	id<HULayoutAnchorProviding> _preferredFrameLayoutGuide;
	HMHome* _home;
	NSSet* _controlItems;
	id<HUQuickControlItemUpdating> _itemUpdater;
	id<HUQuickControlViewControllerDelegate> _delegate;
	unsigned long long _controlSize;
	unsigned long long _controlOrientation;
	unsigned long long _preferredControl;
	HUQuickControlSimpleItemUpdater* _internalItemUpdater;

}

@property (nonatomic,readonly) HUQuickControlSimpleItemUpdater * internalItemUpdater;                                                  //@synthesize internalItemUpdater=_internalItemUpdater - In the implementation block
@property (assign,nonatomic) BOOL areControlItemsRequestingToBeHidden;                                                                 //@synthesize areControlItemsRequestingToBeHidden=_areControlItemsRequestingToBeHidden - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSSet * controlItems;                                                                              //@synthesize controlItems=_controlItems - In the implementation block
@property (nonatomic,__weak,readonly) id<HUQuickControlItemUpdating> itemUpdater;                                                      //@synthesize itemUpdater=_itemUpdater - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlViewControllerDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * overrideStatusText; 
@property (nonatomic,copy,readonly) NSString * overrideSecondaryStatusText; 
@property (nonatomic,readonly) unsigned long long preferredPresentationStyle; 
@property (assign,nonatomic) unsigned long long controlSize;                                                                           //@synthesize controlSize=_controlSize - In the implementation block
@property (assign,nonatomic) unsigned long long controlOrientation;                                                                    //@synthesize controlOrientation=_controlOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long preferredControl;                                                                      //@synthesize preferredControl=_preferredControl - In the implementation block
@property (nonatomic,readonly) BOOL hasSingleControlView; 
@property (assign,nonatomic,__weak) id<HUQuickControlContentHosting> quickControlHost;                                                 //@synthesize quickControlHost=_quickControlHost - In the implementation block
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                                              //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (nonatomic,retain) id<HULayoutAnchorProviding> preferredFrameLayoutGuide;                                                    //@synthesize preferredFrameLayoutGuide=_preferredFrameLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;              //@synthesize characteristicWritingDelegate=_characteristicWritingDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * affectedCharacteristics; 
@property (assign,getter=areControlsVisible,nonatomic) BOOL controlsVisible;                                                           //@synthesize controlsVisible=_controlsVisible - In the implementation block
+(id)controlItemPredicate;
-(void)setControlSize:(unsigned long long)arg1 ;
-(unsigned long long)controlSize;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(id<HUQuickControlViewControllerDelegate>)delegate;
-(void)_updateControlItemHiddenStateNotifyingHost:(BOOL)arg1 ;
-(id<HULayoutAnchorProviding>)preferredFrameLayoutGuide;
-(unsigned long long)preferredPresentationStyle;
-(id)hu_preloadContent;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(id)childQuickControlContentViewControllers;
-(void)setPreferredFrameLayoutGuide:(id<HULayoutAnchorProviding>)arg1 ;
-(BOOL)areControlItemsRequestingToBeHidden;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)overrideValueForCharacteristic:(id)arg1 ;
-(NSSet *)affectedCharacteristics;
-(void)setCharacteristicWritingDelegate:(id<HUQuickControlContentCharacteristicWritingDelegate>)arg1 ;
-(void)setQuickControlHost:(id<HUQuickControlContentHosting>)arg1 ;
-(void)setAreControlItemsRequestingToBeHidden:(BOOL)arg1 ;
-(id<HUQuickControlContentHosting>)quickControlHost;
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg1 ;
-(id<HUQuickControlContentCharacteristicWritingDelegate>)characteristicWritingDelegate;
-(void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2 ;
-(BOOL)areControlsVisible;
-(void)setControlsVisible:(BOOL)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(BOOL)hasSingleControlView;
-(NSString *)overrideStatusText;
-(NSString *)overrideSecondaryStatusText;
-(id)viewControllerForTouchContinuation;
-(unsigned long long)controlOrientation;
-(void)setControlOrientation:(unsigned long long)arg1 ;
-(unsigned long long)preferredControl;
-(void)setPreferredControl:(unsigned long long)arg1 ;
-(HUQuickControlSimpleItemUpdater *)internalItemUpdater;
-(void)setDelegate:(id<HUQuickControlViewControllerDelegate>)arg1 ;
-(NSSet *)controlItems;
-(id)initWithCoder:(id)arg1 ;
-(id<HUQuickControlItemUpdating>)itemUpdater;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(HMHome *)home;
@end

