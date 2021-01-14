/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <libobjc.A.dylib/DAMailboxRequestConsumer.h>
#import <libobjc.A.dylib/DAMailboxStreamingContentConsumer.h>

@protocol DAMailboxStreamingContentConsumer;
@class NSArray, NSString, MFActivityMonitor, NSMutableData, NSMutableDictionary, NSConditionLock;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer> {

	NSArray* _requestPairs;
	NSString* _accountID;
	MFActivityMonitor* _monitor;
	NSMutableData* _bodyData;
	BOOL _receivedFirstItem;
	BOOL _firstSyncBatch;
	int _syncKeyResets;
	int _serverErrors;
	NSMutableDictionary* _syncResponseConsumersByMessageId;
	NSConditionLock* _accountHierarchyLock;
	BOOL _moreAvailable;
	NSString* _tag;
	id<DAMailboxStreamingContentConsumer> _streamConsumer;

}

@property (nonatomic,copy) NSString * tag;                                                      //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) id<DAMailboxStreamingContentConsumer> streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
@property (nonatomic,readonly) BOOL moreAvailable;                                              //@synthesize moreAvailable=_moreAvailable - In the implementation block
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(void)reset;
-(id)actionsConsumer;
-(id)originalThreadMonitor;
-(void)handleSyncResponses:(id)arg1 ;
-(void)setStreamConsumer:(id<DAMailboxStreamingContentConsumer>)arg1 ;
-(id<DAMailboxStreamingContentConsumer>)streamConsumer;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(BOOL)refreshFolderHierarchyAndWait:(unsigned long long)arg1 ;
-(void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(BOOL)arg6 sentBytesCount:(unsigned long long)arg7 receivedBytesCount:(unsigned long long)arg8 ;
-(void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(BOOL)arg5 ;
-(void)accountHierarchyChanged:(id)arg1 ;
-(id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3 ;
-(BOOL)moreAvailable;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
@end
