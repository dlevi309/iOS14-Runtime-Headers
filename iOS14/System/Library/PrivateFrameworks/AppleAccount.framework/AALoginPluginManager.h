/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@protocol OS_dispatch_queue, AASetupAssistantDelegateService;
@class NSArray, NSObject;

@interface AALoginPluginManager : NSObject {

	NSArray* _allowedPluginBundleIDs;
	NSArray* _plugins;
	BOOL _shouldStashLoginResponse;
	NSObject*<OS_dispatch_queue> _pluginNotificationQueue;
	id<AASetupAssistantDelegateService> _idsPlugin;
	BOOL _shouldSkipiTunesPlugin;

}

@property (assign,nonatomic) BOOL shouldSkipiTunesPlugin;                //@synthesize shouldSkipiTunesPlugin=_shouldSkipiTunesPlugin - In the implementation block
@property (assign,nonatomic) BOOL shouldStashLoginResponse; 
+(id)sharedInstance;
-(id)_plugins;
-(id)init;
-(id)_idsPlugin;
-(id)_loadPluginsLimitedToBundleIDs:(id)arg1 ;
-(void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 ;
-(id)_createLoginContextForAppleID:(id)arg1 rawPassword:(id)arg2 loginResponse:(id)arg3 ;
-(void)restrictToPluginBundleIDs:(id)arg1 ;
-(id)collectParametersForLoginRequest;
-(id)collectParametersForIdentityEstablishmentRequest;
-(void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldStashLoginResponse;
-(void)setShouldStashLoginResponse:(BOOL)arg1 ;
-(void)unstashLoginResponse;
-(BOOL)shouldSkipiTunesPlugin;
-(void)setShouldSkipiTunesPlugin:(BOOL)arg1 ;
@end

