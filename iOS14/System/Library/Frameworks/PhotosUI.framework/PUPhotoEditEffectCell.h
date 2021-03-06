/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSLayoutConstraint, NSArray, UIImage, NSString, UIImageView, UILabel, UIView;

@interface PUPhotoEditEffectCell : UICollectionViewCell {

	NSLayoutConstraint* _bottomLabelConstraint;
	NSLayoutConstraint* _gapConstraint;
	NSArray* _constraints;
	UIImage* _image;
	NSString* _name;
	UIImageView* __imageView;
	UILabel* __nameLabel;
	UIView* __highlightView;
	UIImageView* __selectionView;

}

@property (setter=_setImageView:,nonatomic,retain) UIImageView * _imageView;                      //@synthesize _imageView=__imageView - In the implementation block
@property (setter=_setNameLabel:,nonatomic,retain) UILabel * _nameLabel;                          //@synthesize _nameLabel=__nameLabel - In the implementation block
@property (setter=_setHighlightView:,nonatomic,retain) UIView * _highlightView;                   //@synthesize _highlightView=__highlightView - In the implementation block
@property (setter=_setSelectionView:,nonatomic,retain) UIImageView * _selectionView;              //@synthesize _selectionView=__selectionView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
+(id)selectionOutlineImage;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)_imageView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(NSString *)name;
-(void)updateConstraints;
-(id)_colorForIsSelected:(BOOL)arg1 ;
-(void)_setSubview:(id)arg1 visible:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_setNameLabel:(id)arg1 ;
-(void)_setHighlightView:(id)arg1 ;
-(void)_setSelectionView:(id)arg1 ;
-(void)_setImageView:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(UIView *)_highlightView;
-(UILabel *)_nameLabel;
-(UIImageView *)_selectionView;
-(void)setHighlighted:(BOOL)arg1 ;
@end

