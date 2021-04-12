/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMAuthenticationParameters : FATObject {

	NSString* _usernameOrEmail;
	NSString* _password;
	NSString* _ssoLoginToken;
	NSString* _consumerKey;
	NSString* _consumerSecret;
	NSString* _deviceIdentifier;
	NSString* _deviceDescription;
	NSNumber* _supportsTwoFactor;
	NSNumber* _supportsBusinessOnlyAccounts;

}

@property (nonatomic,retain) NSString * usernameOrEmail;                           //@synthesize usernameOrEmail=_usernameOrEmail - In the implementation block
@property (nonatomic,retain) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * ssoLoginToken;                             //@synthesize ssoLoginToken=_ssoLoginToken - In the implementation block
@property (nonatomic,retain) NSString * consumerKey;                               //@synthesize consumerKey=_consumerKey - In the implementation block
@property (nonatomic,retain) NSString * consumerSecret;                            //@synthesize consumerSecret=_consumerSecret - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * deviceDescription;                         //@synthesize deviceDescription=_deviceDescription - In the implementation block
@property (nonatomic,retain) NSNumber * supportsTwoFactor;                         //@synthesize supportsTwoFactor=_supportsTwoFactor - In the implementation block
@property (nonatomic,retain) NSNumber * supportsBusinessOnlyAccounts;              //@synthesize supportsBusinessOnlyAccounts=_supportsBusinessOnlyAccounts - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceDescription;
-(NSString *)password;
-(NSString *)consumerKey;
-(void)setConsumerKey:(NSString *)arg1 ;
-(NSString *)consumerSecret;
-(void)setConsumerSecret:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)usernameOrEmail;
-(void)setUsernameOrEmail:(NSString *)arg1 ;
-(NSString *)ssoLoginToken;
-(void)setSsoLoginToken:(NSString *)arg1 ;
-(void)setDeviceDescription:(NSString *)arg1 ;
-(NSNumber *)supportsTwoFactor;
-(void)setSupportsTwoFactor:(NSNumber *)arg1 ;
-(NSNumber *)supportsBusinessOnlyAccounts;
-(void)setSupportsBusinessOnlyAccounts:(NSNumber *)arg1 ;
@end
