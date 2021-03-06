/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAiCloudTermsAgreeRequest : AARequest {

	ACAccount* _account;
	BOOL _preferPassword;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL preferPassword;              //@synthesize preferPassword=_preferPassword - In the implementation block
+(Class)responseClass;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)urlRequest;
-(BOOL)preferPassword;
-(void)setPreferPassword:(BOOL)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
@end

