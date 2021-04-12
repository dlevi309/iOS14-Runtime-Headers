/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRegistrationProfileHandleOperation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	int _genericError;
	NSString* _guid;
	int _pOSIXError;
	unsigned _registrationError;
	unsigned _resultCode;
	unsigned _success;
	int _uRLError;
	unsigned _vettingStatus;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) unsigned success;                          //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasResultCode; 
@property (assign,nonatomic) unsigned resultCode;                       //@synthesize resultCode=_resultCode - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationError; 
@property (assign,nonatomic) unsigned registrationError;                //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                          //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasURLError; 
@property (assign,nonatomic) int uRLError;                              //@synthesize uRLError=_uRLError - In the implementation block
@property (assign,nonatomic) BOOL hasPOSIXError; 
@property (assign,nonatomic) int pOSIXError;                            //@synthesize pOSIXError=_pOSIXError - In the implementation block
@property (assign,nonatomic) BOOL hasVettingStatus; 
@property (assign,nonatomic) unsigned vettingStatus;                    //@synthesize vettingStatus=_vettingStatus - In the implementation block
-(unsigned)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(unsigned)arg1 ;
-(NSString *)guid;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(unsigned)connectionType;
-(unsigned)resultCode;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasConnectionType;
-(void)mergeFrom:(id)arg1 ;
-(void)setResultCode:(unsigned)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setRegistrationError:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)registrationError;
-(int)genericError;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)vettingStatus;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasResultCode:(BOOL)arg1 ;
-(BOOL)hasResultCode;
-(void)setGenericError:(int)arg1 ;
-(void)setURLError:(int)arg1 ;
-(void)setPOSIXError:(int)arg1 ;
-(int)uRLError;
-(int)pOSIXError;
-(void)setVettingStatus:(unsigned)arg1 ;
-(void)setHasGenericError:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(void)setHasRegistrationError:(BOOL)arg1 ;
-(BOOL)hasRegistrationError;
-(void)setHasURLError:(BOOL)arg1 ;
-(BOOL)hasURLError;
-(void)setHasPOSIXError:(BOOL)arg1 ;
-(BOOL)hasPOSIXError;
-(void)setHasVettingStatus:(BOOL)arg1 ;
-(BOOL)hasVettingStatus;
@end
