/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class NSDate, NSMutableDictionary;

@interface MFMailMessageStoreSearchResult : NSObject {

	NSDate* _continueOffset;
	NSMutableDictionary* _mailboxToRemoteIdDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * mailboxToRemoteIdDictionary;              //@synthesize mailboxToRemoteIdDictionary=_mailboxToRemoteIdDictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,retain) NSDate * continueOffset;                                        //@synthesize continueOffset=_continueOffset - In the implementation block
-(id)init;
-(unsigned long long)count;
-(void)setContinueOffset:(NSDate *)arg1 ;
-(void)addRemoteID:(id)arg1 mailbox:(id)arg2 ;
-(NSMutableDictionary *)mailboxToRemoteIdDictionary;
-(void)enumerateMailboxesAndRemoteIDsUsingBlock:(/*^block*/id)arg1 ;
-(NSDate *)continueOffset;
-(void)setMailboxToRemoteIdDictionary:(NSMutableDictionary *)arg1 ;
@end

