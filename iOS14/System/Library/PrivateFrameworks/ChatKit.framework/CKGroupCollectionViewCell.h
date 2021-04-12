/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface CKGroupCollectionViewCell : UICollectionViewCell {

	UIView* _avatarView;

}

@property (nonatomic,retain) UIView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)avatarView;
-(void)layoutSubviews;
-(void)setAvatarView:(UIView *)arg1 ;
@end
