/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSString;

@interface _UIAccessDeniedView : UIView {

	UIImageView* _lockView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSString* _title;
	NSString* _message;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_textColor;
@end

