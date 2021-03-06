/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MPUArtworkView, UIImage, UIImageView, NSArray;

@interface VideosExtrasConstrainedArtworkContainerView : UIView {

	BOOL _shouldAutoresizeMaskLayerToFillBounds;
	BOOL _shouldBottomAlignArtwork;
	MPUArtworkView* _artworkView;
	UIImage* _overlayImage;
	double _overlayScale;
	UIImageView* _overlayView;
	NSArray* _overlaySizeConstraints;

}

@property (nonatomic,retain) MPUArtworkView * artworkView;                            //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,retain) UIImageView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) NSArray * overlaySizeConstraints;                        //@synthesize overlaySizeConstraints=_overlaySizeConstraints - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoresizeMaskLayerToFillBounds;              //@synthesize shouldAutoresizeMaskLayerToFillBounds=_shouldAutoresizeMaskLayerToFillBounds - In the implementation block
@property (assign,nonatomic) BOOL shouldBottomAlignArtwork;                           //@synthesize shouldBottomAlignArtwork=_shouldBottomAlignArtwork - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                  //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) double overlayScale;                                     //@synthesize overlayScale=_overlayScale - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(UIImageView *)overlayView;
-(MPUArtworkView *)artworkView;
-(void)setOverlayView:(UIImageView *)arg1 ;
-(UIImage *)overlayImage;
-(void)layoutSubviews;
-(void)setArtworkView:(MPUArtworkView *)arg1 ;
-(BOOL)shouldBottomAlignArtwork;
-(BOOL)shouldAutoresizeMaskLayerToFillBounds;
-(void)setOverlayScale:(double)arg1 ;
-(void)setShouldAutoresizeMaskLayerToFillBounds:(BOOL)arg1 ;
-(void)setShouldBottomAlignArtwork:(BOOL)arg1 ;
-(double)overlayScale;
-(NSArray *)overlaySizeConstraints;
-(void)setOverlaySizeConstraints:(NSArray *)arg1 ;
@end

