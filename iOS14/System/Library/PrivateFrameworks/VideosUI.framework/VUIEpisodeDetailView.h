/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <libobjc.A.dylib/VUILibraryEpisodeFrameViewDelegate.h>

@protocol VUIEpisodeDetailViewDelegate;
@class VUILibraryEpisodeFrameView, VUILabel, VUIFocusableTextView, UIFont, VUIMediaItem, VUIMediaTagsView, NSString;

@interface VUIEpisodeDetailView : UIScrollView <VUILibraryEpisodeFrameViewDelegate> {

	id<VUIEpisodeDetailViewDelegate> _episodeViewDelegate;
	VUILibraryEpisodeFrameView* _imageFrameView;
	VUILabel* _episodeTitleLabel;
	VUILabel* _seasonNumberLabel;
	VUILabel* _episodeNumberLabel;
	VUILabel* _releaseDateLabel;
	VUILabel* _dotSeparatorLabel;
	VUIFocusableTextView* _contentDescriptionView;
	UIFont* _contentDescriptionFont;
	VUIMediaItem* _mediaItem;
	VUIMediaTagsView* _mediaBadgeTagsView;

}

@property (nonatomic,retain) VUILibraryEpisodeFrameView * imageFrameView;                              //@synthesize imageFrameView=_imageFrameView - In the implementation block
@property (nonatomic,retain) VUILabel * episodeTitleLabel;                                             //@synthesize episodeTitleLabel=_episodeTitleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * seasonNumberLabel;                                             //@synthesize seasonNumberLabel=_seasonNumberLabel - In the implementation block
@property (nonatomic,retain) VUILabel * episodeNumberLabel;                                            //@synthesize episodeNumberLabel=_episodeNumberLabel - In the implementation block
@property (nonatomic,retain) VUILabel * releaseDateLabel;                                              //@synthesize releaseDateLabel=_releaseDateLabel - In the implementation block
@property (nonatomic,retain) VUILabel * dotSeparatorLabel;                                             //@synthesize dotSeparatorLabel=_dotSeparatorLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * contentDescriptionView;                            //@synthesize contentDescriptionView=_contentDescriptionView - In the implementation block
@property (nonatomic,retain) UIFont * contentDescriptionFont;                                          //@synthesize contentDescriptionFont=_contentDescriptionFont - In the implementation block
@property (nonatomic,retain) VUIMediaItem * mediaItem;                                                 //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) VUIMediaTagsView * mediaBadgeTagsView;                                    //@synthesize mediaBadgeTagsView=_mediaBadgeTagsView - In the implementation block
@property (assign,nonatomic,__weak) id<VUIEpisodeDetailViewDelegate> episodeViewDelegate;              //@synthesize episodeViewDelegate=_episodeViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureEpisodeDetailView:(id)arg1 withMedia:(id)arg2 viewSize:(CGSize)arg3 ;
+(CGSize)_episodeFrameImageSizeWithViewSize:(CGSize)arg1 ;
-(void)setMediaItem:(VUIMediaItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(VUIMediaItem *)mediaItem;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUILibraryEpisodeFrameView *)imageFrameView;
-(void)setImageFrameView:(VUILibraryEpisodeFrameView *)arg1 ;
-(void)_configureDotSeparator;
-(VUILabel *)releaseDateLabel;
-(void)setReleaseDateLabel:(VUILabel *)arg1 ;
-(VUILabel *)dotSeparatorLabel;
-(void)setDotSeparatorLabel:(VUILabel *)arg1 ;
-(void)setEpisodeViewDelegate:(id<VUIEpisodeDetailViewDelegate>)arg1 ;
-(void)_configureViewElementsForAX;
-(void)didTapButtonForEpisodeFrameView:(id)arg1 ;
-(void)setMediaBadgeTagsView:(VUIMediaTagsView *)arg1 ;
-(UIFont *)contentDescriptionFont;
-(double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2 ;
-(double)_descriptionBottomMarginWithBaselineMargin:(double)arg1 ;
-(VUIMediaTagsView *)mediaBadgeTagsView;
-(VUILabel *)episodeTitleLabel;
-(void)setEpisodeTitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)seasonNumberLabel;
-(void)setSeasonNumberLabel:(VUILabel *)arg1 ;
-(VUILabel *)episodeNumberLabel;
-(void)setEpisodeNumberLabel:(VUILabel *)arg1 ;
-(VUIFocusableTextView *)contentDescriptionView;
-(void)setContentDescriptionFont:(UIFont *)arg1 ;
-(void)setContentDescriptionView:(VUIFocusableTextView *)arg1 ;
-(id<VUIEpisodeDetailViewDelegate>)episodeViewDelegate;
@end

