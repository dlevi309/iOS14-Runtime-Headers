/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPKeyStore.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _activeControllerIdentifier;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * activeControllerIdentifier;                       //@synthesize activeControllerIdentifier=_activeControllerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * activeControllerPairingIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)systemStore;
-(BOOL)updateActiveControllerPairingIdentifier:(id)arg1 ;
-(id)getOrCreateLocalPairingIdentity:(id*)arg1 ;
-(int)_getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 ;
-(int)_removeAccessoryKeyForName:(id)arg1 ;
-(BOOL)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3 ;
-(int)_removeControllerKeyPairForKeyType:(id)arg1 identifier:(id)arg2 leaveTombstone:(BOOL)arg3 ;
-(BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(BOOL)arg5 error:(id*)arg6 ;
-(int)_getPeripheralIdentifier:(id*)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long*)arg3 resumeSessionID:(unsigned long long*)arg4 ;
-(int)_saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3 keyType:(id)arg4 ;
-(int)_createControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 ;
-(int)_removeKeychainItem:(id)arg1 leaveTombstone:(BOOL)arg2 ;
-(int)_updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 ;
-(id)dumpState;
-(BOOL)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 previousVersion:(unsigned long long*)arg4 resumeSessionID:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)removeAccessoryKeyForName:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveLocalPairingIdentity:(id)arg1 syncable:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3 error:(id*)arg4 ;
-(id)getPeripherialIdentifiersAndAccessoryNames;
-(int)_savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4 ;
-(int)_addKeychainItem:(id)arg1 logDuplicateItemError:(BOOL)arg2 ;
-(BOOL)deserializeKeyPair:(id)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4 ;
-(BOOL)registerAccessoryWithHomeKit:(id)arg1 error:(id*)arg2 ;
-(BOOL)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id*)arg2 ;
-(int)_removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2 ;
-(id)auditKeysOfManagedAccessories:(id)arg1 ;
-(id)getLocalPairingIdentity:(id*)arg1 ;
-(BOOL)removeAllAccessoryKeys:(id*)arg1 ;
-(BOOL)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4 ;
-(id)_getControllerKeychainItemForKeyType:(id)arg1 error:(int*)arg2 ;
-(BOOL)deleteAllPeripheralIdentifiers:(id*)arg1 ;
-(int)_getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 ;
-(int)_getMetadataSecretKey:(id*)arg1 ;
-(id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)removeControllerKeyPairWithError:(id*)arg1 ;
-(void)setActiveControllerIdentifier:(NSString *)arg1 ;
-(BOOL)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2 error:(id*)arg3 ;
-(void)ensureControllerKeyExistsForAllViews;
-(void)_updateKeychainItemToInvisible:(id)arg1 ;
-(int)_getPublicKey:(id*)arg1 registeredWithHomeKit:(BOOL*)arg2 forAccessoryName:(id)arg3 ;
-(BOOL)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id*)arg3 ;
-(NSString *)activeControllerPairingIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_getControllerKeychainItemError:(int*)arg1 ;
-(int)_savePublicKey:(id)arg1 forAccessoryName:(id)arg2 ;
-(BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(BOOL)arg4 error:(id*)arg5 ;
-(id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(unsigned long long*)arg2 resumeSessionID:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3 ;
-(int)_deleteAllPeripheralIdentifiers;
-(id)_auditKeychainItems:(id)arg1 managedAccessories:(id)arg2 ;
-(BOOL)removeControllerKeyPairLeaveTombstone:(BOOL)arg1 error:(id*)arg2 ;
-(NSString *)activeControllerIdentifier;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)_deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 ;
-(int)_createMetadataSecretKey:(id*)arg1 ;
-(BOOL)getMetadataSecretKey:(id*)arg1 error:(id*)arg2 ;
-(id)_getLocalPairingIdentityAllowingCreation:(BOOL)arg1 error:(id*)arg2 ;
-(id)_getKeychainItemsForAccessGroup:(id)arg1 type:(id)arg2 account:(id)arg3 shouldReturnData:(BOOL)arg4 error:(int*)arg5 ;
@end
