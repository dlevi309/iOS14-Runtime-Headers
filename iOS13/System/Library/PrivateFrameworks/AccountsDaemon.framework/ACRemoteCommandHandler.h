/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class ACAccountStore;

@interface ACRemoteCommandHandler : NSObject {

	ACAccountStore* _accountStore;

}
-(id)init;
-(void)_saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addAccount:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_promptUserForAccountCredential:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_deleteAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_authenticateAccount:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeAllAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidateFetchedAccountsCacheWithCompletion:(/*^block*/id)arg1 ;
-(id)_localAccountMatchingRemoteAccount:(id)arg1 ;
-(void)handleCommand:(id)arg1 forAccount:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

