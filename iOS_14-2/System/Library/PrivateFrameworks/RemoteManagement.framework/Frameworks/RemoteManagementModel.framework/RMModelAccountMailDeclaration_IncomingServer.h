/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, NSNumber;

@interface RMModelAccountMailDeclaration_IncomingServer : RMModelPayloadBase {

	NSString* _payloadServerType;
	NSString* _payloadHostName;
	NSNumber* _payloadPort;
	NSString* _payloadAuthenticationMethod;
	NSString* _payloadAuthenticationCredentialsAssetReference;
	NSString* _payloadIMAPPathPrefix;

}

@property (nonatomic,copy) NSString * payloadServerType;                                           //@synthesize payloadServerType=_payloadServerType - In the implementation block
@property (nonatomic,copy) NSString * payloadHostName;                                             //@synthesize payloadHostName=_payloadHostName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPort;                                                 //@synthesize payloadPort=_payloadPort - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationMethod;                                 //@synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationCredentialsAssetReference;              //@synthesize payloadAuthenticationCredentialsAssetReference=_payloadAuthenticationCredentialsAssetReference - In the implementation block
@property (nonatomic,copy) NSString * payloadIMAPPathPrefix;                                       //@synthesize payloadIMAPPathPrefix=_payloadIMAPPathPrefix - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithServerType:(id)arg1 hostName:(id)arg2 port:(id)arg3 authenticationMethod:(id)arg4 authenticationCredentialsAssetReference:(id)arg5 imapPathPrefix:(id)arg6 ;
+(id)buildRequiredOnlyWithServerType:(id)arg1 hostName:(id)arg2 authenticationMethod:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadHostName:(NSString *)arg1 ;
-(NSString *)payloadHostName;
-(void)setPayloadPort:(NSNumber *)arg1 ;
-(NSNumber *)payloadPort;
-(void)setPayloadAuthenticationMethod:(NSString *)arg1 ;
-(NSString *)payloadAuthenticationMethod;
-(NSString *)payloadAuthenticationCredentialsAssetReference;
-(void)setPayloadAuthenticationCredentialsAssetReference:(NSString *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setPayloadServerType:(NSString *)arg1 ;
-(void)setPayloadIMAPPathPrefix:(NSString *)arg1 ;
-(NSString *)payloadServerType;
-(NSString *)payloadIMAPPathPrefix;
@end
