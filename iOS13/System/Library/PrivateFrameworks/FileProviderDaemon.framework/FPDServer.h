/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, FPDCacheDeleteService, FPDActionOperationEngine, FPDAppMonitor, FPDExtensionManager, FPDPresenterManager, NSXPCListener, NSString;

@interface FPDServer : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_source> _sigIntSrc;
	NSObject*<OS_dispatch_source> _sigQuitSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSObject*<OS_dispatch_source> _machSrc;
	NSObject*<OS_dispatch_queue> _makeSureSetupEnqueued;
	NSObject*<OS_dispatch_queue> _setupQueue;
	NSObject*<OS_dispatch_queue> _afterSetupWorkQueue;
	NSObject*<OS_dispatch_group> _fileProviderManagerIsReadyGroup;
	NSObject*<OS_dispatch_queue> _machServerQueue;
	int _providerChangeNotificationToken;
	FPDCacheDeleteService* _cacheDelete;
	BOOL _isUnlocked;
	BOOL _isPastBuddy;
	FPDActionOperationEngine* _operationEngine;
	FPDAppMonitor* _appMonitor;
	FPDExtensionManager* _extensionManager;
	FPDPresenterManager* _presenterManager;
	Class _fpfsClass;
	Class _fpfsSQLBackupManagerClass;
	Class _fpfsSQLRestoreManagerClass;
	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSXPCListener * listener;                                  //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) FPDActionOperationEngine * operationEngine;              //@synthesize operationEngine=_operationEngine - In the implementation block
@property (nonatomic,readonly) FPDCacheDeleteService * cacheDelete;                     //@synthesize cacheDelete=_cacheDelete - In the implementation block
@property (nonatomic,readonly) FPDAppMonitor * appMonitor;                              //@synthesize appMonitor=_appMonitor - In the implementation block
@property (nonatomic,readonly) FPDExtensionManager * extensionManager;                  //@synthesize extensionManager=_extensionManager - In the implementation block
@property (nonatomic,readonly) FPDPresenterManager * presenterManager;                  //@synthesize presenterManager=_presenterManager - In the implementation block
@property (nonatomic,retain) Class fpfsClass;                                           //@synthesize fpfsClass=_fpfsClass - In the implementation block
@property (nonatomic,retain) Class fpfsSQLBackupManagerClass;                           //@synthesize fpfsSQLBackupManagerClass=_fpfsSQLBackupManagerClass - In the implementation block
@property (nonatomic,retain) Class fpfsSQLRestoreManagerClass;                          //@synthesize fpfsSQLRestoreManagerClass=_fpfsSQLRestoreManagerClass - In the implementation block
+(id)homeDirectory;
+(id)cloudStoragePath;
+(id)appSupportPath;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)_setup;
-(FPDAppMonitor *)appMonitor;
-(void)localeDidChange;
-(FPDExtensionManager *)extensionManager;
-(void)signalProviderChanges;
-(void)_initSignals;
-(void)handleExitSignal:(int)arg1 ;
-(void)exitWithCode:(int)arg1 ;
-(void)providersDidChange;
-(void)_finishSetup;
-(void)_startXPCListener;
-(void)_computeUnlockedStatus;
-(void)materializeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FPDActionOperationEngine *)operationEngine;
-(FPDCacheDeleteService *)cacheDelete;
-(FPDPresenterManager *)presenterManager;
-(Class)fpfsClass;
-(void)setFpfsClass:(Class)arg1 ;
-(Class)fpfsSQLBackupManagerClass;
-(void)setFpfsSQLBackupManagerClass:(Class)arg1 ;
-(Class)fpfsSQLRestoreManagerClass;
-(void)setFpfsSQLRestoreManagerClass:(Class)arg1 ;
@end
