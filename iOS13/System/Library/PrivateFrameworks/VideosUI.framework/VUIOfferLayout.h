/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout, VUIMediaTagsViewLayout, VUIButtonLayout, NSShadow, UIColor;

@interface VUIOfferLayout : TVViewLayout {

	TVImageLayout* _imageLayout;
	TVImageLayout* _appIconLayout;
	TVImageLayout* _logoLayout;
	VUITextLayout* _channelNameTextLayout;
	VUITextLayout* _titleTextLayout;
	VUITextLayout* _subtitleTextLayout;
	VUITextLayout* _textLayout;
	VUITextLayout* _belowCardTextLayout;
	TVImageLayout* _badgeLayout;
	VUIMediaTagsViewLayout* _tagsLayout;
	VUIButtonLayout* _versionsButtonLayout;
	NSShadow* _shadow;
	double _borderWidth;
	UIColor* _borderColor;
	TVCornerRadii _borderRadii;

}

@property (nonatomic,retain) TVImageLayout * imageLayout;                         //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * appIconLayout;                       //@synthesize appIconLayout=_appIconLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * logoLayout;                          //@synthesize logoLayout=_logoLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * channelNameTextLayout;               //@synthesize channelNameTextLayout=_channelNameTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleTextLayout;                     //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * subtitleTextLayout;                  //@synthesize subtitleTextLayout=_subtitleTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * textLayout;                          //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * belowCardTextLayout;                 //@synthesize belowCardTextLayout=_belowCardTextLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * badgeLayout;                         //@synthesize badgeLayout=_badgeLayout - In the implementation block
@property (nonatomic,retain) VUIMediaTagsViewLayout * tagsLayout;                 //@synthesize tagsLayout=_tagsLayout - In the implementation block
@property (nonatomic,retain) VUIButtonLayout * versionsButtonLayout;              //@synthesize versionsButtonLayout=_versionsButtonLayout - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                                   //@synthesize shadow=_shadow - In the implementation block
@property (assign,nonatomic) TVCornerRadii borderRadii;                           //@synthesize borderRadii=_borderRadii - In the implementation block
@property (assign,nonatomic) double borderWidth;                                  //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                               //@synthesize borderColor=_borderColor - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(id)subtitleTextLayout;
-(id)init;
-(NSShadow *)shadow;
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)textLayout;
-(TVCornerRadii)borderRadii;
-(TVImageLayout *)imageLayout;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(VUITextLayout *)titleTextLayout;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(TVImageLayout *)logoLayout;
-(TVImageLayout *)appIconLayout;
-(void)setAppIconLayout:(TVImageLayout *)arg1 ;
-(VUITextLayout *)subtitleTextLayout;
-(VUITextLayout *)belowCardTextLayout;
-(TVImageLayout *)badgeLayout;
-(VUIMediaTagsViewLayout *)tagsLayout;
-(VUIButtonLayout *)versionsButtonLayout;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setSubtitleTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)channelNameTextLayout;
-(void)setBadgeLayout:(TVImageLayout *)arg1 ;
-(void)setLogoLayout:(TVImageLayout *)arg1 ;
-(void)setChannelNameTextLayout:(VUITextLayout *)arg1 ;
-(void)setBelowCardTextLayout:(VUITextLayout *)arg1 ;
-(void)setTagsLayout:(VUIMediaTagsViewLayout *)arg1 ;
-(void)setVersionsButtonLayout:(VUIButtonLayout *)arg1 ;
@end
