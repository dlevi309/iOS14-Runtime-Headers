/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaCollection.h>
#import <libobjc.A.dylib/VUIMPMediaEntityImageLoadParamsCreating.h>

@class NSString, MPMediaItemCollection;

@interface VUIMPMediaCollection : VUIMediaCollection <VUIMPMediaEntityImageLoadParamsCreating> {

	NSString* _coverArtImageIdentifier;
	MPMediaItemCollection* _mediaItemCollection;

}

@property (nonatomic,retain) MPMediaItemCollection * mediaItemCollection;              //@synthesize mediaItemCollection=_mediaItemCollection - In the implementation block
-(id)isLocal;
-(id)resolution;
-(id)contentRating;
-(id)assetController;
-(id)HLSResolution;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)HLSAudioCapability;
-(id)audioCapability;
-(id)initWithMediaLibrary:(id)arg1 mediaItemCollection:(id)arg2 identifier:(id)arg3 requestedProperties:(id)arg4 kind:(id)arg5 ;
-(MPMediaItemCollection *)mediaItemCollection;
-(id)playedState;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)showIdentifier;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(void)setMediaItemCollection:(MPMediaItemCollection *)arg1 ;
@end

