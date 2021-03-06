/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface ICDocCamThumbnailCell : UICollectionViewCell {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(UIImageView *)imageView;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)accessibilityHint;
-(id)indexStringForAccessibility;
-(id)parentCollectionView;
@end

