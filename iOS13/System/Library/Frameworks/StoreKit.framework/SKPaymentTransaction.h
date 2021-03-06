/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSString, NSError, SKPayment, NSArray, NSDate, NSData;

@interface SKPaymentTransaction : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * matchingIdentifier; 
@property (nonatomic,readonly) NSString * _transactionIdentifier; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) SKPaymentTransaction * originalTransaction; 
@property (nonatomic,readonly) SKPayment * payment; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (nonatomic,readonly) NSDate * transactionDate; 
@property (nonatomic,readonly) NSString * transactionIdentifier; 
@property (nonatomic,readonly) NSData * transactionReceipt; 
@property (nonatomic,readonly) long long transactionState; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(id)UUID;
-(NSDate *)transactionDate;
-(NSString *)transactionIdentifier;
-(NSArray *)downloads;
-(SKPayment *)payment;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithPayment:(id)arg1 ;
-(long long)transactionState;
-(NSString *)matchingIdentifier;
-(BOOL)mergeWithServerTransaction:(id)arg1 ;
-(id)initWithServerTransaction:(id)arg1 ;
-(NSString *)_transactionIdentifier;
-(void)_setTransactionState:(long long)arg1 ;
-(BOOL)canMergeWithTransaction:(id)arg1 ;
-(BOOL)mergeWithTransaction:(id)arg1 ;
-(void)_setDownloads:(id)arg1 ;
-(id)getPaymentDiscountFromTransactionXPCEncoding:(id)arg1 ;
-(SKPaymentTransaction *)originalTransaction;
-(NSData *)transactionReceipt;
-(void)_setOriginalTransaction:(id)arg1 ;
-(void)_setTemporaryIdentifier:(id)arg1 ;
-(void)_setTransactionDate:(id)arg1 ;
-(void)_setTransactionIdentifier:(id)arg1 ;
-(void)_setTransactionReceipt:(id)arg1 ;
@end

