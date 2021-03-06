/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding> {

	BOOL _devSigned;
	NSNumber* _primaryJSBLSequenceCounter;
	NSString* _secureElementIdentifier;

}

@property (nonatomic,copy) NSNumber * primaryJSBLSequenceCounter;              //@synthesize primaryJSBLSequenceCounter=_primaryJSBLSequenceCounter - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                 //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                   //@synthesize devSigned=_devSigned - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)secureElementIdentifier;
-(NSNumber *)primaryJSBLSequenceCounter;
-(void)setPrimaryJSBLSequenceCounter:(NSNumber *)arg1 ;
-(BOOL)devSigned;
-(id)initWithCoder:(id)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
@end

