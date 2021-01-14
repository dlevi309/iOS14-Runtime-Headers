/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, HDDemoDataGeneratorState, NSCalendar, HDProfile, HDDemoDataPerson, HDDemoDataGeneratorConfiguration, HDDemoDataActivitySampleGenerator, HDDemoDataAudioExposureSampleGenerator, HDDemoDataAudiogramSampleGenerator, HDDemoDataBloodSampleGenerator, HDDemoDataBodySampleGenerator, HDDemoDataFoodSampleGenerator, HDDemoDataHealthDocumentSampleGenerator, HDDemoDataHeartSampleGenerator, HDDemoDataMindfulnessSampleGenerator, HDDemoDataMobilitySampleGenerator, HDDemoDataOtherAndAdditionalSampleGenerator, HDDemoDataPathologySampleGenerator, HDDemoDataReproductiveHealthSampleGenerator, HDDemoDataSleepSampleGenerator, HDDemoDataStatisticsSampleGenerator, HDDemoDataSymptomsSampleGenerator, HDDemoDataVitalsSampleGenerator;

@interface HDDemoDataGenerator : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _sampleGenerators;
	NSMutableDictionary* _appProvenances;
	HDDemoDataGeneratorState* _generatorState;
	NSCalendar* _gregorianCalendar;
	long long _numHKSamples;
	BOOL _isGeneratingDemoData;
	HDProfile* _profile;
	HDDemoDataPerson* _demoPerson;
	HDDemoDataGeneratorConfiguration* _configuration;
	HDDemoDataActivitySampleGenerator* _activitySampleGenerator;
	HDDemoDataAudioExposureSampleGenerator* _audioExposureSampleGenerator;
	HDDemoDataAudiogramSampleGenerator* _audiogramSampleGenerator;
	HDDemoDataBloodSampleGenerator* _bloodSampleGenerator;
	HDDemoDataBodySampleGenerator* _bodySampleGenerator;
	HDDemoDataFoodSampleGenerator* _foodSampleGenerator;
	HDDemoDataHealthDocumentSampleGenerator* _healthDocumentSampleGenerator;
	HDDemoDataHeartSampleGenerator* _heartSampleGenerator;
	HDDemoDataMindfulnessSampleGenerator* _mindfulnessSampleGenerator;
	HDDemoDataMobilitySampleGenerator* _mobilitySampleGenerator;
	HDDemoDataOtherAndAdditionalSampleGenerator* _otherAndAdditionalSampleGenerator;
	HDDemoDataPathologySampleGenerator* _pathologySampleGenerator;
	HDDemoDataReproductiveHealthSampleGenerator* _reproductiveHealthSampleGenerator;
	HDDemoDataSleepSampleGenerator* _sleepSampleGenerator;
	HDDemoDataStatisticsSampleGenerator* _statisticsSampleGenerator;
	HDDemoDataSymptomsSampleGenerator* _symptomsSampleGenerator;
	HDDemoDataVitalsSampleGenerator* _vitalsSampleGenerator;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDDemoDataPerson * demoPerson;                                                                //@synthesize demoPerson=_demoPerson - In the implementation block
