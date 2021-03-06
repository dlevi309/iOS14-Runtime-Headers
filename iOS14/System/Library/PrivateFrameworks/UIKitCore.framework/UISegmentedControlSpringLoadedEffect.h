/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UISpringLoadedInteractionEffect.h>

@protocol UISpringLoadedInteractionEffect;
@class NSString;

@interface UISegmentedControlSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect> {

	id<UISpringLoadedInteractionEffect> _blinkEffect;

}

@property (nonatomic,retain) id<UISpringLoadedInteractionEffect> blinkEffect;              //@synthesize blinkEffect=_blinkEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setBlinkEffect:(id<UISpringLoadedInteractionEffect>)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(id<UISpringLoadedInteractionEffect>)blinkEffect;
@end

