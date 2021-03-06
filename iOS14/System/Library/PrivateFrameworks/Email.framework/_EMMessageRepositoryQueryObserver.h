/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EMMessageListItemQueryResultsObserver.h>
#import <libobjc.A.dylib/EMRecoverableObserver.h>

@protocol EMQueryResultsObserver;
@class EMMessageRepository, EFQuery, EMObjectID, EFCancelationToken, NSDate, NSString;

@interface _EMMessageRepositoryQueryObserver : NSObject <EMMessageListItemQueryResultsObserver, EMRecoverableObserver> {

	EMMessageRepository* _repository;
	EFQuery* _query;
	EMObjectID* _observationIdentifier;
	id<EMQueryResultsObserver> _observer;
	EFCancelationToken* _token;
	NSDate* _lastRecoveryAttemptDate;
	long long _recoveryAttempt;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observer:(id)arg1 wasUpdated:(id)arg2 ;
-(void)observerWillRestart:(id)arg1 ;
-(void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 before:(id)arg3 extraInfo:(id)arg4 ;
-(void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 after:(id)arg3 extraInfo:(id)arg4 ;
-(void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 before:(id)arg3 ;
-(void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 after:(id)arg3 ;
-(void)observer:(id)arg1 matchedChangesForObjectIDs:(id)arg2 ;
-(void)observer:(id)arg1 matchedDeletedObjectIDs:(id)arg2 ;
-(void)observer:(id)arg1 replacedExistingObjectID:(id)arg2 withNewObjectID:(id)arg3 ;
-(void)observer:(id)arg1 matchedOldestItemsUpdatedForMailboxes:(id)arg2 ;
-(void)observerDidFinishInitialLoad:(id)arg1 ;
-(void)observerDidFinishRemoteSearch:(id)arg1 ;
-(void)recoverQueryWithRemoteConnection:(id)arg1 ;
-(id)initWithRepository:(id)arg1 query:(id)arg2 observer:(id)arg3 ;
-(void)performQueryWithRemoteConnection:(id)arg1 ;
-(void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(BOOL)arg2 ;
-(void)cancel;
-(void)dealloc;
@end

