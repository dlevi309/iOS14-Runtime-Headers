/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

#import <SEService/SEEndPoint.h>

@protocol SEEndPoint
@required
+(id)endPointWithIdentifier:(id)arg1 certificateData:(id)arg2 error:(id*)arg3;
+(id)revokedEndpointWithPublicKeyIdentifier:(id)arg1 revocationAttestation:(id)arg2 error:(id*)arg3;
-(id)validateAuthorizedEndpointConfig:(id)arg1;
-(void)prependCertificateChain:(id)arg1;
-(id)configurePrivateData:(id)arg1 confidentialData:(id)arg2 contaclessPersistentVisibility:(id)arg3 wiredPersistentVisibility:(id)arg4;
-(void)configurePrivateDataOffset:(unsigned short)arg1 privateDataLength:(unsigned short)arg2 confidentialDataOffset:(unsigned short)arg3 confidentialDataLength:(unsigned short)arg4 contaclessVisibility:(BOOL)arg5 wiredVisibility:(BOOL)arg6;
-(id)decryptPrivacyData:(id)arg1 serverPrivacyPublicKeyData:(id)arg2 plainText:(id*)arg3;
-(id)encryptPrivacyData:(id)arg1 serverPrivacyPublicKeyData:(id)arg2 ephemeralPublicKeyData:(id*)arg3 cipherText:(id*)arg4;
-(id)deleteEndPointLongTermPrivacyKey;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, SEEndPointConfiguration, NSArray, NSNumber, SEEndPointPrivacyEncryptResponse;

@interface SEEndPoint : NSObject <SEEndPoint, NSSecureCoding> {

	NSString* _identifier;
	NSString* _subjectIdentifier;
	NSData* _publicKey;
	NSData* _publicKeyIdentifier;
	NSData* _privacyPublicKey;
	NSData* _privacyPublicKeyIdentifier;
	SEEndPointConfiguration* _configuration;
	NSData* _readerIdentifier;
	NSData* _readerPublicKey;
	NSData* _readerLongTermPublicKeyCertificate;
	NSArray* _authorizedKeys;
	NSNumber* _confidentialMailBoxSize;
	NSNumber* _privateMailBoxSize;
	NSNumber* _counter;
	NSArray* _certificates;
	NSString* _friendlyName;
	NSString* _readerInfo;
	NSString* _invitationIdentifier;
	NSData* _mailboxMapping;
	NSData* _trackingRequest;
	NSData* _trackingReceipt;
	NSData* _deviceConfiguration;
	NSString* _environment;
	NSNumber* _sharingTokenAvailabilityBitmap;
	NSNumber* _bluetoothPSM;
	NSString* _bluetoothUUID;
	NSArray* _sharingRecords;
	NSData* _revocationAttestation;
	SEEndPointPrivacyEncryptResponse* _carOEMProprietaryData;
	NSData* _sharingAttestationData;
	NSData* _ownerEphemeralKey;
	NSData* _sharingEncryptedData;
	NSString* _issuerIdentifier;
	NSString* _privacyKeyIdentifier;
	NSData* _keyIdentifier;

}

