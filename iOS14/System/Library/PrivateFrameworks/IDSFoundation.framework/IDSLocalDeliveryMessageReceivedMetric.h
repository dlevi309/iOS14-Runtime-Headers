/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSLocalDeliveryMessageReceivedMetric : NSObject <CUTCoreAnalyticsMetric> {

	BOOL _isFromDefaultPairedDevice;
	NSString* _service;
	unsigned long long _messageSize;
	unsigned long long _linkType;
	unsigned long long _priority;

}

@property (nonatomic,readonly) NSString * service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL isFromDefaultPairedDevice;              //@synthesize isFromDefaultPairedDevice=_isFromDefaultPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned long long messageSize;              //@synthesize messageSize=_messageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long linkType;                 //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                 //@synthesize priority=_priority - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)linkType;
-(NSString *)name;
-(BOOL)isFromDefaultPairedDevice;
-(id)initWithService:(id)arg1 isFromDefaultPairedDevice:(BOOL)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 priority:(unsigned long long)arg5 ;
-(unsigned long long)priority;
-(unsigned long long)messageSize;
-(NSString *)service;
@end

