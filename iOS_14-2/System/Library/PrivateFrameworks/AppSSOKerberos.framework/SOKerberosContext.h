/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@protocol OS_dispatch_group;
@class NSString, SOKerberosExtensionData, SOKerberosExtensionUserData, NSUUID, NSData, SOSiteCode, NSDate, NSObject, SONetworkIdentity, ASAuthorizationProviderExtensionAuthorizationRequest, SORealmSettingManager, SOKerberosRealmSettings;

@interface SOKerberosContext : NSObject {

	BOOL _userNameIsReadOnly;
	BOOL _returnCredentialOnly;
	BOOL _credsCameFromKeychain;
	BOOL _requestCancelled;
	BOOL _attemptedToGetCredsFromKeychain;
	BOOL _forceLoginViewController;
	BOOL _isManagedApp;
	BOOL _smartCardNeedsInsert;
	BOOL _requestStarted;
	NSString* _userPrincipalName;
	NSString* _userName;
	NSString* _realm;
	SOKerberosExtensionData* _extensionData;
	SOKerberosExtensionUserData* _extensionUserData;
	NSString* _hostName;
	NSString* _servicePrincipalName;
	NSString* _serviceName;
	NSString* _password;
	NSString* _changedPassword;
	NSUUID* _credentialUUID;
	NSData* _certificateSerialNumber;
	NSData* _certificateIssuer;
	NSString* _certificateTokenID;
	SOSiteCode* _siteCode;
	NSString* _cacheName;
	NSString* _callerBundleIdentifier;
	NSString* _callerLocalizedName;
	NSDate* _loginTimeStamp;
	NSObject*<OS_dispatch_group> _siteCodeGroup;
	SONetworkIdentity* _networkIdentity;
	NSData* _auditToken;
	ASAuthorizationProviderExtensionAuthorizationRequest* _authorizationRequest;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	SORealmSettingManager* _settingsManager;

}

