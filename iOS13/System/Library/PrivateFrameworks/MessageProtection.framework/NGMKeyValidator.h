/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


#import <MessageProtection/MessageProtection-Structs.h>
@interface NGMKeyValidator : NSObject
+(id)keyValidatorWithReceiversIdentity:(id)arg1 sendersIdentity:(id)arg2 ;
+(BOOL)isValidKeyValidator:(id)arg1 receiversIdentity:(id)arg2 sendersIdentity:(id)arg3 error:(id*)arg4 ;
+(NSRange)rangeOnPublicKey;
+(id)versionByte;
+(unsigned long long)validatorLength;
@end

