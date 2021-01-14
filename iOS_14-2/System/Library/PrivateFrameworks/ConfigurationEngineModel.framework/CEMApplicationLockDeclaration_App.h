/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, CEMApplicationLockDeclaration_AppOptions, CEMApplicationLockDeclaration_AppUserEnabledOptions;

@interface CEMApplicationLockDeclaration_App : CEMPayloadBase {

	NSString* _payloadIdentifier;
	CEMApplicationLockDeclaration_AppOptions* _payloadOptions;
	CEMApplicationLockDeclaration_AppUserEnabledOptions* _payloadUserEnabledOptions;

}

@property (nonatomic,copy) NSString * payloadIdentifier;                                                                 //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) CEMApplicationLockDeclaration_AppOptions * payloadOptions;                                    //@synthesize payloadOptions=_payloadOptions - In the implementation block
@property (nonatomic,copy) CEMApplicationLockDeclaration_AppUserEnabledOptions * payloadUserEnabledOptions;              //@synthesize payloadUserEnabledOptions=_payloadUserEnabledOptions - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withOptions:(id)arg2 withUserEnabledOptions:(id)arg3 ;
-(NSString *)payloadIdentifier;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(CEMApplicationLockDeclaration_AppOptions *)payloadOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadOptions:(CEMApplicationLockDeclaration_AppOptions *)arg1 ;
-(void)setPayloadUserEnabledOptions:(CEMApplicationLockDeclaration_AppUserEnabledOptions *)arg1 ;
-(CEMApplicationLockDeclaration_AppUserEnabledOptions *)payloadUserEnabledOptions;
@end
