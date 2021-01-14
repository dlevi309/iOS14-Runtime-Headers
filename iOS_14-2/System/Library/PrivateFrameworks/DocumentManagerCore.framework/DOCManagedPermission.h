/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/


@class NSString, NSCache, ACAccountStore;

@interface DOCManagedPermission : NSObject {

	BOOL _mayOpenFromManagedToUnmanaged;
	BOOL _mayOpenFromUnmanagedToManaged;
	BOOL _isManagedAppsCloudSyncDisallowed;
	BOOL _hasOpenInRestrictions;
	BOOL _isUSBAccessAllowed;
	BOOL _isNetworkDriveAccessInFilesAllowed;
	BOOL _isLocalStorageAllowed;
	BOOL _didLoadSharedConnectionValues;
	NSString* _hostIdentifier;
	unsigned long long _hostAccountDataOwnerState;
	NSCache* _cache;
	NSCache* _appContainerIDCache;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) NSCache * cache;                                           //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSCache * appContainerIDCache;                             //@synthesize appContainerIDCache=_appContainerIDCache - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                             //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSString * hostIdentifier;                                   //@synthesize hostIdentifier=_hostIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long hostAccountDataOwnerState;              //@synthesize hostAccountDataOwnerState=_hostAccountDataOwnerState - In the implementation block
@property (nonatomic,readonly) BOOL hasOpenInRestrictions; 
@property (nonatomic,readonly) BOOL isUSBAccessAllowed; 
@property (nonatomic,readonly) BOOL isNetworkDriveAllowed; 
+(id)defaultPermission;
-(NSCache *)cache;
-(id)init;
-(void)setCache:(NSCache *)arg1 ;
-(ACAccountStore *)accountStore;
-(NSString *)hostIdentifier;
-(BOOL)isLocalStorageAllowed;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)setHostIdentifier:(NSString *)arg1 ;
-(BOOL)mayOpenFromUnmanagedToManaged;
-(BOOL)canAppWithBundleIdentifier:(id)arg1 performAction:(unsigned long long)arg2 bundleIdentifier:(id)arg3 ;
-(id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id*)arg4 ;
-(BOOL)mayOpenFromManagedToUnmanaged;
-(void)dealloc;
-(BOOL)canCopySourceIsContentManaged:(BOOL)arg1 ;
-(BOOL)canHostAppPerformAction:(unsigned long long)arg1 fileProviderDomain:(id)arg2 ;
-(id)defaultFileProviderForAppBundle:(id)arg1 ;
-(BOOL)canHostAppPerformAction:(unsigned long long)arg1 targetItem:(id)arg2 ;
-(void)_loadSharedConnectionValues;
-(BOOL)isManagedAppsCloudSyncDisallowed;
-(BOOL)hasOpenInRestrictions;
-(BOOL)isUSBAccessAllowed;
-(BOOL)isNetworkDriveAllowed;
-(void)setAppContainerIDCache:(NSCache *)arg1 ;
-(void)resetAllCachedPermissions;
-(BOOL)hasAnyEffectiveRestrictions;
-(unsigned long long)dataOwnerStateForBundleIdentifier:(id)arg1 ;
-(unsigned long long)dataOwnerStateForAccountIdentifier:(id)arg1 ;
-(BOOL)isManagedAppsCloudSyncAllowed;
-(BOOL)canAppWithDataOwnerState:(unsigned long long)arg1 performAction:(unsigned long long)arg2 dataOwnerState:(unsigned long long)arg3 ;
-(BOOL)canHostAppPerformAction:(unsigned long long)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)canAppWithDataOwnerState:(unsigned long long)arg1 performAction:(unsigned long long)arg2 item:(id)arg3 ;
-(BOOL)canAppWithBundleIdentifier:(id)arg1 performAction:(unsigned long long)arg2 accountIdentifier:(id)arg3 ;
-(unsigned long long)dataOwnerStateForItem:(id)arg1 ;
-(id)appContainerBundleIDForFPItem:(id)arg1 ;
-(unsigned long long)hostAccountDataOwnerState;
-(NSCache *)appContainerIDCache;
-(BOOL)canHostAppPerformAction:(unsigned long long)arg1 legacyPickerExtension:(id)arg2 ;
-(BOOL)canHostAppPerformAction:(unsigned long long)arg1 accountIdentifier:(id)arg2 ;
-(BOOL)canItem:(id)arg1 performAction:(unsigned long long)arg2 item:(id)arg3 ;
-(BOOL)canCopyfromContainingBundleIdentifer:(id)arg1 ;
-(BOOL)canCopyItems:(id)arg1 ;
-(void)cleanAppContainerBundleIDCache;
-(id)allowedFileProviderBundleIdentifiersForHostBundleIdentifier:(id)arg1 ;
-(void)setHostAccountDataOwnerState:(unsigned long long)arg1 ;
@end
