/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class CdQwUTvJnDEPQgR8, NSMutableDictionary, PKDSPContext;

@interface PKDeviceScorer : NSObject {

	CdQwUTvJnDEPQgR8* _scorer;
	NSMutableDictionary* _scoreCompletions;
	double _deviceScoreTimeout;
	PKDSPContext* _context;

}

@property (assign,nonatomic) double deviceScoreTimeout;                  //@synthesize deviceScoreTimeout=_deviceScoreTimeout - In the implementation block
@property (nonatomic,copy,readonly) PKDSPContext * context;              //@synthesize context=_context - In the implementation block
+(BOOL)deviceScoringSupported;
-(id)init;
-(PKDSPContext *)context;
-(id)initWithContext:(id)arg1 ;
-(id)_createScorer;
-(void)_getScoreWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 nonce:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)peerPaymentDeviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)deviceScoreTimeout;
-(void)setDeviceScoreTimeout:(double)arg1 ;
@end

