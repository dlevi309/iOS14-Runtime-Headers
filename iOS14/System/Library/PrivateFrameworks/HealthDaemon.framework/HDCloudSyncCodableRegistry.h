/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, HDCloudSyncCodableProfileIdentifier;

@interface HDCloudSyncCodableRegistry : PBCodable <NSCopying> {

	double _displayNameModificationDate;
	NSMutableArray* _disabledOwnerIdentifiers;
	NSString* _displayFirstName;
	NSString* _displayLastName;
	HDCloudSyncCodableProfileIdentifier* _ownerProfileIdentifier;
	HDCloudSyncCodableProfileIdentifier* _sharedProfileIdentifier;
	NSMutableArray* _stores;
	BOOL _deleted;
	SCD_Struct_HD11 _has;

}

@property (nonatomic,retain) NSMutableArray * disabledOwnerIdentifiers;                                  //@synthesize disabledOwnerIdentifiers=_disabledOwnerIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * stores;                                                    //@synthesize stores=_stores - In the implementation block
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted;                                                               //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayFirstName; 
@property (nonatomic,retain) NSString * displayFirstName;                                                //@synthesize displayFirstName=_displayFirstName - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayNameModificationDate; 
@property (assign,nonatomic) double displayNameModificationDate;                                         //@synthesize displayNameModificationDate=_displayNameModificationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayLastName; 
@property (nonatomic,retain) NSString * displayLastName;                                                 //@synthesize displayLastName=_displayLastName - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerProfileIdentifier; 
@property (nonatomic,retain) HDCloudSyncCodableProfileIdentifier * ownerProfileIdentifier;               //@synthesize ownerProfileIdentifier=_ownerProfileIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSharedProfileIdentifier; 
@property (nonatomic,retain) HDCloudSyncCodableProfileIdentifier * sharedProfileIdentifier;              //@synthesize sharedProfileIdentifier=_sharedProfileIdentifier - In the implementation block
+(Class)disabledOwnerIdentifiersType;
+(Class)storesType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)stores;
-(BOOL)deleted;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDeleted;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)displayFirstName;
-(void)addDisabledOwnerIdentifiers:(id)arg1 ;
-(void)addStores:(id)arg1 ;
-(unsigned long long)disabledOwnerIdentifiersCount;
-(void)clearDisabledOwnerIdentifiers;
-(id)disabledOwnerIdentifiersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)storesCount;
-(void)clearStores;
-(id)storesAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayFirstName:(NSString *)arg1 ;
-(void)setDisplayLastName:(NSString *)arg1 ;
-(void)setOwnerProfileIdentifier:(HDCloudSyncCodableProfileIdentifier *)arg1 ;
-(void)setSharedProfileIdentifier:(HDCloudSyncCodableProfileIdentifier *)arg1 ;
-(BOOL)hasDisplayFirstName;
-(void)setDisplayNameModificationDate:(double)arg1 ;
-(void)setHasDisplayNameModificationDate:(BOOL)arg1 ;
-(BOOL)hasDisplayNameModificationDate;
-(BOOL)hasDisplayLastName;
-(BOOL)hasOwnerProfileIdentifier;
-(BOOL)hasSharedProfileIdentifier;
-(NSMutableArray *)disabledOwnerIdentifiers;
-(void)setDisabledOwnerIdentifiers:(NSMutableArray *)arg1 ;
-(void)setStores:(NSMutableArray *)arg1 ;
-(double)displayNameModificationDate;
-(NSString *)displayLastName;
-(HDCloudSyncCodableProfileIdentifier *)ownerProfileIdentifier;
-(HDCloudSyncCodableProfileIdentifier *)sharedProfileIdentifier;
@end

