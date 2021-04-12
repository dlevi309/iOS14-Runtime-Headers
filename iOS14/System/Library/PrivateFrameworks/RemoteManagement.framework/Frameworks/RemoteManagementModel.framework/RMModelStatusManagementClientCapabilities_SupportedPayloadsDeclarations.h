/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations : RMModelPayloadBase {

	NSArray* _statusActivations;
	NSArray* _statusAssets;
	NSArray* _statusConfigurations;

}

@property (nonatomic,copy) NSArray * statusActivations;                 //@synthesize statusActivations=_statusActivations - In the implementation block
@property (nonatomic,copy) NSArray * statusAssets;                      //@synthesize statusAssets=_statusAssets - In the implementation block
@property (nonatomic,copy) NSArray * statusConfigurations;              //@synthesize statusConfigurations=_statusConfigurations - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithActivations:(id)arg1 assets:(id)arg2 configurations:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setStatusActivations:(NSArray *)arg1 ;
-(void)setStatusAssets:(NSArray *)arg1 ;
-(void)setStatusConfigurations:(NSArray *)arg1 ;
-(NSArray *)statusActivations;
-(NSArray *)statusAssets;
-(NSArray *)statusConfigurations;
@end
