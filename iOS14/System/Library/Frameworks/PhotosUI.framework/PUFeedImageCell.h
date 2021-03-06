/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@protocol PXVideoOverlayButton;
@class UIImage, AVPlayerItem, PXVideoPlayerView, ISWrappedAVPlayer, ISWrappedAVAudioSession, UIImageView, UIView, PUImageViewExtraction, UIButton, PXUIAssetBadgeView, PXRoundedCornerOverlayView;

@interface PUFeedImageCell : PUFeedCell {

	BOOL _imageHidden;
	BOOL __shouldUpdateOverlayPlayButtonBackground;
	BOOL __shouldHideOverlayPlayButton;
	BOOL __shouldHideCenterOverlayImageView;
	BOOL __shouldHideCommentButton;
	BOOL _shouldHideLikeBadge;
	int _playerItemRequestID;
	UIImage* _image;
	AVPlayerItem* _playerItem;
	long long _imageContentMode;
	long long _imageAlignment;
	long long _overlayOptions;
	long long _commentCount;
	double _cornerRadius;
	PXVideoPlayerView* _videoPlayerView;
	ISWrappedAVPlayer* _videoPlayer;
	ISWrappedAVAudioSession* _audioSession;
	UIImageView* __imageView;
	long long __imageTag;
	UIView*<PXVideoOverlayButton> __overlayPlayButton;
	UIImageView* __overlayPlayButtonBackgroundImageView;
	PUImageViewExtraction* __overlayPlayButtonBackgroundExtraction;
	UIImageView* __centerOverlayImageView;
	UIButton* __commentButton;
	PXUIAssetBadgeView* __photoIrisBadgeView;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	UIImageView* _likeBadgeView;
	CGSize _maximumImageSize;
	CGRect __imageFrame;

}

