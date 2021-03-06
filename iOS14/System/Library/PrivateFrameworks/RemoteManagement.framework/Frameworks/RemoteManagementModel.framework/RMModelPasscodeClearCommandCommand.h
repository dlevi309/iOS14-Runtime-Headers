/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelCommandBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString;

@interface RMModelPasscodeClearCommandCommand : RMModelCommandBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadEscrowToken;

}

@property (nonatomic,copy) NSString * payloadEscrowToken;              //@synthesize payloadEscrowToken=_payloadEscrowToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 escrowToken:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 escrowToken:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setPayloadEscrowToken:(NSString *)arg1 ;
-(NSString *)payloadEscrowToken;
@end

