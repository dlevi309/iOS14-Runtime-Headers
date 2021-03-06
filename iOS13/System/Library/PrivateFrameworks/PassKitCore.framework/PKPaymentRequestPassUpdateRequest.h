/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPassUpgradeRequest;

@interface PKPaymentRequestPassUpdateRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPassUpgradeRequest* _request;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                        //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPassUpgradeRequest * request;              //@synthesize request=_request - In the implementation block
-(PKPassUpgradeRequest *)request;
-(PKPaymentPass *)pass;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithPaymentPass:(id)arg1 updateRequest:(id)arg2 ;
@end

