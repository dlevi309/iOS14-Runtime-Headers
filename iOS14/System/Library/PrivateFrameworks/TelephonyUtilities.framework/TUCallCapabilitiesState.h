/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class NSDictionary, NSString, NSArray, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	BOOL _supportsPrimaryCalling;
	BOOL _supportsBasebandCalling;
	BOOL _supportsCellularData;
	BOOL _supportsDisplayingTelephonyCalls;
	BOOL _supportsDisplayingFaceTimeAudioCalls;
	BOOL _supportsDisplayingFaceTimeVideoCalls;
	BOOL _faceTimeAudioAvailable;
	BOOL _faceTimeVideoAvailable;
	BOOL _ctCapabilitiesValid;
	BOOL _accountsMatchForSecondaryCalling;
	BOOL _accountsSupportSecondaryCalling;
	BOOL _supportsRelayCalling;
	BOOL _relayCallingEnabled;
	BOOL _relayCallingFeaturesEnabled;
	BOOL _supportsTelephonyRelayCalling;
	BOOL _supportsFaceTimeAudioRelayCalling;
	BOOL _supportsFaceTimeVideoRelayCalling;
	BOOL _emergencyCallbackModeEnabled;
	BOOL _emergencyCallbackPossible;
	int _relayCallingAvailability;
	NSDictionary* _relayCallingDisabledForDeviceID;
	NSString* _outgoingRelayCallerID;
	NSArray* _cloudCallingDevices;
	NSDictionary* _senderIdentityCapabilitiesStateByUUID;

}

