/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleRecord.h>

@class LSBundleRecord, NSDictionary, LSPlugInKitProxy, NSString, NSUUID, LSExtensionPointRecord;

@interface LSApplicationExtensionRecord : LSBundleRecord {

	LSBundleRecord* _weakContainingBundleRecord;

}

@property (readonly) NSDictionary * iconDictionary; 
@property (readonly) LSBundleRecord * _containingBundleRecord; 
@property (nonatomic,readonly) LSPlugInKitProxy * compatibilityObject; 
@property (readonly) NSString * effectiveBundleIdentifier; 
@property (readonly) NSUUID * uniqueIdentifier; 
@property (readonly) LSBundleRecord * containingBundleRecord; 
@property (readonly) LSExtensionPointRecord * extensionPointRecord; 
+(BOOL)supportsSecureCoding;
+(id)enumeratorWithOptions:(unsigned long long)arg1 ;
+(id)_propertyClasses;
+(id)enumeratorWithExtensionPointRecord:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(id)effectiveBundleIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(id)extensionPointRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(id)_compatibilityObjectWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(char)developerType;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3 ;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)managedPersonas;
-(id)managedPersonasWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(void)_LSRecord_resolve__containingBundleRecord;
-(void)_LSRecord_resolve_iconDictionary;
-(id)_containingBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(void)_LSRecord_resolve_managedPersonas;
-(void)_LSRecord_resolve_uniqueIdentifier;
-(unsigned long long)_containerClass;
-(id)iconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)_initWithUUID:(id)arg1 node:(id)arg2 bundleIdentifier:(id)arg3 context:(LSContext*)arg4 error:(id*)arg5 ;
-(BOOL)_containerized;
-(id)uniqueIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(NSDictionary *)iconDictionary;
-(void)_LSRecord_resolve_effectiveBundleIdentifier;
-(id)_initWithContext:(LSContext*)arg1 pluginID:(unsigned)arg2 pluginData:(const LSPluginData*)arg3 error:(id*)arg4 ;
-(id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_usesSystemPersona;
-(id)intentsRestrictedWhileLocked;
-(LSExtensionPointRecord *)extensionPointRecord;
-(id)_intentsArrayForKey:(id)arg1 ;
-(void)_LSRecord_resolve_extensionPointRecord;
-(id)initWithUUID:(id)arg1 error:(id*)arg2 ;
-(NSString *)effectiveBundleIdentifier;
-(LSBundleRecord *)containingBundleRecord;
-(id)supportedIntentMediaCategories;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(LSBundleRecord *)_containingBundleRecord;
-(NSUUID *)uniqueIdentifier;
-(id)supportedIntents;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
