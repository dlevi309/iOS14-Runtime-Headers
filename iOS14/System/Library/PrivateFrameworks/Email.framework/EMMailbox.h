/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepositoryObject.h>
#import <libobjc.A.dylib/EMMailboxBuilder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class EMReceivingAccount, EMMailboxObjectID, EMObjectID, EMMailboxCollection, NSString, EMMailboxRepository;

@interface EMMailbox : EMRepositoryObject <EMMailboxBuilder, NSSecureCoding, EFPubliclyDescribable> {

	EMReceivingAccount* _account;
	BOOL _descriptionUsesRealName;
	BOOL _canContainMessages;
	BOOL _canArchive;
	EMMailboxObjectID* _parentID;
	EMObjectID* _accountIdentifier;
	EMMailbox* _parent;
	EMMailboxCollection* _children;
	NSString* _name;
	NSString* _redactedName;
	long long _type;

}

@property (assign,nonatomic,__weak) EMMailbox * parent;                           //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) EMMailboxObjectID * parentID;                      //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,retain) EMMailboxCollection * children;                      //@synthesize children=_children - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL canContainMessages;                             //@synthesize canContainMessages=_canContainMessages - In the implementation block
@property (assign,nonatomic) BOOL canArchive;                                     //@synthesize canArchive=_canArchive - In the implementation block
@property (nonatomic,retain) EMMailboxRepository * repository; 
@property (nonatomic,readonly) EMReceivingAccount * account; 
@property (nonatomic,readonly) EMObjectID * accountIdentifier;                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * redactedName;                      //@synthesize redactedName=_redactedName - In the implementation block
@property (nonatomic,readonly) BOOL isTopLevelMailbox; 
@property (nonatomic,readonly) BOOL isSmartMailbox; 
@property (nonatomic,readonly) BOOL isInboxMailbox; 
@property (nonatomic,readonly) BOOL isOutgoingMailbox; 
@property (nonatomic,readonly) BOOL isSentMailbox; 
@property (nonatomic,readonly) BOOL supportsSelectAll; 
@property (nonatomic,readonly) BOOL shouldArchiveByDefault; 
@property (assign,nonatomic) BOOL descriptionUsesRealName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)typeIsValidTransferDestination:(long long)arg1 ;
+(BOOL)deleteMovesToTrashForMailboxes:(id)arg1 ;
+(BOOL)supportsArchivingForMailboxes:(id)arg1 ;
+(BOOL)shouldArchiveByDefaultForMailboxes:(id)arg1 ;
+(BOOL)supportsSelectAllForMailboxes:(id)arg1 ;
+(BOOL)_isOutgoingMailboxType:(long long)arg1 ;
+(id)predicateForMailboxAccount:(id)arg1 topLevelOnly:(BOOL)arg2 ;
+(id)predicateForMailboxChildren:(id)arg1 ;
+(id)predicateForTopLevelMailboxes;
+(id)predicateForMailboxType:(long long)arg1 ;
+(id)_predicateForSmartMailboxes:(BOOL)arg1 ;
+(id)predicateForMailboxName:(id)arg1 ;
+(id)predicateForMailboxAccount:(id)arg1 ;
+(id)predicateForPrimaryMailboxWithAccount:(id)arg1 ;
+(id)predicateForSmartMailboxes;
+(id)predicateForRegularMailboxes;
+(id)sortDescriptorForNameAscending:(BOOL)arg1 ;
-(EMMailboxCollection *)children;
-(EMReceivingAccount *)account;
-(EMMailbox *)parent;
-(NSString *)ef_publicDescription;
-(EMObjectID *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(void)setType:(long long)arg1 ;
-(void)setParent:(EMMailbox *)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(EMMailboxObjectID *)parentID;
-(long long)type;
-(void)setRepository:(EMMailboxRepository *)arg1 ;
-(BOOL)isSmartMailbox;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(BOOL)canArchive;
-(BOOL)supportsSelectAll;
-(void)_commonInitName:(id)arg1 accountIdentifier:(id)arg2 type:(long long)arg3 canContainMessages:(BOOL)arg4 children:(id)arg5 parentID:(id)arg6 builder:(/*^block*/id)arg7 ;
-(BOOL)_canArchiveForMailboxType:(long long)arg1 ;
-(BOOL)descriptionUsesRealName;
-(BOOL)_shouldArchiveByDefault;
-(void)setDescriptionUsesRealName:(BOOL)arg1 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 accountIdentifier:(id)arg3 type:(long long)arg4 builder:(/*^block*/id)arg5 ;
-(void)setParentFromMailboxes:(id)arg1 ;
-(BOOL)isTopLevelMailbox;
-(BOOL)isInboxMailbox;
-(BOOL)isOutgoingMailbox;
-(BOOL)isSentMailbox;
-(NSString *)redactedName;
-(void)setName:(NSString *)arg1 ;
-(BOOL)shouldArchiveByDefault;
-(void)setCanArchive:(BOOL)arg1 ;
-(void)setChildren:(EMMailboxCollection *)arg1 ;
-(BOOL)canContainMessages;
-(void)setCanContainMessages:(BOOL)arg1 ;
-(id)initWithObjectID:(id)arg1 repository:(id)arg2 name:(id)arg3 accountIdentifier:(id)arg4 type:(long long)arg5 builder:(/*^block*/id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(EMMailboxRepository *)repository;
@end

