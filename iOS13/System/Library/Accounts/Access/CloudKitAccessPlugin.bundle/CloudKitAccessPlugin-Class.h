/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Access/CloudKitAccessPlugin.bundle/CloudKitAccessPlugin
*/

#import <libobjc.A.dylib/ACDAccountAccessPlugin.h>

@class ACAccountStore, NSString;

@interface CloudKitAccessPlugin : NSObject <ACDAccountAccessPlugin> {

	ACAccountStore* _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAccountTypeWithIdentifier:(id)arg1 ;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_ckAccountInStore:(id)arg1 ;
-(BOOL)_haveAccountsOfType:(id)arg1 withStore:(id)arg2 ;
@end

