/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMUserDefaults.h>

@class NSString, NSNumber, NSDate, NSData, REMObjectID, NSURL, NSDateComponents, NSDictionary;

@interface REMDaemonUserDefaults : REMUserDefaults

@property (nonatomic,readonly) BOOL newAppShouldTakeoverEKReminderNotifications; 
@property (nonatomic,readonly) BOOL dataaccessDaemonStopSyncingReminders; 
@property (nonatomic,readonly) BOOL siriShouldRouteIntentsToNewRemindersApp; 
@property (assign,nonatomic) BOOL databaseMigrationTestModeEnabled; 
@property (assign,nonatomic) BOOL isDatabaseMigrated; 
@property (assign,nonatomic) BOOL databaseMigrationTimedOut; 
@property (nonatomic,copy) NSString * lastDatabaseMigrationSystemBuildVersion; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationMaxNumInvocations; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationMaxNumFailures; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationDelayAfterError; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationObserverPollingInterval; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationSimulatedError; 
@property (nonatomic,retain) NSNumber * cloudKitResultsLimitPerSyncOperation; 
@property (assign,nonatomic) BOOL cloudKitMigrationDisableCleanUp; 
@property (nonatomic,retain) NSString * acAccountIdentifierToMergeLocalDataIntoSyncData; 
@property (nonatomic,retain) NSString * acAccountIdentifierToMigrateInactivatedCalDavData; 
@property (nonatomic,retain) NSDate * cloudKitMergeLocalLastDateMaxRetryReached; 
@property (nonatomic,retain) NSString * cloudKitMergeLocalLastBuildVersionMaxRetryReached; 
@property (nonatomic,copy) NSNumber * spotlightIndexVersion; 
@property (nonatomic,copy) NSDate * nextScheduledAlarmDate; 
@property (nonatomic,copy) NSDate * lastPresentAlarmDate; 
@property (nonatomic,copy) NSData * lastSuggestedAttributesAutoTrainingToken; 
@property (nonatomic,copy) NSDate * lastSyncPoll; 
@property (nonatomic,copy) NSData * userInteractionsData; 
@property (assign,nonatomic) BOOL simulateMAIDAccount; 
@property (assign,nonatomic) BOOL showRemindersAsOverdue; 
@property (assign,nonatomic) BOOL enableWelcomeScreen; 
@property (assign,nonatomic) BOOL forceShowWelcomeScreen; 
@property (assign,nonatomic) BOOL enableInAppDebugMenu; 
@property (nonatomic,retain) REMObjectID * preferredDefaultListID; 
@property (nonatomic,retain) NSURL * preferredDefaultListObjectIDUrl; 
@property (nonatomic,retain) NSDateComponents * todayNotificationFireTime; 
@property (assign,nonatomic) BOOL disableAlarmEngineDataSourcePrefetching; 
@property (assign,nonatomic) BOOL enableAssignmentNotifications; 
@property (nonatomic,copy) NSDictionary * suggestedAttributesTrainingOverrides; 
@property (nonatomic,copy) NSDictionary * suggestedAttributesHarvestingOverrides; 
@property (nonatomic,copy) NSDictionary * suggestedAttributesAccepted; 
@property (nonatomic,copy) NSData * accountsListCategorizedCountsCache; 
@property (assign,nonatomic) BOOL debugSimulateSqliteFull; 
+(id)todayNotificationFireTimeFromStorageNumber:(id)arg1 ;
+(id)storageNumberForTodayNotificationTime:(id)arg1 ;
+(id)defaultValues;
-(id)_pptPreferredDefaultListIDKey;
-(void)setBestKForKNN:(id)arg1 ;
-(BOOL)forceShowWelcomeScreen;
-(NSDate *)cloudKitMergeLocalLastDateMaxRetryReached;
-(void)setForceShowWelcomeScreen:(BOOL)arg1 ;
-(NSString *)cloudKitMergeLocalLastBuildVersionMaxRetryReached;
-(BOOL)showRemindersAsOverdue;
-(BOOL)enableWelcomeScreen;
-(void)_deletePreferredDefaultListObjectIDUrl;
-(NSNumber *)cloudKitMigrationObserverPollingInterval;
-(NSNumber *)spotlightIndexVersion;
-(BOOL)newAppShouldTakeoverEKReminderNotifications;
-(void)setDatabaseMigrationTimedOut:(BOOL)arg1 ;
-(void)setEnableAssignmentNotifications:(BOOL)arg1 ;
-(NSURL *)preferredDefaultListObjectIDUrl;
-(NSDateComponents *)todayNotificationFireTime;
-(NSNumber *)cloudKitResultsLimitPerSyncOperation;
-(void)setCloudKitMergeLocalLastDateMaxRetryReached:(NSDate *)arg1 ;
-(NSString *)acAccountIdentifierToMergeLocalDataIntoSyncData;
-(NSDate *)nextScheduledAlarmDate;
-(void)setLastSuggestedAttributesAutoTrainingToken:(NSData *)arg1 ;
-(void)setLastDatabaseMigrationSystemBuildVersion:(NSString *)arg1 ;
-(void)setEnableInAppDebugMenu:(BOOL)arg1 ;
-(BOOL)databaseMigrationTimedOut;
-(BOOL)simulateMAIDAccount;
-(void)setUserInteractionsData:(NSData *)arg1 ;
-(NSData *)lastSuggestedAttributesAutoTrainingToken;
-(void)setCloudKitMigrationDisableCleanUp:(BOOL)arg1 ;
-(void)setIsDatabaseMigrated:(BOOL)arg1 ;
-(void)setCloudKitMigrationMaxNumInvocations:(NSNumber *)arg1 ;
-(NSDate *)lastPresentAlarmDate;
-(void)setDebugSimulateSqliteFull:(BOOL)arg1 ;
-(NSDictionary *)suggestedAttributesHarvestingOverrides;
-(void)setPreferredDefaultListID:(REMObjectID *)arg1 ;
-(void)setSimulateMAIDAccount:(BOOL)arg1 ;
-(NSNumber *)cloudKitMigrationDelayAfterError;
-(NSDate *)lastSyncPoll;
-(void)setSuggestedAttributesHarvestingOverrides:(NSDictionary *)arg1 ;
-(NSDictionary *)suggestedAttributesAccepted;
-(void)deletePreferredDefaultListID;
-(NSNumber *)cloudKitMigrationMaxNumFailures;
-(void)setCloudKitMergeLocalLastBuildVersionMaxRetryReached:(NSString *)arg1 ;
-(NSData *)accountsListCategorizedCountsCache;
-(void)setAccountsListCategorizedCountsCache:(NSData *)arg1 ;
-(void)setAcAccountIdentifierToMergeLocalDataIntoSyncData:(NSString *)arg1 ;
-(void)setSuggestedAttributesAccepted:(NSDictionary *)arg1 ;
-(void)updateAcceptedAttributesForReminderWithID:(id)arg1 attributeType:(id)arg2 ;
-(void)setTodayNotificationFireTime:(NSDateComponents *)arg1 ;
-(void)ppt_handleRestore;
-(void)setEnableWelcomeScreen:(BOOL)arg1 ;
-(BOOL)hasSuggestedRecentlyForReminderWithID:(id)arg1 attributeType:(id)arg2 ;
-(NSNumber *)cloudKitMigrationSimulatedError;
-(void)setPreferredDefaultListObjectIDUrl:(NSURL *)arg1 ;
-(void)setCloudKitMigrationDelayAfterError:(NSNumber *)arg1 ;
-(void)setDisableAlarmEngineDataSourcePrefetching:(BOOL)arg1 ;
-(void)setCloudKitMigrationSimulatedError:(NSNumber *)arg1 ;
-(void)setNextScheduledAlarmDate:(NSDate *)arg1 ;
-(id)streamTodayNotificationFireTime:(/*^block*/id)arg1 ;
-(BOOL)cloudKitMigrationDisableCleanUp;
-(BOOL)debugSimulateSqliteFull;
-(id)_reminderIDAttributeKey:(id)arg1 attributeType:(id)arg2 ;
-(NSString *)lastDatabaseMigrationSystemBuildVersion;
-(id)initWithSuiteName:(id)arg1 containerURL:(id)arg2 ;
-(BOOL)isDatabaseMigrated;
-(void)setDatabaseMigrationTestModeEnabled:(BOOL)arg1 ;
-(BOOL)siriShouldRouteIntentsToNewRemindersApp;
-(REMObjectID *)preferredDefaultListID;
-(BOOL)databaseMigrationTestModeEnabled;
-(id)observePreferredDefaultListIDWithBlock:(/*^block*/id)arg1 ;
-(BOOL)disableAlarmEngineDataSourcePrefetching;
-(BOOL)dataaccessDaemonStopSyncingReminders;
-(void)setCloudKitMigrationMaxNumFailures:(NSNumber *)arg1 ;
-(void)setAcAccountIdentifierToMigrateInactivatedCalDavData:(NSString *)arg1 ;
-(void)setLastPresentAlarmDate:(NSDate *)arg1 ;
-(void)setCloudKitMigrationObserverPollingInterval:(NSNumber *)arg1 ;
-(NSData *)userInteractionsData;
-(void)setLastSyncPoll:(NSDate *)arg1 ;
-(void)setShowRemindersAsOverdue:(BOOL)arg1 ;
-(NSString *)acAccountIdentifierToMigrateInactivatedCalDavData;
-(NSDictionary *)suggestedAttributesTrainingOverrides;
-(void)ppt_handleInstall;
-(BOOL)enableAssignmentNotifications;
-(void)setSuggestedAttributesTrainingOverrides:(NSDictionary *)arg1 ;
-(void)setCloudKitResultsLimitPerSyncOperation:(NSNumber *)arg1 ;
-(BOOL)enableInAppDebugMenu;
-(void)setSpotlightIndexVersion:(NSNumber *)arg1 ;
-(id)observeShowRemindersAsOverdueWithBlock:(/*^block*/id)arg1 ;
-(void)setCoreBehaviorTrainingParameters:(id)arg1 ;
-(NSNumber *)cloudKitMigrationMaxNumInvocations;
@end
