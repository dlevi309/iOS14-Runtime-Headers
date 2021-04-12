/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImage, NSString, UIImageView;

@interface PXPersonTableViewCell : UITableViewCell {

	BOOL _useImageSize;
	UIImage* _personIcon;
	NSString* _personFirstName;
	NSString* _personLastName;
	UIImageView* __personIconImageView;
	UIImage* __personMonogramImage;

}

@property (setter=_setPersonIconImageView:,nonatomic,retain) UIImageView * _personIconImageView;              //@synthesize _personIconImageView=__personIconImageView - In the implementation block
@property (setter=_setPersonMonogramImage:,nonatomic,retain) UIImage * _personMonogramImage;                  //@synthesize _personMonogramImage=__personMonogramImage - In the implementation block
@property (nonatomic,retain) UIImage * personIcon;                                                            //@synthesize personIcon=_personIcon - In the implementation block
@property (nonatomic,copy) NSString * personFirstName;                                                        //@synthesize personFirstName=_personFirstName - In the implementation block
@property (nonatomic,copy) NSString * personLastName;                                                         //@synthesize personLastName=_personLastName - In the implementation block
@property (assign,nonatomic) BOOL useImageSize;                                                               //@synthesize useImageSize=_useImageSize - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(UIImage *)personIcon;
-(void)setPersonIcon:(UIImage *)arg1 ;
-(void)setPersonFirstName:(NSString *)arg1 ;
-(void)setPersonLastName:(NSString *)arg1 ;
-(void)_updatePersonIconImageView;
-(NSString *)personFirstName;
-(NSString *)personLastName;
-(BOOL)useImageSize;
-(void)setUseImageSize:(BOOL)arg1 ;
-(UIImageView *)_personIconImageView;
-(void)_setPersonIconImageView:(id)arg1 ;
-(UIImage *)_personMonogramImage;
-(void)_setPersonMonogramImage:(id)arg1 ;
@end
