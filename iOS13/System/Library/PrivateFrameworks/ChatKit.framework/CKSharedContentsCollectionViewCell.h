/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSharedAssetCollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKSharedContentsCollectionViewCellDelegate;
@class UIImage, UIImageView, UITapGestureRecognizer, NSString;

@interface CKSharedContentsCollectionViewCell : CKSharedAssetCollectionViewCell <UIGestureRecognizerDelegate> {

	BOOL _editing;
	UIImage* _previewImage;
	UIImageView* _checkmarkView;
	id<CKSharedContentsCollectionViewCellDelegate> _delegate;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                               //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                                                      //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                                                 //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic,__weak) id<CKSharedContentsCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                               //@synthesize editing=_editing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id<CKSharedContentsCollectionViewCellDelegate>)delegate;
-(void)setDelegate:(id<CKSharedContentsCollectionViewCellDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)copy:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)delete:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(UIImage *)previewImage;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(void)more:(id)arg1 ;
-(void)saveAttachment:(id)arg1 ;
-(UIImageView *)checkmarkView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(void)setupTapGestureRecognizer;
-(void)toggleCheckmarkViewWithEnabled:(BOOL)arg1 ;
@end

