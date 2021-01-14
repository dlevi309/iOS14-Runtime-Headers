/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@interface SFSafariCredentialStore : NSObject
+(void)getAllApprovedSharedWebCredentialsEntries:(/*^block*/id)arg1 ;
+(void)getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)bestDomainForAutoFillFromDomains:(id)arg1 appID:(id)arg2 ;
+(void)bestDomainForAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)titleForPasswordCredentialIdentity:(id)arg1 formURL:(id)arg2 ;
+(void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 websiteURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)isAppAutoFillAvailable;
+(void)getCredentialsForAppWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_approvedAndValidSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_getExternalCredentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_credentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 savedPasswords:(id)arg3 ;
+(id)_highLevelDomainsFromDatabaseEntries:(id)arg1 ;
+(BOOL)_savedPassword:(id)arg1 isRelatedToEntryHighLevelDomains:(id)arg2 andWebsiteURL:(id)arg3 ;
+(void)_sortCredentials:(id)arg1 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg2 ;
+(void)_getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 shouldAnalyzeExistingCredentials:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)_getBundleIDForPrimaryCredentialProviderWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)_bestDomainFromApprovedDomainsForWebCredentials:(id)arg1 appLinks:(id)arg2 otherServices:(id)arg3 appID:(id)arg4 allDomains:(id*)arg5 ;
+(void)getApprovedSharedWebCredentialsEntriesForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_credentialProviderExtensionHelperProxy;
+(BOOL)isRemoteAutoFillAvailable;
+(void)getCredentialsForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getAllCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)getCanSaveCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)textSuggestionHeaderForExternalCredential:(id)arg1 ;
@end
