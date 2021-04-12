/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemWebDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadForceLimitAdTracking;
	NSNumber* _payloadSafariAllowAutoFill;
	NSNumber* _payloadSafariForceFraudWarning;
	NSNumber* _payloadSafariAllowJavaScript;
	NSNumber* _payloadSafariAllowPopups;
	NSNumber* _payloadSafariAcceptCookies;
	NSNumber* _payloadForceAuthenticationBeforeAutoFill;

}

@property (nonatomic,copy) NSNumber * payloadForceLimitAdTracking;                           //@synthesize payloadForceLimitAdTracking=_payloadForceLimitAdTracking - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSafariAllowAutoFill;                            //@synthesize payloadSafariAllowAutoFill=_payloadSafariAllowAutoFill - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSafariForceFraudWarning;                        //@synthesize payloadSafariForceFraudWarning=_payloadSafariForceFraudWarning - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSafariAllowJavaScript;                          //@synthesize payloadSafariAllowJavaScript=_payloadSafariAllowJavaScript - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSafariAllowPopups;                              //@synthesize payloadSafariAllowPopups=_payloadSafariAllowPopups - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSafariAcceptCookies;                            //@synthesize payloadSafariAcceptCookies=_payloadSafariAcceptCookies - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceAuthenticationBeforeAutoFill;              //@synthesize payloadForceAuthenticationBeforeAutoFill=_payloadForceAuthenticationBeforeAutoFill - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withForceLimitAdTracking:(id)arg2 withSafariAllowAutoFill:(id)arg3 withSafariForceFraudWarning:(id)arg4 withSafariAllowJavaScript:(id)arg5 withSafariAllowPopups:(id)arg6 withSafariAcceptCookies:(id)arg7 withForceAuthenticationBeforeAutoFill:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadForceLimitAdTracking:(NSNumber *)arg1 ;
-(void)setPayloadSafariAllowAutoFill:(NSNumber *)arg1 ;
-(void)setPayloadSafariForceFraudWarning:(NSNumber *)arg1 ;
-(void)setPayloadSafariAllowJavaScript:(NSNumber *)arg1 ;
-(void)setPayloadSafariAllowPopups:(NSNumber *)arg1 ;
-(void)setPayloadSafariAcceptCookies:(NSNumber *)arg1 ;
-(void)setPayloadForceAuthenticationBeforeAutoFill:(NSNumber *)arg1 ;
-(NSNumber *)payloadForceLimitAdTracking;
-(NSNumber *)payloadSafariAllowAutoFill;
-(NSNumber *)payloadSafariForceFraudWarning;
-(NSNumber *)payloadSafariAllowJavaScript;
-(NSNumber *)payloadSafariAllowPopups;
-(NSNumber *)payloadSafariAcceptCookies;
-(NSNumber *)payloadForceAuthenticationBeforeAutoFill;
@end
