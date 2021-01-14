/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPWiFiConfigurationOperationTypeWrapper, HAPTLVUnsignedNumberValue, HAPWiFiConfigurationUpdateStatusWrapper, NSString, HAPWiFiStationConfiguration;

@interface HAPWiFiConfigurationControl : NSObject <NSCopying, HAPTLVProtocol> {

	HAPWiFiConfigurationOperationTypeWrapper* _operationType;
	HAPTLVUnsignedNumberValue* _cookie;
	HAPWiFiConfigurationUpdateStatusWrapper* _updateStatus;
	HAPTLVUnsignedNumberValue* _operationTimeout;
	NSString* _countryCodeConfiguration;
	HAPWiFiStationConfiguration* _stationConfiguration;

}

@property (nonatomic,retain) HAPWiFiConfigurationOperationTypeWrapper * operationType;              //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * cookie;                                    //@synthesize cookie=_cookie - In the implementation block
@property (nonatomic,retain) HAPWiFiConfigurationUpdateStatusWrapper * updateStatus;                //@synthesize updateStatus=_updateStatus - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * operationTimeout;                          //@synthesize operationTimeout=_operationTimeout - In the implementation block
@property (nonatomic,retain) NSString * countryCodeConfiguration;                                   //@synthesize countryCodeConfiguration=_countryCodeConfiguration - In the implementation block
@property (nonatomic,retain) HAPWiFiStationConfiguration * stationConfiguration;                    //@synthesize stationConfiguration=_stationConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(HAPWiFiConfigurationOperationTypeWrapper *)operationType;
-(HAPTLVUnsignedNumberValue *)cookie;
-(void)setCookie:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setOperationTimeout:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPWiFiConfigurationUpdateStatusWrapper *)updateStatus;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HAPTLVUnsignedNumberValue *)operationTimeout;
-(void)setOperationType:(HAPWiFiConfigurationOperationTypeWrapper *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setStationConfiguration:(HAPWiFiStationConfiguration *)arg1 ;
-(void)setUpdateStatus:(HAPWiFiConfigurationUpdateStatusWrapper *)arg1 ;
-(void)setCountryCodeConfiguration:(NSString *)arg1 ;
-(NSString *)countryCodeConfiguration;
-(HAPWiFiStationConfiguration *)stationConfiguration;
-(id)initWithOperationType:(id)arg1 cookie:(id)arg2 updateStatus:(id)arg3 operationTimeout:(id)arg4 countryCodeConfiguration:(id)arg5 stationConfiguration:(id)arg6 ;
@end
