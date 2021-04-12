/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, NSNumber, NSArray, CPSClipInvocationPolicy, NSDate;

@interface CPSClipMetadata : NSObject <NSSecureCoding> {

	NSString* _storeClipName;
	NSString* _storeClipCaption;
	NSURL* _storeClipHeroImageURL;
	NSString* _abrClipName;
	NSString* _abrClipCaption;
	NSURL* _abrClipHeroImageURL;
	BOOL _clipIncompatibleWithCurrentDevice;
	BOOL _clipRequestsNotificationPermission;
	BOOL _clipRequestsLocationConfirmationPermission;
	BOOL _hasBusinessItemMetadata;
	BOOL _hasAppStoreMetadata;
	BOOL _poweredByThirdParty;
	BOOL _deviceCapabilitiesDontMatch;
	BOOL _isDeveloperOverride;
	NSString* _clipBundleID;
	long long _clipAction;
	NSString* _clipMinimumOSVersion;
	NSURL* _clipIpaURL;
	NSURL* _clipRequestURL;
	NSURL* _clipURL;
	NSURL* _clipTargetURL;
	NSURL* _clipBusinessIconURL;
	NSDictionary* _clipBusinessIconStyleAttributes;
	NSNumber* _clipMapItemMUID;
	NSString* _clipURLHash;
	NSArray* _clipVerifiedAssociatedDomains;
	CPSClipInvocationPolicy* _invocationPolicy;
	NSString* _fullAppName;
	NSString* _fullAppCaption;
	NSString* _fullAppContentRating;
	NSString* _fullAppBundleID;
	NSURL* _fullAppStoreURL;
	NSURL* _fullAppIconURL;
	NSString* _fullAppCachedIconFilePath;
	NSString* _provider;
	NSNumber* _itemID;
	NSString* _webClipID;
	NSString* _buyParams;
	NSDate* _expirationDate;
	NSDictionary* _amsDictionary;
	unsigned long long _clipVersionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * localizedTitleForClipSuggestion; 
@property (nonatomic,copy,readonly) NSString * localizedSubtitleForClipSuggestion; 
@property (nonatomic,copy) NSString * buyParams;                                                   //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,copy) NSString * clipBundleID;                                                //@synthesize clipBundleID=_clipBundleID - In the implementation block
@property (assign,nonatomic) BOOL clipIncompatibleWithCurrentDevice;                               //@synthesize clipIncompatibleWithCurrentDevice=_clipIncompatibleWithCurrentDevice - In the implementation block
@property (nonatomic,readonly) BOOL hasFullAppInstalledOnSystem; 
@property (nonatomic,copy) NSURL * clipIpaURL;                                                     //@synthesize clipIpaURL=_clipIpaURL - In the implementation block
@property (nonatomic,retain) NSURL * clipURL;                                                      //@synthesize clipURL=_clipURL - In the implementation block
@property (nonatomic,retain) NSURL * clipRequestURL;                                               //@synthesize clipRequestURL=_clipRequestURL - In the implementation block
@property (nonatomic,copy) NSString * fullAppName;                                                 //@synthesize fullAppName=_fullAppName - In the implementation block
@property (nonatomic,copy) NSString * fullAppCaption;                                              //@synthesize fullAppCaption=_fullAppCaption - In the implementation block
@property (nonatomic,copy) NSString * fullAppContentRating;                                        //@synthesize fullAppContentRating=_fullAppContentRating - In the implementation block
@property (nonatomic,copy) NSString * fullAppBundleID;                                             //@synthesize fullAppBundleID=_fullAppBundleID - In the implementation block
@property (nonatomic,copy) NSURL * fullAppStoreURL;                                                //@synthesize fullAppStoreURL=_fullAppStoreURL - In the implementation block
@property (nonatomic,copy) NSURL * fullAppIconURL;                                                 //@synthesize fullAppIconURL=_fullAppIconURL - In the implementation block
@property (nonatomic,copy) NSString * provider;                                                    //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                                      //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * webClipID;                                                   //@synthesize webClipID=_webClipID - In the implementation block
@property (nonatomic,retain) NSString * clipURLHash;                                               //@synthesize clipURLHash=_clipURLHash - In the implementation block
@property (nonatomic,retain) NSArray * test_clipVerifiedAssociatedDomains; 
@property (nonatomic,readonly) BOOL isDeveloperOverride;                                           //@synthesize isDeveloperOverride=_isDeveloperOverride - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,copy) NSDictionary * amsDictionary;                                           //@synthesize amsDictionary=_amsDictionary - In the implementation block
@property (assign,nonatomic) unsigned long long clipVersionIdentifier;                             //@synthesize clipVersionIdentifier=_clipVersionIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * clipLaunchURL; 
@property (nonatomic,retain) CPSClipInvocationPolicy * invocationPolicy;                           //@synthesize invocationPolicy=_invocationPolicy - In the implementation block
@property (assign,nonatomic) BOOL deviceCapabilitiesDontMatch;                                     //@synthesize deviceCapabilitiesDontMatch=_deviceCapabilitiesDontMatch - In the implementation block
@property (nonatomic,readonly) NSString * clipName; 
@property (nonatomic,readonly) NSString * clipCaption; 
@property (nonatomic,readonly) long long clipAction;                                               //@synthesize clipAction=_clipAction - In the implementation block
@property (nonatomic,readonly) NSString * clipMinimumOSVersion;                                    //@synthesize clipMinimumOSVersion=_clipMinimumOSVersion - In the implementation block
@property (nonatomic,readonly) NSURL * clipHeroImageURL; 
@property (nonatomic,readonly) NSString * clipOpenButtonTitle; 
@property (nonatomic,readonly) NSURL * clipTargetURL;                                              //@synthesize clipTargetURL=_clipTargetURL - In the implementation block
@property (nonatomic,readonly) NSURL * clipBusinessIconURL;                                        //@synthesize clipBusinessIconURL=_clipBusinessIconURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * clipBusinessIconStyleAttributes;                     //@synthesize clipBusinessIconStyleAttributes=_clipBusinessIconStyleAttributes - In the implementation block
@property (nonatomic,readonly) NSNumber * clipMapItemMUID;                                         //@synthesize clipMapItemMUID=_clipMapItemMUID - In the implementation block
@property (nonatomic,readonly) BOOL clipRequestsNotificationPermission;                            //@synthesize clipRequestsNotificationPermission=_clipRequestsNotificationPermission - In the implementation block
@property (nonatomic,readonly) BOOL clipRequestsLocationConfirmationPermission;                    //@synthesize clipRequestsLocationConfirmationPermission=_clipRequestsLocationConfirmationPermission - In the implementation block
@property (nonatomic,readonly) NSArray * clipVerifiedAssociatedDomains;                            //@synthesize clipVerifiedAssociatedDomains=_clipVerifiedAssociatedDomains - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessItemMetadata;                                       //@synthesize hasBusinessItemMetadata=_hasBusinessItemMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAppStoreMetadata;                                           //@synthesize hasAppStoreMetadata=_hasAppStoreMetadata - In the implementation block
@property (getter=isPoweredByThirdParty,nonatomic,readonly) BOOL poweredByThirdParty;              //@synthesize poweredByThirdParty=_poweredByThirdParty - In the implementation block
@property (nonatomic,copy) NSString * fullAppCachedIconFilePath;                                   //@synthesize fullAppCachedIconFilePath=_fullAppCachedIconFilePath - In the implementation block
@property (nonatomic,readonly) NSString * bundleDisplayName; 
+(BOOL)supportsSecureCoding;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setProvider:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)clipBundleID;
-(NSString *)provider;
-(long long)clipAction;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)clipURL;
-(NSString *)clipCaption;
-(NSURL *)clipHeroImageURL;
-(NSString *)clipOpenButtonTitle;
-(id)description;
-(NSNumber *)itemID;
-(void)setBuyParams:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSString *)clipName;
-(id)initWithCoder:(id)arg1 ;
-(void)setClipBundleID:(NSString *)arg1 ;
-(NSURL *)clipBusinessIconURL;
-(NSString *)fullAppName;
-(NSURL *)fullAppIconURL;
-(NSString *)buyParams;
-(BOOL)clipIncompatibleWithCurrentDevice;
-(CPSClipInvocationPolicy *)invocationPolicy;
-(void)setClipURL:(NSURL *)arg1 ;
-(NSString *)webClipID;
-(void)setFullAppCachedIconFilePath:(NSString *)arg1 ;
-(id)initWithBusinessItem:(id)arg1 ;
-(NSURL *)clipRequestURL;
-(void)setClipRequestURL:(NSURL *)arg1 ;
-(NSDictionary *)amsDictionary;
-(BOOL)hasUpToDateVersionInstalledOnSystemIsPlaceholder:(BOOL*)arg1 ;
-(id)initWithDeveloperOverride:(id)arg1 invocationURL:(id)arg2 ;
-(BOOL)isPoweredByThirdParty;
-(NSString *)fullAppCaption;
-(NSString *)localizedTitleForClipSuggestion;
-(NSString *)localizedSubtitleForClipSuggestion;
-(NSString *)bundleDisplayName;
-(NSString *)fullAppCachedIconFilePath;
-(NSURL *)fullAppStoreURL;
-(NSURL *)clipLaunchURL;
-(void)setFullAppName:(NSString *)arg1 ;
-(void)setFullAppCaption:(NSString *)arg1 ;
-(void)setFullAppStoreURL:(NSURL *)arg1 ;
-(void)setInvocationPolicy:(CPSClipInvocationPolicy *)arg1 ;
-(void)_updateWithAMSMetadata:(id)arg1 ;
-(BOOL)hasValidAssociatedDomainsToLaunchAppClip;
-(NSNumber *)clipMapItemMUID;
-(NSDictionary *)clipBusinessIconStyleAttributes;
-(BOOL)isDeveloperOverride;
-(BOOL)clipRequestsLocationConfirmationPermission;
-(BOOL)clipRequestsNotificationPermission;
-(unsigned long long)clipVersionIdentifier;
-(void)setWebClipID:(NSString *)arg1 ;
-(NSString *)clipMinimumOSVersion;
-(NSString *)clipURLHash;
-(NSString *)fullAppBundleID;
-(id)initWithDictionary:(id)arg1 bundleURL:(id)arg2 ;
-(id)initWithUncheckedDictionary:(id)arg1 ;
-(void)setFullAppBundleID:(NSString *)arg1 ;
-(void)setFullAppIconURL:(NSURL *)arg1 ;
-(void)setClipVersionIdentifier:(unsigned long long)arg1 ;
-(void)setClipIncompatibleWithCurrentDevice:(BOOL)arg1 ;
-(void)setFullAppContentRating:(NSString *)arg1 ;
-(id)_itemIDFromAppURLString:(id)arg1 ;
-(NSArray *)clipVerifiedAssociatedDomains;
-(NSString *)fullAppContentRating;
-(NSURL *)clipIpaURL;
-(void)setClipIpaURL:(NSURL *)arg1 ;
-(BOOL)deviceCapabilitiesDontMatch;
-(id)initWithDemoBundleURL:(id)arg1 ;
-(void)updateWithStoreParentAppMetadata:(id)arg1 ;
-(void)updateWithStoreClipMetadata:(id)arg1 ;
-(BOOL)hasFullAppInstalledOnSystem;
-(NSArray *)test_clipVerifiedAssociatedDomains;
-(void)setTest_clipVerifiedAssociatedDomains:(NSArray *)arg1 ;
-(NSURL *)clipTargetURL;
-(void)setClipURLHash:(NSString *)arg1 ;
-(BOOL)hasBusinessItemMetadata;
-(BOOL)hasAppStoreMetadata;
-(void)setDeviceCapabilitiesDontMatch:(BOOL)arg1 ;
-(void)setAmsDictionary:(NSDictionary *)arg1 ;
@end
