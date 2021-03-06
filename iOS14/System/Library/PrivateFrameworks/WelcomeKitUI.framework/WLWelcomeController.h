/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <libobjc.A.dylib/WLSourceDevicesDelegate.h>
#import <libobjc.A.dylib/WLDataMigrationDelegate.h>
#import <libobjc.A.dylib/BFFNavigationControllerDelegate.h>

@protocol OS_dispatch_queue;
@class BFFNavigationController, WLSourceDevicesController, WLSourceDevice, WLDataMigrationController, NSObject, NSString;

@interface WLWelcomeController : NSObject <WLSourceDevicesDelegate, WLDataMigrationDelegate, BFFNavigationControllerDelegate> {

	BOOL _uiTestMode;
	BOOL _forceUITestModeDownloadError;
	BFFNavigationController* _navigationController;
	WLSourceDevicesController* _sourceDevicesController;
	BOOL _dismissAfterSourceDevicePairingTimeout;
	WLSourceDevice* _sourceDevice;
	BOOL _migrateUsingRetryPolicies;
	unsigned long long _migrationState;
	WLDataMigrationController* _migrationController;
	NSObject*<OS_dispatch_queue> _migrationControllerDelegateQueueTargetedAtMainQueue;
	BOOL _migrationControllerIsRestartable;
	BOOL _migrationConcluded;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setNavigationController:(id)arg1 ;
-(void)dealloc;
-(void)dataMigratorDidGetInterrupted;
-(void)dataMigrator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sourceDeviceController:(id)arg1 didDiscoverDevice:(id)arg2 ;
-(void)dataMigratorDidBecomeRestartable:(id)arg1 ;
-(void)dataMigratorDidFinish:(id)arg1 withImportErrors:(BOOL)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateMigrationState:(unsigned long long)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateRemainingDownloadTime:(double)arg2 ;
-(void)wifiAndDeviceDiscoveryDidGetInterrupted;
-(void)_setStashDataLocally:(BOOL)arg1 ;
-(void)_importLocalContent;
-(void)_configureWelcomeViewController:(id)arg1 ;
-(void)_startPairing;
-(void)_showPairingCode:(id)arg1 wifiPSK:(id)arg2 ssid:(id)arg3 ;
-(void)_completeWithSuccess:(BOOL)arg1 ;
-(void)_didPairWithSourceDevice:(id)arg1 ;
-(void)_pushViewController:(id)arg1 andRemovePreviousTopmostViewControllerWithCompletion:(/*^block*/id)arg2 ;
-(void)_sourceDevicePairingPeriodDidEnd;
-(void)_showPreparation;
-(void)_startMigration;
-(void)_didCompleteMigrationWithSuccess:(BOOL)arg1 retry:(BOOL)arg2 ;
-(void)_showWaitingForDataTypeSelection;
-(void)_showTransferring;
-(void)_updateTransferringForImport;
-(void)_showCompleted;
-(void)_showRetry;
-(id)initWithWelcomeViewController:(id)arg1 forceUITestMode:(BOOL)arg2 forceUITestModeDownloadError:(BOOL)arg3 ;
@end

