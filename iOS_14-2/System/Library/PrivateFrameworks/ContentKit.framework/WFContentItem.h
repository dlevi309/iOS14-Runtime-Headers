/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <UIKit/UIActivityItemSource.h>
#import <libobjc.A.dylib/WFContentItemClass.h>
#import <libobjc.A.dylib/WFCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFContentAttributionSet, NSMutableDictionary, WFType, NSString, NSItemProvider, NSExtensionItem, WFRepresentation, WFImage;

@interface WFContentItem : NSObject <UIActivityItemSource, WFContentItemClass, WFCopying, NSSecureCoding> {

	WFContentAttributionSet* _attributionSet;
	NSMutableDictionary* _representationsByType;
	NSMutableDictionary* _subItemsByClass;
	WFType* _internalRepresentationType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,readonly) NSExtensionItem * extensionItem; 
@property (nonatomic,readonly) NSItemProvider * minimalItemProvider; 
@property (nonatomic,readonly) NSExtensionItem * minimalExtensionItem; 
@property (nonatomic,readonly) NSString * richListTitle; 
@property (nonatomic,retain) NSMutableDictionary * representationsByType;              //@synthesize representationsByType=_representationsByType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subItemsByClass;                    //@synthesize subItemsByClass=_subItemsByClass - In the implementation block
@property (nonatomic,readonly) WFType * internalRepresentationType;                    //@synthesize internalRepresentationType=_internalRepresentationType - In the implementation block
@property (nonatomic,readonly) WFRepresentation * internalRepresentation; 
@property (nonatomic,readonly) WFImage * icon; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) WFContentAttributionSet * attributionSet;               //@synthesize attributionSet=_attributionSet - In the implementation block
+(id)supportedTypes;
+(BOOL)supportsSecureCoding;
+(id)properties;
+(id)allProperties;
+(id)itemWithObject:(id)arg1 ;
+(id)propertyForName:(id)arg1 ;
+(id)localizedTypeDescription;
+(id)typeDescription;
+(id)itemWithObject:(id)arg1 named:(id)arg2 ;
+(id)itemWithObject:(id)arg1 attributionSet:(id)arg2 ;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)canLowercaseTypeDescription;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterRepresentationsForAllowedContent:(id)arg1 ;
+(id)localizedPluralTypeDescription;
+(id)filterDescription;
+(id)localizedFilterDescription;
+(id)pluralFilterDescription;
+(id)localizedPluralFilterDescription;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(id)allSupportedTypes;
+(id)supportedItemClasses;
+(id)populateBadCoercionError:(id)arg1 withResponsibleComponent:(id)arg2 ;
+(id)supportedPropertyForProperty:(id)arg1 ;
+(BOOL)contentItems:(id)arg1 haveContentProperties:(id)arg2 ;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)itemWithFile:(id)arg1 ;
+(BOOL)hasLibrary;
+(id)itemWithRepresentation:(id)arg1 forType:(id)arg2 attributionSet:(id)arg3 ;
+(BOOL)isAvailableOnPlatform:(long long)arg1 ;
+(BOOL)supportedTypesMustBeDeterminedByInstance;
+(BOOL)hasStringOutput;
+(id)allSupportedItemClasses;
+(id)supportedTypesExcludingInstanceSpecificTypes;
+(id)pasteboardValueClasses;
+(id)badCoercionErrorForItemClass:(Class)arg1 ;
+(id)itemWithRepresentation:(id)arg1 attributionSet:(id)arg2 ;
+(id)itemWithRepresentation:(id)arg1 attributionSet:(id)arg2 includesDefaultAttributionSet:(BOOL)arg3 ;
+(id)badCoercionErrorForObjectClass:(Class)arg1 ;
+(id)badCoercionErrorForType:(id)arg1 ;
+(BOOL)errorIsBadCoercionError:(id)arg1 ;
+(id)itemWithObject:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 ;
+(id)itemWithRepresentation:(id)arg1 forType:(id)arg2 ;
+(id)itemWithRepresentation:(id)arg1 forType:(id)arg2 attributionSet:(id)arg3 includesDefaultAttributionSet:(BOOL)arg4 ;
+(id)itemWithRepresentation:(id)arg1 ;
+(id)itemWithFile:(id)arg1 attributionSet:(id)arg2 ;
+(BOOL)isContentItemSubclass;
+(BOOL)hasFileOutput;
+(void)getContentItemFromSerializedItem:(id)arg1 sourceName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)itemFromSerializedItem:(id)arg1 withItemClass:(Class)arg2 forType:(id)arg3 nameIfKnown:(id)arg4 sourceName:(id)arg5 attributionSet:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(/*^block*/id)contentPropertySubstitutor;
+(BOOL)supportedItemClassMustBeDeterminedByInstance:(Class)arg1 ;
+(id)supportedItemClassesExcludingInstanceSpecificTypes;
+(id)badCoercionErrorDefaultResponsibleComponent;
+(id)badCoercionErrorWithReasonString:(id)arg1 ;
+(id)badCoercionErrorForTypeDescription:(id)arg1 toTypeDescription:(id)arg2 ;
+(id)badCoercionErrorForItemClasses:(id)arg1 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(void)prepareForActivityItemPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldUseObjectRepresentation;
-(id)internalName;
-(id)supportedTypes;
-(WFImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(NSItemProvider *)itemProvider;
-(id)copyWithName:(id)arg1 ;
-(NSString *)name;
-(NSExtensionItem *)extensionItem;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WFRepresentation *)internalRepresentation;
-(void)dealloc;
-(void)getFileRepresentations:(/*^block*/id)arg1 forType:(id)arg2 ;
-(void)getObjectRepresentations:(/*^block*/id)arg1 forClass:(Class)arg2 ;
-(void)getObjectRepresentation:(/*^block*/id)arg1 forClass:(Class)arg2 ;
-(WFContentAttributionSet *)attributionSet;
-(id)ownedTypes;
-(id)outputTypes;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)generateFileRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPreferredFileExtension:(/*^block*/id)arg1 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)additionalRepresentationsForSerialization;
-(void)getFileRepresentationsForSerialization:(/*^block*/id)arg1 ;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)preferredFileType;
-(id)preferredObjectType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)cachesSupportedTypes;
-(id)objectForClass:(Class)arg1 ;
-(id)allSupportedTypes;
-(id)supportedItemClasses;
-(void)performCoercion:(id)arg1 ;
-(void)getFileRepresentation:(/*^block*/id)arg1 forType:(id)arg2 ;
-(NSString *)richListTitle;
-(id)getRepresentationsForType:(id)arg1 error:(id*)arg2 ;
-(id)fileRepresentationForType:(id)arg1 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(id)intermediaryTypesForCoercionToItemClass:(Class)arg1 ;
-(id)metadataForSerialization;
-(NSItemProvider *)minimalItemProvider;
-(NSExtensionItem *)minimalExtensionItem;
-(id)itemProviderForTypes:(id)arg1 ;
-(id)extensionItemWithItemProvider:(id)arg1 ;
-(id)allowedClassesForDecodingInternalRepresentations;
-(BOOL)canPerformCoercion:(id)arg1 ;
-(BOOL)isCoercibleToItemClass:(Class)arg1 ;
-(BOOL)isCoercibleToItemClasses:(id)arg1 ;
-(void)getSerializedItem:(/*^block*/id)arg1 ;
-(void)getTitle:(/*^block*/id)arg1 ;
-(void)getRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)getRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateRepresentationsForType:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)generateRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasStringOutput;
-(id)internalRepresentationForCopyingWithName:(id)arg1 ;
-(BOOL)canEncodeWithCoder:(id)arg1 ;
-(void)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)generateFirstLevelSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateSubItemsForItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)generateSubItemsForItemClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)contentItemByMergingAttributionSet:(id)arg1 ;
-(id)typeForCoercionRequest:(id)arg1 ;
-(BOOL)coercionOptions:(id)arg1 allowCoercionsToType:(id)arg2 ;
-(BOOL)coercionOptions:(id)arg1 allowCoercionsToItemClass:(Class)arg2 ;
-(void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)forceCoerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)itemsByCoercingToItemClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)nativePasteboardTypeForObjectRepresentationOfClass:(Class)arg1 ;
-(id)preferredTypeOfClass:(Class)arg1 ;
-(BOOL)canGenerateIntermediaryRepresentationForItemClass:(Class)arg1 ;
-(id)allSupportedItemClasses;
-(id)initWithRepresentation:(id)arg1 forType:(id)arg2 attributionSet:(id)arg3 ;
-(id)initWithRepresentation:(id)arg1 forType:(id)arg2 attributionSet:(id)arg3 includesDefaultAttributionSet:(BOOL)arg4 ;
-(id)initWithRepresentationsByType:(id)arg1 forType:(id)arg2 subItemsByClass:(id)arg3 attributionSet:(id)arg4 includesDefaultAttributionSet:(BOOL)arg5 ;
-(NSMutableDictionary *)representationsByType;
-(id)representationsForType:(id)arg1 ;
-(id)representationForType:(id)arg1 ;
-(void)setRepresentations:(id)arg1 forType:(id)arg2 ;
-(id)fileRepresentationsForType:(id)arg1 ;
-(void)setFileRepresentations:(id)arg1 forType:(id)arg2 ;
-(id)objectRepresentationsForClass:(Class)arg1 ;
-(id)objectRepresentationForClass:(Class)arg1 ;
-(void)setObjectRepresentations:(id)arg1 forClass:(Class)arg2 ;
-(id)objectsForClass:(Class)arg1 ;
-(NSMutableDictionary *)subItemsByClass;
-(void)setSubItems:(id)arg1 forClass:(Class)arg2 ;
-(id)subItemsForClass:(Class)arg1 ;
-(id)subItemForClass:(Class)arg1 ;
-(void)setRepresentationsByType:(NSMutableDictionary *)arg1 ;
-(void)setSubItemsByClass:(NSMutableDictionary *)arg1 ;
-(WFType *)internalRepresentationType;
-(void)coerceToItemClasses:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)coerceToItemClass:(Class)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