@property (nonatomic,readonly) NSString * issuerIdentifier;                                         //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * privacyKeyIdentifier;                                     //@synthesize privacyKeyIdentifier=_privacyKeyIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * keyIdentifier;                                              //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,retain) NSData * revocationAttestation;                                        //@synthesize revocationAttestation=_revocationAttestation - In the implementation block
@property (nonatomic,retain) SEEndPointPrivacyEncryptResponse * carOEMProprietaryData;              //@synthesize carOEMProprietaryData=_carOEMProprietaryData - In the implementation block
@property (nonatomic,retain) NSArray * sharingRecords;                                              //@synthesize sharingRecords=_sharingRecords - In the implementation block
@property (readonly) NSString * identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * subjectIdentifier;                                                  //@synthesize subjectIdentifier=_subjectIdentifier - In the implementation block
@property (readonly) NSData * publicKey;                                                            //@synthesize publicKey=_publicKey - In the implementation block
@property (readonly) NSData * publicKeyIdentifier;                                                  //@synthesize publicKeyIdentifier=_publicKeyIdentifier - In the implementation block
@property (readonly) NSData * privacyPublicKey;                                                     //@synthesize privacyPublicKey=_privacyPublicKey - In the implementation block
@property (readonly) NSData * privacyPublicKeyIdentifier;                                           //@synthesize privacyPublicKeyIdentifier=_privacyPublicKeyIdentifier - In the implementation block
@property (readonly) SEEndPointConfiguration * configuration;                                       //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSData * readerIdentifier;                                                     //@synthesize readerIdentifier=_readerIdentifier - In the implementation block
@property (readonly) NSData * readerPublicKey;                                                      //@synthesize readerPublicKey=_readerPublicKey - In the implementation block
@property (copy) NSData * readerLongTermPublicKeyCertificate;                                       //@synthesize readerLongTermPublicKeyCertificate=_readerLongTermPublicKeyCertificate - In the implementation block
@property (readonly) NSArray * authorizedKeys;                                                      //@synthesize authorizedKeys=_authorizedKeys - In the implementation block
@property (readonly) NSNumber * confidentialMailBoxSize;                                            //@synthesize confidentialMailBoxSize=_confidentialMailBoxSize - In the implementation block
@property (readonly) NSNumber * privateMailBoxSize;                                                 //@synthesize privateMailBoxSize=_privateMailBoxSize - In the implementation block
@property (readonly) NSNumber * counter;                                                            //@synthesize counter=_counter - In the implementation block
@property (readonly) NSArray * certificates;                                                        //@synthesize certificates=_certificates - In the implementation block
@property (copy) NSString * friendlyName;                                                           //@synthesize friendlyName=_friendlyName - In the implementation block
@property (copy) NSString * readerInfo;                                                             //@synthesize readerInfo=_readerInfo - In the implementation block
@property (copy) NSString * invitationIdentifier;                                                   //@synthesize invitationIdentifier=_invitationIdentifier - In the implementation block
@property (copy) NSData * mailboxMapping;                                                           //@synthesize mailboxMapping=_mailboxMapping - In the implementation block
@property (copy) NSData * trackingRequest;                                                          //@synthesize trackingRequest=_trackingRequest - In the implementation block
@property (copy) NSData * trackingReceipt;                                                          //@synthesize trackingReceipt=_trackingReceipt - In the implementation block
@property (copy) NSData * deviceConfiguration;                                                      //@synthesize deviceConfiguration=_deviceConfiguration - In the implementation block
@property (copy) NSString * environment;                                                            //@synthesize environment=_environment - In the implementation block
@property (copy) NSNumber * sharingTokenAvailabilityBitmap;                                         //@synthesize sharingTokenAvailabilityBitmap=_sharingTokenAvailabilityBitmap - In the implementation block
@property (copy) NSNumber * bluetoothPSM;                                                           //@synthesize bluetoothPSM=_bluetoothPSM - In the implementation block
@property (copy) NSString * bluetoothUUID;                                                          //@synthesize bluetoothUUID=_bluetoothUUID - In the implementation block
@property (copy) NSData * sharingAttestationData;                                                   //@synthesize sharingAttestationData=_sharingAttestationData - In the implementation block
@property (copy) NSData * ownerEphemeralKey;                                                        //@synthesize ownerEphemeralKey=_ownerEphemeralKey - In the implementation block
@property (copy) NSData * sharingEncryptedData;                                                     //@synthesize sharingEncryptedData=_sharingEncryptedData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)endPointWithIdentifier:(id)arg1 certificateData:(id)arg2 error:(id*)arg3 ;
+(id)decodeWithData:(id)arg1 error:(id*)arg2 ;
+(id)revokedEndpointWithPublicKeyIdentifier:(id)arg1 revocationAttestation:(id)arg2 error:(id*)arg3 ;
-(NSData *)publicKey;
-(void)setFriendlyName:(NSString *)arg1 ;
-(NSData *)deviceConfiguration;
-(NSString *)invitationIdentifier;
-(NSData *)revocationAttestation;
-(NSData *)trackingRequest;
-(NSData *)trackingReceipt;
-(void)setInvitationIdentifier:(NSString *)arg1 ;
-(void)setTrackingRequest:(NSData *)arg1 ;
-(id)dumpState;
-(id)encodeWithError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)certificates;
-(NSNumber *)counter;
-(id)description;
-(SEEndPointConfiguration *)configuration;
-(NSString *)subjectIdentifier;
-(void)setEnvironment:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)environment;
-(NSData *)keyIdentifier;
-(NSString *)identifier;
-(NSString *)friendlyName;
-(NSString *)issuerIdentifier;
-(NSString *)bluetoothUUID;
-(void)setBluetoothUUID:(NSString *)arg1 ;
-(NSData *)readerIdentifier;
-(NSData *)publicKeyIdentifier;
-(NSString *)readerInfo;
-(id)generateEndPointPrivacyLongTermPrivacyKey;
-(NSNumber *)privateMailBoxSize;
-(NSNumber *)confidentialMailBoxSize;
-(NSString *)privacyKeyIdentifier;
-(NSData *)privacyPublicKey;
-(NSData *)privacyPublicKeyIdentifier;
-(NSData *)readerPublicKey;
-(NSArray *)authorizedKeys;
-(NSData *)mailboxMapping;
-(NSData *)sharingAttestationData;
-(NSData *)ownerEphemeralKey;
-(NSData *)sharingEncryptedData;
-(SEEndPointPrivacyEncryptResponse *)carOEMProprietaryData;
-(NSNumber *)sharingTokenAvailabilityBitmap;
-(NSNumber *)bluetoothPSM;
-(NSData *)readerLongTermPublicKeyCertificate;
-(NSArray *)sharingRecords;
-(id)validateAuthorizedEndpointConfig:(id)arg1 ;
-(void)prependCertificateChain:(id)arg1 ;
-(id)configurePrivateData:(id)arg1 confidentialData:(id)arg2 contaclessPersistentVisibility:(id)arg3 wiredPersistentVisibility:(id)arg4 ;
-(void)configurePrivateDataOffset:(unsigned short)arg1 privateDataLength:(unsigned short)arg2 confidentialDataOffset:(unsigned short)arg3 confidentialDataLength:(unsigned short)arg4 contaclessVisibility:(BOOL)arg5 wiredVisibility:(BOOL)arg6 ;
-(id)decryptPrivacyData:(id)arg1 serverPrivacyPublicKeyData:(id)arg2 plainText:(id*)arg3 ;
-(id)encryptPrivacyData:(id)arg1 serverPrivacyPublicKeyData:(id)arg2 ephemeralPublicKeyData:(id*)arg3 cipherText:(id*)arg4 ;
-(id)deleteEndPointLongTermPrivacyKey;
-(void)setReaderLongTermPublicKeyCertificate:(NSData *)arg1 ;
-(void)setReaderInfo:(NSString *)arg1 ;
-(void)setMailboxMapping:(NSData *)arg1 ;
-(void)setTrackingReceipt:(NSData *)arg1 ;
-(void)setDeviceConfiguration:(NSData *)arg1 ;
-(void)setSharingTokenAvailabilityBitmap:(NSNumber *)arg1 ;
-(void)setBluetoothPSM:(NSNumber *)arg1 ;
-(void)setSharingRecords:(NSArray *)arg1 ;
-(void)setRevocationAttestation:(NSData *)arg1 ;
-(void)setCarOEMProprietaryData:(SEEndPointPrivacyEncryptResponse *)arg1 ;
-(void)setSharingAttestationData:(NSData *)arg1 ;
-(void)setOwnerEphemeralKey:(NSData *)arg1 ;
-(void)setSharingEncryptedData:(NSData *)arg1 ;
@end