@property (nonatomic,readonly) PXVideoPlayerView * videoPlayerView;                                                                                         //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;                                                                                             //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,readonly) ISWrappedAVAudioSession * audioSession;                                                                                      //@synthesize audioSession=_audioSession - In the implementation block
@property (setter=_setImageView:,nonatomic,retain) UIImageView * _imageView;                                                                                //@synthesize _imageView=__imageView - In the implementation block
@property (assign,setter=_setImageTag:,nonatomic) long long _imageTag;                                                                                      //@synthesize _imageTag=__imageTag - In the implementation block
@property (assign,setter=_setImageFrame:,nonatomic) CGRect _imageFrame;                                                                                     //@synthesize _imageFrame=__imageFrame - In the implementation block
@property (setter=_setOverlayPlayButton:,nonatomic,retain) UIView*<PXVideoOverlayButton> _overlayPlayButton;                                                //@synthesize _overlayPlayButton=__overlayPlayButton - In the implementation block
@property (setter=_setOverlayPlayButtonBackgroundImageView:,nonatomic,retain) UIImageView * _overlayPlayButtonBackgroundImageView;                          //@synthesize _overlayPlayButtonBackgroundImageView=__overlayPlayButtonBackgroundImageView - In the implementation block
@property (setter=_setOverlayPlayButtonBackgroundExtraction:,nonatomic,retain) PUImageViewExtraction * _overlayPlayButtonBackgroundExtraction;              //@synthesize _overlayPlayButtonBackgroundExtraction=__overlayPlayButtonBackgroundExtraction - In the implementation block
@property (assign,setter=_setShouldUpdateOverlayPlayButtonBackground:,nonatomic) BOOL _shouldUpdateOverlayPlayButtonBackground;                             //@synthesize _shouldUpdateOverlayPlayButtonBackground=__shouldUpdateOverlayPlayButtonBackground - In the implementation block
@property (assign,setter=_setShouldHideOverlayPlayButton:,nonatomic) BOOL _shouldHideOverlayPlayButton;                                                     //@synthesize _shouldHideOverlayPlayButton=__shouldHideOverlayPlayButton - In the implementation block
@property (setter=_setCenterOverlayImageView:,nonatomic,retain) UIImageView * _centerOverlayImageView;                                                      //@synthesize _centerOverlayImageView=__centerOverlayImageView - In the implementation block
@property (assign,setter=_setShouldHideCenterOverlayImageView:,nonatomic) BOOL _shouldHideCenterOverlayImageView;                                           //@synthesize _shouldHideCenterOverlayImageView=__shouldHideCenterOverlayImageView - In the implementation block
@property (setter=_setCommentButton:,nonatomic,retain) UIButton * _commentButton;                                                                           //@synthesize _commentButton=__commentButton - In the implementation block
@property (assign,setter=_setShouldHideCommentButton:,nonatomic) BOOL _shouldHideCommentButton;                                                             //@synthesize _shouldHideCommentButton=__shouldHideCommentButton - In the implementation block
@property (assign,setter=setShouldHideLikeBadge:,nonatomic) BOOL shouldHideLikeBadge;                                                                       //@synthesize shouldHideLikeBadge=_shouldHideLikeBadge - In the implementation block
@property (setter=_setPhotoIrisBadgeView:,nonatomic,retain) PXUIAssetBadgeView * _photoIrisBadgeView;                                                       //@synthesize _photoIrisBadgeView=__photoIrisBadgeView - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundedCornerOverlayView;                                                                         //@synthesize roundedCornerOverlayView=_roundedCornerOverlayView - In the implementation block
@property (nonatomic,retain) UIImageView * likeBadgeView;                                                                                                   //@synthesize likeBadgeView=_likeBadgeView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                                                               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                                                                                     //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) int playerItemRequestID;                                                                                                       //@synthesize playerItemRequestID=_playerItemRequestID - In the implementation block
@property (assign,nonatomic) long long imageContentMode;                                                                                                    //@synthesize imageContentMode=_imageContentMode - In the implementation block
@property (assign,getter=isImageHidden,nonatomic) BOOL imageHidden;                                                                                         //@synthesize imageHidden=_imageHidden - In the implementation block
@property (assign,nonatomic) CGSize maximumImageSize;                                                                                                       //@synthesize maximumImageSize=_maximumImageSize - In the implementation block
@property (assign,nonatomic) long long imageAlignment;                                                                                                      //@synthesize imageAlignment=_imageAlignment - In the implementation block
@property (assign,nonatomic) long long overlayOptions;                                                                                                      //@synthesize overlayOptions=_overlayOptions - In the implementation block
@property (assign,nonatomic) long long commentCount;                                                                                                        //@synthesize commentCount=_commentCount - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                                                                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(long long)_videoOverlayButtonStyle;
+(Class)_contentViewClass;
+(void)preloadResources;
-(UIImageView *)_imageView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateRoundedCornersOverlayView;
-(CGRect)_imageFrame;
-(void)setImageContentMode:(long long)arg1 ;
-(long long)imageContentMode;
-(long long)commentCount;
-(PXRoundedCornerOverlayView *)roundedCornerOverlayView;
-(void)prepareForReuse;
-(UIImage *)image;
-(double)cornerRadius;
-(ISWrappedAVPlayer *)videoPlayer;
-(void)setRoundedCornerOverlayView:(PXRoundedCornerOverlayView *)arg1 ;
-(void)layoutSubviews;
-(void)setImageHidden:(BOOL)arg1 ;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMaximumImageSize:(CGSize)arg1 ;
-(void)_setImageView:(id)arg1 ;
-(void)setAudioSession:(ISWrappedAVAudioSession *)arg1 ;
-(BOOL)isImageHidden;
-(long long)_imageTag;
-(void)setImage:(id)arg1 withTag:(long long)arg2 ;
-(void)_updateVideoPlayerContents;
-(void)_updateVideoViewContentMode;
-(void)setImageAlignment:(long long)arg1 ;
-(void)setOverlayOptions:(long long)arg1 ;
-(void)setCommentCount:(long long)arg1 ;
-(void)_layoutImageView;
-(void)_updateOverlays;
-(void)_updateCommentButton;
-(void)_invalidateOverlayPlayButtonBackground;
-(id)_imageCellDelegate;
-(void)_handlePlayButton:(id)arg1 ;
-(void)_handleCommentButton:(id)arg1 ;
-(long long)imageAlignment;
-(int)playerItemRequestID;
-(void)setPlayerItemRequestID:(int)arg1 ;
-(long long)overlayOptions;
-(PXVideoPlayerView *)videoPlayerView;
-(void)_setImageTag:(long long)arg1 ;
-(void)_setImageFrame:(CGRect)arg1 ;
-(UIView*<PXVideoOverlayButton>)_overlayPlayButton;
-(void)_setOverlayPlayButton:(id)arg1 ;
-(UIImageView *)_overlayPlayButtonBackgroundImageView;
-(UIButton *)_commentButton;
-(void)_setOverlayPlayButtonBackgroundImageView:(id)arg1 ;
-(PUImageViewExtraction *)_overlayPlayButtonBackgroundExtraction;
-(void)_setOverlayPlayButtonBackgroundExtraction:(id)arg1 ;
-(BOOL)_shouldUpdateOverlayPlayButtonBackground;
-(BOOL)_shouldHideOverlayPlayButton;
-(void)_setShouldUpdateOverlayPlayButtonBackground:(BOOL)arg1 ;
-(void)_setShouldHideOverlayPlayButton:(BOOL)arg1 ;
-(UIImageView *)_centerOverlayImageView;
-(void)_setCenterOverlayImageView:(id)arg1 ;
-(BOOL)_shouldHideCenterOverlayImageView;
-(void)_setShouldHideCenterOverlayImageView:(BOOL)arg1 ;
-(void)_setCommentButton:(id)arg1 ;
-(BOOL)_shouldHideCommentButton;
-(void)_setShouldHideCommentButton:(BOOL)arg1 ;
-(BOOL)shouldHideLikeBadge;
-(void)setShouldHideLikeBadge:(BOOL)arg1 ;
-(PXUIAssetBadgeView *)_photoIrisBadgeView;
-(void)_setPhotoIrisBadgeView:(id)arg1 ;
-(UIImageView *)likeBadgeView;
-(void)setLikeBadgeView:(UIImageView *)arg1 ;
-(void)setParallaxOffset:(CGPoint)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(AVPlayerItem *)playerItem;
-(ISWrappedAVAudioSession *)audioSession;
-(CGSize)maximumImageSize;
@end

