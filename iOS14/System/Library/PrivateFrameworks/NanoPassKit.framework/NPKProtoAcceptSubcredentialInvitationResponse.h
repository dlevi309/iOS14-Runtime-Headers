/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NPKProtoPass;

@interface NPKProtoAcceptSubcredentialInvitationResponse : PBCodable <NSCopying> {

	NSData* _errorData;
	NPKProtoPass* _passForInvitation;

}

@property (nonatomic,readonly) BOOL hasPassForInvitation; 
@property (nonatomic,retain) NPKProtoPass * passForInvitation;              //@synthesize passForInvitation=_passForInvitation - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                            //@synthesize errorData=_errorData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)errorData;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(void)setPassForInvitation:(NPKProtoPass *)arg1 ;
-(BOOL)hasPassForInvitation;
-(NPKProtoPass *)passForInvitation;
@end
