/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface SKUIDeveloperInfo : NSObject <NSCopying> {

	NSArray* _addressLines;
	NSString* _administrativeArea;
	NSString* _businessRegistrationIdentifier;
	NSString* _country;
	NSString* _ecommerceRegistrationIdentifier;
	NSString* _emailAddress;
	NSString* _isoCountryCode;
	NSString* _locality;
	NSString* _phoneNumber;
	NSString* _tradeName;
	NSString* _tradeRepresentativeName;
	NSString* _postalCode;

}

@property (nonatomic,copy) NSString * businessRegistrationIdentifier;               //@synthesize businessRegistrationIdentifier=_businessRegistrationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ECommerceRegistrationIdentifier;              //@synthesize ecommerceRegistrationIdentifier=_ecommerceRegistrationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                 //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * tradeName;                                    //@synthesize tradeName=_tradeName - In the implementation block
@property (nonatomic,copy) NSString * tradeRepresentativeName;                      //@synthesize tradeRepresentativeName=_tradeRepresentativeName - In the implementation block
@property (nonatomic,copy) NSArray * addressLines;                                  //@synthesize addressLines=_addressLines - In the implementation block
@property (nonatomic,copy) NSString * administrativeArea;                           //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,copy) NSString * country;                                      //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * ISOCountryCode;                               //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy) NSString * locality;                                     //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                                   //@synthesize postalCode=_postalCode - In the implementation block
-(NSString *)postalCode;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)country;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)phoneNumber;
-(void)setCountry:(NSString *)arg1 ;
-(id)formattedAddressString;
-(NSString *)locality;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(NSString *)ISOCountryCode;
-(void)setISOCountryCode:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)tradeName;
-(NSString *)tradeRepresentativeName;
-(NSString *)ECommerceRegistrationIdentifier;
-(NSString *)businessRegistrationIdentifier;
-(id)initWithDeveloperDictionary:(id)arg1 ;
-(void)setTradeName:(NSString *)arg1 ;
-(void)setAddressLines:(NSArray *)arg1 ;
-(void)setBusinessRegistrationIdentifier:(NSString *)arg1 ;
-(void)setECommerceRegistrationIdentifier:(NSString *)arg1 ;
-(void)setTradeRepresentativeName:(NSString *)arg1 ;
-(NSArray *)addressLines;
@end
