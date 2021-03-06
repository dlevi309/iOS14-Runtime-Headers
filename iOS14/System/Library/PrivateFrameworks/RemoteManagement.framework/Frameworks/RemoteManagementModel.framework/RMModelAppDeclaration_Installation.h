/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelAppDeclaration_Installation : RMModelPayloadBase {

	NSString* _payloadMethod;
	NSString* _payloadVPPOnDemandLicenseAssetReference;

}

@property (nonatomic,copy) NSString * payloadMethod;                                        //@synthesize payloadMethod=_payloadMethod - In the implementation block
@property (nonatomic,copy) NSString * payloadVPPOnDemandLicenseAssetReference;              //@synthesize payloadVPPOnDemandLicenseAssetReference=_payloadVPPOnDemandLicenseAssetReference - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithMethod:(id)arg1 vppOnDemandLicenseAssetReference:(id)arg2 ;
+(id)buildRequiredOnlyWithMethod:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(NSString *)payloadVPPOnDemandLicenseAssetReference;
-(void)setPayloadMethod:(NSString *)arg1 ;
-(void)setPayloadVPPOnDemandLicenseAssetReference:(NSString *)arg1 ;
-(NSString *)payloadMethod;
@end

