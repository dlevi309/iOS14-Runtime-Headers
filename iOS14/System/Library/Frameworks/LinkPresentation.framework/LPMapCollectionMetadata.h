/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>

@class NSString, LPImage, NSArray;

@interface LPMapCollectionMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility> {

	unsigned _numberOfItems;
	NSString* _name;
	LPImage* _icon;
	LPImage* _image;
	LPImage* _darkImage;
	NSArray* _addresses;
	NSString* _publisherName;
	LPImage* _publisherIcon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned numberOfItems;                //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (nonatomic,retain) LPImage * icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) LPImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * darkImage;                   //@synthesize darkImage=_darkImage - In the implementation block
@property (nonatomic,copy) NSArray * addresses;                     //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,copy) NSString * publisherName;                //@synthesize publisherName=_publisherName - In the implementation block
@property (nonatomic,retain) LPImage * publisherIcon;               //@synthesize publisherIcon=_publisherIcon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSArray *)addresses;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(unsigned)numberOfItems;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(void)setDarkImage:(LPImage *)arg1 ;
-(void)setPublisherName:(NSString *)arg1 ;
-(LPImage *)publisherIcon;
-(void)setPublisherIcon:(LPImage *)arg1 ;
-(LPImage *)icon;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(LPImage *)arg1 ;
-(NSString *)publisherName;
-(LPImage *)image;
-(NSString *)name;
-(id)_resolvedImage;
-(void)setNumberOfItems:(unsigned)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)_bottomLine;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(LPImage *)darkImage;
@end

