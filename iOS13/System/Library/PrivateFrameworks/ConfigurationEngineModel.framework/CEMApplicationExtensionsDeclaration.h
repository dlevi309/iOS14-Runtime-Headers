/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface CEMApplicationExtensionsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadAllowedExtensions;
	NSArray* _payloadDeniedExtensions;
	NSArray* _payloadDeniedExtensionPoints;

}

@property (nonatomic,copy) NSArray * payloadAllowedExtensions;                  //@synthesize payloadAllowedExtensions=_payloadAllowedExtensions - In the implementation block
@property (nonatomic,copy) NSArray * payloadDeniedExtensions;                   //@synthesize payloadDeniedExtensions=_payloadDeniedExtensions - In the implementation block
@property (nonatomic,copy) NSArray * payloadDeniedExtensionPoints;              //@synthesize payloadDeniedExtensionPoints=_payloadDeniedExtensionPoints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowedExtensions:(id)arg2 withDeniedExtensions:(id)arg3 withDeniedExtensionPoints:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowedExtensions:(NSArray *)arg1 ;
-(void)setPayloadDeniedExtensions:(NSArray *)arg1 ;
-(void)setPayloadDeniedExtensionPoints:(NSArray *)arg1 ;
-(NSArray *)payloadAllowedExtensions;
-(NSArray *)payloadDeniedExtensions;
-(NSArray *)payloadDeniedExtensionPoints;
@end
