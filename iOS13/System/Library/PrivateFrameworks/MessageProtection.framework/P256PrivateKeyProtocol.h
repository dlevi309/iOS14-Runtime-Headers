/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@protocol P256PrivateKeyProtocol <NSObject>
@required
+(id)generate;
-(id)publicKey;
-(id)initWithData:(id)arg1 error:(id*)arg2;
-(id)signData:(id)arg1 error:(id*)arg2;
-(id)keychainData;
-(id)keyAgreement:(id)arg1 error:(id*)arg2;

@end

