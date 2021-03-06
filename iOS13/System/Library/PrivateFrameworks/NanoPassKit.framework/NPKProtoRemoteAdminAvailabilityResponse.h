/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoRemoteAdminAvailabilityResponse : PBCodable <NSCopying> {

	BOOL _isAvailable;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasIsAvailable; 
@property (assign,nonatomic) BOOL isAvailable;                 //@synthesize isAvailable=_isAvailable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)isAvailable;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsAvailable:(BOOL)arg1 ;
-(void)setHasIsAvailable:(BOOL)arg1 ;
-(BOOL)hasIsAvailable;
@end

