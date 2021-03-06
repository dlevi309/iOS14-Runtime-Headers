/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/SFPeerDevice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSDictionary, NSData;

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding> {

	BOOL _unlockEnabled;
	BOOL _keyExists;
	BOOL _bluetoothCloudPaired;
	BOOL _supportsApproveWithWatch;
	BOOL _placeholder;
	BOOL _supportsAlwaysDirect;
	BOOL _supportsApproveIcon;
	BOOL _supportsEncryption;
	BOOL _supportsAdvertisingUnlocked;
	BOOL _supportsConnectionCache;
	BOOL _supportsHEIC;
	NSString* _modelDescription;
	NSUUID* _bluetoothID;
	NSUUID* _proxyBluetoothID;
	NSString* _modelName;
	NSDictionary* _results;
	NSData* _hintToken;
	long long _majorOSVersion;

}

@property (nonatomic,copy) NSString * modelDescription;                     //@synthesize modelDescription=_modelDescription - In the implementation block
@property (assign,nonatomic) BOOL unlockEnabled;                            //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (assign,nonatomic) BOOL bluetoothCloudPaired;                     //@synthesize bluetoothCloudPaired=_bluetoothCloudPaired - In the implementation block
@property (nonatomic,retain) NSUUID * bluetoothID;                          //@synthesize bluetoothID=_bluetoothID - In the implementation block
@property (nonatomic,copy) NSUUID * proxyBluetoothID;                       //@synthesize proxyBluetoothID=_proxyBluetoothID - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain) NSString * modelName;                          //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,retain) NSDictionary * results;                        //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSData * hintToken;                            //@synthesize hintToken=_hintToken - In the implementation block
@property (assign,nonatomic) BOOL placeholder;                              //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL supportsAlwaysDirect;                     //@synthesize supportsAlwaysDirect=_supportsAlwaysDirect - In the implementation block
@property (assign,nonatomic) BOOL supportsApproveWithWatch;                 //@synthesize supportsApproveWithWatch=_supportsApproveWithWatch - In the implementation block
@property (assign,nonatomic) BOOL supportsApproveIcon;                      //@synthesize supportsApproveIcon=_supportsApproveIcon - In the implementation block
@property (assign,nonatomic) BOOL supportsEncryption;                       //@synthesize supportsEncryption=_supportsEncryption - In the implementation block
@property (assign,nonatomic) BOOL supportsAdvertisingUnlocked;              //@synthesize supportsAdvertisingUnlocked=_supportsAdvertisingUnlocked - In the implementation block
@property (assign,nonatomic) BOOL supportsConnectionCache;                  //@synthesize supportsConnectionCache=_supportsConnectionCache - In the implementation block
@property (assign,nonatomic) BOOL supportsHEIC;                             //@synthesize supportsHEIC=_supportsHEIC - In the implementation block
@property (assign,nonatomic) long long majorOSVersion;                      //@synthesize majorOSVersion=_majorOSVersion - In the implementation block
@property (assign,nonatomic) BOOL keyExists;                                //@synthesize keyExists=_keyExists - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResults:(NSDictionary *)arg1 ;
-(NSDictionary *)results;
-(NSUUID *)bluetoothID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBluetoothID:(NSUUID *)arg1 ;
-(NSString *)modelName;
-(BOOL)unlockEnabled;
-(id)description;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)setUnlockEnabled:(BOOL)arg1 ;
-(BOOL)bluetoothCloudPaired;
-(void)setModelDescription:(NSString *)arg1 ;
-(void)setKeyExists:(BOOL)arg1 ;
-(void)setBluetoothCloudPaired:(BOOL)arg1 ;
-(BOOL)supportsApproveWithWatch;
-(void)setSupportsApproveWithWatch:(BOOL)arg1 ;
-(NSUUID *)proxyBluetoothID;
-(void)setProxyBluetoothID:(NSUUID *)arg1 ;
-(void)setModelName:(NSString *)arg1 ;
-(void)setHintToken:(NSData *)arg1 ;
-(BOOL)supportsAlwaysDirect;
-(void)setSupportsAlwaysDirect:(BOOL)arg1 ;
-(BOOL)supportsApproveIcon;
-(void)setSupportsApproveIcon:(BOOL)arg1 ;
-(BOOL)supportsEncryption;
-(void)setSupportsEncryption:(BOOL)arg1 ;
-(BOOL)supportsAdvertisingUnlocked;
-(BOOL)supportsHEIC;
-(void)setSupportsAdvertisingUnlocked:(BOOL)arg1 ;
-(BOOL)supportsConnectionCache;
-(void)setSupportsConnectionCache:(BOOL)arg1 ;
-(void)setSupportsHEIC:(BOOL)arg1 ;
-(long long)majorOSVersion;
-(void)setMajorOSVersion:(long long)arg1 ;
-(long long)type;
-(BOOL)placeholder;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)modelDescription;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)keyExists;
-(NSData *)hintToken;
@end

