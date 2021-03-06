/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSData, NSString, NSArray, W5WiFiChannel;

@interface W5WiFiScanResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isIBSS;
	BOOL _isPasspoint;
	BOOL _isPersonalHotspot;
	BOOL _isAppleSWAP;
	BOOL _supportsWEPCipher;
	BOOL _supportsTKIPCipher;
	int _supportedPHYModes;
	NSDictionary* _scanRecord;
	NSData* _ssid;
	NSString* _ssidString;
	NSString* _bssid;
	NSArray* _supportedSecurityTypes;
	long long _rssi;
	long long _noise;
	NSString* _countryCode;
	long long _beaconInterval;
	NSString* _airPortBaseStationModelName;
	W5WiFiChannel* _channel;

}

@property (nonatomic,copy) NSDictionary * scanRecord;                           //@synthesize scanRecord=_scanRecord - In the implementation block
@property (nonatomic,copy) NSData * ssid;                                       //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * ssidString;                               //@synthesize ssidString=_ssidString - In the implementation block
@property (nonatomic,copy) NSString * bssid;                                    //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,copy) NSArray * supportedSecurityTypes;                    //@synthesize supportedSecurityTypes=_supportedSecurityTypes - In the implementation block
@property (assign,nonatomic) int supportedPHYModes;                             //@synthesize supportedPHYModes=_supportedPHYModes - In the implementation block
@property (assign,nonatomic) long long rssi;                                    //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) long long noise;                                   //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) BOOL isIBSS;                                       //@synthesize isIBSS=_isIBSS - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                              //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) long long beaconInterval;                          //@synthesize beaconInterval=_beaconInterval - In the implementation block
@property (assign,nonatomic) BOOL isPasspoint;                                  //@synthesize isPasspoint=_isPasspoint - In the implementation block
@property (assign,nonatomic) BOOL isPersonalHotspot;                            //@synthesize isPersonalHotspot=_isPersonalHotspot - In the implementation block
@property (assign,nonatomic) BOOL isAppleSWAP;                                  //@synthesize isAppleSWAP=_isAppleSWAP - In the implementation block
@property (nonatomic,copy) NSString * airPortBaseStationModelName;              //@synthesize airPortBaseStationModelName=_airPortBaseStationModelName - In the implementation block
@property (nonatomic,copy) W5WiFiChannel * channel;                             //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL supportsWEPCipher;                            //@synthesize supportsWEPCipher=_supportsWEPCipher - In the implementation block
@property (assign,nonatomic) BOOL supportsTKIPCipher;                           //@synthesize supportsTKIPCipher=_supportsTKIPCipher - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCountryCode:(NSString *)arg1 ;
-(long long)beaconInterval;
-(NSString *)countryCode;
-(void)setIsPasspoint:(BOOL)arg1 ;
-(BOOL)isPasspoint;
-(void)setSsid:(NSData *)arg1 ;
-(BOOL)isIBSS;
-(void)setRssi:(long long)arg1 ;
-(void)setSsidString:(NSString *)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(long long)strongestSupportedSecurity;
-(NSString *)ssidString;
-(BOOL)supportsWEPCipher;
-(void)setSupportedSecurityTypes:(NSArray *)arg1 ;
-(NSDictionary *)scanRecord;
-(BOOL)supportsTKIPCipher;
-(long long)rssi;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)ssid;
-(void)setChannel:(W5WiFiChannel *)arg1 ;
-(BOOL)isEqualToScanResult:(id)arg1 ;
-(long long)noise;
-(W5WiFiChannel *)channel;
-(void)setAirPortBaseStationModelName:(NSString *)arg1 ;
-(BOOL)isPersonalHotspot;
-(BOOL)isAirPortBaseStation:(out id*)arg1 modelID:(out char*)arg2 ;
-(NSArray *)supportedSecurityTypes;
-(void)setSupportsTKIPCipher:(BOOL)arg1 ;
-(id)description;
-(void)setIsAppleSWAP:(BOOL)arg1 ;
-(int)supportedPHYModes;
-(void)setNoise:(long long)arg1 ;
-(NSString *)bssid;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAppleSWAP;
-(BOOL)supportsSecurity:(long long)arg1 ;
-(void)setScanRecord:(NSDictionary *)arg1 ;
-(void)setIsPersonalHotspot:(BOOL)arg1 ;
-(void)setSupportedPHYModes:(int)arg1 ;
-(int)fastestSupportedPHYMode;
-(void)setSupportsWEPCipher:(BOOL)arg1 ;
-(BOOL)supportsPHYMode:(int)arg1 ;
-(void)setIsIBSS:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setBeaconInterval:(long long)arg1 ;
-(NSString *)airPortBaseStationModelName;
@end

