/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_os_transaction;
#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@class NSObject, ENExposureConfiguration, NSNumber;

@interface ENExposureCalculationSession : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	unsigned char _attenuationDurationThresholds[4];
	unsigned _scanInstanceBufferSize;
	SCD_Struct_EN14* _exposureWindowMetadataBuffer;
	unsigned _cachedExposureWindowMetadataCount;
	SCD_Struct_EN15* _scanInstanceBuffer;
	unsigned _cachedScanInstanceCount;
	BOOL _allowRecursiveReportType;
	BOOL _cacheExposureInfo;
	BOOL _cacheExposureWindows;
	unsigned _droppedScanInstanceCount;
	ENExposureConfiguration* _exposureConfiguration;
	NSNumber* _allowedRPIBroadcastDuration;
	NSNumber* _advertisementSampleCountThreshold;
	unsigned long long _cachedExposureWindowCount;

}

@property (nonatomic,readonly) unsigned droppedScanInstanceCount;                         //@synthesize droppedScanInstanceCount=_droppedScanInstanceCount - In the implementation block
@property (assign,nonatomic) BOOL allowRecursiveReportType;                               //@synthesize allowRecursiveReportType=_allowRecursiveReportType - In the implementation block
@property (nonatomic,copy) ENExposureConfiguration * exposureConfiguration;               //@synthesize exposureConfiguration=_exposureConfiguration - In the implementation block
@property (nonatomic,copy) NSNumber * allowedRPIBroadcastDuration;                        //@synthesize allowedRPIBroadcastDuration=_allowedRPIBroadcastDuration - In the implementation block
@property (nonatomic,copy) NSNumber * advertisementSampleCountThreshold;                  //@synthesize advertisementSampleCountThreshold=_advertisementSampleCountThreshold - In the implementation block
@property (assign,nonatomic) BOOL cacheExposureInfo;                                      //@synthesize cacheExposureInfo=_cacheExposureInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long cachedExposureInfoCount; 
@property (assign,nonatomic) BOOL cacheExposureWindows;                                   //@synthesize cacheExposureWindows=_cacheExposureWindows - In the implementation block
@property (nonatomic,readonly) unsigned long long cachedExposureWindowCount;              //@synthesize cachedExposureWindowCount=_cachedExposureWindowCount - In the implementation block
-(void)dealloc;
-(id)exposureInfoForMatchedAdvertisements:(id)arg1 key:(id)arg2 ;
-(unsigned long long)cachedExposureInfoCount;
-(unsigned long long)cachedExposureWindowCount;
-(id)cachedExposuresDifferentialPrivacyRiskParameters;
-(void)enumerateCachedExposureInfo:(/*^block*/id)arg1 ;
-(id)initWithAttenuationThreshold:(unsigned char)arg1 capacity:(unsigned)arg2 ;
-(void)setAllowRecursiveReportType:(BOOL)arg1 ;
-(void)setExposureConfiguration:(ENExposureConfiguration *)arg1 ;
-(void)setAllowedRPIBroadcastDuration:(NSNumber *)arg1 ;
-(void)setAdvertisementSampleCountThreshold:(NSNumber *)arg1 ;
-(void)setCacheExposureInfo:(BOOL)arg1 ;
-(void)setCacheExposureWindows:(BOOL)arg1 ;
-(void)enumerateCachedExposureWindows:(/*^block*/id)arg1 inRange:(NSRange)arg2 withBatchSize:(unsigned)arg3 ;
-(unsigned char)weightedAttenuationValueForDurations:(unsigned*)arg1 ;
-(id)exposureWindowsForMatchedAdvertisements:(id)arg1 key:(id)arg2 options:(long long)arg3 ;
-(id)exposureInfoForExposureWindows:(id)arg1 key:(id)arg2 ;
-(void)enumerateCachedExposureInfo:(/*^block*/id)arg1 withBatchSize:(unsigned)arg2 ;
-(void)enumerateCachedExposureInfo:(/*^block*/id)arg1 inRange:(NSRange)arg2 withBatchSize:(unsigned)arg3 ;
-(BOOL)_shouldMatchKey:(id)arg1 ;
-(id)filterAdvertisements:(id)arg1 fromKey:(id)arg2 ;
-(SCD_Struct_EN15)scanInstanceFromAdvertisement:(id)arg1 key:(id)arg2 ;
-(void)enumerateCachedExposureWindows:(/*^block*/id)arg1 inRange:(NSRange)arg2 withBatchSize:(unsigned)arg3 options:(long long)arg4 ;
-(id)groupExposureWindowsByDay:(id)arg1 ;
-(id)groupExposureWindowsByInfectiousness:(id)arg1 ;
-(id)attenuationDurationMapDataForExposureWindows:(id)arg1 ;
-(id)exposureWindowsForMatchedAdvertisements:(id)arg1 key:(id)arg2 ;
-(unsigned)droppedScanInstanceCount;
-(BOOL)allowRecursiveReportType;
-(ENExposureConfiguration *)exposureConfiguration;
-(NSNumber *)allowedRPIBroadcastDuration;
-(NSNumber *)advertisementSampleCountThreshold;
-(BOOL)cacheExposureInfo;
-(BOOL)cacheExposureWindows;
@end
