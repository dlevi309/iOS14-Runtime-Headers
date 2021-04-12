/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncAnchorEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)uniquedColumns;
+(long long)syncAnchorOfType:(long long)arg1 entityIdentifier:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)setAcknowledgedAnchorsWithMap:(id)arg1 store:(id)arg2 resetNext:(BOOL)arg3 resetInvalid:(BOOL)arg4 profile:(id)arg5 error:(id*)arg6 ;
+(BOOL)resetSyncAnchorsOfType:(long long)arg1 store:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)getSyncAnchorsOfType:(long long)arg1 anchorMap:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)resetSyncStore:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)updateSyncAnchorsWithMap:(id)arg1 type:(long long)arg2 updateDate:(id)arg3 store:(id)arg4 updatePolicy:(long long)arg5 resetInvalid:(BOOL)arg6 profile:(id)arg7 error:(id*)arg8 ;
+(BOOL)getMinimumSyncAnchorsOfType:(long long)arg1 anchorMap:(id)arg2 updatedSince:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)updateSyncAnchorsWithMap:(id)arg1 type:(long long)arg2 store:(id)arg3 updatePolicy:(long long)arg4 resetInvalid:(BOOL)arg5 profile:(id)arg6 error:(id*)arg7 ;
+(BOOL)updateSyncAnchor:(long long)arg1 type:(long long)arg2 entityIdentifier:(id)arg3 store:(id)arg4 updatePolicy:(long long)arg5 profile:(id)arg6 error:(id*)arg7 ;
+(BOOL)prepareSyncAnchorsForEntityIdentifiers:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_getAnchorsForProperty:(id)arg1 anchorMap:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForSyncEntityIdentifier:(id)arg1 syncStore:(id)arg2 ;
+(long long)_syncAnchorForProperty:(id)arg1 entityIdentifier:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)_setSyncAnchor:(long long)arg1 updateDate:(double)arg2 options:(unsigned long long)arg3 updatePolicy:(long long)arg4 entityIdentifier:(id)arg5 store:(id)arg6 profile:(id)arg7 error:(id*)arg8 ;
+(BOOL)_setAnchorsWithMap:(id)arg1 updateDate:(double)arg2 store:(id)arg3 updateOptions:(unsigned long long)arg4 updatePolicy:(long long)arg5 resetInvalid:(BOOL)arg6 profile:(id)arg7 error:(id*)arg8 ;
+(id)_predicateForSyncStore:(id)arg1 ;
+(BOOL)_setSyncAnchor:(long long)arg1 updateDate:(double)arg2 options:(unsigned long long)arg3 updatePolicy:(long long)arg4 entityIdentifier:(id)arg5 store:(id)arg6 transaction:(id)arg7 error:(id*)arg8 ;
+(id)_predicateForSyncEntityIdentifier:(id)arg1 ;
+(BOOL)updateSyncAnchor:(long long)arg1 type:(long long)arg2 updateDate:(id)arg3 entityIdentifier:(id)arg4 store:(id)arg5 updatePolicy:(long long)arg6 profile:(id)arg7 error:(id*)arg8 ;
+(BOOL)enumerateSyncAnchorsForStoreID:(long long)arg1 database:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
@end
