/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPDecoderReadCoordinatorDelegate.h>

@class TSPObjectContext, TSPDeepCopyObjectMap, TSPObject, NSDictionary, TSPComponent, NSString;

@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {

	TSPObjectContext* _context;
	TSPDeepCopyObjectMap* _objectMap;
	TSPObject* _cachedMetadataObject;
	NSDictionary* _cachedDataMap;
	unsigned long long _readVersion;
	TSPComponent* _component;

}

@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)sourceType;
-(id)init;
-(unsigned long long)fileFormatVersion;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)isCrossAppPaste;
-(unsigned long long)readVersion;
-(long long)objectIdentifierForUUID:(id)arg1 ;
-(id)cachedMetadataObject;
-(id)metadataComponent;
-(BOOL)processMetadataObject:(id)arg1 error:(id*)arg2 ;
-(id)rootObjectComponent;
-(BOOL)canResolveExternalReferences;
-(BOOL)shouldResolveExternalReferencesUsingObjectUUID;
-(id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1 ;
-(id)cachedDataForIdentifier:(long long)arg1 ;
-(id)dataInfoForIdentifier:(long long)arg1 ;
-(BOOL)shouldDecodeMissingDataAsRemote;
-(BOOL)isCrossDocumentPaste;
-(id)initWithContext:(id)arg1 objectMap:(id)arg2 cachedMetadataObject:(id)arg3 cachedDataMap:(id)arg4 ;
-(id)decodeDeepCopySerializedData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

