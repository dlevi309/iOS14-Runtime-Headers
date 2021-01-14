/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@class NSString, ENAdvertisementSQLiteStore, ENQueryFilter, NSNumber;

@interface ENAdvertisementDatabase : NSObject {

	SCD_Struct_EN7* _advertisementInsertionCache;
	unsigned _advertisementInsertionCacheCount;
	unsigned _advertisementInsertionIndex;
	BOOL _advertisementInsertionCacheOverflowed;
	unsigned long long _previousStoreFullAlertTimestamp;
	NSString* _databaseFolderPath;
	ENAdvertisementSQLiteStore* _centralStore;
	ENAdvertisementSQLiteStore* _temporaryStore;
	/*^block*/id _errorMetricReporter;
	unsigned long long _currentStoreType;
	ENQueryFilter* _inlineQueryFilter;
	unsigned long long _droppedAdvertisementCount;
	double _storageFullAlertInterval;

}

@property (nonatomic,readonly) unsigned long long currentStoreType;                       //@synthesize currentStoreType=_currentStoreType - In the implementation block
@property (nonatomic,readonly) BOOL temporaryStoresPresent; 
@property (nonatomic,retain) ENQueryFilter * inlineQueryFilter;                           //@synthesize inlineQueryFilter=_inlineQueryFilter - In the implementation block
@property (nonatomic,readonly) NSNumber * storedAdvertisementCount; 
@property (nonatomic,readonly) unsigned long long droppedAdvertisementCount;              //@synthesize droppedAdvertisementCount=_droppedAdvertisementCount - In the implementation block
@property (assign,nonatomic) double storageFullAlertInterval;                             //@synthesize storageFullAlertInterval=_storageFullAlertInterval - In the implementation block
+(BOOL)purgeAllStoresInPath:(id)arg1 ;
-(id)init;
-(BOOL)flushCache;
-(void)dealloc;
-(id)queryFilterWithBufferSize:(unsigned long long)arg1 hashCount:(unsigned long long)arg2 attenuationThreshold:(unsigned char)arg3 ;
-(void)setInlineQueryFilter:(ENQueryFilter *)arg1 ;
-(id)advertisementsBufferMatchingDailyKeys:(id)arg1 attenuationThreshold:(unsigned char)arg2 timestampTolerance:(double)arg3 ;
-(NSNumber *)storedAdvertisementCount;
-(id)beaconCountMetricsWithStartDate:(id)arg1 endDate:(id)arg2 windowDuration:(double)arg3 ;
-(id)initWithDatabaseFolderPath:(id)arg1 cacheCount:(unsigned long long)arg2 ;
-(id)initWithDatabaseFolderPath:(id)arg1 cacheCount:(unsigned long long)arg2 errorMetricReporter:(/*^block*/id)arg3 ;
-(BOOL)openStoreAndReturnError:(id*)arg1 ;
-(void)reportErrorMetric:(unsigned)arg1 ;
-(BOOL)openCentralStoreAndReturnError:(id*)arg1 ;
-(BOOL)mergeTemporaryStores;
-(BOOL)openTemporaryStore;
-(void)reportStoreError:(id)arg1 ;
-(void)closeAllStores;
-(BOOL)mergeStores:(id)arg1 ;
-(id)currentStore;
-(unsigned)cacheRecordCount;
-(void)displayStorageFullAlert;
-(BOOL)switchToCentralStore;
-(id)matchingAdvertisementBufferForRPIBuffer:(id)arg1 exposureKeys:(id)arg2 ;
-(BOOL)purgeAdvertismentsSeenBeforeDate:(id)arg1 ;
-(BOOL)temporaryStoresPresent;
-(BOOL)mergeStoresFromFolderPath:(id)arg1 ;
-(BOOL)saveContactTracingAdvertisement:(id)arg1 ;
-(id)createQuerySessionWithAttenuationThreshold:(unsigned char)arg1 queue:(id)arg2 error:(id*)arg3 ;
-(BOOL)purgeAdvertismentsOlderThan:(double)arg1 ;
-(BOOL)purgeAllStoresInActiveDatabasePath;
-(BOOL)cloneDatabaseTo:(id)arg1 ;
-(unsigned long long)currentStoreType;
-(ENQueryFilter *)inlineQueryFilter;
-(unsigned long long)droppedAdvertisementCount;
-(double)storageFullAlertInterval;
-(void)setStorageFullAlertInterval:(double)arg1 ;
@end
