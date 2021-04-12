/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <StoreBookkeeper/SBKTransaction.h>

@protocol SBKKeyValuePayloadPair;
@class NSString;

@interface SBKPullValueTransaction : SBKTransaction {

	BOOL _success;
	NSString* _requestedKey;
	id<SBKKeyValuePayloadPair> _clientItemPayloadPair;
	NSString* _clientItemVersionAnchor;
	id<SBKKeyValuePayloadPair> _resultItemPayloadPair;
	NSString* _resultItemVersionAnchor;
	NSString* _resultDomainVersion;

}

@property (copy,readonly) NSString * requestedKey;                                  //@synthesize requestedKey=_requestedKey - In the implementation block
@property (readonly) id<SBKKeyValuePayloadPair> clientItemPayloadPair;              //@synthesize clientItemPayloadPair=_clientItemPayloadPair - In the implementation block
@property (readonly) NSString * clientItemVersionAnchor;                            //@synthesize clientItemVersionAnchor=_clientItemVersionAnchor - In the implementation block
@property (readonly) BOOL success;                                                  //@synthesize success=_success - In the implementation block
@property (readonly) id<SBKKeyValuePayloadPair> resultItemPayloadPair;              //@synthesize resultItemPayloadPair=_resultItemPayloadPair - In the implementation block
@property (readonly) NSString * resultItemVersionAnchor;                            //@synthesize resultItemVersionAnchor=_resultItemVersionAnchor - In the implementation block
@property (readonly) NSString * resultDomainVersion;                                //@synthesize resultDomainVersion=_resultDomainVersion - In the implementation block
-(id)description;
-(BOOL)success;
-(id)newRequest;
-(NSString *)clientItemVersionAnchor;
-(NSString *)requestedKey;
-(id)clampsKey;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id<SBKKeyValuePayloadPair>)clientItemPayloadPair;
-(id<SBKKeyValuePayloadPair>)resultItemPayloadPair;
-(NSString *)resultItemVersionAnchor;
-(NSString *)resultDomainVersion;
-(id)initWithStoreBagContext:(id)arg1 requestedKey:(id)arg2 clientItemPayloadPair:(id)arg3 clientItemVersionAnchor:(id)arg4 ;
@end
