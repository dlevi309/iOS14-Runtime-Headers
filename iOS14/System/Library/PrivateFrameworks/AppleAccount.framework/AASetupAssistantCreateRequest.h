/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantCreateRequest : AARequest {

	NSDictionary* appleIDParameters;
	AASigningSession* signingSession;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 withAppleIDParameters:(id)arg2 signingSession:(id)arg3 ;
-(id)bodyDictionary;
@end

