/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ACProtobufURL;

@interface ACProtobufAccountType : PBCodable <NSCopying> {

	NSString* _accountTypeDescription;
	NSString* _credentialProtectionPolicy;
	NSString* _credentialType;
	NSString* _identifier;
	ACProtobufURL* _objectID;
	NSString* _owningBundleID;
	int _supportsAuthentication;
	int _visibility;
	BOOL _encryptAccountProperties;
	BOOL _obsolete;
	BOOL _supportsMultipleAccounts;
	SCD_Struct_AC7 _has;

}

@property (nonatomic,retain) NSString * accountTypeDescription;                  //@synthesize accountTypeDescription=_accountTypeDescription - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectID; 
@property (nonatomic,retain) ACProtobufURL * objectID;                           //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) BOOL hasVisibility; 
@property (assign,nonatomic) int visibility;                                     //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,readonly) BOOL hasCredentialType; 
@property (nonatomic,retain) NSString * credentialType;                          //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) BOOL hasCredentialProtectionPolicy; 
@property (nonatomic,retain) NSString * credentialProtectionPolicy;              //@synthesize credentialProtectionPolicy=_credentialProtectionPolicy - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsAuthentication; 
@property (assign,nonatomic) int supportsAuthentication;                         //@synthesize supportsAuthentication=_supportsAuthentication - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsMultipleAccounts; 
@property (assign,nonatomic) BOOL supportsMultipleAccounts;                      //@synthesize supportsMultipleAccounts=_supportsMultipleAccounts - In the implementation block
@property (assign,nonatomic) BOOL hasEncryptAccountProperties; 
@property (assign,nonatomic) BOOL encryptAccountProperties;                      //@synthesize encryptAccountProperties=_encryptAccountProperties - In the implementation block
@property (nonatomic,readonly) BOOL hasOwningBundleID; 
@property (nonatomic,retain) NSString * owningBundleID;                          //@synthesize owningBundleID=_owningBundleID - In the implementation block
@property (assign,nonatomic) BOOL hasObsolete; 
@property (assign,nonatomic) BOOL obsolete;                                      //@synthesize obsolete=_obsolete - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVisibility:(int)arg1 ;
-(int)visibility;
-(ACProtobufURL *)objectID;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setObjectID:(ACProtobufURL *)arg1 ;
-(BOOL)supportsMultipleAccounts;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
-(int)supportsAuthentication;
-(void)setSupportsAuthentication:(int)arg1 ;
-(NSString *)owningBundleID;
-(void)setOwningBundleID:(NSString *)arg1 ;
-(BOOL)encryptAccountProperties;
-(BOOL)hasObjectID;
-(NSString *)accountTypeDescription;
-(NSString *)credentialProtectionPolicy;
-(BOOL)obsolete;
-(void)setAccountTypeDescription:(NSString *)arg1 ;
-(void)setCredentialProtectionPolicy:(NSString *)arg1 ;
-(void)setSupportsMultipleAccounts:(BOOL)arg1 ;
-(void)setEncryptAccountProperties:(BOOL)arg1 ;
-(void)setObsolete:(BOOL)arg1 ;
-(BOOL)hasCredentialType;
-(BOOL)hasOwningBundleID;
-(void)setHasVisibility:(BOOL)arg1 ;
-(BOOL)hasVisibility;
-(BOOL)hasCredentialProtectionPolicy;
-(void)setHasSupportsAuthentication:(BOOL)arg1 ;
-(BOOL)hasSupportsAuthentication;
-(void)setHasSupportsMultipleAccounts:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipleAccounts;
-(void)setHasEncryptAccountProperties:(BOOL)arg1 ;
-(BOOL)hasEncryptAccountProperties;
-(void)setHasObsolete:(BOOL)arg1 ;
-(BOOL)hasObsolete;
@end
