/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFCancelable.h>

@class EDMessagePersistence, EMMailboxScope, EFQuery, EFCancelationToken, EFQueue, NSMutableSet, NSString;

@interface EDPersistedMessageQueryIterator : NSObject <EFCancelable> {

	EDMessagePersistence* _messagePersistence;
	EMMailboxScope* _mailboxScope;
	EFQuery* _query;
	EFCancelationToken* _cancelationToken;
	EFQueue* _persistedMessageQueue;
	long long _remaining;
	NSMutableSet* _seenHashes;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)flush;
-(BOOL)shouldCancel;
-(id)initWithMessagePersistence:(id)arg1 query:(id)arg2 batchSize:(long long)arg3 firstBatchSize:(long long)arg4 limit:(long long)arg5 handler:(/*^block*/id)arg6 ;
-(void)addPersistedMessage:(id)arg1 ;
-(void)_processPersistedMessages:(id)arg1 ;
-(void)addPersistedMessages:(id)arg1 ;
@end

