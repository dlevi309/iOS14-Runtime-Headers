/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, PKMerchant, NSSet, NSArray, PKSearchQuery, PKCurrencyAmount;

@interface PKPaymentTransactionGroup : NSObject <NSSecureCoding> {

	unsigned long long _type;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _merchantCategory;
	PKMerchant* _merchant;
	NSSet* _handles;
	NSArray* _regions;
	PKSearchQuery* _searchQuery;
	unsigned long long _transactionCount;
	PKCurrencyAmount* _totalAmount;
	NSArray* _transactions;
	unsigned long long _secondaryType;
	unsigned long long _secondaryGroupCount;

}

@property (assign,nonatomic) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                    //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long merchantCategory;                          //@synthesize merchantCategory=_merchantCategory - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                               //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,retain) NSSet * handles;                                     //@synthesize handles=_handles - In the implementation block
@property (nonatomic,retain) NSArray * regions;                                   //@synthesize regions=_regions - In the implementation block
@property (nonatomic,retain) PKSearchQuery * searchQuery;                         //@synthesize searchQuery=_searchQuery - In the implementation block
@property (assign,nonatomic) unsigned long long transactionCount;                 //@synthesize transactionCount=_transactionCount - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * totalAmount;                      //@synthesize totalAmount=_totalAmount - In the implementation block
@property (nonatomic,retain) NSArray * transactions;                              //@synthesize transactions=_transactions - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryType;                    //@synthesize secondaryType=_secondaryType - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryGroupCount;              //@synthesize secondaryGroupCount=_secondaryGroupCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)transactionCount;
-(void)setHandles:(NSSet *)arg1 ;
-(NSDate *)endDate;
-(void)setTransactions:(NSArray *)arg1 ;
-(NSSet *)handles;
-(void)setStartDate:(NSDate *)arg1 ;
-(long long)merchantCategory;
-(void)setMerchantCategory:(long long)arg1 ;
-(NSArray *)transactions;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)regions;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(PKMerchant *)merchant;
-(id)description;
-(PKSearchQuery *)searchQuery;
-(void)setSearchQuery:(PKSearchQuery *)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSecondaryType:(unsigned long long)arg1 ;
-(unsigned long long)secondaryType;
-(unsigned long long)secondaryGroupCount;
-(void)setSecondaryGroupCount:(unsigned long long)arg1 ;
-(void)setMerchant:(PKMerchant *)arg1 ;
-(void)setRegions:(NSArray *)arg1 ;
-(void)setTransactionCount:(unsigned long long)arg1 ;
-(PKCurrencyAmount *)totalAmount;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTotalAmount:(PKCurrencyAmount *)arg1 ;
@end

