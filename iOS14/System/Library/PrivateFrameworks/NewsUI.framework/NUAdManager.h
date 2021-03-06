/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>
#import <libobjc.A.dylib/NUAdProvider.h>
#import <libobjc.A.dylib/NUAdAnalyticsProvider.h>

@protocol NUAdManagerConfigurationProvider, NUDevice;
@class NUAdStore, NUAdInterstitial, NSString;

@interface NUAdManager : NSObject <NUAdContextProvider, NUAdProvider, NUAdAnalyticsProvider> {

	NUAdStore* _adStore;
	id<NUAdManagerConfigurationProvider> _configurationProvider;
	id<NUDevice> _device;
	NUAdInterstitial* _interstitialAdPendingLoad;

}

@property (nonatomic,readonly) NUAdStore * adStore;                                                     //@synthesize adStore=_adStore - In the implementation block
@property (nonatomic,readonly) id<NUAdManagerConfigurationProvider> configurationProvider;              //@synthesize configurationProvider=_configurationProvider - In the implementation block
@property (nonatomic,readonly) id<NUDevice> device;                                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NUAdInterstitial * interstitialAdPendingLoad;                              //@synthesize interstitialAdPendingLoad=_interstitialAdPendingLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUDevice>)device;
-(id<NUAdManagerConfigurationProvider>)configurationProvider;
-(NUAdStore *)adStore;
-(void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)interstitialViewForContextProviders:(id)arg1 layoutOptions:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)prerollForContextProviders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)videoPlaylistAdForContextProviders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)bannerViewDidLoad:(id)arg1 ;
-(void)bannerViewDidUnload:(id)arg1 ;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)initWithConfigurationProvider:(id)arg1 device:(id)arg2 ;
-(id)adWithIdentifier:(id)arg1 ;
-(id)inArticleContextConstructor;
-(void)adForIdentifier:(id)arg1 contextProviders:(id)arg2 constructor:(id)arg3 layoutOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(NUAdInterstitial *)interstitialAdPendingLoad;
-(id)interstitialContextConstructor;
-(id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 constructor:(id)arg3 ;
-(void)setInterstitialAdPendingLoad:(NUAdInterstitial *)arg1 ;
-(id)prerollContextConstructor;
-(void)videoAdForContextProviders:(id)arg1 constructor:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)videoPlaylistAdContextConstructor;
-(id)defaultRootDefinition;
-(id)defaultHeaderDefinition;
-(id)defaultBodyDefinition;
-(id)defaultArticleDefinition;
-(id)defaultIssueDefinition;
-(id)defaultFeedMetadataDefinition;
-(id)prerollRootDefinition;
-(id)prerollHeaderDefinition;
-(id)prerollBodyDefinition;
-(id)videoPlaylistAdRootDefinition;
-(id)videoInTodayHeaderDefinition;
-(id)videoPlaylistAdBodyDefinition;
@end

