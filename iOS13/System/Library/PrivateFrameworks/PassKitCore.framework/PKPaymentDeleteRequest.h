/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass;

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;

}

@property (nonatomic,retain) PKPaymentPass * pass;              //@synthesize pass=_pass - In the implementation block
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPaymentPass:(id)arg1 ;
@end

