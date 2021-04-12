/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKDSPContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _secureElementID;
	NSString* _serverEndpointIdentifier;
	NSString* _cardholderName;
	NSString* _phoneNumber;
	NSString* _peerPaymentRecipientAddress;
	unsigned long long _eventFrequency;
	NSString* _primaryAppleAccountFirstName;
	NSString* _primaryAppleAccountLastName;

}

@property (nonatomic,copy) NSString * primaryAppleAccountFirstName;              //@synthesize primaryAppleAccountFirstName=_primaryAppleAccountFirstName - In the implementation block
@property (nonatomic,copy) NSString * primaryAppleAccountLastName;               //@synthesize primaryAppleAccountLastName=_primaryAppleAccountLastName - In the implementation block
@property (nonatomic,copy) NSString * secureElementID;                           //@synthesize secureElementID=_secureElementID - In the implementation block
@property (nonatomic,copy) NSString * serverEndpointIdentifier;                  //@synthesize serverEndpointIdentifier=_serverEndpointIdentifier - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                            //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * peerPaymentRecipientAddress;               //@synthesize peerPaymentRecipientAddress=_peerPaymentRecipientAddress - In the implementation block
@property (assign,nonatomic) unsigned long long eventFrequency;                  //@synthesize eventFrequency=_eventFrequency - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)cardholderName;
-(void)setPrimaryAppleAccount:(id)arg1 ;
-(NSString *)secureElementID;
-(void)setSecureElementID:(NSString *)arg1 ;
-(NSString *)serverEndpointIdentifier;
-(void)setServerEndpointIdentifier:(NSString *)arg1 ;
-(void)setCardholderName:(NSString *)arg1 ;
-(NSString *)peerPaymentRecipientAddress;
-(void)setPeerPaymentRecipientAddress:(NSString *)arg1 ;
-(unsigned long long)eventFrequency;
-(void)setEventFrequency:(unsigned long long)arg1 ;
-(NSString *)primaryAppleAccountFirstName;
-(void)setPrimaryAppleAccountFirstName:(NSString *)arg1 ;
-(NSString *)primaryAppleAccountLastName;
-(void)setPrimaryAppleAccountLastName:(NSString *)arg1 ;
@end
