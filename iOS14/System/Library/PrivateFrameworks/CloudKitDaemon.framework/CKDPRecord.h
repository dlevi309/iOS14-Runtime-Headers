/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordChainParent, NSData, CKDPProtectionInfo, NSMutableArray, CKDPIdentifier, NSString, CKDPRecordIdentifier, CKDPShareIdentifier, CKDPShare, CKDPRecordStableUrl, CKDPDateStatistics, CKDPRecordType;

@interface CKDPRecord : PBCodable <NSCopying> {

	CKDPRecordChainParent* _chainParent;
	NSData* _chainPrivateKey;
	CKDPProtectionInfo* _chainProtectionInfo;
	NSMutableArray* _conflictLoserEtags;
	CKDPIdentifier* _createdBy;
	NSString* _etag;
	NSMutableArray* _fields;
	CKDPIdentifier* _modifiedBy;
	NSString* _modifiedByDevice;
	int _permission;
	NSMutableArray* _pluginFields;
	CKDPProtectionInfo* _protectionInfo;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPShareIdentifier* _shareId;
	CKDPShare* _shareInfo;
	CKDPRecordStableUrl* _stableUrl;
	CKDPDateStatistics* _timeStatistics;
	NSMutableArray* _tombstonedPublicKeyIDs;
	CKDPRecordType* _type;
	NSData* _zoneishMasterKeyId;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                       //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;               //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedBy; 
@property (nonatomic,retain) CKDPIdentifier * createdBy;                            //@synthesize createdBy=_createdBy - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeStatistics; 
@property (nonatomic,retain) CKDPDateStatistics * timeStatistics;                   //@synthesize timeStatistics=_timeStatistics - In the implementation block
@property (nonatomic,retain) NSMutableArray * fields;                               //@synthesize fields=_fields - In the implementation block
@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                         //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedBy; 
@property (nonatomic,retain) CKDPIdentifier * modifiedBy;                           //@synthesize modifiedBy=_modifiedBy - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictLoserEtags;                   //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedByDevice; 
@property (nonatomic,retain) NSString * modifiedByDevice;                           //@synthesize modifiedByDevice=_modifiedByDevice - In the implementation block
@property (nonatomic,retain) NSMutableArray * pluginFields;                         //@synthesize pluginFields=_pluginFields - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                   //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (assign,nonatomic) BOOL hasPermission; 
@property (assign,nonatomic) int permission;                                        //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) BOOL hasShareInfo; 
@property (nonatomic,retain) CKDPShare * shareInfo;                                 //@synthesize shareInfo=_shareInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasChainPrivateKey; 
@property (nonatomic,retain) NSData * chainPrivateKey;                              //@synthesize chainPrivateKey=_chainPrivateKey - In the implementation block
@property (nonatomic,readonly) BOOL hasChainProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * chainProtectionInfo;              //@synthesize chainProtectionInfo=_chainProtectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasChainParent; 
@property (nonatomic,retain) CKDPRecordChainParent * chainParent;                   //@synthesize chainParent=_chainParent - In the implementation block
@property (nonatomic,readonly) BOOL hasStableUrl; 
@property (nonatomic,retain) CKDPRecordStableUrl * stableUrl;                       //@synthesize stableUrl=_stableUrl - In the implementation block
@property (nonatomic,retain) NSMutableArray * tombstonedPublicKeyIDs;               //@synthesize tombstonedPublicKeyIDs=_tombstonedPublicKeyIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneishMasterKeyId; 
@property (nonatomic,retain) NSData * zoneishMasterKeyId;                           //@synthesize zoneishMasterKeyId=_zoneishMasterKeyId - In the implementation block
+(id)recordFromData:(id)arg1 ;
+(Class)fieldsType;
+(Class)conflictLoserEtagsType;
+(Class)pluginFieldsType;
+(Class)tombstonedPublicKeyIDsType;
-(id)dictionaryRepresentation;
-(void)setModifiedBy:(CKDPIdentifier *)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fields;
-(id)dataRepresentation;
-(CKDPRecordIdentifier *)recordIdentifier;
-(void)addFields:(id)arg1 ;
-(NSString *)etag;
-(BOOL)hasModifiedBy;
-(void)clearConflictLoserEtags;
-(void)addConflictLoserEtags:(id)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasModifiedByDevice;
-(void)setType:(CKDPRecordType *)arg1 ;
-(BOOL)hasRecordIdentifier;
-(NSMutableArray *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSMutableArray *)arg1 ;
-(unsigned long long)conflictLoserEtagsCount;
-(id)description;
-(unsigned long long)fieldsCount;
-(void)setTimeStatistics:(CKDPDateStatistics *)arg1 ;
-(void)clearFields;
-(CKDPRecordType *)type;
-(id)conflictLoserEtagsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(CKDPDateStatistics *)timeStatistics;
-(BOOL)hasCreatedBy;
-(CKDPShareIdentifier *)shareId;
-(NSString *)modifiedByDevice;
-(BOOL)readFrom:(id)arg1 ;
-(CKDPIdentifier *)createdBy;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimeStatistics;
-(CKDPIdentifier *)modifiedBy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)permission;
-(void)setCreatedBy:(CKDPIdentifier *)arg1 ;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(NSData *)chainPrivateKey;
-(void)setChainPrivateKey:(NSData *)arg1 ;
-(CKDPProtectionInfo *)chainProtectionInfo;
-(void)setChainProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)tombstonedPublicKeyIDs;
-(void)setTombstonedPublicKeyIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pluginFields;
-(void)setPluginFields:(NSMutableArray *)arg1 ;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(void)setPermission:(int)arg1 ;
-(void)setModifiedByDevice:(NSString *)arg1 ;
-(id)fieldForKey:(id)arg1 ;
-(BOOL)hasProtectionInfo;
-(void)_inflateFieldsFromData:(id)arg1 ;
-(id)fieldData;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setStableUrl:(CKDPRecordStableUrl *)arg1 ;
-(BOOL)hasStableUrl;
-(BOOL)hasShareId;
-(CKDPRecordStableUrl *)stableUrl;
-(CKDPShare *)shareInfo;
-(void)addPluginFields:(id)arg1 ;
-(void)addTombstonedPublicKeyIDs:(id)arg1 ;
-(unsigned long long)pluginFieldsCount;
-(void)clearPluginFields;
-(id)pluginFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setShareInfo:(CKDPShare *)arg1 ;
-(void)setChainParent:(CKDPRecordChainParent *)arg1 ;
-(unsigned long long)tombstonedPublicKeyIDsCount;
-(void)clearTombstonedPublicKeyIDs;
-(id)tombstonedPublicKeyIDsAtIndex:(unsigned long long)arg1 ;
-(void)setZoneishMasterKeyId:(NSData *)arg1 ;
-(void)setHasPermission:(BOOL)arg1 ;
-(BOOL)hasPermission;
-(id)permissionAsString:(int)arg1 ;
-(int)StringAsPermission:(id)arg1 ;
-(BOOL)hasShareInfo;
-(BOOL)hasChainPrivateKey;
-(BOOL)hasChainProtectionInfo;
-(BOOL)hasChainParent;
-(BOOL)hasZoneishMasterKeyId;
-(CKDPRecordChainParent *)chainParent;
-(NSData *)zoneishMasterKeyId;
-(id)_permissionAsString;
@end

