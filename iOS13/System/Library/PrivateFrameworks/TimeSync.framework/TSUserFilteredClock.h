/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TSKernelClock.h>

@interface TSUserFilteredClock : TSKernelClock

@property (nonatomic,readonly) unsigned long long nominalMachInterval; 
@property (nonatomic,readonly) unsigned long long nominalDomainInterval; 
@property (nonatomic,readonly) unsigned char filterShift; 
@property (getter=isAdaptive,nonatomic,readonly) BOOL adaptive; 
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
-(BOOL)isAdaptive;
-(BOOL)addTimestampWithMachAbsolute:(unsigned long long)arg1 andDomainTime:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)resetFilterToNominal:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)resetSyncServiceWithError:(id*)arg1 ;
-(unsigned long long)nominalMachInterval;
-(unsigned long long)nominalDomainInterval;
-(unsigned char)filterShift;
@end

