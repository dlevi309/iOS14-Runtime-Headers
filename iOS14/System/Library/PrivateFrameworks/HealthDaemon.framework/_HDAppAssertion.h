/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSMutableDictionary, HDProfile, HDAppAssertionManager, NSObject, NSMutableSet;

@interface _HDAppAssertion : NSObject {

	BOOL _invalidated;
	NSString* _bundleIdentifier;
	NSMutableDictionary* _pendingDataTypeCodesToAnchors;
	double _lastLaunchAttempt;
	long long _launchErrorCount;
	HDProfile* _profile;
	HDAppAssertionManager* _assertionManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _pendingLaunchCompletions;
	NSObject*<OS_dispatch_source> _processDeathSource;
	NSMutableSet* _processAssertions;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                         //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) HDAppAssertionManager * assertionManager;                    //@synthesize assertionManager=_assertionManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingLaunchCompletions;                     //@synthesize pendingLaunchCompletions=_pendingLaunchCompletions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> processDeathSource;                   //@synthesize processDeathSource=_processDeathSource - In the implementation block
@property (nonatomic,readonly) NSMutableSet * processAssertions;                                 //@synthesize processAssertions=_processAssertions - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                   //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingDataTypeCodesToAnchors;              //@synthesize pendingDataTypeCodesToAnchors=_pendingDataTypeCodesToAnchors - In the implementation block
@property (nonatomic,readonly) double lastLaunchAttempt;                                         //@synthesize lastLaunchAttempt=_lastLaunchAttempt - In the implementation block
@property (nonatomic,readonly) double nextLaunchAttempt; 
@property (nonatomic,readonly) long long launchErrorCount;                                       //@synthesize launchErrorCount=_launchErrorCount - In the implementation block
-(void)setProfile:(HDProfile *)arg1 ;
-(BOOL)invalidated;
-(HDAppAssertionManager *)assertionManager;
-(double)lastLaunchAttempt;
-(NSString *)bundleIdentifier;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)_queue_invalidate;
-(HDProfile *)profile;
-(unsigned long long)hash;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAssertionManager:(HDAppAssertionManager *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)launchBundleIdentifier;
-(void)_queue_acquireAssertionWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 profile:(id)arg3 queue:(id)arg4 ;
-(void)launchWithCompletion:(/*^block*/id)arg1 ;
-(void)extendForDataType:(long long)arg1 anchor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateForDataType:(long long)arg1 anchor:(id)arg2 ;
-(double)nextLaunchAttempt;
-(NSMutableDictionary *)pendingDataTypeCodesToAnchors;
-(long long)launchErrorCount;
-(NSMutableDictionary *)pendingLaunchCompletions;
-(void)setPendingLaunchCompletions:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)processDeathSource;
-(void)setProcessDeathSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableSet *)processAssertions;
@end

