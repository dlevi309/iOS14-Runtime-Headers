/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>
#import <libobjc.A.dylib/SXMosaicGalleryLayouterDataSource.h>

@class SXMosaicGalleryLayouter, NSString;

@interface SXMosaicGalleryComponentSizer : SXComponentSizer <SXMosaicGalleryLayouterDataSource> {

	SXMosaicGalleryLayouter* _layouter;

}

@property (nonatomic,retain) SXMosaicGalleryLayouter * layouter;              //@synthesize layouter=_layouter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(SXMosaicGalleryLayouter *)layouter;
-(void)setLayouter:(SXMosaicGalleryLayouter *)arg1 ;
-(unsigned long long)numberOfItemsForGalleryLayouter:(id)arg1 ;
-(CGSize)galleryLayouter:(id)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2 ;
-(id)galleryLayouter:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)galleryLayouter:(id)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2 ;
-(id)documentColumnLayoutForGalleryLayouter:(id)arg1 ;
@end
