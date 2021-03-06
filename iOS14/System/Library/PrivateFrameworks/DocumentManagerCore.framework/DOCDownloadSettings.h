/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/


@class NSArray, NSError, FPItem;

@interface DOCDownloadSettings : NSObject {

	NSArray* _providers;
	NSError* _providersObserverError;
	id _providersObserverContext;
	FPItem* _currentDefaultDownloadsLocationItem;

}

@property (retain) NSArray * providers;                                       //@synthesize providers=_providers - In the implementation block
@property (retain) NSError * providersObserverError;                          //@synthesize providersObserverError=_providersObserverError - In the implementation block
@property (retain) id providersObserverContext;                               //@synthesize providersObserverContext=_providersObserverContext - In the implementation block
@property (retain) FPItem * currentDefaultDownloadsLocationItem;              //@synthesize currentDefaultDownloadsLocationItem=_currentDefaultDownloadsLocationItem - In the implementation block
-(NSArray *)providers;
-(id)init;
-(void)setProviders:(NSArray *)arg1 ;
-(void)fetchProvidersSuitableForDownloads:(/*^block*/id)arg1 ;
-(void)fetchDefaultDownloadsLocationItem:(/*^block*/id)arg1 ;
-(void)setDefaultDownloadsItemForProviderDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultDownloadsLocationItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentDefaultDownloadsLocationItem:(FPItem *)arg1 ;
-(void)_fetchDefaultFallbackDownloadLocationWithPreferredDomain:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FPItem *)currentDefaultDownloadsLocationItem;
-(void)_removeCurrentDownloadsLocationFromFavorites;
-(BOOL)_saveDownloadFolderItem:(id)arg1 error:(id*)arg2 ;
-(id)_createErrorForCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3 ;
-(void)_createDefaultDownloadsFolderInParent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_rootItemOfPreferredProviderInDomains:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchProviders:(/*^block*/id)arg1 ;
-(void)_fetchAvailableProviders:(/*^block*/id)arg1 ;
-(void)_preferredProvidersIn:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_validatePreferredProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetDefaultDownloadsLocationItem;
-(NSError *)providersObserverError;
-(void)setProvidersObserverError:(NSError *)arg1 ;
-(id)providersObserverContext;
-(void)setProvidersObserverContext:(id)arg1 ;
@end

