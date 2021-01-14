/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber;

@interface SUCoreActivity : NSObject <NSSecureCoding, NSCopying> {

	NSString* _activityName;
	int _plugInState;
	int _screenOnState;
	int _networkState;
	int _wifiState;
	int _phoneCallState;
	int _carplayState;
	int _mediaPlayingState;
	int _waking;
	NSString* _UUID;
	NSDate* _runDate;
	NSNumber* _batteryLevelGreaterThan;
	NSNumber* _batteryLevelLessThan;

}

@property (nonatomic,retain) NSString * activityName;                         //@synthesize activityName=_activityName - In the implementation block
@property (nonatomic,retain) NSString * UUID;                                 //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSDate * runDate;                                //@synthesize runDate=_runDate - In the implementation block
@property (nonatomic,retain) NSNumber * batteryLevelGreaterThan;              //@synthesize batteryLevelGreaterThan=_batteryLevelGreaterThan - In the implementation block
@property (nonatomic,retain) NSNumber * batteryLevelLessThan;                 //@synthesize batteryLevelLessThan=_batteryLevelLessThan - In the implementation block
@property (assign,nonatomic) int plugInState;                                 //@synthesize plugInState=_plugInState - In the implementation block
@property (assign,nonatomic) int screenOnState;                               //@synthesize screenOnState=_screenOnState - In the implementation block
@property (assign,nonatomic) int networkState;                                //@synthesize networkState=_networkState - In the implementation block
@property (assign,nonatomic) int wifiState;                                   //@synthesize wifiState=_wifiState - In the implementation block
@property (assign,nonatomic) int waking;                                      //@synthesize waking=_waking - In the implementation block
@property (assign,nonatomic) int phoneCallState;                              //@synthesize phoneCallState=_phoneCallState - In the implementation block
@property (assign,nonatomic) int carplayState;                                //@synthesize carplayState=_carplayState - In the implementation block
@property (assign,nonatomic) int mediaPlayingState;                           //@synthesize mediaPlayingState=_mediaPlayingState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)systemDatePredicate:(id)arg1 ;
+(id)batteryLevelPredicateGreaterThan:(id)arg1 ;
+(id)batteryLevelPredicateLessThan:(id)arg1 ;
+(id)pluggedInPredicate:(BOOL)arg1 ;
+(id)backlightOnPredicate:(BOOL)arg1 ;
+(id)networkPredicate:(BOOL)arg1 ;
+(id)wifiAvailablePredicate:(BOOL)arg1 ;
+(id)phoneCallPredicate:(BOOL)arg1 ;
+(id)carplayPredicate:(BOOL)arg1 ;
+(id)mediaPlayingPredicate:(BOOL)arg1 ;
+(id)_predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 ;
-(int)wifiState;
-(NSString *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)_qualityOfService;
-(NSString *)activityName;
-(int)networkState;
-(id)_clientIdentifier;
-(int)waking;
-(NSDate *)runDate;
-(id)initWithCoder:(id)arg1 ;
-(void)setRunDate:(NSDate *)arg1 ;
-(unsigned long long)_deviceSet;
-(void)setUUID:(NSString *)arg1 ;
-(BOOL)_mustWake;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNetworkState:(int)arg1 ;
-(int)mediaPlayingState;
-(void)setMediaPlayingState:(int)arg1 ;
-(void)setWifiState:(int)arg1 ;
-(NSNumber *)batteryLevelGreaterThan;
-(void)setBatteryLevelGreaterThan:(NSNumber *)arg1 ;
-(NSNumber *)batteryLevelLessThan;
-(void)setBatteryLevelLessThan:(NSNumber *)arg1 ;
-(int)plugInState;
-(void)setPlugInState:(int)arg1 ;
-(int)screenOnState;
-(void)setScreenOnState:(int)arg1 ;
-(void)setWaking:(int)arg1 ;
-(int)phoneCallState;
-(void)setPhoneCallState:(int)arg1 ;
-(int)carplayState;
-(void)setCarplayState:(int)arg1 ;
-(id)createContextualPredicate;
-(id)createRegistrationWithHandler:(/*^block*/id)arg1 ;
-(id)_dismissalPredicate;
-(BOOL)_boolForTriState:(int)arg1 defaultValue:(BOOL)arg2 ;
-(id)_stringForTriState:(int)arg1 ;
-(void)setActivityName:(NSString *)arg1 ;
-(id)initWithActivityName:(id)arg1 options:(id)arg2 ;
@end
