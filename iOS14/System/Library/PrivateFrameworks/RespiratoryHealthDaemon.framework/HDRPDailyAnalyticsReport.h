/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/


@protocol HKFeatureAvailabilityProviding;
@class NSCalendar, NSDate, HDProfile, NRPairedDeviceRegistry, HKRPOxygenSaturationSettings, NSUserDefaults;

@interface HDRPDailyAnalyticsReport : NSObject {

	BOOL _healthDataCollectionAllowed;
	NSCalendar* _calendar;
	NSDate* _startTime;
	NSDate* _endTime;
	HDProfile* _profile;
	id<HKFeatureAvailabilityProviding> _featureAvailabilityProvider;
	NRPairedDeviceRegistry* _pairedDeviceRegistry;
	HKRPOxygenSaturationSettings* _oxygenSaturationSettings;
	NSUserDefaults* _controlCenterUserDefaults;

}

@property (nonatomic,readonly) NSCalendar * calendar;                                                              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                                                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSDate * endTime;                                                                   //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                                                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) id<HKFeatureAvailabilityProviding> featureAvailabilityProvider;                     //@synthesize featureAvailabilityProvider=_featureAvailabilityProvider - In the implementation block
@property (nonatomic,readonly) NRPairedDeviceRegistry * pairedDeviceRegistry;                                      //@synthesize pairedDeviceRegistry=_pairedDeviceRegistry - In the implementation block
@property (nonatomic,readonly) HKRPOxygenSaturationSettings * oxygenSaturationSettings;                            //@synthesize oxygenSaturationSettings=_oxygenSaturationSettings - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * controlCenterUserDefaults;                                         //@synthesize controlCenterUserDefaults=_controlCenterUserDefaults - In the implementation block
@property (getter=isHealthDataCollectionAllowed,nonatomic,readonly) BOOL healthDataCollectionAllowed;              //@synthesize healthDataCollectionAllowed=_healthDataCollectionAllowed - In the implementation block
-(NSCalendar *)calendar;
-(HDProfile *)profile;
-(NRPairedDeviceRegistry *)pairedDeviceRegistry;
-(NSDate *)endTime;
-(NSDate *)startTime;
-(BOOL)_hasCompatiblePairedAppleWatch;
-(id<HKFeatureAvailabilityProviding>)featureAvailabilityProvider;
-(HKRPOxygenSaturationSettings *)oxygenSaturationSettings;
-(id)_queryForBackgroundOxygenSaturationSamplesInPreviousDayAndReturnError:(id*)arg1 ;
-(BOOL)isHealthDataCollectionAllowed;
-(id)_queryForOxygenSaturationSamplesInPreviousDayAndReturnError:(id*)arg1 ;
-(id)_queryForHasWornWatchInPreviousDayAndReturnError:(id*)arg1 ;
-(id)_gatherDiagnosticAndUsageReportFromBackgroundOxygenSaturationSamplesInPreviousDay:(id)arg1 wasWorn:(id)arg2 error:(id*)arg3 ;
-(id)_gatherImproveHealthAndActivityReportFromBackgroundOxygenSaturationSamplesInPreviousDay:(id)arg1 oxygenSaturationSamplesInPreviousDay:(id)arg2 error:(id*)arg3 ;
-(id)_numberOfWeeksSinceOnboardedAndReturnError:(id*)arg1 ;
-(id)_activePairedWatchBuild;
-(NSUserDefaults *)controlCenterUserDefaults;
-(id)_numberOfSamplesWithHeartRateGreaterThan100BPMFromSamples:(id)arg1 ;
-(id)_numberOfSamplesWithExerciseMinute5MinutesPriorInPreviousDayAndReturnError:(id*)arg1 ;
-(id)_numberOfForegroundSamplesFromSamples:(id)arg1 ;
-(id)_numberOfEveningSamplesFromSamples:(id)arg1 ;
-(id)_numberOfSamplesWithHighElevationTakeFromSamples:(id)arg1 ;
-(id)_numberOfSamplesByTruncatedOxygenSaturationValueFromSamples:(id)arg1 keyPrefix:(id)arg2 ;
-(id)_dateIntervalForPreviousDays:(unsigned long long)arg1 ;
-(id)initWithDate:(id)arg1 profile:(id)arg2 pairedDeviceRegistry:(id)arg3 featureAvailabilityProvider:(id)arg4 oxygenSaturationSettings:(id)arg5 controlCenterUserDefaults:(id)arg6 healthDataCollectionAllowed:(BOOL)arg7 ;
-(id)generatePayloadAndReturnError:(id*)arg1 ;
@end

