/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, HAPTLVUnsignedNumberValue, NSString;

@interface HAPCharacteristicValueTransitionPoint : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _targetValue;
	HAPTLVUnsignedNumberValue* _targetCompletionDuration;
	HAPTLVUnsignedNumberValue* _startDelayDuration;

}

@property (nonatomic,retain) NSData * targetValue;                                              //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * targetCompletionDuration;              //@synthesize targetCompletionDuration=_targetCompletionDuration - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * startDelayDuration;                    //@synthesize startDelayDuration=_startDelayDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSData *)targetValue;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setTargetValue:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAPTLVUnsignedNumberValue *)targetCompletionDuration;
-(void)setStartDelayDuration:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setTargetCompletionDuration:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)startDelayDuration;
-(id)initWithTargetValue:(id)arg1 targetCompletionDuration:(id)arg2 startDelayDuration:(id)arg3 ;
@end

