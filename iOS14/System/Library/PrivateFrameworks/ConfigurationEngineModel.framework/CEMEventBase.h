/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMEventBase : CEMPayloadBase {

	NSString* _payloadType;

}

@property (nonatomic,copy) NSString * payloadType;              //@synthesize payloadType=_payloadType - In the implementation block
+(id)eventForPayload:(id)arg1 error:(id*)arg2 ;
-(NSString *)payloadType;
-(void)setPayloadType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
