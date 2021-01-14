/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIProgressBarLayout, VUITextLayout, VUITextBadgeLayout;

@interface VUIUpNextOverlayLayout : TVViewLayout {

	TVImageLayout* _appImageLayout;
	TVImageLayout* _logoImageLayout;
	VUIProgressBarLayout* _progressBarLayout;
	TVImageLayout* _badgeLayout;
	VUITextLayout* _titleLayout;
	VUITextLayout* _subtitleLayout;
	VUITextBadgeLayout* _textBadgeLayout;

}

@property (nonatomic,retain) TVImageLayout * appImageLayout;                        //@synthesize appImageLayout=_appImageLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * logoImageLayout;                       //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
@property (nonatomic,retain) VUIProgressBarLayout * progressBarLayout;              //@synthesize progressBarLayout=_progressBarLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * badgeLayout;                           //@synthesize badgeLayout=_badgeLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleLayout;                           //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * subtitleLayout;                        //@synthesize subtitleLayout=_subtitleLayout - In the implementation block
@property (nonatomic,retain) VUITextBadgeLayout * textBadgeLayout;                  //@synthesize textBadgeLayout=_textBadgeLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(id)logoImageLayout;
+(id)appImageLayout;
+(void)_setAppImageDefaultSize:(id)arg1 ;
+(void)_setLogoImageDefaultSize:(id)arg1 ;
-(id)init;
-(TVImageLayout *)logoImageLayout;
-(TVImageLayout *)appImageLayout;
-(VUITextBadgeLayout *)textBadgeLayout;
-(TVImageLayout *)badgeLayout;
-(VUITextLayout *)titleLayout;
-(VUIProgressBarLayout *)progressBarLayout;
-(void)setTextBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(void)setAppImageLayout:(TVImageLayout *)arg1 ;
-(void)setLogoImageLayout:(TVImageLayout *)arg1 ;
-(void)setProgressBarLayout:(VUIProgressBarLayout *)arg1 ;
-(void)setBadgeLayout:(TVImageLayout *)arg1 ;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)subtitleLayout;
-(void)setSubtitleLayout:(VUITextLayout *)arg1 ;
@end
