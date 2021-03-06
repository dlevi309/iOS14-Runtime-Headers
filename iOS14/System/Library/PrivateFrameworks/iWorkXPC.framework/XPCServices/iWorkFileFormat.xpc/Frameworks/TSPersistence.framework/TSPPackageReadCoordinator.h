/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPReadCoordinatorBase.h>
#import <TSPersistence/TSPPersistedObjectUUIDMapDelegate.h>
#import <TSPersistence/TSPReadCoordinator.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class TSPObjectContext, NSUUID, TSPObject, TSPPackage, NSURL, TSPFinalizeHandlerQueue, TSPPackageMetadata, TSPPersistedObjectUUIDMap, NSMutableSet, NSObject, NSArray, NSMapTable, NSSet, TSPDocumentRevision, TSPObjectContainer, NSString;

@interface TSPPackageReadCoordinator : TSPReadCoordinatorBase <TSPPersistedObjectUUIDMapDelegate, TSPReadCoordinator> {

	TSPObjectContext* _context;
	NSUUID* _documentUUID;
	TSPObject* _documentObject;
	TSPPackage* _package;
	NSURL* _packageURL;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;
	BOOL _areExternalDataReferencesAllowed;
	BOOL _skipDocumentUpgrade;
	unsigned long long _readVersion;
	TSPPackageMetadata* _cachedMetadata;
	TSPPersistedObjectUUIDMap* _persistedUUIDMap;
	vector<std::__1::unique_ptr<TSP::PersistedObjectUUIDMapOperation, std::__1::default_delete<TSP::PersistedObjectUUIDMapOperation> >, std::__1::allocator<std::__1::unique_ptr<TSP::PersistedObjectUUIDMapOperation, std::__1::default_delete<TSP::PersistedObjectUUIDMapOperation> > > >* _persistedUUIDMapOperations;
	NSMutableSet* _duplicatedUUIDs;
	NSMutableSet* _componentIdentifiersWithDuplicatedUUIDs;
	NSObject*<OS_dispatch_group> _completionGroup;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_queue> _ioCompletionQueue;
	NSObject*<OS_dispatch_queue> _readCompletionQueue;
	NSObject*<OS_dispatch_queue> _componentQueue;
	unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readIdentifiers;
	NSArray* _componentsToUpgrade;
	NSObject*<OS_dispatch_queue> _objectQueue;
	NSMapTable* _objects;
	unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readExternalObjects;
	BOOL _losesDataOnWrite;
	BOOL _didRequireUpgrade;
	long long _archiveValidationMode;
	NSSet* _featureIdentifiers;
	NSSet* _unsupportedFeatureIdentifiers;
	TSPDocumentRevision* _documentRevision;
	unsigned long long _saveToken;
	long long _preferredPackageType;
	TSPObjectContainer* _objectContainer;
	TSPObject* _metadataObject;

}

@property (nonatomic,readonly) BOOL losesDataOnWrite;                               //@synthesize losesDataOnWrite=_losesDataOnWrite - In the implementation block
@property (nonatomic,readonly) NSSet * featureIdentifiers;                          //@synthesize featureIdentifiers=_featureIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * unsupportedFeatureIdentifiers;               //@synthesize unsupportedFeatureIdentifiers=_unsupportedFeatureIdentifiers - In the implementation block
@property (nonatomic,readonly) TSPDocumentRevision * documentRevision;              //@synthesize documentRevision=_documentRevision - In the implementation block
@property (nonatomic,readonly) unsigned long long saveToken;                        //@synthesize saveToken=_saveToken - In the implementation block
@property (nonatomic,readonly) long long preferredPackageType;                      //@synthesize preferredPackageType=_preferredPackageType - In the implementation block
@property (nonatomic,readonly) TSPObjectContainer * objectContainer;                //@synthesize objectContainer=_objectContainer - In the implementation block
@property (nonatomic,readonly) TSPObject * metadataObject;                          //@synthesize metadataObject=_metadataObject - In the implementation block
@property (nonatomic,readonly) BOOL didRequireUpgrade;                              //@synthesize didRequireUpgrade=_didRequireUpgrade - In the implementation block
@property (nonatomic,readonly) BOOL isReadingFromDocument; 
@property (nonatomic,readonly) long long archiveValidationMode;                     //@synthesize archiveValidationMode=_archiveValidationMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)sourceType;
-(id)init;
-(id)context;
-(unsigned char)packageIdentifier;
-(TSPObject *)metadataObject;
-(unsigned long long)fileFormatVersion;
-(BOOL)hasDocumentVersionUUID;
-(long long)archiveValidationMode;
-(TSPDocumentRevision *)documentRevision;
-(unsigned long long)saveToken;
-(TSPObjectContainer *)objectContainer;
-(NSSet *)featureIdentifiers;
-(id)readPackageMetadataWithError:(id*)arg1 ;
-(id)initWithContext:(id)arg1 package:(id)arg2 packageURL:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(BOOL)arg5 skipDocumentUpgrade:(BOOL)arg6 archiveValidationMode:(long long)arg7 ;
-(long long)preferredPackageType;
-(void)updateObjectContextForSuccessfulRead;
-(BOOL)didRequireUpgrade;
-(BOOL)losesDataOnWrite;
-(NSSet *)unsupportedFeatureIdentifiers;
-(void)readRootObjectWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validateArchiveWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)endReading;
-(void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canRetainObjectReferencedByWeakLazyReference;
-(unsigned long long)readVersion;
-(id)persistedObjectUUIDMap:(id)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 ;
-(void)persistedObjectUUIDMap:(id)arg1 foundDuplicateUUID:(id)arg2 firstObjectLocation:(ObjectLocation)arg3 secondObjectLocation:(ObjectLocation)arg4 ;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)isReadingFromDocument;
-(void)didUpdateLazyReferenceDelegate:(id)arg1 ;
-(id)baseObjectUUID;
-(id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2 ;
-(id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3 ;
-(void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2 ;
-(long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2 ;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2 ;
-(long long)metadataObjectIdentifier;
-(void)postprocessMetadata:(id)arg1 ;
-(void)p_readComponent:(id)arg1 additionalComponents:(id)arg2 requireUpgrade:(BOOL)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)readPackageMetadataWithComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)p_readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)readComponentIfNeededAsync:(id)arg1 ;
-(void)prepareForFullDocumentUpgradeImpl;
-(void)readComponentAsync:(id)arg1 ;
-(void)didReadObjects:(id)arg1 forComponent:(id)arg2 packageIdentifier:(unsigned char)arg3 ;
-(void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)preprocessMetadata:(id)arg1 ;
-(unsigned long long)fileFormatVersionFromMetadataMessage:(const PackageMetadata*)arg1 ;
-(id)newObjectUUIDForObjectIdentifier:(long long)arg1 ;
-(id)p_allComponentsInPackage;
-(void)p_validateComponent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(BOOL)arg3 fromComponent:(id)arg4 ;
-(void)prepareForFullDocumentUpgrade;
-(void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3 ;
-(void)reader:(id)arg1 didResetObjectUUID:(id)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(id)arg4 ;
@end

