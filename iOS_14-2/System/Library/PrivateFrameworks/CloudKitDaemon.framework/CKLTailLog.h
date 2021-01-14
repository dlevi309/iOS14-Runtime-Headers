/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <LoggingSupport/OSActivityStream.h>
#import <libobjc.A.dylib/OSLogPersistenceDelegate.h>
#import <libobjc.A.dylib/OSActivityStreamDelegate.h>

@protocol OS_dispatch_queue;
@class OSLogPersistence, OSActivityStream, NSMutableArray, NSObject, NSString;

@interface CKLTailLog : OSActivityStream <OSLogPersistenceDelegate, OSActivityStreamDelegate> {

	BOOL _stillReadingFromArchive;
	BOOL _continueToReturnResults;
	OSLogPersistence* _logPersistence;
	OSActivityStream* _activityStream;
	NSMutableArray* _results;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) OSLogPersistence * logPersistence;               //@synthesize logPersistence=_logPersistence - In the implementation block
@property (nonatomic,retain) OSActivityStream * activityStream;               //@synthesize activityStream=_activityStream - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                        //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) BOOL stillReadingFromArchive;                    //@synthesize stillReadingFromArchive=_stillReadingFromArchive - In the implementation block
@property (assign,nonatomic) BOOL continueToReturnResults;                    //@synthesize continueToReturnResults=_continueToReturnResults - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)results;
-(id)init;
-(OSActivityStream *)activityStream;
-(void)streamDidStop:(id)arg1 ;
-(BOOL)activityStream:(id)arg1 results:(id)arg2 ;
-(void)streamDidFail:(id)arg1 error:(id)arg2 ;
-(void)start;
-(void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)persistence:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startFromStartDate:(id)arg1 ;
-(OSLogPersistence *)logPersistence;
-(void)setLogPersistence:(OSLogPersistence *)arg1 ;
-(void)setActivityStream:(OSActivityStream *)arg1 ;
-(BOOL)stillReadingFromArchive;
-(void)setStillReadingFromArchive:(BOOL)arg1 ;
-(BOOL)continueToReturnResults;
-(void)setContinueToReturnResults:(BOOL)arg1 ;
@end
