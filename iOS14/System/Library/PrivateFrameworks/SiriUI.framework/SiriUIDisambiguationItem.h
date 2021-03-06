/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


#import <SiriUI/SiriUI-Structs.h>
@class NSString, UIImageView;

@interface SiriUIDisambiguationItem : NSObject {

	BOOL _showsFavoriteStar;
	NSString* _title;
	NSString* _subtitle;
	NSString* _headingText;
	NSString* _extraDisambiguationText;
	NSString* _extraDisambiguationSubText;
	UIImageView* _imageView;
	NSRange _titleBoldedRange;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * headingText;                             //@synthesize headingText=_headingText - In the implementation block
@property (nonatomic,copy) NSString * extraDisambiguationText;                 //@synthesize extraDisambiguationText=_extraDisambiguationText - In the implementation block
@property (nonatomic,copy) NSString * extraDisambiguationSubText;              //@synthesize extraDisambiguationSubText=_extraDisambiguationSubText - In the implementation block
@property (assign,nonatomic) NSRange titleBoldedRange;                         //@synthesize titleBoldedRange=_titleBoldedRange - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL showsFavoriteStar;                           //@synthesize showsFavoriteStar=_showsFavoriteStar - In the implementation block
+(id)disambiguationItem;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)headingText;
-(void)setHeadingText:(NSString *)arg1 ;
-(NSString *)extraDisambiguationText;
-(void)setExtraDisambiguationText:(NSString *)arg1 ;
-(NSString *)extraDisambiguationSubText;
-(void)setExtraDisambiguationSubText:(NSString *)arg1 ;
-(NSRange)titleBoldedRange;
-(void)setTitleBoldedRange:(NSRange)arg1 ;
-(BOOL)showsFavoriteStar;
-(void)setShowsFavoriteStar:(BOOL)arg1 ;
@end

