/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIFavoriteBannerLayout, UIView, NSArray, VUILabel;

@interface VUIFavoriteBannerView : UIView {

	VUIFavoriteBannerLayout* _layout;
	UIView* _backgroundView;
	NSArray* _backgroundImageLogos;
	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;

}

@property (nonatomic,retain) VUIFavoriteBannerLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSArray * backgroundImageLogos;                //@synthesize backgroundImageLogos=_backgroundImageLogos - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(VUILabel *)titleLabel;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(VUILabel *)subtitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLayout:(VUIFavoriteBannerLayout *)arg1 ;
-(VUIFavoriteBannerLayout *)layout;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForCellReuse;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(NSArray *)backgroundImageLogos;
-(CGSize)imageSizeForBannerStyle:(unsigned long long)arg1 ;
-(void)setBackgroundImageLogos:(NSArray *)arg1 ;
-(id)_generateSiderowImagePointsForSize:(CGSize)arg1 ;
-(id)_generateSingleRowImagePoints;
-(id)_generatePlainWeaveImagePointsForSize:(CGSize)arg1 ;
-(id)_generatePointsForPlainWeaveSide:(double)arg1 containerRect:(CGRect)arg2 imageSize:(CGSize)arg3 direction:(unsigned long long)arg4 ;
@end

