/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepository.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMMailboxChangeObserver.h>
#import <libobjc.A.dylib/EMMailboxTypeResolver.h>

@protocol EFCancelable;
@class NSSet, NSMutableDictionary, EMRemoteConnection, EFPromise, NSMapTable, EMAccountRepository, NSOrderedSet, NSString;

@interface EMMailboxRepository : EMRepository <EFLoggable, EMMailboxChangeObserver, EMMailboxTypeResolver> {

	os_unfair_lock_s _mailboxesPromiseLock;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _mailboxesByObjectID;
	EMRemoteConnection* _connection;
	id<EFCancelable> _registrationCancelable;
	EFPromise* _mailboxesPromise;
	NSMapTable* _observerMap;
	EMAccountRepository* _accountRepository;

}

@property (retain) EMRemoteConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<EFCancelable> registrationCancelable;                //@synthesize registrationCancelable=_registrationCancelable - In the implementation block
@property (readonly) NSOrderedSet * mailboxesIfAvailable; 
@property (nonatomic,retain) EFPromise * mailboxesPromise;                           //@synthesize mailboxesPromise=_mailboxesPromise - In the implementation block
@property (nonatomic,retain) NSMapTable * observerMap;                               //@synthesize observerMap=_observerMap - In the implementation block
@property (nonatomic,readonly) EMAccountRepository * accountRepository;              //@synthesize accountRepository=_accountRepository - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * allMailboxObjectIDs; 
+(id)log;
+(id)remoteInterface;
-(id)initForTesting;
-(EMAccountRepository *)accountRepository;
-(id)initInternal;
-(void)setRegistrationCancelable:(id<EFCancelable>)arg1 ;
-(NSMapTable *)observerMap;
-(NSOrderedSet *)mailboxesIfAvailable;
-(id)initForTestingWithAccountRepository:(id)arg1 ;
-(id)performQuery:(id)arg1 withObserver:(id)arg2 ;
-(void)_prepareMailboxes:(id)arg1 ;
-(void)mailboxListChanged:(id)arg1 ;
-(void)performQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<EFCancelable>)registrationCancelable;
-(void)refreshMailboxList;
-(id)performMailboxChangeAction:(id)arg1 ;
-(void)_commonInitWithAccountRepository:(id)arg1 ;
-(EMRemoteConnection *)connection;
-(id)mailboxForObjectID:(id)arg1 ;
-(id)_mailboxesFuture;
-(void)_restartObservingMailboxChangesIfNecessary;
-(void)setMailboxesPromise:(EFPromise *)arg1 ;
-(id)remoteMailboxObjectIDsForMailboxType:(long long)arg1 ;
-(id)mailboxObjectIDsForMailboxType:(long long)arg1 ;
-(NSSet *)allMailboxObjectIDs;
-(id)remoteAllMailboxObjectIDs;
-(id)mailboxesForObjectIDs:(id)arg1 ;
-(long long)remoteMailboxTypeForMailboxObjectID:(id)arg1 ;
-(id)initWithRemoteConnection:(id)arg1 accountRepository:(id)arg2 ;
-(void)_startObservingMailboxChangesIfNecessary;
-(long long)mailboxTypeForMailboxObjectID:(id)arg1 ;
-(id)_filterIDsFromMailbox:(id)arg1 withQuery:(id)arg2 ;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(void)dealloc;
-(EFPromise *)mailboxesPromise;
-(void)setObserverMap:(NSMapTable *)arg1 ;
@end
