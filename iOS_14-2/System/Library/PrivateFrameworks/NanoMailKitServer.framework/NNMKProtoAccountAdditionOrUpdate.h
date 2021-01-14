/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NNMKProtoAccountAdditionOrUpdate : PBCodable <NSCopying> {

	NSString* _accountId;
	NSString* _defaultEmail;
	NSString* _displayName;
	NSMutableArray* _emails;
	unsigned _fullSyncVersion;
	NSString* _localId;
	NSMutableArray* _mailboxes;
	NSString* _parentId;
	NSString* _username;
	BOOL _shouldArchive;
	SCD_Struct_NN2 _has;

}

@property (nonatomic,readonly) BOOL hasAccountId; 
@property (nonatomic,retain) NSString * accountId;                    //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL hasShouldArchive; 
@property (assign,nonatomic) BOOL shouldArchive;                      //@synthesize shouldArchive=_shouldArchive - In the implementation block
@property (nonatomic,retain) NSMutableArray * emails;                 //@synthesize emails=_emails - In the implementation block
@property (nonatomic,retain) NSMutableArray * mailboxes;              //@synthesize mailboxes=_mailboxes - In the implementation block
@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultEmail; 
@property (nonatomic,retain) NSString * defaultEmail;                 //@synthesize defaultEmail=_defaultEmail - In the implementation block
@property (nonatomic,readonly) BOOL hasUsername; 
@property (nonatomic,retain) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalId; 
@property (nonatomic,retain) NSString * localId;                      //@synthesize localId=_localId - In the implementation block
@property (nonatomic,readonly) BOOL hasParentId; 
@property (nonatomic,retain) NSString * parentId;                     //@synthesize parentId=_parentId - In the implementation block
+(Class)mailboxesType;
+(Class)emailType;
-(id)dictionaryRepresentation;
-(void)setLocalId:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSMutableArray *)mailboxes;
-(BOOL)hasUsername;
-(NSString *)localId;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)emails;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)username;
-(id)description;
-(BOOL)shouldArchive;
-(void)setEmails:(NSMutableArray *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)addEmail:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMailboxes:(NSMutableArray *)arg1 ;
-(void)setShouldArchive:(BOOL)arg1 ;
-(NSString *)accountId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)parentId;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)hasAccountId;
-(void)setParentId:(NSString *)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)addMailboxes:(id)arg1 ;
-(unsigned long long)mailboxesCount;
-(void)clearMailboxes;
-(id)mailboxesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)emailsCount;
-(void)clearEmails;
-(id)emailAtIndex:(unsigned long long)arg1 ;
-(void)setDefaultEmail:(NSString *)arg1 ;
-(void)setHasShouldArchive:(BOOL)arg1 ;
-(BOOL)hasShouldArchive;
-(BOOL)hasDefaultEmail;
-(BOOL)hasLocalId;
-(BOOL)hasParentId;
-(NSString *)defaultEmail;
@end
