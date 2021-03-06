/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class AVAsset, UIImage, UICollectionView, ISLivePhotoPlayer, ISLivePhotoUIView, UIButton;

@interface PUFeedPlayerCell : PUFeedCell {

	BOOL _playerHidden;
	BOOL _isPhotoImageDegraded;
	BOOL __isPerformingIrisPlayerChanges;
	BOOL __needsUpdatePlayerItem;
	BOOL __needsUpdateVitality;
	BOOL __shouldHideCommentButton;
	int _currentImageRequestID;
	long long _commentCount;
	AVAsset* _videoAsset;
	UIImage* _photoImage;
	double _photoTime;
	UICollectionView* _containingCollectionView;
	ISLivePhotoPlayer* __player;
	ISLivePhotoUIView* __playerView;
	UIButton* __commentButton;

}

@property (assign,setter=_setPerformingIrisPlayerChanges:,nonatomic) BOOL _isPerformingIrisPlayerChanges;              //@synthesize _isPerformingIrisPlayerChanges=__isPerformingIrisPlayerChanges - In the implementation block
@property (assign,setter=_setNeedsUpdatePlayerItem:,nonatomic) BOOL _needsUpdatePlayerItem;                            //@synthesize _needsUpdatePlayerItem=__needsUpdatePlayerItem - In the implementation block
@property (assign,setter=_setNeedsUpdateVitality:,nonatomic) BOOL _needsUpdateVitality;                                //@synthesize _needsUpdateVitality=__needsUpdateVitality - In the implementation block
@property (nonatomic,readonly) ISLivePhotoPlayer * _player;                                                            //@synthesize _player=__player - In the implementation block
@property (nonatomic,readonly) ISLivePhotoUIView * _playerView;                                                        //@synthesize _playerView=__playerView - In the implementation block
@property (setter=_setCommentButton:,nonatomic,retain) UIButton * _commentButton;                                      //@synthesize _commentButton=__commentButton - In the implementation block
@property (assign,setter=_setShouldHideCommentButton:,nonatomic) BOOL _shouldHideCommentButton;                        //@synthesize _shouldHideCommentButton=__shouldHideCommentButton - In the implementation block
@property (assign,nonatomic) long long commentCount;                                                                   //@synthesize commentCount=_commentCount - In the implementation block
@property (assign,nonatomic) int currentImageRequestID;                                                                //@synthesize currentImageRequestID=_currentImageRequestID - In the implementation block
@property (assign,getter=isPlayerHidden,nonatomic) BOOL playerHidden;                                                  //@synthesize playerHidden=_playerHidden - In the implementation block
@property (nonatomic,retain) AVAsset * videoAsset;                                                                     //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,retain) UIImage * photoImage;                                                                     //@synthesize photoImage=_photoImage - In the implementation block
@property (assign,setter=setPhotoImageDegraded:,nonatomic) BOOL isPhotoImageDegraded;                                  //@synthesize isPhotoImageDegraded=_isPhotoImageDegraded - In the implementation block
@property (assign,nonatomic) double photoTime;                                                                         //@synthesize photoTime=_photoTime - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * containingCollectionView;                                       //@synthesize containingCollectionView=_containingCollectionView - In the implementation block
+(Class)_contentViewClass;
-(void)setPhotoImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)commentCount;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setCommentCount:(long long)arg1 ;
-(void)_updateCommentButton;
-(void)_handleCommentButton:(id)arg1 ;
-(UIButton *)_commentButton;
-(UIImage *)photoImage;
-(void)_setCommentButton:(id)arg1 ;
-(BOOL)_shouldHideCommentButton;
-(void)_setShouldHideCommentButton:(BOOL)arg1 ;
-(void)performIrisPlayerChanges:(/*^block*/id)arg1 ;
-(void)_assertInsideIrisPlayerChanges;
-(void)_updateIrisIfNeeded;
-(BOOL)_needsUpdateIris;
-(void)setVideoAsset:(AVAsset *)arg1 ;
-(void)_setNeedsUpdateIris;
-(void)_invalidatePlayerItem;
-(void)_updatePlayerItemIfNeeded;
-(void)_invalidateVitality;
-(void)_updateVitalityIfNeeded;
-(id)_playerCellDelegate;
-(void)setPlayerHidden:(BOOL)arg1 ;
-(void)setPhotoImageDegraded:(BOOL)arg1 ;
-(void)setContainingCollectionView:(UICollectionView *)arg1 ;
-(void)_layoutPlayerView;
-(int)currentImageRequestID;
-(void)setCurrentImageRequestID:(int)arg1 ;
-(BOOL)isPlayerHidden;
-(BOOL)isPhotoImageDegraded;
-(void)setPhotoTime:(double)arg1 ;
-(UICollectionView *)containingCollectionView;
-(BOOL)_isPerformingIrisPlayerChanges;
-(void)_setPerformingIrisPlayerChanges:(BOOL)arg1 ;
-(BOOL)_needsUpdatePlayerItem;
-(void)_setNeedsUpdatePlayerItem:(BOOL)arg1 ;
-(BOOL)_needsUpdateVitality;
-(void)_setNeedsUpdateVitality:(BOOL)arg1 ;
-(void)setParallaxOffset:(CGPoint)arg1 ;
-(double)photoTime;
-(AVAsset *)videoAsset;
-(ISLivePhotoUIView *)_playerView;
-(ISLivePhotoPlayer *)_player;
@end

