/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class CNPhotoPickerActionButtonBlockHandler;

@interface CNPhotoPickerActionButton : UIButton {

	BOOL _isDestructive;
	CNPhotoPickerActionButtonBlockHandler* _blockHandler;

}

@property (assign,nonatomic) BOOL isDestructive;                                                //@synthesize isDestructive=_isDestructive - In the implementation block
@property (nonatomic,retain) CNPhotoPickerActionButtonBlockHandler * blockHandler;              //@synthesize blockHandler=_blockHandler - In the implementation block
+(id)buttonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
+(id)defaultButtonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
+(id)destructiveButtonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(BOOL)isDestructive;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIsDestructive:(BOOL)arg1 ;
-(void)performActionBlock;
-(CNPhotoPickerActionButtonBlockHandler *)blockHandler;
-(void)setBlockHandler:(CNPhotoPickerActionButtonBlockHandler *)arg1 ;
@end