@property (nonatomic,retain) ASAuthorizationProviderExtensionAuthorizationRequest * authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> dispatchGroup;                                                         //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
@property (nonatomic,retain) SORealmSettingManager * settingsManager;                                                  //@synthesize settingsManager=_settingsManager - In the implementation block
@property (assign,nonatomic) BOOL requestStarted;                                                                      //@synthesize requestStarted=_requestStarted - In the implementation block
@property (assign,nonatomic) BOOL requestCancelled;                                                                    //@synthesize requestCancelled=_requestCancelled - In the implementation block
@property (nonatomic,retain) NSString * realm;                                                                         //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) SOKerberosExtensionData * extensionData;                                                  //@synthesize extensionData=_extensionData - In the implementation block
@property (nonatomic,retain) SOKerberosExtensionUserData * extensionUserData;                                          //@synthesize extensionUserData=_extensionUserData - In the implementation block
@property (nonatomic,retain) NSString * hostName;                                                                      //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) NSString * servicePrincipalName;                                                          //@synthesize servicePrincipalName=_servicePrincipalName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                                                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * password;                                                                      //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * changedPassword;                                                               //@synthesize changedPassword=_changedPassword - In the implementation block
@property (assign,nonatomic) BOOL userNameIsReadOnly;                                                                  //@synthesize userNameIsReadOnly=_userNameIsReadOnly - In the implementation block
@property (nonatomic,retain) NSString * userPrincipalName;                                                             //@synthesize userPrincipalName=_userPrincipalName - In the implementation block
@property (nonatomic,retain) NSString * userName;                                                                      //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSUUID * credentialUUID;                                                                  //@synthesize credentialUUID=_credentialUUID - In the implementation block
@property (nonatomic,retain) NSData * certificateSerialNumber;                                                         //@synthesize certificateSerialNumber=_certificateSerialNumber - In the implementation block
@property (nonatomic,retain) NSData * certificateIssuer;                                                               //@synthesize certificateIssuer=_certificateIssuer - In the implementation block
@property (nonatomic,retain) NSString * certificateTokenID;                                                            //@synthesize certificateTokenID=_certificateTokenID - In the implementation block
@property (nonatomic,retain) SOSiteCode * siteCode;                                                                    //@synthesize siteCode=_siteCode - In the implementation block
@property (nonatomic,retain) NSString * cacheName;                                                                     //@synthesize cacheName=_cacheName - In the implementation block
@property (assign,nonatomic) BOOL returnCredentialOnly;                                                                //@synthesize returnCredentialOnly=_returnCredentialOnly - In the implementation block
@property (nonatomic,readonly) SOKerberosRealmSettings * currentSettings; 
@property (nonatomic,retain) NSString * callerBundleIdentifier;                                                        //@synthesize callerBundleIdentifier=_callerBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * callerLocalizedName;                                                           //@synthesize callerLocalizedName=_callerLocalizedName - In the implementation block
@property (assign,nonatomic) BOOL credsCameFromKeychain;                                                               //@synthesize credsCameFromKeychain=_credsCameFromKeychain - In the implementation block
@property (assign,nonatomic) BOOL attemptedToGetCredsFromKeychain;                                                     //@synthesize attemptedToGetCredsFromKeychain=_attemptedToGetCredsFromKeychain - In the implementation block
@property (assign,nonatomic) BOOL forceLoginViewController;                                                            //@synthesize forceLoginViewController=_forceLoginViewController - In the implementation block
@property (nonatomic,retain) NSDate * loginTimeStamp;                                                                  //@synthesize loginTimeStamp=_loginTimeStamp - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> siteCodeGroup;                                               //@synthesize siteCodeGroup=_siteCodeGroup - In the implementation block
@property (nonatomic,retain) SONetworkIdentity * networkIdentity;                                                      //@synthesize networkIdentity=_networkIdentity - In the implementation block
@property (nonatomic,readonly) NSData * auditToken;                                                                    //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) BOOL isManagedApp;                                                                      //@synthesize isManagedApp=_isManagedApp - In the implementation block
@property (assign,nonatomic) BOOL smartCardNeedsInsert;                                                                //@synthesize smartCardNeedsInsert=_smartCardNeedsInsert - In the implementation block
-(NSString *)realm;
-(void)startRequest;
-(void)cancelRequest;
-(SOKerberosRealmSettings *)currentSettings;
-(NSString *)callerBundleIdentifier;
-(NSString *)userName;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(NSData *)certificateSerialNumber;
-(void)presentAuthorizationViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)setCertificateSerialNumber:(NSData *)arg1 ;
-(NSUUID *)credentialUUID;
-(void)setCredentialUUID:(NSUUID *)arg1 ;
-(NSData *)auditToken;
-(void)setHostName:(NSString *)arg1 ;
-(NSString *)password;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)hostName;
-(NSString *)cacheName;
-(void)setPassword:(NSString *)arg1 ;
-(void)setExtensionData:(SOKerberosExtensionData *)arg1 ;
-(NSString *)serviceName;
-(ASAuthorizationProviderExtensionAuthorizationRequest *)authorizationRequest;
-(void)setRealm:(NSString *)arg1 ;
-(void)setCallerBundleIdentifier:(NSString *)arg1 ;
-(SORealmSettingManager *)settingsManager;
-(SOKerberosExtensionData *)extensionData;
-(void)waitForCompletion;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setSettingsManager:(SORealmSettingManager *)arg1 ;
-(void)setCacheName:(NSString *)arg1 ;
-(void)setAuthorizationRequest:(ASAuthorizationProviderExtensionAuthorizationRequest *)arg1 ;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)cancelRequest:(BOOL)arg1 ;
-(void)completeRequestWithError:(id)arg1 ;
-(void)completeRequest;
-(SOSiteCode *)siteCode;
-(void)setSiteCode:(SOSiteCode *)arg1 ;
-(NSString *)userPrincipalName;
-(void)setUserPrincipalName:(NSString *)arg1 ;
-(BOOL)requestStarted;
-(void)setRequestStarted:(BOOL)arg1 ;
-(void)setRequestCancelled:(BOOL)arg1 ;
-(void)finishRequest;
-(void)completeRequestWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(id)initWithRequest:(id)arg1 extensionData:(id)arg2 settingsManager:(id)arg3 ;
-(void)setUserPrincipalNameAfterAuth:(id)arg1 ;
-(void)completeRequestWithHeaders:(id)arg1 ;
-(void)completeRequestWithHTTPResponseHeaders:(id)arg1 ;
-(void)completeRequestWithDoNotHandle;
-(SOKerberosExtensionUserData *)extensionUserData;
-(void)setExtensionUserData:(SOKerberosExtensionUserData *)arg1 ;
-(NSString *)servicePrincipalName;
-(void)setServicePrincipalName:(NSString *)arg1 ;
-(NSString *)changedPassword;
-(void)setChangedPassword:(NSString *)arg1 ;
-(BOOL)userNameIsReadOnly;
-(void)setUserNameIsReadOnly:(BOOL)arg1 ;
-(NSData *)certificateIssuer;
-(void)setCertificateIssuer:(NSData *)arg1 ;
-(NSString *)certificateTokenID;
-(void)setCertificateTokenID:(NSString *)arg1 ;
-(BOOL)returnCredentialOnly;
-(void)setReturnCredentialOnly:(BOOL)arg1 ;
-(NSString *)callerLocalizedName;
-(void)setCallerLocalizedName:(NSString *)arg1 ;
-(BOOL)credsCameFromKeychain;
-(void)setCredsCameFromKeychain:(BOOL)arg1 ;
-(BOOL)requestCancelled;
-(BOOL)attemptedToGetCredsFromKeychain;
-(void)setAttemptedToGetCredsFromKeychain:(BOOL)arg1 ;
-(BOOL)forceLoginViewController;
-(void)setForceLoginViewController:(BOOL)arg1 ;
-(NSDate *)loginTimeStamp;
-(void)setLoginTimeStamp:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_group>)siteCodeGroup;
-(void)setSiteCodeGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(SONetworkIdentity *)networkIdentity;
-(void)setNetworkIdentity:(SONetworkIdentity *)arg1 ;
-(BOOL)isManagedApp;
-(BOOL)smartCardNeedsInsert;
-(void)setSmartCardNeedsInsert:(BOOL)arg1 ;
@end