@property (nonatomic,retain) HDDemoDataGeneratorConfiguration * configuration;                                             //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) HDDemoDataActivitySampleGenerator * activitySampleGenerator;                                  //@synthesize activitySampleGenerator=_activitySampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataAudioExposureSampleGenerator * audioExposureSampleGenerator;                        //@synthesize audioExposureSampleGenerator=_audioExposureSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataAudiogramSampleGenerator * audiogramSampleGenerator;                                //@synthesize audiogramSampleGenerator=_audiogramSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataBloodSampleGenerator * bloodSampleGenerator;                                        //@synthesize bloodSampleGenerator=_bloodSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataBodySampleGenerator * bodySampleGenerator;                                          //@synthesize bodySampleGenerator=_bodySampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataFoodSampleGenerator * foodSampleGenerator;                                          //@synthesize foodSampleGenerator=_foodSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataHealthDocumentSampleGenerator * healthDocumentSampleGenerator;                      //@synthesize healthDocumentSampleGenerator=_healthDocumentSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataHeartSampleGenerator * heartSampleGenerator;                                        //@synthesize heartSampleGenerator=_heartSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataMindfulnessSampleGenerator * mindfulnessSampleGenerator;                            //@synthesize mindfulnessSampleGenerator=_mindfulnessSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataMobilitySampleGenerator * mobilitySampleGenerator;                                  //@synthesize mobilitySampleGenerator=_mobilitySampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataOtherAndAdditionalSampleGenerator * otherAndAdditionalSampleGenerator;              //@synthesize otherAndAdditionalSampleGenerator=_otherAndAdditionalSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataPathologySampleGenerator * pathologySampleGenerator;                                //@synthesize pathologySampleGenerator=_pathologySampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataReproductiveHealthSampleGenerator * reproductiveHealthSampleGenerator;              //@synthesize reproductiveHealthSampleGenerator=_reproductiveHealthSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataSleepSampleGenerator * sleepSampleGenerator;                                        //@synthesize sleepSampleGenerator=_sleepSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataStatisticsSampleGenerator * statisticsSampleGenerator;                              //@synthesize statisticsSampleGenerator=_statisticsSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataSymptomsSampleGenerator * symptomsSampleGenerator;                                  //@synthesize symptomsSampleGenerator=_symptomsSampleGenerator - In the implementation block
@property (nonatomic,retain) HDDemoDataVitalsSampleGenerator * vitalsSampleGenerator;                                      //@synthesize vitalsSampleGenerator=_vitalsSampleGenerator - In the implementation block
@property (nonatomic,readonly) HDDemoDataGeneratorState * generatorState;                                                  //@synthesize generatorState=_generatorState - In the implementation block
-(id)init;
-(HDDemoDataGeneratorConfiguration *)configuration;
-(HDProfile *)profile;
-(id)_keyValueDomain;
-(id)gregorianCalendar;
-(id)initWithProfile:(id)arg1 queue:(id)arg2 ;
-(void)setConfiguration:(HDDemoDataGeneratorConfiguration *)arg1 ;
-(HDDemoDataPerson *)demoPerson;
-(BOOL)isDemoDataTimeInWeekend:(double)arg1 calendar:(id)arg2 ;
-(HDDemoDataActivitySampleGenerator *)activitySampleGenerator;
-(HDDemoDataSleepSampleGenerator *)sleepSampleGenerator;
-(HDDemoDataStatisticsSampleGenerator *)statisticsSampleGenerator;
-(HDDemoDataBodySampleGenerator *)bodySampleGenerator;
-(HDDemoDataGeneratorState *)generatorState;
-(id)currentDateFromCurrentTime:(double)arg1 ;
-(HDDemoDataVitalsSampleGenerator *)vitalsSampleGenerator;
-(id)firstSampleDate;
-(long long)firstSampleDayOfYear;
-(HDDemoDataFoodSampleGenerator *)foodSampleGenerator;
-(id)initWithProfile:(id)arg1 configuration:(id)arg2 queue:(id)arg3 ;
-(void)_queue_runDemoDataGeneratorForDemoPerson:(id)arg1 endDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_archiveCurrentState;
-(BOOL)_queue_loadDemoDataSampleGeneratorState;
-(void)_queue_initDemoDataSampleGenerators;
-(void)_insertBiographicalDataFromDemoPerson:(id)arg1 ;
-(void)_insertMedicalIDForDemoPerson:(id)arg1 ;
-(double)_initialGenerationTimeWithDate:(id)arg1 ;
-(double)_timeIntervalFromInitialGenerationPeriod:(long long)arg1 currentDate:(id)arg2 ;
-(void)_queue_generateDataForDemoPerson:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 firstRun:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_phoneProveance;
-(BOOL)_queue_unarchiveState;
-(void)_queue_setupDemoDataSampleGenerators;
-(void)_queue_generateFirstRunDataForDemoPerson:(id)arg1 ;
-(void)_queue_generateDataForDemoPerson:(id)arg1 numIntervals:(long long)arg2 ;
-(void)_insertIntoDatabaseObjectCollection:(id)arg1 fromPerson:(id)arg2 ;
-(void)_updateWorkoutConfigurationInGeneratorStateWithSampleDate:(id)arg1 ;
-(BOOL)isDifferentDayFromTime:(double)arg1 ;
-(id)_watchProvenanceWithPerson:(id)arg1 ;
-(id)_appProvenanceWithBundleIdentifier:(id)arg1 ;
-(id)_appSourceWithBundleIdentifier:(id)arg1 ;
-(id)_workoutPrototypesIfEnsureRecentWorkoutHasRouteIsYes;
-(BOOL)_archiveObject:(id)arg1 error:(id*)arg2 ;
-(id)_unarchiveDataWithClass:(Class)arg1 error:(id*)arg2 ;
-(void)generateThroughEndDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDemoPerson:(HDDemoDataPerson *)arg1 ;
-(void)setActivitySampleGenerator:(HDDemoDataActivitySampleGenerator *)arg1 ;
-(HDDemoDataAudioExposureSampleGenerator *)audioExposureSampleGenerator;
-(void)setAudioExposureSampleGenerator:(HDDemoDataAudioExposureSampleGenerator *)arg1 ;
-(HDDemoDataAudiogramSampleGenerator *)audiogramSampleGenerator;
-(void)setAudiogramSampleGenerator:(HDDemoDataAudiogramSampleGenerator *)arg1 ;
-(HDDemoDataBloodSampleGenerator *)bloodSampleGenerator;
-(void)setBloodSampleGenerator:(HDDemoDataBloodSampleGenerator *)arg1 ;
-(void)setBodySampleGenerator:(HDDemoDataBodySampleGenerator *)arg1 ;
-(void)setFoodSampleGenerator:(HDDemoDataFoodSampleGenerator *)arg1 ;
-(HDDemoDataHealthDocumentSampleGenerator *)healthDocumentSampleGenerator;
-(void)setHealthDocumentSampleGenerator:(HDDemoDataHealthDocumentSampleGenerator *)arg1 ;
-(HDDemoDataHeartSampleGenerator *)heartSampleGenerator;
-(void)setHeartSampleGenerator:(HDDemoDataHeartSampleGenerator *)arg1 ;
-(HDDemoDataMindfulnessSampleGenerator *)mindfulnessSampleGenerator;
-(void)setMindfulnessSampleGenerator:(HDDemoDataMindfulnessSampleGenerator *)arg1 ;
-(HDDemoDataMobilitySampleGenerator *)mobilitySampleGenerator;
-(void)setMobilitySampleGenerator:(HDDemoDataMobilitySampleGenerator *)arg1 ;
-(HDDemoDataOtherAndAdditionalSampleGenerator *)otherAndAdditionalSampleGenerator;
-(void)setOtherAndAdditionalSampleGenerator:(HDDemoDataOtherAndAdditionalSampleGenerator *)arg1 ;
-(HDDemoDataPathologySampleGenerator *)pathologySampleGenerator;
-(void)setPathologySampleGenerator:(HDDemoDataPathologySampleGenerator *)arg1 ;
-(HDDemoDataReproductiveHealthSampleGenerator *)reproductiveHealthSampleGenerator;
-(void)setReproductiveHealthSampleGenerator:(HDDemoDataReproductiveHealthSampleGenerator *)arg1 ;
-(void)setSleepSampleGenerator:(HDDemoDataSleepSampleGenerator *)arg1 ;
-(void)setStatisticsSampleGenerator:(HDDemoDataStatisticsSampleGenerator *)arg1 ;
-(HDDemoDataSymptomsSampleGenerator *)symptomsSampleGenerator;
-(void)setSymptomsSampleGenerator:(HDDemoDataSymptomsSampleGenerator *)arg1 ;
-(void)setVitalsSampleGenerator:(HDDemoDataVitalsSampleGenerator *)arg1 ;
@end
