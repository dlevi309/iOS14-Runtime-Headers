/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorLayout.h>

@protocol AVTAvatarAttributeEditorLayout;
@class NSString;

@interface AVTAvatarAttributeEditorOverridingLayout : NSObject <AVTAvatarAttributeEditorLayout> {

	double _avatarContainerAlpha;
	id<AVTAvatarAttributeEditorLayout> _backingLayout;
	CGRect _avatarContainerFrame;
	CGRect _attributesContentViewFrame;

}

@property (nonatomic,readonly) id<AVTAvatarAttributeEditorLayout> backingLayout;                     //@synthesize backingLayout=_backingLayout - In the implementation block
@property (assign,nonatomic) CGRect avatarContainerFrame;                                            //@synthesize avatarContainerFrame=_avatarContainerFrame - In the implementation block
@property (assign,nonatomic) double avatarContainerAlpha;                                            //@synthesize avatarContainerAlpha=_avatarContainerAlpha - In the implementation block
@property (assign,nonatomic) CGRect attributesContentViewFrame;                                      //@synthesize attributesContentViewFrame=_attributesContentViewFrame - In the implementation block
@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,readonly) BOOL RTL; 
@property (nonatomic,copy,readonly) NSString * contentSizeCategory; 
@property (nonatomic,readonly) CGRect userInfoFrame; 
@property (nonatomic,readonly) double headerMaskingViewAlpha; 
@property (nonatomic,readonly) CGRect headerMaskingViewFrame; 
@property (nonatomic,readonly) double verticalRuleAlpha; 
@property (nonatomic,readonly) CGRect verticalRuleFrame; 
@property (nonatomic,readonly) UIEdgeInsets attributesContentViewInsets; 
@property (nonatomic,readonly) UIEdgeInsets attributesContentViewScrollIndicatorInsets; 
@property (nonatomic,readonly) unsigned long long supportedLayoutOrientation; 
@property (nonatomic,readonly) CGRect groupDialContainerFrame; 
@property (nonatomic,readonly) BOOL showSideGroupPicker; 
@property (nonatomic,readonly) CGRect sideGroupContainerFrame; 
-(id)initWithLayout:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(CGSize)containerSize;
-(NSString *)contentSizeCategory;
-(id<AVTAvatarAttributeEditorLayout>)backingLayout;
-(void)setAvatarContainerFrame:(CGRect)arg1 ;
-(void)setAvatarContainerAlpha:(double)arg1 ;
-(CGRect)userInfoFrame;
-(BOOL)showSideGroupPicker;
-(UIEdgeInsets)attributesContentViewInsets;
-(CGRect)groupDialContainerFrame;
-(CGRect)sideGroupContainerFrame;
-(CGRect)attributesContentViewFrame;
-(CGRect)avatarContainerFrame;
-(double)verticalRuleAlpha;
-(CGRect)verticalRuleFrame;
-(UIEdgeInsets)attributesContentViewScrollIndicatorInsets;
-(double)avatarContainerAlpha;
-(unsigned long long)supportedLayoutOrientation;
-(double)headerMaskingViewAlpha;
-(CGRect)headerMaskingViewFrame;
-(void)setAttributesContentViewFrame:(CGRect)arg1 ;
-(double)screenScale;
@end

