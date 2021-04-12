/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <Foundation/NSOperation.h>

@class NSArray, UIImage, NSDictionary;

@interface VUISportsOverlayBackgroundMaterialImagesOperation : NSOperation {

	NSArray* _overlayMaterialRequests;
	UIImage* _resizedSourceBackgroundImage;
	NSDictionary* _overlayMaterialImageByIdentifier;
	UIImage* _sourceBackgroundImage;
	CGSize _resizedBackgroundImageSize;

}

@property (nonatomic,retain) UIImage * sourceBackgroundImage;                            //@synthesize sourceBackgroundImage=_sourceBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * resizedSourceBackgroundImage;                     //@synthesize resizedSourceBackgroundImage=_resizedSourceBackgroundImage - In the implementation block
@property (nonatomic,copy) NSDictionary * overlayMaterialImageByIdentifier;              //@synthesize overlayMaterialImageByIdentifier=_overlayMaterialImageByIdentifier - In the implementation block
@property (assign,nonatomic) CGSize resizedBackgroundImageSize;                          //@synthesize resizedBackgroundImageSize=_resizedBackgroundImageSize - In the implementation block
@property (nonatomic,copy) NSArray * overlayMaterialRequests;                            //@synthesize overlayMaterialRequests=_overlayMaterialRequests - In the implementation block
-(id)init;
-(void)main;
-(id)initWithSourceBackgroundImage:(id)arg1 ;
-(void)setResizedBackgroundImageSize:(CGSize)arg1 ;
-(void)setOverlayMaterialRequests:(NSArray *)arg1 ;
-(UIImage *)resizedSourceBackgroundImage;
-(NSDictionary *)overlayMaterialImageByIdentifier;
-(UIImage *)sourceBackgroundImage;
-(CGSize)resizedBackgroundImageSize;
-(void)setResizedSourceBackgroundImage:(UIImage *)arg1 ;
-(NSArray *)overlayMaterialRequests;
-(id)_blurredMaterialImageWithSourceBackgroundImage:(id)arg1 forRect:(CGRect)arg2 ;
-(void)setOverlayMaterialImageByIdentifier:(NSDictionary *)arg1 ;
-(void)setSourceBackgroundImage:(UIImage *)arg1 ;
@end
