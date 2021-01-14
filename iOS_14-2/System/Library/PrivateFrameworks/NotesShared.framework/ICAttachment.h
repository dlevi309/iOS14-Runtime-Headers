/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>
#import <libobjc.A.dylib/ICSearchIndexable.h>

@class ICAttachmentModel, NSURL, NSDictionary, AVAsset, NSString, ICAttachmentLocation, ICMedia, NSData, ICNote, NSSet, NSDate;

@interface ICAttachment : ICCloudSyncingObject <ICCloudObject, ICSearchIndexable> {

	short _attachmentType;
	ICAttachmentModel* _attachmentModel;
	BOOL settingMergeableData;
	NSURL* _remoteFileURL;
	NSDictionary* _metadata;
	NSURL* _URL;
	AVAsset* _movie;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * URL;                                                          //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) AVAsset * movie;                                                      //@synthesize movie=_movie - In the implementation block
@property (assign,getter=isSettingMergeableData,nonatomic) BOOL settingMergeableData; 
@property (assign,nonatomic) long long minimumSupportedNotesVersion; 
@property (assign,nonatomic) double sizeHeight; 
@property (assign,nonatomic) double sizeWidth; 
@property (assign,nonatomic) double originX; 
@property (assign,nonatomic) double originY; 
@property (assign,nonatomic) short orientation; 
@property (nonatomic,retain) NSString * urlString; 
@property (nonatomic,retain) NSString * typeUTI; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * userTitle; 
@property (nonatomic,retain) NSString * additionalIndexableText; 
@property (nonatomic,retain) ICAttachmentLocation * location; 
@property (nonatomic,retain) ICMedia * media; 
@property (nonatomic,retain) NSData * mergeableData; 
@property (assign,nonatomic) BOOL needsInitialRelationshipSetup; 
@property (nonatomic,retain) ICNote * note; 
@property (nonatomic,retain) ICNote * noteUsingTitleForNoteTitle; 
@property (nonatomic,retain) NSSet * previewImages; 
@property (nonatomic,retain) NSDate * previewUpdateDate; 
@property (nonatomic,retain) ICAttachment * parentAttachment; 
@property (nonatomic,readonly) ICAttachment * rootParentAttachment; 
@property (nonatomic,retain) NSSet * subAttachments; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSString * remoteFileURLString; 
@property (nonatomic,retain) NSURL * remoteFileURL;                                                //@synthesize remoteFileURL=_remoteFileURL - In the implementation block
@property (nonatomic,retain) NSData * metadataData; 
@property (nonatomic,retain) NSDictionary * metadata;                                              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) short section; 
@property (assign,nonatomic) BOOL checkedForLocation; 
@property (assign,nonatomic) BOOL hasMarkupData; 
@property (nonatomic,retain) NSData * markupModelData; 
@property (assign,nonatomic) long long fileSize; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) short imageFilterType; 
@property (assign,nonatomic) double croppingQuadBottomLeftX; 
@property (assign,nonatomic) double croppingQuadBottomLeftY; 
@property (assign,nonatomic) double croppingQuadBottomRightX; 
@property (assign,nonatomic) double croppingQuadBottomRightY; 
@property (assign,nonatomic) double croppingQuadTopLeftX; 
@property (assign,nonatomic) double croppingQuadTopLeftY; 
@property (assign,nonatomic) double croppingQuadTopRightX; 
@property (assign,nonatomic) double croppingQuadTopRightY; 
@property (nonatomic,readonly) BOOL hasCroppingQuad; 
@property (nonatomic,retain) NSData * fallbackImageCryptoTag; 
@property (nonatomic,retain) NSData * fallbackImageCryptoInitializationVector; 
@property (nonatomic,retain) NSString * summary; 
@property (nonatomic,retain) NSString * handwritingSummary; 
@property (assign,nonatomic) short handwritingSummaryVersion; 
@property (nonatomic,retain) NSString * imageClassificationSummary; 
@property (assign,nonatomic) short imageClassificationSummaryVersion; 
@property (nonatomic,retain) NSString * ocrSummary; 
@property (assign,nonatomic) short ocrSummaryVersion; 
@property (nonatomic,retain) NSString * fallbackTitle; 
@property (nonatomic,retain) NSString * fallbackSubtitleIOS; 
@property (nonatomic,retain) NSString * fallbackSubtitleMac; 
@property (nonatomic,readonly) BOOL isReadOnly; 
+(void)initialize;
+(id)attachmentsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)noteFromAttachmentRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(void)ensureFallbackImageDirectoryExistsForAccount:(id)arg1 ;
+(void)addPreviewImages:(id)arg1 toRecord:(id)arg2 ;
+(void)purgeAttachment:(id)arg1 ;
+(BOOL)isTypeUTISupportedForPasswordProtectedNotes:(id)arg1 ;
+(id)mimeTypeFromUTI:(id)arg1 ;
+(id)internalImageCache;
+(id)keyPathsForValuesAffectingParentCloudObject;
+(unsigned long long)countOfAttachmentsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)predicateForVisibleAttachmentsIncludingTrashInContext:(id)arg1 ;
+(id)fallbackImageDirectoryURL;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)fallbackImageURLForIdentifier:(id)arg1 account:(id)arg2 ;
+(id)fallbackImageEncryptedURLForIdentifier:(id)arg1 account:(id)arg2 ;
+(BOOL)typeUTIIsPlayableMovie:(id)arg1 ;
+(BOOL)typeUTIIsPlayableAudio:(id)arg1 ;
+(short)sectionFromTypeUTI:(id)arg1 url:(id)arg2 ;
+(BOOL)typeUTIIsImage:(id)arg1 ;
+(BOOL)typeUTIIsDrawing:(id)arg1 ;
+(BOOL)typeUTIIsInlineDrawing:(id)arg1 ;
+(id)isBeingEditedLocallyOnDeviceSet;
+(id)attachmentSectionSortOrder;
+(BOOL)isPathExtensionSupportedForPasswordProtectedNotes:(id)arg1 ;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)predicateForVisibleObjects;
+(id)allAttachmentsInContext:(id)arg1 ;
+(id)predicateForSearchableAttachmentsInContext:(id)arg1 ;
+(id)predicateForVisibleAttachmentsInContext:(id)arg1 ;
+(id)attachmentWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 context:(id)arg3 ;
+(id)predicateForVisibleAttachmentsIncludingTrash:(BOOL)arg1 inContext:(id)arg2 ;
+(id)predicateForPasswordProtected:(BOOL)arg1 ;
+(id)attachmentTypeUTIsToHideFromAttachmentBrowser;
+(id)newAttachmentWithIdentifier:(id)arg1 note:(id)arg2 ;
+(id)newFetchRequestForAttachments;
+(void)purgeAllAttachmentsInContext:(id)arg1 ;
+(id)visibleAttachmentsInContext:(id)arg1 ;
+(id)predicateForAttachmentBrowserWithContext:(id)arg1 ;
+(id)predicateForInlineDrawing;
+(id)notDeletedPredicate;
+(void)deleteAttachment:(id)arg1 ;
+(void)undeleteAttachment:(id)arg1 ;
+(id)filenameExtensionForUTI:(id)arg1 ;
+(id)filenameFromUTI:(id)arg1 ;
+(id)defaultTitleForAttachmentType:(short)arg1 ;
+(id)attachmentIdentifiersForAccount:(id)arg1 ;
+(void)purgeAttachmentFilesForIdentifiers:(id)arg1 account:(id)arg2 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)attachmentWithIdentifier:(id)arg1 context:(id)arg2 ;
-(void)awakeFromFetch;
-(CGRect)bounds;
-(void)willTurnIntoFault;
-(NSString *)urlString;
-(void)willSave;
-(void)prepareForDeletion;
-(CGSize)intrinsicContentSize;
-(BOOL)isReadOnly;
-(BOOL)isUnsupported;
-(long long)intrinsicNotesVersion;
-(AVAsset *)movie;
-(void)setFallbackTitle:(NSString *)arg1 ;
-(BOOL)supportsQuickLook;
-(id)imageCacheKey;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 newAttachment:(BOOL)arg3 ;
-(NSString *)ocrSummary;
-(BOOL)isURL;
-(BOOL)isMap;
-(id)newlyCreatedRecord;
-(void)setNote:(ICNote *)arg1 ;
-(unsigned long long)searchResultType;
-(id)parentAttachmentFromRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
-(NSString *)handwritingSummary;
-(NSString *)imageClassificationSummary;
-(BOOL)isInNoteTitleOrSnippet;
-(void)updatePreviewsFromRecord:(id)arg1 ;
-(id)fallbackImageEncryptedURL;
-(id)fallbackImageURL;
-(BOOL)isNews;
-(id)searchableTextContentWithoutTitle;
-(void)setURL:(NSURL *)arg1 ;
-(id)defaultTitle;
-(void)setFallbackSubtitleIOS:(NSString *)arg1 ;
-(void)setFallbackSubtitleMac:(NSString *)arg1 ;
-(void)fixMarkedForDeletionForScannedDocuments;
-(NSString *)fallbackSubtitleIOS;
-(NSString *)fallbackSubtitleMac;
-(void)updateMarkedForDeletionStateAttachmentIsInNote:(BOOL)arg1 ;
-(id)recordZoneName;
-(void)recursivelyAddSubAttachments:(id)arg1 ;
-(id)recordType;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 ;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)arg1 height:(double)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 scaleWhenDrawing:(BOOL)arg5 metadata:(id)arg6 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)hasMetadata;
-(id)dataSourceIdentifier;
-(id)contentIdentifier;
-(NSString *)userTitle;
-(NSString *)additionalIndexableText;
-(id)fallbackImageData;
-(id)fallbackImageUTI;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)preferLocalPreviewImages;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isiTunes;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)saveAndClearDecryptedData;
-(void)accountWillChangeToAccount:(id)arg1 ;
-(void)unmarkForDeletion;
-(id)ic_loggingValues;
-(BOOL)isSettingMergeableData;
-(id)tableModel;
-(id)searchDomainIdentifier;
-(void)loadFromArchive:(const Attachment*)arg1 dataPersister:(id)arg2 withIdentifierMap:(id)arg3 ;
-(void)saveToArchive:(Attachment*)arg1 dataPersister:(id)arg2 stripImageMarkupMetadata:(BOOL)arg3 ;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(NSString *)description;
-(unsigned long long)approximateArchiveSizeIncludingPreviews:(BOOL)arg1 ;
-(id)parentEncryptableObject;
-(NSString *)summary;
-(void)attachmentDidChange;
-(BOOL)isChildOfDocumentGallery;
-(id)attachmentModel;
-(BOOL)isBeingEditedLocallyOnDevice;
-(void)setIsBeingEditedLocallyOnDevice:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)updateParentReferenceIfNecessary;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)isEncryptableKeyBinaryData:(id)arg1 ;
-(id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3 ;
-(NSString *)fallbackTitle;
-(BOOL)hasAllMandatoryFields;
-(BOOL)isFolder;
-(NSURL *)URL;
-(void)invalidateAttachmentPreviewImages;
-(void)updateAttachmentSectionWithTypeUTI:(id)arg1 ;
-(ICAttachment *)rootParentAttachment;
-(BOOL)isAppStore;
-(void)updateCombinedSummary;
-(void)setSettingMergeableData:(BOOL)arg1 ;
-(void)setAdditionalIndexableText:(NSString *)arg1 ;
-(BOOL)isDrawing;
-(BOOL)supportsRenaming;
-(id)previewImageCacheKey;
-(BOOL)supportsSavingAttachmentToExternalFile;
-(BOOL)isLoadingFromCloud;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1 ;
-(void)deleteFromLocalDatabase;
-(void)setMovie:(AVAsset *)arg1 ;
-(void)setHandwritingSummary:(NSString *)arg1 ;
-(void)setOcrSummary:(NSString *)arg1 ;
-(void)resetUniqueIdentifier;
-(BOOL)hasAnyPNGPreviewImageFiles;
-(BOOL)needsToBePushedToCloud;
-(void)setImageClassificationSummary:(NSString *)arg1 ;
-(NSRange)rangeInNote;
-(id)parentCloudObject;
-(id)childCloudObjects;
-(id)childCloudObjectsForMinimumSupportedVersionPropagation;
-(void)setTypeUTI:(NSString *)arg1 ;
-(void)markForDeletion;
-(void)willRefresh:(BOOL)arg1 ;
-(void)didRefresh:(BOOL)arg1 ;
-(void)setRemoteFileURL:(NSURL *)arg1 ;
-(id)previewItemTitle;
-(id)previewItemURL;
-(void)setSummary:(NSString *)arg1 ;
-(id)unsupportedAttachmentTitle;
-(id)unsupportedAttachmentSubtitle;
-(BOOL)shouldEmbedMarkupDataInMedia;
-(BOOL)locationNeedsUpdate;
-(void)deleteAttachmentPreviewImages;
-(void)undeleteAttachmentPreviewImages;
-(void)clearCachedImages;
-(void)didTurnIntoFault;
-(id)userActivityContentAttributeSet;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(id)searchIndexingIdentifier;
-(id)searchableItemAttributeSet;
-(id)dataForTypeIdentifier:(id)arg1 ;
-(id)fileURLForTypeIdentifier:(id)arg1 ;
-(NSDictionary *)metadata;
-(NSData *)mergeableData;
-(void)setParentAttachment:(ICAttachment *)arg1 ;
-(void)addLocationIfNeeded;
-(void)regenerateTitle;
-(void)updateAfterMediaChange;
-(id)addMediaWithData:(id)arg1 filename:(id)arg2 ;
-(id)addMediaWithURL:(id)arg1 ;
-(void)purgeAttachmentPreviewImages;
-(BOOL)checkPreviewImagesIntegrity;
-(id)drawingModel;
-(id)galleryModel;
-(void)setUserTitle:(NSString *)arg1 ;
-(void)setImageFilterType:(short)arg1 ;
-(void)setMarkupModelData:(NSData *)arg1 ;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 ;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(BOOL)arg4 ;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 matchScale:(BOOL)arg4 matchAppearance:(BOOL)arg5 ;
-(id)updateAttachmentPreviewImageWithImageSrc:(CGImageSourceRef)arg1 maxDimension:(double)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 scaleWhenDrawing:(BOOL)arg5 metadata:(id)arg6 sendNotification:(BOOL)arg7 ;
-(id)inlineDrawingModel;
-(void)setMergeableData:(NSData *)arg1 ;
-(void)saveMergeableDataIfNeeded;
-(id)addMediaWithFileWrapper:(id)arg1 ;
-(void)updatePlaceInLocationIfNeededHandler:(/*^block*/id)arg1 ;
-(id)addMediaWithURL:(id)arg1 updateFileBasedAttributes:(BOOL)arg2 ;
-(BOOL)isMovable;
-(short)attachmentType;
-(id)addMediaWithData:(id)arg1 filename:(id)arg2 updateFileBasedAttributes:(BOOL)arg3 ;
-(id)addLocationWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)writeFallbackImageData:(id)arg1 ;
-(void)loadPreviewArchive:(const PreviewImage*)arg1 previewDataIdentifier:(id)arg2 dataPersister:(id)arg3 ;
-(id)updateAttachmentPreviewImageWithImageData:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 scaleWhenDrawing:(BOOL)arg5 metadata:(id)arg6 sendNotification:(BOOL)arg7 ;
-(id)searchableTextContent;
-(NSURL *)remoteFileURL;
-(NSData *)markupModelData;
-(BOOL)hasCroppingQuad;
-(BOOL)hasFallbackImage;
-(void)savePreview:(id)arg1 toArchive:(PreviewImage*)arg2 previewDataIdentifier:(id)arg3 dataPersister:(id)arg4 ;
-(NSString *)title;
-(void)setUrlString:(NSString *)arg1 ;
-(BOOL)isTable;
-(void)dealloc;
-(id)fileSizeString;
-(void)setOrientation:(short)arg1 ;
-(BOOL)supportsDeletionByTTL;
-(BOOL)needsToBeRequested;
-(id)attachmentPreviewImageWithMinSize:(CGSize)arg1 scale:(double)arg2 ;
@end
