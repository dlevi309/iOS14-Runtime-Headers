/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, NSMapTable;

@interface _HAPBTLEDiscoveryContext : HMFObject {

	long long _discoveryType;
	NSMutableArray* _discoveringServices;
	NSMutableArray* _discoveringCharacteristics;
	NSMutableArray* _readingCharacteristics;
	NSMutableArray* _discoveringDescriptors;
	NSMutableArray* _readingDescriptors;
	NSMutableArray* _readingSignatureCharacteristics;
	NSMutableArray* _readingSignatureServices;
	NSMapTable* _characteristicSignatures;
	NSMapTable* _serviceSignatures;
	long long _retries;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) long long discoveryType;                                       //@synthesize discoveryType=_discoveryType - In the implementation block
@property (nonatomic,readonly) NSMutableArray * discoveringServices;                          //@synthesize discoveringServices=_discoveringServices - In the implementation block
@property (nonatomic,readonly) NSMutableArray * discoveringCharacteristics;                   //@synthesize discoveringCharacteristics=_discoveringCharacteristics - In the implementation block
@property (nonatomic,readonly) NSMutableArray * readingCharacteristics;                       //@synthesize readingCharacteristics=_readingCharacteristics - In the implementation block
@property (nonatomic,readonly) NSMutableArray * discoveringDescriptors;                       //@synthesize discoveringDescriptors=_discoveringDescriptors - In the implementation block
@property (nonatomic,readonly) NSMutableArray * readingDescriptors;                           //@synthesize readingDescriptors=_readingDescriptors - In the implementation block
@property (nonatomic,readonly) NSMutableArray * readingSignatureCharacteristics;              //@synthesize readingSignatureCharacteristics=_readingSignatureCharacteristics - In the implementation block
@property (nonatomic,readonly) NSMutableArray * readingSignatureServices;                     //@synthesize readingSignatureServices=_readingSignatureServices - In the implementation block
@property (nonatomic,readonly) NSMapTable * characteristicSignatures;                         //@synthesize characteristicSignatures=_characteristicSignatures - In the implementation block
@property (nonatomic,readonly) NSMapTable * serviceSignatures;                                //@synthesize serviceSignatures=_serviceSignatures - In the implementation block
@property (assign,nonatomic) long long retries;                                               //@synthesize retries=_retries - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,copy) id completionHandler;                                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(BOOL)isComplete;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setRetries:(long long)arg1 ;
-(long long)retries;
-(void)reset;
-(NSMutableArray *)discoveringServices;
-(NSMutableArray *)discoveringCharacteristics;
-(NSMutableArray *)readingCharacteristics;
-(NSMutableArray *)discoveringDescriptors;
-(NSMutableArray *)readingDescriptors;
-(NSMutableArray *)readingSignatureCharacteristics;
-(NSMutableArray *)readingSignatureServices;
-(NSMapTable *)characteristicSignatures;
-(NSMapTable *)serviceSignatures;
-(id)initWithDiscoveryType:(long long)arg1 ;
-(long long)discoveryType;
@end

