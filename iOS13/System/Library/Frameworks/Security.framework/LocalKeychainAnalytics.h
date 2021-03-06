/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/SFAnalytics.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSDate;

@interface LocalKeychainAnalytics : SFAnalytics {

	BOOL _probablyInClassD;
	NSMutableArray* _pendingReports;
	NSObject*<OS_dispatch_queue> _queue;
	int _notificationToken;
	NSDate* _backupStartTime;
	int _backupType;

}
+(id)databasePath;
-(id)init;
-(BOOL)canPersistMetrics;
-(void)processPendingMessages;
-(void)reportKeychainUpgradeFrom:(int)arg1 to:(int)arg2 outcome:(int)arg3 error:(id)arg4 ;
-(void)reportKeychainUpgradeOutcome:(int)arg1 attributes:(id)arg2 ;
-(void)reportKeychainBackupStartWithType:(int)arg1 ;
-(void)reportKeychainBackupEnd:(BOOL)arg1 error:(id)arg2 ;
@end

