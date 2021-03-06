/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/


@protocol XBApplicationLaunchRequestProviding, XBApplicationProviding;
@class FBSDisplayConfiguration;

@interface XBApplicationController : NSObject {

	long long _statusBarOrientation;
	FBSDisplayConfiguration* _mainDisplayConfiguration;
	id<XBApplicationLaunchRequestProviding> _launchRequestProvider;
	id<XBApplicationProviding> _applicationProvider;

}

@property (nonatomic,readonly) id<XBApplicationProviding> applicationProvider;              //@synthesize applicationProvider=_applicationProvider - In the implementation block
-(void)dealloc;
-(void)_updateStatusBarOrientation;
-(void)_deleteLegacyCachesSnapshotPathsIfNeeded;
-(void)_migrateDataIfNeeded;
-(void)_removeAllGeneratedLaunchImagesAndSnapshots;
-(void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(BOOL)arg3 ;
-(void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(/*^block*/id)arg2 createCaptureInfo:(BOOL)arg3 completionWithCaptureInfo:(/*^block*/id)arg4 ;
-(id)_launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 ;
-(id)initWithMainDisplayConfiguration:(id)arg1 applicationProvider:(id)arg2 launchRequestProvider:(id)arg3 ;
-(void)removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(BOOL)arg2 ;
-(void)captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(/*^block*/id)arg2 completionWithCaptureInfo:(/*^block*/id)arg3 ;
-(id<XBApplicationProviding>)applicationProvider;
@end

