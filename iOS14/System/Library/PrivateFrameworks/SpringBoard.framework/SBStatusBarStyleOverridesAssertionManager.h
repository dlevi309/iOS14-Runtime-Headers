/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SBAppStatusBarAssertionManagerObserver.h>
#import <libobjc.A.dylib/SBStatusBarStyleOverridesAssertionServer.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, SBAppStatusBarAssertionManager, NSXPCListener, NSMapTable, NSObject, FBWorkspaceEventQueue, SBStatusBarTapManager, NSString;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBAppStatusBarAssertionManagerObserver, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding> {

	NSMutableArray* _runningUpdateTransactions;
	int _statusBarStyleOverrides;
	int _exclusiveStatusBarStyleOverrides;
	SBAppStatusBarAssertionManager* _appStatusBarAssertionManager;
	NSXPCListener* _xpcListener;
	NSMapTable* _assertionsByIdentifierByClientConnection;
	NSMapTable* _assertionsByStyleOverride;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableArray* _coordinatorConnectionsByStyleOverride;
	NSObject*<OS_dispatch_source> _assertionTimerSource;
	FBWorkspaceEventQueue* _eventQueue;
	SBStatusBarTapManager* _statusBarTapManager;

}

@property (nonatomic,retain) SBAppStatusBarAssertionManager * appStatusBarAssertionManager;              //@synthesize appStatusBarAssertionManager=_appStatusBarAssertionManager - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                                //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMapTable * assertionsByIdentifierByClientConnection;                      //@synthesize assertionsByIdentifierByClientConnection=_assertionsByIdentifierByClientConnection - In the implementation block
@property (nonatomic,retain) NSMapTable * assertionsByStyleOverride;                                     //@synthesize assertionsByStyleOverride=_assertionsByStyleOverride - In the implementation block
@property (nonatomic,retain) NSMutableArray * coordinatorConnectionsByStyleOverride;                     //@synthesize coordinatorConnectionsByStyleOverride=_coordinatorConnectionsByStyleOverride - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                 //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> assertionTimerSource;                         //@synthesize assertionTimerSource=_assertionTimerSource - In the implementation block
@property (nonatomic,retain) FBWorkspaceEventQueue * eventQueue;                                         //@synthesize eventQueue=_eventQueue - In the implementation block
@property (assign,nonatomic) int statusBarStyleOverrides;                                                //@synthesize statusBarStyleOverrides=_statusBarStyleOverrides - In the implementation block
@property (assign,nonatomic) int exclusiveStatusBarStyleOverrides;                                       //@synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides - In the implementation block
@property (nonatomic,readonly) SBStatusBarTapManager * statusBarTapManager;                              //@synthesize statusBarTapManager=_statusBarTapManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(id)succinctDescription;
-(FBWorkspaceEventQueue *)eventQueue;
-(void)setRegisteredOverrides:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)_internalQueue_coordinatorClientForStyleOverrides:(int)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSMapTable *)assertionsByIdentifierByClientConnection;
-(void)unregisterCoordinatorRegistrationForStyleOverrides:(id)arg1 ;
-(id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg1 inactiveAssertionsByStyleOverride:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)assertionTimerSource;
-(void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2 ;
-(void)_postStatusStringsByStyle:(id)arg1 ;
-(void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)arg1 removedStyleOverrides:(int)arg2 ;
-(id)_internalQueue_coordinatorClientForConnection:(id)arg1 ;
-(int)_internalQueue_removeAssertionByStyleOverrides:(id)arg1 ;
-(void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)_verifyCoordinatorEntitlementForStyleOverride:(id)arg1 onConnection:(id)arg2 ;
-(NSMapTable *)assertionsByStyleOverride;
-(SBStatusBarTapManager *)statusBarTapManager;
-(void)updateForegroundApplicationSceneHandles:(id)arg1 withOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)description;
-(void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setAssertionsByStyleOverride:(NSMapTable *)arg1 ;
-(void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplicationSceneHandles:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setStatusBarStyleOverrides:(int)arg1 ;
-(void)setEventQueue:(FBWorkspaceEventQueue *)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setAssertionsByIdentifierByClientConnection:(NSMapTable *)arg1 ;
-(void)setAppStatusBarAssertionManager:(SBAppStatusBarAssertionManager *)arg1 ;
-(int)exclusiveStatusBarStyleOverrides;
-(NSMutableArray *)coordinatorConnectionsByStyleOverride;
-(void)invalidateStatusBarStyleOverridesAssertions:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(int)statusBarStyleOverrides;
-(void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setCoordinatorConnectionsByStyleOverride:(NSMutableArray *)arg1 ;
-(SBAppStatusBarAssertionManager *)appStatusBarAssertionManager;
-(void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2 ;
-(BOOL)handleTapForStatusBarStyleOverride:(int)arg1 ;
-(void)setAssertionTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)statusBarAssertionManager:(id)arg1 statusBarSettingsDidChange:(id)arg2 ;
-(void)setExclusiveStatusBarStyleOverrides:(int)arg1 ;
-(int)_internalQueue_addAssertionByStyleOverrides:(id)arg1 ;
@end

