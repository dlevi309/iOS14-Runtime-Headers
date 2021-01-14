/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoPass, NSString, NSData;

@interface NPKProtoRemotePassUpdateRequest : PBRequest <NSCopying> {

	NPKProtoPass* _pass;
	NSString* _passID;
	NSData* _updateRequestData;
	BOOL _cancelUpdate;
	BOOL _requestAuthorization;
	BOOL _shouldNotifyUser;
	SCD_Struct_NP3 _has;

}

@property (nonatomic,retain) NSString * passID;                         //@synthesize passID=_passID - In the implementation block
@property (nonatomic,readonly) BOOL hasUpdateRequestData; 
@property (nonatomic,retain) NSData * updateRequestData;                //@synthesize updateRequestData=_updateRequestData - In the implementation block
@property (assign,nonatomic) BOOL hasCancelUpdate; 
@property (assign,nonatomic) BOOL cancelUpdate;                         //@synthesize cancelUpdate=_cancelUpdate - In the implementation block
@property (nonatomic,readonly) BOOL hasPass; 
@property (nonatomic,retain) NPKProtoPass * pass;                       //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) BOOL hasRequestAuthorization; 
@property (assign,nonatomic) BOOL requestAuthorization;                 //@synthesize requestAuthorization=_requestAuthorization - In the implementation block
@property (assign,nonatomic) BOOL hasShouldNotifyUser; 
@property (assign,nonatomic) BOOL shouldNotifyUser;                     //@synthesize shouldNotifyUser=_shouldNotifyUser - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPass:(NPKProtoPass *)arg1 ;
-(NSString *)passID;
-(BOOL)cancelUpdate;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NPKProtoPass *)pass;
-(unsigned long long)hash;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)requestAuthorization;
-(void)setUpdateRequestData:(NSData *)arg1 ;
-(BOOL)hasUpdateRequestData;
-(void)setCancelUpdate:(BOOL)arg1 ;
-(void)setHasCancelUpdate:(BOOL)arg1 ;
-(BOOL)hasCancelUpdate;
-(void)setRequestAuthorization:(BOOL)arg1 ;
-(void)setHasRequestAuthorization:(BOOL)arg1 ;
-(BOOL)hasRequestAuthorization;
-(void)setShouldNotifyUser:(BOOL)arg1 ;
-(void)setHasShouldNotifyUser:(BOOL)arg1 ;
-(BOOL)hasShouldNotifyUser;
-(NSData *)updateRequestData;
-(BOOL)shouldNotifyUser;
@end