@property (assign,nonatomic) BOOL supportsPrimaryCalling;                                                          //@synthesize supportsPrimaryCalling=_supportsPrimaryCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsBasebandCalling;                                                         //@synthesize supportsBasebandCalling=_supportsBasebandCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsCellularData;                                                            //@synthesize supportsCellularData=_supportsCellularData - In the implementation block
@property (assign,nonatomic) BOOL supportsDisplayingTelephonyCalls;                                                //@synthesize supportsDisplayingTelephonyCalls=_supportsDisplayingTelephonyCalls - In the implementation block
@property (assign,nonatomic) BOOL supportsDisplayingFaceTimeAudioCalls;                                            //@synthesize supportsDisplayingFaceTimeAudioCalls=_supportsDisplayingFaceTimeAudioCalls - In the implementation block
@property (assign,nonatomic) BOOL supportsDisplayingFaceTimeVideoCalls;                                            //@synthesize supportsDisplayingFaceTimeVideoCalls=_supportsDisplayingFaceTimeVideoCalls - In the implementation block
@property (assign,getter=isFaceTimeAudioAvailable,nonatomic) BOOL faceTimeAudioAvailable;                          //@synthesize faceTimeAudioAvailable=_faceTimeAudioAvailable - In the implementation block
@property (assign,getter=isFaceTimeVideoAvailable,nonatomic) BOOL faceTimeVideoAvailable;                          //@synthesize faceTimeVideoAvailable=_faceTimeVideoAvailable - In the implementation block
@property (assign,getter=areCTCapabilitiesValid,nonatomic) BOOL ctCapabilitiesValid;                               //@synthesize ctCapabilitiesValid=_ctCapabilitiesValid - In the implementation block
@property (assign,nonatomic) BOOL accountsMatchForSecondaryCalling;                                                //@synthesize accountsMatchForSecondaryCalling=_accountsMatchForSecondaryCalling - In the implementation block
@property (assign,nonatomic) BOOL accountsSupportSecondaryCalling;                                                 //@synthesize accountsSupportSecondaryCalling=_accountsSupportSecondaryCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsRelayCalling;                                                            //@synthesize supportsRelayCalling=_supportsRelayCalling - In the implementation block
@property (assign,getter=isRelayCallingEnabled,nonatomic) BOOL relayCallingEnabled;                                //@synthesize relayCallingEnabled=_relayCallingEnabled - In the implementation block
@property (assign,getter=areRelayCallingFeaturesEnabled,nonatomic) BOOL relayCallingFeaturesEnabled;               //@synthesize relayCallingFeaturesEnabled=_relayCallingFeaturesEnabled - In the implementation block
@property (assign,nonatomic) int relayCallingAvailability;                                                         //@synthesize relayCallingAvailability=_relayCallingAvailability - In the implementation block
@property (nonatomic,copy) NSDictionary * relayCallingDisabledForDeviceID;                                         //@synthesize relayCallingDisabledForDeviceID=_relayCallingDisabledForDeviceID - In the implementation block
@property (nonatomic,copy) NSString * outgoingRelayCallerID;                                                       //@synthesize outgoingRelayCallerID=_outgoingRelayCallerID - In the implementation block
@property (assign,nonatomic) BOOL supportsTelephonyRelayCalling;                                                   //@synthesize supportsTelephonyRelayCalling=_supportsTelephonyRelayCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsFaceTimeAudioRelayCalling;                                               //@synthesize supportsFaceTimeAudioRelayCalling=_supportsFaceTimeAudioRelayCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsFaceTimeVideoRelayCalling;                                               //@synthesize supportsFaceTimeVideoRelayCalling=_supportsFaceTimeVideoRelayCalling - In the implementation block
@property (nonatomic,copy) NSArray * cloudCallingDevices;                                                          //@synthesize cloudCallingDevices=_cloudCallingDevices - In the implementation block
@property (nonatomic,readonly) TUCloudCallingDevice * defaultPairedDevice; 
@property (assign,getter=isEmergencyCallbackModeEnabled,nonatomic) BOOL emergencyCallbackModeEnabled;              //@synthesize emergencyCallbackModeEnabled=_emergencyCallbackModeEnabled - In the implementation block
@property (assign,getter=isEmergencyCallbackPossible,nonatomic) BOOL emergencyCallbackPossible;                    //@synthesize emergencyCallbackPossible=_emergencyCallbackPossible - In the implementation block
@property (nonatomic,copy) NSDictionary * senderIdentityCapabilitiesStateByUUID;                                   //@synthesize senderIdentityCapabilitiesStateByUUID=_senderIdentityCapabilitiesStateByUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setRelayCallingAvailability:(int)arg1 ;
-(NSString *)outgoingRelayCallerID;
-(BOOL)accountsSupportSecondaryCalling;
-(TUCloudCallingDevice *)defaultPairedDevice;
-(id)init;
-(BOOL)supportsTelephonyRelayCalling;
-(BOOL)supportsCellularData;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(void)setSupportsCellularData:(BOOL)arg1 ;
-(BOOL)supportsRelayCalling;
-(int)relayCallingAvailability;
-(void)setSupportsDisplayingFaceTimeAudioCalls:(BOOL)arg1 ;
-(BOOL)supportsFaceTimeVideoRelayCalling;
-(BOOL)isFaceTimeVideoAvailable;
-(NSArray *)cloudCallingDevices;
-(void)setSupportsPrimaryCalling:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCtCapabilitiesValid:(BOOL)arg1 ;
-(BOOL)isEmergencyCallbackPossible;
-(id)publiclyAccessibleCopy;
-(void)setEmergencyCallbackPossible:(BOOL)arg1 ;
-(BOOL)accountsMatchForSecondaryCalling;
-(void)setRelayCallingFeaturesEnabled:(BOOL)arg1 ;
-(void)setRelayCallingDisabledForDeviceID:(NSDictionary *)arg1 ;
-(BOOL)supportsBasebandCalling;
-(void)setSenderIdentityCapabilitiesStateByUUID:(NSDictionary *)arg1 ;
-(void)setEmergencyCallbackModeEnabled:(BOOL)arg1 ;
-(BOOL)supportsPrimaryCalling;
-(void)setRelayCallingEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)areCTCapabilitiesValid;
-(BOOL)supportsFaceTimeAudioRelayCalling;
-(NSDictionary *)relayCallingDisabledForDeviceID;
-(void)setSupportsDisplayingTelephonyCalls:(BOOL)arg1 ;
-(void)setSupportsBasebandCalling:(BOOL)arg1 ;
-(BOOL)areRelayCallingFeaturesEnabled;
-(void)setSupportsFaceTimeVideoRelayCalling:(BOOL)arg1 ;
-(NSDictionary *)senderIdentityCapabilitiesStateByUUID;
-(void)setSupportsFaceTimeAudioRelayCalling:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCloudCallingDevices:(NSArray *)arg1 ;
-(void)setFaceTimeAudioAvailable:(BOOL)arg1 ;
-(BOOL)isEmergencyCallbackModeEnabled;
-(void)setSupportsRelayCalling:(BOOL)arg1 ;
-(BOOL)supportsDisplayingTelephonyCalls;
-(void)setOutgoingRelayCallerID:(NSString *)arg1 ;
-(void)setAccountsSupportSecondaryCalling:(BOOL)arg1 ;
-(BOOL)isRelayCallingEnabled;
-(void)setAccountsMatchForSecondaryCalling:(BOOL)arg1 ;
-(void)setFaceTimeVideoAvailable:(BOOL)arg1 ;
-(BOOL)supportsDisplayingFaceTimeVideoCalls;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSupportsTelephonyRelayCalling:(BOOL)arg1 ;
-(BOOL)supportsDisplayingFaceTimeAudioCalls;
-(BOOL)isFaceTimeAudioAvailable;
-(void)setSupportsDisplayingFaceTimeVideoCalls:(BOOL)arg1 ;
@end

