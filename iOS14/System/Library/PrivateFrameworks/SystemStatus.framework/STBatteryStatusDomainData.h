/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class NSString;

@interface STBatteryStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	unsigned long long _chargingState;
	unsigned long long _percentCharge;
	BOOL _batterySaverModeActive;
	NSString* _chargingDescription;
	unsigned long long _chargingDescriptionType;

}

@property (nonatomic,readonly) unsigned long long chargingState;                                         //@synthesize chargingState=_chargingState - In the implementation block
@property (nonatomic,readonly) unsigned long long percentCharge;                                         //@synthesize percentCharge=_percentCharge - In the implementation block
@property (getter=isBatterySaverModeActive,nonatomic,readonly) BOOL batterySaverModeActive;              //@synthesize batterySaverModeActive=_batterySaverModeActive - In the implementation block
@property (nonatomic,copy,readonly) NSString * chargingDescription;                                      //@synthesize chargingDescription=_chargingDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long chargingDescriptionType;                               //@synthesize chargingDescriptionType=_chargingDescriptionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)init;
-(BOOL)isBatterySaverModeActive;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)chargingDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)initWithChargingState:(unsigned long long)arg1 percentCharge:(unsigned long long)arg2 batterySaverModeActive:(BOOL)arg3 chargingDescription:(id)arg4 chargingDescriptionType:(unsigned long long)arg5 ;
-(id)diffFromData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)chargingDescriptionType;
-(id)dataByApplyingDiff:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)chargingState;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)percentCharge;
@end
