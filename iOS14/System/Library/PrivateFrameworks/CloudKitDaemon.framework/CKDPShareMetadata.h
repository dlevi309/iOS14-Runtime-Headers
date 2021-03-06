/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPParticipant, NSData, CKDPRecordType, NSString;

@interface CKDPShareMetadata : PBCodable <NSCopying> {

	CKDPParticipant* _callerParticipant;
	CKDPParticipant* _ownerParticipant;
	int _participantPermission;
	int _participantState;
	int _participantType;
	NSData* _protectedFullToken;
	CKDPRecordType* _rootRecordType;
	NSString* _routingKey;
	SCD_Struct_CK17 _has;

}

@property (nonatomic,readonly) BOOL hasRoutingKey; 
@property (nonatomic,retain) NSString * routingKey;                            //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedFullToken; 
@property (nonatomic,retain) NSData * protectedFullToken;                      //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerParticipant; 
@property (nonatomic,retain) CKDPParticipant * ownerParticipant;               //@synthesize ownerParticipant=_ownerParticipant - In the implementation block
@property (nonatomic,readonly) BOOL hasCallerParticipant; 
@property (nonatomic,retain) CKDPParticipant * callerParticipant;              //@synthesize callerParticipant=_callerParticipant - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantPermission; 
@property (assign,nonatomic) int participantPermission;                        //@synthesize participantPermission=_participantPermission - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantState; 
@property (assign,nonatomic) int participantState;                             //@synthesize participantState=_participantState - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantType; 
@property (assign,nonatomic) int participantType;                              //@synthesize participantType=_participantType - In the implementation block
@property (nonatomic,readonly) BOOL hasRootRecordType; 
@property (nonatomic,retain) CKDPRecordType * rootRecordType;                  //@synthesize rootRecordType=_rootRecordType - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(BOOL)hasRoutingKey;
-(void)mergeFrom:(id)arg1 ;
-(void)setParticipantState:(int)arg1 ;
-(int)participantType;
-(id)description;
-(CKDPRecordType *)rootRecordType;
-(int)participantPermission;
-(void)setRootRecordType:(CKDPRecordType *)arg1 ;
-(void)setParticipantPermission:(int)arg1 ;
-(NSData *)protectedFullToken;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(int)participantState;
-(void)setParticipantType:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOwnerParticipant:(CKDPParticipant *)arg1 ;
-(BOOL)hasOwnerParticipant;
-(CKDPParticipant *)ownerParticipant;
-(BOOL)hasParticipantType;
-(BOOL)hasParticipantState;
-(BOOL)hasParticipantPermission;
-(BOOL)hasCallerParticipant;
-(CKDPParticipant *)callerParticipant;
-(id)_participantPermissionCKLogValue;
-(id)_participantStateCKLogValue;
-(id)_participantTypeCKLogValue;
-(void)setCallerParticipant:(CKDPParticipant *)arg1 ;
-(BOOL)hasProtectedFullToken;
-(void)setHasParticipantPermission:(BOOL)arg1 ;
-(id)participantPermissionAsString:(int)arg1 ;
-(int)StringAsParticipantPermission:(id)arg1 ;
-(void)setHasParticipantState:(BOOL)arg1 ;
-(id)participantStateAsString:(int)arg1 ;
-(int)StringAsParticipantState:(id)arg1 ;
-(void)setHasParticipantType:(BOOL)arg1 ;
-(id)participantTypeAsString:(int)arg1 ;
-(int)StringAsParticipantType:(id)arg1 ;
-(BOOL)hasRootRecordType;
@end

