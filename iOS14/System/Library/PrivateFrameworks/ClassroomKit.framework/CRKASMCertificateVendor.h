/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class CRKASMCredentialStore;

@interface CRKASMCertificateVendor : NSObject {

	CRKASMCredentialStore* _credentialStore;

}

@property (nonatomic,readonly) CRKASMCredentialStore * credentialStore;              //@synthesize credentialStore=_credentialStore - In the implementation block
-(id)manifest;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(CRKASMCredentialStore *)credentialStore;
-(id)certificatesForUserIdentifiers:(id)arg1 ;
-(id)certificatesForUserIdentifier:(id)arg1 ;
-(id)initWithCredentialStore:(id)arg1 ;
-(void)forgetPersistentIDs:(id)arg1 ;
@end

