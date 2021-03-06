/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class UIButton, UIVisualEffectView, NSString;

@interface CKEntryViewButton : UIView <_UICursorInteractionDelegate> {

	char _ckTintColor;
	BOOL _wantsVibrancy;
	UIButton* _button;
	long long _entryViewButtonType;
	UIVisualEffectView* _vibrancyView;

}

@property (assign,nonatomic) long long entryViewButtonType;                  //@synthesize entryViewButtonType=_entryViewButtonType - In the implementation block
@property (nonatomic,retain) UIButton * button;                              //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrancyView;              //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (assign,nonatomic) char ckTintColor;                               //@synthesize ckTintColor=_ckTintColor - In the implementation block
@property (assign,nonatomic) BOOL wantsVibrancy;                             //@synthesize wantsVibrancy=_wantsVibrancy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entryViewButtonImageForType:(long long)arg1 color:(char)arg2 ;
+(id)imageNameForEntryViewButtonType:(long long)arg1 ;
+(void)prewarmEntryViewButtons;
+(id)entryViewButtonImageWithName:(id)arg1 tintColor:(char)arg2 shouldSuppressHairline:(BOOL)arg3 ;
+(id)overlayImageForImageNamed:(id)arg1 tintColor:(char)arg2 ;
+(id)entryViewButtonImageForType:(long long)arg1 ;
+(id)entryViewButtonOfType:(long long)arg1 ;
+(id)entryViewButtonOfType:(long long)arg1 wantsVibrancy:(BOOL)arg2 ;
-(UIButton *)button;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(char)ckTintColor;
-(BOOL)wantsVibrancy;
-(id)initWithFrame:(CGRect)arg1 wantsVibrancy:(BOOL)arg2 ;
-(long long)entryViewButtonType;
-(void)setEntryViewButtonType:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(UIVisualEffectView *)vibrancyView;
-(void)setVibrancyView:(UIVisualEffectView *)arg1 ;
-(BOOL)isEnabled;
-(void)setCkTintColor:(char)arg1 ;
-(void)setWantsVibrancy:(BOOL)arg1 ;
-(void)setDefaultImage;
-(void)setTintedImageForButtonType:(long long)arg1 tintColor:(char)arg2 ;
@end

