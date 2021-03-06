/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSNumber, NSData, NSArray, NSDictionary;

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions {

	BOOL _establishesActiveAccount;
	BOOL _ignoresPreviousClaimAttempts;
	BOOL _suppressErrorDialogs;
	NSNumber* _accountID;
	NSData* _clientAuditTokenData;
	NSArray* _bundleIdentifiers;
	long long _claimStyle;
	NSDictionary* _httpHeaders;
	NSNumber* _purchaseID;

}

@property (nonatomic,copy) NSNumber * accountID;                             //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSData * clientAuditTokenData;                    //@synthesize clientAuditTokenData=_clientAuditTokenData - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIdentifiers;                  //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,readonly) long long claimStyle;                         //@synthesize claimStyle=_claimStyle - In the implementation block
@property (assign,nonatomic) BOOL establishesActiveAccount;                  //@synthesize establishesActiveAccount=_establishesActiveAccount - In the implementation block
@property (nonatomic,copy) NSDictionary * httpHeaders;                       //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (assign,nonatomic) BOOL ignoresPreviousClaimAttempts;              //@synthesize ignoresPreviousClaimAttempts=_ignoresPreviousClaimAttempts - In the implementation block
@property (nonatomic,copy) NSNumber * purchaseID;                            //@synthesize purchaseID=_purchaseID - In the implementation block
@property (assign,nonatomic) BOOL suppressErrorDialogs;                      //@synthesize suppressErrorDialogs=_suppressErrorDialogs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)accountID;
-(void)setAccountID:(NSNumber *)arg1 ;
-(void)setPurchaseID:(NSNumber *)arg1 ;
-(void)setClientAuditTokenData:(NSData *)arg1 ;
-(BOOL)suppressErrorDialogs;
-(BOOL)establishesActiveAccount;
-(BOOL)ignoresPreviousClaimAttempts;
-(void)setEstablishesActiveAccount:(BOOL)arg1 ;
-(void)setIgnoresPreviousClaimAttempts:(BOOL)arg1 ;
-(void)setSuppressErrorDialogs:(BOOL)arg1 ;
-(id)initWithClaimStyle:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(NSNumber *)purchaseID;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)httpHeaders;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)clientAuditTokenData;
-(long long)claimStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)bundleIdentifiers;
@end

