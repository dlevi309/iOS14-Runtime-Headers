/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, HKMedicalDate, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKMedicationOrderType;

@interface HKMedicationOrder : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	NSArray* _medicationCodings;
	NSString* _prescriber;
	long long _numberOfFills;
	NSArray* _dosages;
	HKMedicalDate* _earliestDosageDate;
	HKMedicalDate* _writtenDate;
	HKMedicalDate* _endedDate;
	HKMedicalCoding* _statusCoding;
	NSArray* _reasonCodings;
	NSArray* _reasonEndedCodings;
	HKConcept* _medication;
	HKConcept* _status;
	HKConcept* _reason;
	HKConcept* _reasonEnded;

}

@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HKMedicationOrderType * medicationOrderType; 
@property (copy,readonly) NSArray * dosages; 
@property (copy,readonly) HKMedicalDate * earliestDosageDate; 
@property (copy,readonly) HKMedicalDate * endedDate; 
@property (copy,readonly) HKConcept * medication; 
@property (copy,readonly) NSArray * medicationCodings; 
@property (readonly) long long numberOfFills; 
@property (copy,readonly) NSString * prescriber; 
@property (copy,readonly) HKConcept * reason; 
@property (copy,readonly) NSArray * reasonCodings; 
@property (copy,readonly) HKConcept * reasonEnded; 
@property (copy,readonly) NSArray * reasonEndedCodings; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
@property (copy,readonly) HKMedicalDate * writtenDate; 
+(BOOL)supportsSecureCoding;
+(id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodings:(id)arg21 reasonEndedCodings:(id)arg22 ;
+(id)_newMedicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodings:(id)arg21 reasonEndedCodings:(id)arg22 config:(/*^block*/id)arg23 ;
+(id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 medicationCodings:(id)arg12 prescriber:(id)arg13 numberOfFills:(long long)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 writtenDate:(id)arg17 endedDate:(id)arg18 statusCoding:(id)arg19 reasonCodings:(id)arg20 reasonEndedCodings:(id)arg21 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)dosages;
-(NSString *)description;
-(HKConcept *)reason;
-(id)initWithCoder:(id)arg1 ;
-(HKMedicalDate *)endedDate;
-(HKConcept *)medication;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(NSArray *)medicationCodings;
-(HKMedicalDate *)earliestDosageDate;
-(HKMedicalCoding *)statusCoding;
-(id)medicationCodingsCollection;
-(id)statusCodingCollection;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setMedicationCodings:(id)arg1 ;
-(void)_setDosages:(id)arg1 ;
-(void)_setEarliestDosageDate:(id)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setMedication:(id)arg1 ;
-(NSString *)prescriber;
-(HKMedicalDate *)writtenDate;
-(long long)numberOfFills;
-(NSArray *)reasonCodings;
-(NSArray *)reasonEndedCodings;
-(HKConcept *)reasonEnded;
-(id)reasonCodingsCollection;
-(id)reasonEndedCodingsCollection;
-(void)_setPrescriber:(id)arg1 ;
-(void)_setNumberOfFills:(long long)arg1 ;
-(void)_setWrittenDate:(id)arg1 ;
-(void)_setEndedDate:(id)arg1 ;
-(void)_setReasonCodings:(id)arg1 ;
-(void)_setReasonEndedCodings:(id)arg1 ;
-(void)_setReason:(id)arg1 ;
-(void)_setReasonEnded:(id)arg1 ;
-(HKMedicationOrderType *)medicationOrderType;
-(void)_setStatus:(id)arg1 ;
-(id)medicalRecordCodings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKConcept *)status;
@end

