/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <WatchConnectivity/WatchConnectivity-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface WCDProtoUserInfoTransfer : PBCodable <NSCopying> {

	NSData* _clientData;
	NSString* _transferIdentifier;
	unsigned _version;
	SCD_Struct_WC1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasClientData; 
@property (nonatomic,retain) NSData * clientData;                        //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,readonly) BOOL hasTransferIdentifier; 
@property (nonatomic,retain) NSString * transferIdentifier;              //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)transferIdentifier;
-(void)setClientData:(NSData *)arg1 ;
-(unsigned long long)hash;
-(NSData *)clientData;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTransferIdentifier:(NSString *)arg1 ;
-(BOOL)hasClientData;
-(BOOL)hasTransferIdentifier;
@end

