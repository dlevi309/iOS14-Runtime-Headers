/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMApplicationStoreDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowAppInstallation;
	NSNumber* _payloadAllowAppClips;
	NSNumber* _payloadAllowUIAppInstallation;
	NSNumber* _payloadAllowAutomaticAppDownloads;
	NSNumber* _payloadAllowSystemAppRemoval;
	NSNumber* _payloadAllowAppRemoval;
	NSNumber* _payloadAllowInAppPurchases;
	NSNumber* _payloadForceITunesStorePasswordEntry;

}

@property (nonatomic,copy) NSNumber * payloadAllowAppInstallation;                       //@synthesize payloadAllowAppInstallation=_payloadAllowAppInstallation - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAppClips;                              //@synthesize payloadAllowAppClips=_payloadAllowAppClips - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowUIAppInstallation;                     //@synthesize payloadAllowUIAppInstallation=_payloadAllowUIAppInstallation - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAutomaticAppDownloads;                 //@synthesize payloadAllowAutomaticAppDownloads=_payloadAllowAutomaticAppDownloads - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowSystemAppRemoval;                      //@synthesize payloadAllowSystemAppRemoval=_payloadAllowSystemAppRemoval - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAppRemoval;                            //@synthesize payloadAllowAppRemoval=_payloadAllowAppRemoval - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowInAppPurchases;                        //@synthesize payloadAllowInAppPurchases=_payloadAllowInAppPurchases - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceITunesStorePasswordEntry;              //@synthesize payloadForceITunesStorePasswordEntry=_payloadForceITunesStorePasswordEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowAppInstallation:(id)arg2 withAllowAppClips:(id)arg3 withAllowUIAppInstallation:(id)arg4 withAllowAutomaticAppDownloads:(id)arg5 withAllowSystemAppRemoval:(id)arg6 withAllowAppRemoval:(id)arg7 withAllowInAppPurchases:(id)arg8 withForceITunesStorePasswordEntry:(id)arg9 ;
+(id)buildWithIdentifier:(id)arg1 withAllowAppInstallation:(id)arg2 withAllowUIAppInstallation:(id)arg3 withAllowAutomaticAppDownloads:(id)arg4 withAllowSystemAppRemoval:(id)arg5 withAllowAppRemoval:(id)arg6 withAllowInAppPurchases:(id)arg7 withForceITunesStorePasswordEntry:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowAppInstallation:(NSNumber *)arg1 ;
-(void)setPayloadAllowAppClips:(NSNumber *)arg1 ;
-(void)setPayloadAllowUIAppInstallation:(NSNumber *)arg1 ;
-(void)setPayloadAllowAutomaticAppDownloads:(NSNumber *)arg1 ;
-(void)setPayloadAllowSystemAppRemoval:(NSNumber *)arg1 ;
-(void)setPayloadAllowAppRemoval:(NSNumber *)arg1 ;
-(void)setPayloadAllowInAppPurchases:(NSNumber *)arg1 ;
-(void)setPayloadForceITunesStorePasswordEntry:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowAppInstallation;
-(NSNumber *)payloadAllowAppClips;
-(NSNumber *)payloadAllowUIAppInstallation;
-(NSNumber *)payloadAllowAutomaticAppDownloads;
-(NSNumber *)payloadAllowSystemAppRemoval;
-(NSNumber *)payloadAllowAppRemoval;
-(NSNumber *)payloadAllowInAppPurchases;
-(NSNumber *)payloadForceITunesStorePasswordEntry;
@end
