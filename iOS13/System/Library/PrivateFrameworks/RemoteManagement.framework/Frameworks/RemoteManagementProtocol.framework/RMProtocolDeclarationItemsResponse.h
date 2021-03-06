/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class RMProtocolDeclarationItemsResponse_Declarations, NSString;

@interface RMProtocolDeclarationItemsResponse : RMModelPayloadBase {

	RMProtocolDeclarationItemsResponse_Declarations* _responseDeclarations;
	NSString* _responseDeclarationsToken;

}

@property (nonatomic,copy) RMProtocolDeclarationItemsResponse_Declarations * responseDeclarations;              //@synthesize responseDeclarations=_responseDeclarations - In the implementation block
@property (nonatomic,copy) NSString * responseDeclarationsToken;                                                //@synthesize responseDeclarationsToken=_responseDeclarationsToken - In the implementation block
+(id)requestWithDeclarations:(id)arg1 declarationsToken:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseDeclarations:(RMProtocolDeclarationItemsResponse_Declarations *)arg1 ;
-(void)setResponseDeclarationsToken:(NSString *)arg1 ;
-(RMProtocolDeclarationItemsResponse_Declarations *)responseDeclarations;
-(NSString *)responseDeclarationsToken;
@end

