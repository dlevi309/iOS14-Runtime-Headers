/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class MFMessageInfoOrderedSet, MFMessageInfo, NSArray;

@interface MFMessageCollectionInfo : NSObject {

	MFMessageInfoOrderedSet* _messageInfoSet;
	long long _messageCollectionHash;

}

@property (nonatomic,readonly) MFMessageInfo * firstMessage; 
@property (nonatomic,readonly) MFMessageInfo * lastMessage; 
@property (nonatomic,readonly) MFMessageInfo * visibleMessageInfo; 
@property (nonatomic,readonly) NSArray * uniqueMessageInfos; 
@property (nonatomic,readonly) NSArray * allMessageInfos; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long messagesCount; 
@property (nonatomic,readonly) unsigned long long messageCountWithDuplicates; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) long long messageCollectionHash;                            //@synthesize messageCollectionHash=_messageCollectionHash - In the implementation block
@property (nonatomic,copy) id duplicatePreferenceComparator; 
+(unsigned long long)stateForMessages:(id)arg1 ;
-(id)debugDescription;
-(BOOL)isEmpty;
-(unsigned long long)state;
-(unsigned long long)messagesCount;
-(MFMessageInfo *)firstMessage;
-(MFMessageInfo *)lastMessage;
-(NSArray *)uniqueMessageInfos;
-(NSArray *)allMessageInfos;
-(long long)messageCollectionHash;
-(unsigned long long)addMessageInfo:(id)arg1 ;
-(unsigned long long)indexOfMessageInfo:(id)arg1 ;
-(unsigned long long)removeMessageInfo:(id)arg1 ;
-(unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1 ;
-(id)messageInfoAtIndex:(unsigned long long)arg1 ;
-(id)messageInfoEquivalentToMessageInfo:(id)arg1 ;
-(id)duplicatesOfMessageInfo:(id)arg1 ;
-(id)duplicatePreferenceComparator;
-(void)setDuplicatePreferenceComparator:(id)arg1 ;
-(id)initWithHash:(long long)arg1 comparator:(/*^block*/id)arg2 ;
-(unsigned long long)messageCountWithDuplicates;
-(MFMessageInfo *)visibleMessageInfo;
-(void)mergeWithCollection:(id)arg1 ;
@end
