/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUICollectionHeaderViewLayout : TVViewLayout {

	VUITextLayout* _titleTextLayout;
	VUITextLayout* _subtitleTextLayout;
	TVImageLayout* _imageViewLayout;

}

@property (nonatomic,retain) TVImageLayout * imageViewLayout;                   //@synthesize imageViewLayout=_imageViewLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                 //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * subtitleTextLayout;              //@synthesize subtitleTextLayout=_subtitleTextLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(id)maxImageContentSizeCategory;
-(id)init;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)subtitleTextLayout;
-(TVImageLayout *)imageViewLayout;
-(void)setImageViewLayout:(TVImageLayout *)arg1 ;
@end

