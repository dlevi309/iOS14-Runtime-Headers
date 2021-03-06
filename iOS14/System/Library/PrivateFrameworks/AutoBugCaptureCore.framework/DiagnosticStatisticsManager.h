/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol OS_dispatch_queue;
@class NSObject, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics;

@interface DiagnosticStatisticsManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AnalyticsWorkspace* _workspace;
	DiagnosticCaseUsageAnalytics* _caseUsageSpace;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(long long)_removeAllDiagnosticCaseUsageFor:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)resetDiagnosticCaseUsage;
-(void)getDiagnosticCaseUsageStatistics:(/*^block*/id)arg1 ;
-(id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 onOrAfter:(id)arg5 create:(BOOL)arg6 ;
-(void)_updateCaseStatisticsWith:(id)arg1 ;
-(void)_updateDailyCaseStatisticsWith:(id)arg1 ;
-(void)_updateDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 lastSeen:(id)arg5 dampeningType:(BOOL)arg6 ;
-(id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(id)_createDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(id)initWithWorkspace:(id)arg1 queue:(id)arg2 ;
-(void)_checkFileWritingLimits:(id)arg1 ;
-(void)updateCaseStatisticsWith:(id)arg1 ;
-(double)_calculateAverageCasesPerDayFromDailyAggregatedStatistics;
-(long long)_removeDiagnosticCaseUsageMatchingDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(void)cleanupDiagnosticCaseUsage;
@end

