/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSArray;

@interface FudPersonalizationRequest : NSObject <NSSecureCoding> {

	BOOL _cproSet;
	BOOL _csecSet;
	BOOL _cepoSet;
	BOOL _globalSigning;
	BOOL _productionMode;
	BOOL _securityMode;
	BOOL _enableMixMatch;
	unsigned short _responseAlignment;
	int _responseFormat;
	unsigned _boardID;
	unsigned _chipID;
	unsigned _securityDomain;
	unsigned _chipEpoch;
	NSString* _requestName;
	NSString* _requestPrefix;
	unsigned long long _ecID;
	NSData* _extEcID;
	NSData* _nonceHash;
	NSArray* _objectList;
	NSData* _payload;

}

@property (nonatomic,copy,readonly) NSString * requestName;                 //@synthesize requestName=_requestName - In the implementation block
@property (nonatomic,retain) NSString * requestPrefix;                      //@synthesize requestPrefix=_requestPrefix - In the implementation block
@property (assign,nonatomic) int responseFormat;                            //@synthesize responseFormat=_responseFormat - In the implementation block
@property (assign,nonatomic) unsigned boardID;                              //@synthesize boardID=_boardID - In the implementation block
@property (assign,nonatomic) unsigned chipID;                               //@synthesize chipID=_chipID - In the implementation block
@property (assign,nonatomic) unsigned long long ecID;                       //@synthesize ecID=_ecID - In the implementation block
@property (nonatomic,retain) NSData * extEcID;                              //@synthesize extEcID=_extEcID - In the implementation block
@property (assign,nonatomic) BOOL globalSigning;                            //@synthesize globalSigning=_globalSigning - In the implementation block
@property (assign,nonatomic) unsigned securityDomain;                       //@synthesize securityDomain=_securityDomain - In the implementation block
@property (assign,nonatomic) BOOL productionMode;                           //@synthesize productionMode=_productionMode - In the implementation block
@property (assign,nonatomic) BOOL securityMode;                             //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,retain) NSData * nonceHash;                            //@synthesize nonceHash=_nonceHash - In the implementation block
@property (assign,nonatomic) unsigned chipEpoch;                            //@synthesize chipEpoch=_chipEpoch - In the implementation block
@property (assign,nonatomic) BOOL enableMixMatch;                           //@synthesize enableMixMatch=_enableMixMatch - In the implementation block
@property (nonatomic,retain) NSArray * objectList;                          //@synthesize objectList=_objectList - In the implementation block
@property (nonatomic,retain) NSData * payload;                              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned short responseAlignment;              //@synthesize responseAlignment=_responseAlignment - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPayload:(NSData *)arg1 ;
-(unsigned long long)ecID;
-(void)setSecurityMode:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)chipID;
-(NSData *)payload;
-(id)initWithName:(id)arg1 ;
-(NSString *)requestName;
-(unsigned)boardID;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)extEcID;
-(BOOL)securityMode;
-(void)dealloc;
-(void)setChipID:(unsigned)arg1 ;
-(unsigned)securityDomain;
-(void)setEcID:(unsigned long long)arg1 ;
-(void)setChipEpoch:(unsigned)arg1 ;
-(void)setEnableMixMatch:(BOOL)arg1 ;
-(BOOL)productionMode;
-(unsigned)chipEpoch;
-(BOOL)enableMixMatch;
-(void)setResponseFormat:(int)arg1 ;
-(int)responseFormat;
-(void)setResponseAlignment:(unsigned short)arg1 ;
-(void)setRequestPrefix:(NSString *)arg1 ;
-(void)setBoardID:(unsigned)arg1 ;
-(NSString *)requestPrefix;
-(void)setExtEcID:(NSData *)arg1 ;
-(void)setGlobalSigning:(BOOL)arg1 ;
-(void)setSecurityDomain:(unsigned)arg1 ;
-(void)setProductionMode:(BOOL)arg1 ;
-(void)setNonceHash:(NSData *)arg1 ;
-(NSData *)nonceHash;
-(BOOL)isSecurityModeSet;
-(void)setObjectList:(NSArray *)arg1 ;
-(BOOL)isProductionModeSet;
-(BOOL)isChipEpochSet;
-(BOOL)globalSigning;
-(NSArray *)objectList;
-(unsigned short)responseAlignment;
@end
