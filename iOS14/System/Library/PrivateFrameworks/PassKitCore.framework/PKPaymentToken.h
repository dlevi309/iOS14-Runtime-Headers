/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMethod, NSString, NSData, NSURL;

@interface PKPaymentToken : NSObject <NSSecureCoding> {

	PKPaymentMethod* _paymentMethod;
	NSString* _paymentInstrumentName;
	NSString* _paymentNetwork;
	NSString* _transactionIdentifier;
	NSData* _paymentData;
	NSURL* _redeemURL;
	NSString* _retryNonce;

}

@property (nonatomic,retain) PKPaymentMethod * paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,copy) NSString * paymentInstrumentName;               //@synthesize paymentInstrumentName=_paymentInstrumentName - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                      //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;               //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                           //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,retain) NSURL * redeemURL;                            //@synthesize redeemURL=_redeemURL - In the implementation block
@property (nonatomic,copy) NSString * retryNonce;                          //@synthesize retryNonce=_retryNonce - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)simulatedTokenForNetwork:(id)arg1 ;
+(id)paymentTokenWithProtobuf:(id)arg1 ;
+(long long)version;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(PKPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(PKPaymentMethod *)arg1 ;
-(NSString *)paymentInstrumentName;
-(NSURL *)redeemURL;
-(id)description;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(id)protobuf;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)retryNonce;
-(void)setPaymentInstrumentName:(NSString *)arg1 ;
-(void)setPaymentData:(NSData *)arg1 ;
-(void)setRedeemURL:(NSURL *)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(NSData *)paymentData;
-(NSString *)paymentNetwork;
-(void)setRetryNonce:(NSString *)arg1 ;
@end

