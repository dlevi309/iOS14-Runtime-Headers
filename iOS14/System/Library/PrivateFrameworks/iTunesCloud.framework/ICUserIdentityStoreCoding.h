/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ICUserIdentityStoreBackend;
@class ICValueHistory, ICDelegateAccountStoreOptions;

@interface ICUserIdentityStoreCoding : NSObject <NSSecureCoding> {

	os_unfair_lock_s _lock;
	long long _identityStoreStyle;
	long long _uniqueIdentifier;
	ICValueHistory* _activeAccountHistory;
	ICValueHistory* _activeLockerAccountHistory;
	id<ICUserIdentityStoreBackend> _backend;
	ICDelegateAccountStoreOptions* _delegateAccountStoreOptions;

}

@property (nonatomic,readonly) long long identityStoreStyle;                                         //@synthesize identityStoreStyle=_identityStoreStyle - In the implementation block
@property (nonatomic,readonly) long long uniqueIdentifier;                                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) ICValueHistory * activeAccountHistory;                                    //@synthesize activeAccountHistory=_activeAccountHistory - In the implementation block
@property (nonatomic,copy) ICValueHistory * activeLockerAccountHistory;                              //@synthesize activeLockerAccountHistory=_activeLockerAccountHistory - In the implementation block
@property (nonatomic,copy) id<ICUserIdentityStoreBackend> backend;                                   //@synthesize backend=_backend - In the implementation block
@property (nonatomic,copy) ICDelegateAccountStoreOptions * delegateAccountStoreOptions;              //@synthesize delegateAccountStoreOptions=_delegateAccountStoreOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(ICValueHistory *)activeLockerAccountHistory;
-(ICValueHistory *)activeAccountHistory;
-(id)_initCommon;
-(void)setBackend:(id<ICUserIdentityStoreBackend>)arg1 ;
-(void)setActiveAccountHistory:(ICValueHistory *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)uniqueIdentifier;
-(void)setActiveLockerAccountHistory:(ICValueHistory *)arg1 ;
-(ICDelegateAccountStoreOptions *)delegateAccountStoreOptions;
-(void)setDelegateAccountStoreOptions:(ICDelegateAccountStoreOptions *)arg1 ;
-(id<ICUserIdentityStoreBackend>)backend;
-(id)initWithCoder:(id)arg1 ;
-(void)lock:(/*^block*/id)arg1 ;
-(id)initWithIdentityStoreStyle:(long long)arg1 ;
-(long long)identityStoreStyle;
@end

