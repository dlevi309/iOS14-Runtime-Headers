/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIInputView.h>
#import <UIKit/UIInputViewAudioFeedback.h>

@class UIToolbar, NSArray, NSString;

@interface WFKeyboardToolbarAccessoryView : UIInputView <UIInputViewAudioFeedback> {

	UIToolbar* _toolbar;

}

@property (nonatomic,readonly) UIToolbar * toolbar;                            //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,copy) NSArray * barItems; 
@property (nonatomic,readonly) BOOL enableInputClicksWhenVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIToolbar *)toolbar;
-(id)init;
-(BOOL)isPhoneUI;
-(id)fixedSpaceItemOfWidth:(double)arg1 ;
-(BOOL)enableInputClicksWhenVisible;
-(id)flexibleSpaceItem;
-(NSArray *)barItems;
-(void)setBarItems:(NSArray *)arg1 ;
-(void)appendBarItem:(id)arg1 ;
-(void)prependBarItem:(id)arg1 ;
-(void)removeAllBarItems;
-(double)borderedButtonWidthForButtonTitle:(id)arg1 font:(id)arg2 ;
-(double)keyboardButtonHeight;
-(double)inverseToolbarPadding;
-(id)plainButtonItemWithTitle:(id)arg1 bolded:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(id)borderedButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)buttonImageWithSize:(CGSize)arg1 ;
-(void)drawRoundedRectangleInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 color:(id)arg3 radius:(double)arg4 ;
@end

