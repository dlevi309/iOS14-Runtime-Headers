/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraIDSSessionSetup : PBCodable <NSCopying> {

	unsigned _idsSessionInvitationReceived;
	unsigned _idsSessionInvitationSent;
	unsigned _idsSessionStartedOnReceiver;
	unsigned _idsSessionStartedOnResident;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasIdsSessionInvitationSent; 
@property (assign,nonatomic) unsigned idsSessionInvitationSent;                  //@synthesize idsSessionInvitationSent=_idsSessionInvitationSent - In the implementation block
@property (assign,nonatomic) BOOL hasIdsSessionInvitationReceived; 
@property (assign,nonatomic) unsigned idsSessionInvitationReceived;              //@synthesize idsSessionInvitationReceived=_idsSessionInvitationReceived - In the implementation block
@property (assign,nonatomic) BOOL hasIdsSessionStartedOnResident; 
@property (assign,nonatomic) unsigned idsSessionStartedOnResident;               //@synthesize idsSessionStartedOnResident=_idsSessionStartedOnResident - In the implementation block
@property (assign,nonatomic) BOOL hasIdsSessionStartedOnReceiver; 
@property (assign,nonatomic) unsigned idsSessionStartedOnReceiver;               //@synthesize idsSessionStartedOnReceiver=_idsSessionStartedOnReceiver - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdsSessionInvitationSent:(unsigned)arg1 ;
-(void)setHasIdsSessionInvitationSent:(BOOL)arg1 ;
-(BOOL)hasIdsSessionInvitationSent;
-(void)setIdsSessionInvitationReceived:(unsigned)arg1 ;
-(void)setHasIdsSessionInvitationReceived:(BOOL)arg1 ;
-(BOOL)hasIdsSessionInvitationReceived;
-(void)setIdsSessionStartedOnResident:(unsigned)arg1 ;
-(void)setHasIdsSessionStartedOnResident:(BOOL)arg1 ;
-(BOOL)hasIdsSessionStartedOnResident;
-(void)setIdsSessionStartedOnReceiver:(unsigned)arg1 ;
-(void)setHasIdsSessionStartedOnReceiver:(BOOL)arg1 ;
-(BOOL)hasIdsSessionStartedOnReceiver;
-(unsigned)idsSessionInvitationSent;
-(unsigned)idsSessionInvitationReceived;
-(unsigned)idsSessionStartedOnResident;
-(unsigned)idsSessionStartedOnReceiver;
@end
