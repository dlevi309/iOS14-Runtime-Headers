/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/NWStatisticsManagerDelegate.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NWStatisticsManager, NSObject, AWDLibnetcoreStatsReport, mbufRecord, NSString;

@interface KernelStatisticsHandler : NSObject <NWStatisticsManagerDelegate, ConfigurableObjectProtocol> {

	unsigned _coalescedReportPending;
	NWStatisticsManager* _nwStatManager;
	NSObject*<OS_dispatch_queue> _queue;
	AWDLibnetcoreStatsReport* _kernelStatisticsReport;
	mbufRecord* _lastReport;

}

@property (retain) NWStatisticsManager * nwStatManager;                            //@synthesize nwStatManager=_nwStatManager - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (retain) AWDLibnetcoreStatsReport * kernelStatisticsReport;              //@synthesize kernelStatisticsReport=_kernelStatisticsReport - In the implementation block
@property (retain) mbufRecord * lastReport;                                        //@synthesize lastReport=_lastReport - In the implementation block
@property (assign) unsigned coalescedReportPending;                                //@synthesize coalescedReportPending=_coalescedReportPending - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)statisticsManager:(id)arg1 didReceiveDirectSystemInformation:(id)arg2 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(mbufRecord *)lastReport;
-(void)setLastReport:(mbufRecord *)arg1 ;
-(void)coalescedReport;
-(NWStatisticsManager *)nwStatManager;
-(void)setNwStatManager:(NWStatisticsManager *)arg1 ;
-(AWDLibnetcoreStatsReport *)kernelStatisticsReport;
-(void)setKernelStatisticsReport:(AWDLibnetcoreStatsReport *)arg1 ;
-(unsigned)coalescedReportPending;
-(void)setCoalescedReportPending:(unsigned)arg1 ;
@end
