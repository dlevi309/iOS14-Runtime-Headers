/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPUserAvailableQuotaResponse : PBCodable <NSCopying> {

	unsigned long long _storageAvailableBytes;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasStorageAvailableBytes; 
@property (assign,nonatomic) unsigned long long storageAvailableBytes;              //@synthesize storageAvailableBytes=_storageAvailableBytes - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStorageAvailableBytes:(unsigned long long)arg1 ;
-(void)setHasStorageAvailableBytes:(BOOL)arg1 ;
-(BOOL)hasStorageAvailableBytes;
-(unsigned long long)storageAvailableBytes;
@end

