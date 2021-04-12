/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet, NSMutableDictionary;

@interface NNMKMailboxSelection : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _mailboxesWithAllMessagesSyncEnabled;
	NSArray* _aggregatedMailboxes;
	unsigned long long _aggregatedMailboxesFilterTypes;
	NSSet* _mailboxesWithAllMessagesSyncEnabledIds;
	NSSet* _aggregatedMailboxesId;
	NSArray* _allMailboxesSyncEnabled;
	NSMutableDictionary* _allMailboxesSyncEnabledById;

}

@property (nonatomic,retain) NSArray * mailboxesWithAllMessagesSyncEnabled;                  //@synthesize mailboxesWithAllMessagesSyncEnabled=_mailboxesWithAllMessagesSyncEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long aggregatedMailboxesFilterTypes;              //@synthesize aggregatedMailboxesFilterTypes=_aggregatedMailboxesFilterTypes - In the implementation block
@property (nonatomic,retain) NSArray * aggregatedMailboxes;                                  //@synthesize aggregatedMailboxes=_aggregatedMailboxes - In the implementation block
@property (nonatomic,retain) NSSet * mailboxesWithAllMessagesSyncEnabledIds;                 //@synthesize mailboxesWithAllMessagesSyncEnabledIds=_mailboxesWithAllMessagesSyncEnabledIds - In the implementation block
@property (nonatomic,retain) NSSet * aggregatedMailboxesId;                                  //@synthesize aggregatedMailboxesId=_aggregatedMailboxesId - In the implementation block
@property (nonatomic,retain) NSArray * allMailboxesSyncEnabled;                              //@synthesize allMailboxesSyncEnabled=_allMailboxesSyncEnabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allMailboxesSyncEnabledById;              //@synthesize allMailboxesSyncEnabledById=_allMailboxesSyncEnabledById - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)firstFilterTypeFromTypes:(unsigned long long)arg1 ;
+(id)mailboxChangesApplyingSelection:(id)arg1 previousSelection:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasSelection;
-(id)initWithMailboxes:(id)arg1 ;
-(id)initWithAccounts:(id)arg1 ;
-(BOOL)isMailboxFilterEnabled:(unsigned long long)arg1 ;
-(NSArray *)aggregatedMailboxes;
-(NSArray *)allMailboxesSyncEnabled;
-(NSArray *)mailboxesWithAllMessagesSyncEnabled;
-(id)mailboxWithId:(id)arg1 ;
-(void)_setupWithAccounts:(id)arg1 ;
-(void)_setupWithMailboxes:(id)arg1 ;
-(NSMutableDictionary *)allMailboxesSyncEnabledById;
-(NSSet *)mailboxesWithAllMessagesSyncEnabledIds;
-(NSSet *)aggregatedMailboxesId;
-(unsigned long long)aggregatedMailboxesFilterTypes;
-(BOOL)hasSingleMailboxSelectionOnly;
-(BOOL)hasAggregateMailboxesForAllMessagesOnly;
-(BOOL)containsMailboxFilter:(id)arg1 ;
-(void)setMailboxesWithAllMessagesSyncEnabled:(NSArray *)arg1 ;
-(void)setAggregatedMailboxes:(NSArray *)arg1 ;
-(void)setAggregatedMailboxesFilterTypes:(unsigned long long)arg1 ;
-(void)setMailboxesWithAllMessagesSyncEnabledIds:(NSSet *)arg1 ;
-(void)setAggregatedMailboxesId:(NSSet *)arg1 ;
-(void)setAllMailboxesSyncEnabled:(NSArray *)arg1 ;
-(void)setAllMailboxesSyncEnabledById:(NSMutableDictionary *)arg1 ;
@end
