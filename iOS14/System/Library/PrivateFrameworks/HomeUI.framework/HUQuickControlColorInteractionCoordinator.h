/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlSimpleInteractionCoordinator.h>
#import <libobjc.A.dylib/HUQuickControlColorViewInteractionDelegate.h>

@class HFColorPalette, HUQuickControlColorView, NSString;

@interface HUQuickControlColorInteractionCoordinator : HUQuickControlSimpleInteractionCoordinator <HUQuickControlColorViewInteractionDelegate> {

	BOOL _hasPendingColorPaletteChangeDelegateNotification;
	HFColorPalette* _colorPalette;

}

@property (nonatomic,retain) HFColorPalette * colorPalette;                                                      //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) BOOL hasPendingColorPaletteChangeDelegateNotification;                              //@synthesize hasPendingColorPaletteChangeDelegateNotification=_hasPendingColorPaletteChangeDelegateNotification - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlColorInteractionCoordinatorDelegate> delegate; 
@property (nonatomic,readonly) HUQuickControlColorView * controlView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setColorPalette:(HFColorPalette *)arg1 ;
-(HFColorPalette *)colorPalette;
-(id)initWithControlView:(id)arg1 colorPalette:(id)arg2 delegate:(id)arg3 ;
-(void)cancelButtonTappedToDismissColorViewController;
-(void)controlView:(id)arg1 interactionStateDidChange:(BOOL)arg2 forFirstTouch:(BOOL)arg3 ;
-(void)presentFullColorViewForControlView:(id)arg1 selectedColorIndexPath:(id)arg2 ;
-(void)controlView:(id)arg1 didSelectColorAtIndexPath:(id)arg2 ;
-(void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2 ;
-(void)controlView:(id)arg1 showAuxiliaryView:(id)arg2 ;
-(void)hideAuxiliaryViewForControlView:(id)arg1 ;
-(BOOL)hasPendingColorPaletteChangeDelegateNotification;
-(void)setHasPendingColorPaletteChangeDelegateNotification:(BOOL)arg1 ;
-(void)_notifyDelegateOfColorPaletteChangeIfNecessary;
@end
