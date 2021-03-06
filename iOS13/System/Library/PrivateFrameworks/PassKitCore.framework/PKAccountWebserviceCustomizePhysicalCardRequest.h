/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSURL, NSString;

@interface PKAccountWebserviceCustomizePhysicalCardRequest : PKAccountWebServiceRequest {

	NSURL* _baseURL;
	NSString* _accountIdentifier;

}

@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
@end

