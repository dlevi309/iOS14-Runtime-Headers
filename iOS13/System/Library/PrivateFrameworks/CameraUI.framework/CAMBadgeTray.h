/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CEKBadgeViewDelegate.h>

@protocol CAMBadgeTrayDelegate;
@class NSString, NSMutableDictionary, CAMFlashBadge, CAMLivePhotoBadge, CAMFocusLockBadge, CAMElapsedTimeView;

@interface CAMBadgeTray : UIView <CEKBadgeViewDelegate> {

	id<CAMBadgeTrayDelegate> _delegate;
	unsigned long long _visibleBadges;
	NSString* _contentSize;
	NSMutableDictionary* __badgeMap;

}

@property (nonatomic,readonly) NSMutableDictionary * _badgeMap;                     //@synthesize _badgeMap=__badgeMap - In the implementation block
@property (assign,nonatomic,__weak) id<CAMBadgeTrayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long visibleBadges;                      //@synthesize visibleBadges=_visibleBadges - In the implementation block
@property (nonatomic,retain) NSString * contentSize;                                //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CAMFlashBadge * flashBadge; 
@property (nonatomic,readonly) CAMLivePhotoBadge * livePhotoBadge; 
@property (nonatomic,readonly) CAMFocusLockBadge * focusLockBadge; 
@property (nonatomic,readonly) CAMElapsedTimeView * elapsedTimeView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CAMBadgeTrayDelegate>)delegate;
-(void)setDelegate:(id<CAMBadgeTrayDelegate>)arg1 ;
-(NSString *)contentSize;
-(void)setContentSize:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg1 ;
-(CAMElapsedTimeView *)elapsedTimeView;
-(unsigned long long)_badgeFontStyle;
-(id)_createControlForType:(unsigned long long)arg1 ;
-(void)setVisibleBadges:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CAMLivePhotoBadge *)livePhotoBadge;
-(CAMFlashBadge *)flashBadge;
-(unsigned long long)visibleBadges;
-(void)_layoutBadges:(unsigned long long)arg1 withVisibleBadges:(unsigned long long)arg2 ;
-(void)_updateBadgesVisibilityForVisibleBadges:(unsigned long long)arg1 ;
-(NSMutableDictionary *)_badgeMap;
-(void)_forBadgeTypeInBadgeTypes:(unsigned long long)arg1 do:(/*^block*/id)arg2 ;
-(void)_loadBadgesIfNeededForTypes:(unsigned long long)arg1 ;
-(CAMFocusLockBadge *)focusLockBadge;
-(void)setVisibleBadges:(unsigned long long)arg1 ;
@end
