/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/


@protocol OS_dispatch_semaphore;
#import <SOS/SOS-Structs.h>
@class SOSLegacyContactsManager, NSArray, HKHealthStore, NSObject;

@interface SOSContactsManager : NSObject {

	int _healthContactsNotificationToken;
	SOSLegacyContactsManager* _legacyContactsManager;
	NSArray* _medicalIDEmergencyContacts;
	HKHealthStore* _healthStore;
	NSObject*<OS_dispatch_semaphore> _medicalIDContactsInitialStateSemaphore;
	opaque_pthread_mutex_t _medicalIDEmergencyContactsMutex;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> medicalIDContactsInitialStateSemaphore;              //@synthesize medicalIDContactsInitialStateSemaphore=_medicalIDContactsInitialStateSemaphore - In the implementation block
@property (nonatomic,retain) NSArray * medicalIDEmergencyContacts;                                                 //@synthesize medicalIDEmergencyContacts=_medicalIDEmergencyContacts - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t medicalIDEmergencyContactsMutex;                               //@synthesize medicalIDEmergencyContactsMutex=_medicalIDEmergencyContactsMutex - In the implementation block
@property (nonatomic,readonly) BOOL SOSContactsExist; 
@property (nonatomic,readonly) SOSLegacyContactsManager * legacyContactsManager; 
+(id)contactStore;
+(BOOL)authorizedToUseContactStore;
+(void)preloadContactStoreIfNecessary;
-(HKHealthStore *)healthStore;
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(SOSLegacyContactsManager *)legacyContactsManager;
-(id)_userDefaults;
-(void)dealloc;
-(void)_medicalContactsDidChange;
-(void)fetchMedicalIDEmergencyContacts;
-(void)setMedicalIDEmergencyContacts:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)medicalIDContactsInitialStateSemaphore;
-(void)_medicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)medicalIDEmergencyContacts;
-(BOOL)_isEmergencyNumber:(id)arg1 ;
-(void)SOSContactsWithTimeout:(double)arg1 andCompletion:(/*^block*/id)arg2 ;
-(id)SOSContactDestinations;
-(id)phoneNumbersToMessage;
-(void)_waitForMedicalIDInitialState;
-(BOOL)SOSContactsExist;
-(BOOL)hasValidContactsToMessage;
-(void)setMedicalIDContactsInitialStateSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(opaque_pthread_mutex_t)medicalIDEmergencyContactsMutex;
-(void)setMedicalIDEmergencyContactsMutex:(opaque_pthread_mutex_t)arg1 ;
@end

