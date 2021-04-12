/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceMirroringDelegate : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _creationFailureReason;
	BOOL _mirroringDelegatePresent;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMirroringDelegatePresent; 
@property (assign,nonatomic) BOOL mirroringDelegatePresent;                 //@synthesize mirroringDelegatePresent=_mirroringDelegatePresent - In the implementation block
@property (assign,nonatomic) BOOL hasCreationFailureReason; 
@property (assign,nonatomic) int creationFailureReason;                     //@synthesize creationFailureReason=_creationFailureReason - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMirroringDelegatePresent:(BOOL)arg1 ;
-(void)setHasMirroringDelegatePresent:(BOOL)arg1 ;
-(BOOL)hasMirroringDelegatePresent;
-(void)setCreationFailureReason:(int)arg1 ;
-(void)setHasCreationFailureReason:(BOOL)arg1 ;
-(BOOL)hasCreationFailureReason;
-(BOOL)mirroringDelegatePresent;
-(int)creationFailureReason;
@end
