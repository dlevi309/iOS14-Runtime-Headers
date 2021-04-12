/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFFileType, WFImage;

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass> {

	BOOL _imageIsAnimated;
	WFFileType* _preferredFileType;

}

@property (nonatomic,retain) WFFileType * preferredFileType;              //@synthesize preferredFileType=_preferredFileType - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) WFImage * image; 
@property (assign,nonatomic) BOOL imageIsAnimated;                        //@synthesize imageIsAnimated=_imageIsAnimated - In the implementation block
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 contentSource:(id)arg4 ;
+(id)imageTypes;
+(id)itemWithImage:(id)arg1 named:(id)arg2 preferredFileType:(id)arg3 ;
-(CGSize)size;
-(id)orientation;
-(id)model;
-(id)location;
-(id)width;
-(id)height;
-(WFImage *)image;
-(id)metadata;
-(id)make;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(WFFileType *)preferredFileType;
-(id)preferredObjectType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(BOOL)isScreenshot;
-(void)setPreferredFileType:(WFFileType *)arg1 ;
-(id)dateTaken;
-(BOOL)isObjectBacked;
-(id)imageFile;
-(id)generateImageFileForType:(id)arg1 includingMetadata:(BOOL)arg2 compressionQuality:(id)arg3 error:(id*)arg4 ;
-(BOOL)isContent;
-(BOOL)imageIsAnimated;
-(void)setImageIsAnimated:(BOOL)arg1 ;
@end
