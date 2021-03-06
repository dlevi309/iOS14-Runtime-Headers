/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSampleEntity.h>
#import <libobjc.A.dylib/_HDSeriesFreezeJournalEntrySeries.h>

@class NSString;

@interface HDSeriesSampleEntity : HDSampleEntity <_HDSeriesFreezeJournalEntrySeries>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_insertionEra;
+(/*^block*/id)objectInsertionFilterForProfile:(id)arg1 ;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)foreignKeys;
+(id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 authorizationFilter:(/*^block*/id)arg4 ;
+(BOOL)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 deleteOriginalHFDData:(BOOL)arg3 insertDeletedObject:(BOOL)arg4 profile:(id)arg5 transaction:(id)arg6 error:(id*)arg7 ;
+(void)updateInsertionEra;
+(id)additionalPredicateForEnumeration;
+(BOOL)deleteSeriesWithID:(id)arg1 deleteHFDData:(BOOL)arg2 insertDeletedObject:(BOOL)arg3 profile:(id)arg4 transaction:(id)arg5 error:(id*)arg6 ;
+(id)seriesSampleWithID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)freezeWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)HFDKeyWithDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)canAddDatumInDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateSampleCount:(long long)arg1 withDatabase:(id)arg2 error:(id*)arg3 ;
@end

