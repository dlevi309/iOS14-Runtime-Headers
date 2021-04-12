/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, MSDiagnosticManager, NSObject, NSDictionary;

@interface MSMessageLoadingAnalyticController : NSObject {

	NSMutableDictionary* _messageLoadTimes;
	MSDiagnosticManager* _diagnosticManager;
	NSObject*<OS_dispatch_queue> _serialMessageLoadingTimerQueue;
	unsigned long long _maxLoadingTimeSeconds;
	/*^block*/id _startedRecordingHandler;
	/*^block*/id _endedRecordingHandler;

}

@property (nonatomic,retain) MSDiagnosticManager * diagnosticManager;                                  //@synthesize diagnosticManager=_diagnosticManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialMessageLoadingTimerQueue;              //@synthesize serialMessageLoadingTimerQueue=_serialMessageLoadingTimerQueue - In the implementation block
@property (assign,nonatomic) unsigned long long maxLoadingTimeSeconds;                                 //@synthesize maxLoadingTimeSeconds=_maxLoadingTimeSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * messageLoadTimes;                                   //@synthesize messageLoadTimes=_messageLoadTimes - In the implementation block
@property (nonatomic,copy) id startedRecordingHandler;                                                 //@synthesize startedRecordingHandler=_startedRecordingHandler - In the implementation block
@property (nonatomic,copy) id endedRecordingHandler;                                                   //@synthesize endedRecordingHandler=_endedRecordingHandler - In the implementation block
-(MSDiagnosticManager *)diagnosticManager;
-(void)setDiagnosticManager:(MSDiagnosticManager *)arg1 ;
-(void)_commonInitWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2 ;
-(void)_startTimeoutForMessage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialMessageLoadingTimerQueue;
-(void)_endRecordingForMessage:(id)arg1 ;
-(id)endedRecordingHandler;
-(id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)arg1 ;
-(void)_calculateAndSubmitTimeForLoadingInfo:(id)arg1 ;
-(unsigned long long)maxLoadingTimeSeconds;
-(id)startedRecordingHandler;
-(id)initWithDiagnosticManager:(id)arg1 ;
-(id)initWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2 ;
-(void)startRecordingForMessage:(id)arg1 ;
-(void)endRecordingForMessage:(id)arg1 ;
-(void)endAllRecording;
-(void)setSerialMessageLoadingTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMaxLoadingTimeSeconds:(unsigned long long)arg1 ;
-(NSDictionary *)messageLoadTimes;
-(void)setStartedRecordingHandler:(id)arg1 ;
-(void)setEndedRecordingHandler:(id)arg1 ;
@end
