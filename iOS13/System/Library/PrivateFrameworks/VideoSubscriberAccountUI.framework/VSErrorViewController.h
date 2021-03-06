/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <UIKitCore/UIViewController.h>

@class NSError, UIButton, UILabel, VSFontCenter;

@interface VSErrorViewController : UIViewController {

	BOOL _recoveryDestructive;
	NSError* _error;
	UIButton* _recoveryButton;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                             //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIButton * recoveryButton;                                          //@synthesize recoveryButton=_recoveryButton - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                          //@synthesize fontCenter=_fontCenter - In the implementation block
@property (nonatomic,retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (assign,getter=isRecoveryDestructive,nonatomic) BOOL recoveryDestructive;              //@synthesize recoveryDestructive=_recoveryDestructive - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_updateText;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIButton *)recoveryButton;
-(VSFontCenter *)fontCenter;
-(void)_recoveryButtonPressed:(id)arg1 ;
-(BOOL)isRecoveryDestructive;
-(void)setRecoveryButton:(UIButton *)arg1 ;
-(void)setRecoveryDestructive:(BOOL)arg1 ;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
@end

