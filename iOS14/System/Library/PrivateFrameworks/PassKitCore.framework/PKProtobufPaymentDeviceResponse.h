/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying> {

	unsigned _defaultPaymentInstrumentIndex;
	int _nearby;
	NSMutableArray* _paymentInstruments;
	unsigned _protocolVersion;
	NSMutableArray* _supportedSetupFeatures;
	BOOL _deviceDisabled;
	BOOL _locked;
	BOOL _supportsFaceID;
	BOOL _userDisabled;
	SCD_Struct_PK12 _has;

}

@property (assign,nonatomic) BOOL hasLocked; 
@property (assign,nonatomic) BOOL locked;                                          //@synthesize locked=_locked - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentInstruments;                  //@synthesize paymentInstruments=_paymentInstruments - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultPaymentInstrumentIndex; 
@property (assign,nonatomic) unsigned defaultPaymentInstrumentIndex;               //@synthesize defaultPaymentInstrumentIndex=_defaultPaymentInstrumentIndex - In the implementation block
@property (assign,nonatomic) BOOL hasUserDisabled; 
@property (assign,nonatomic) BOOL userDisabled;                                    //@synthesize userDisabled=_userDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceDisabled; 
@property (assign,nonatomic) BOOL deviceDisabled;                                  //@synthesize deviceDisabled=_deviceDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasNearby; 
@property (assign,nonatomic) int nearby;                                           //@synthesize nearby=_nearby - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion;                             //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsFaceID; 
@property (assign,nonatomic) BOOL supportsFaceID;                                  //@synthesize supportsFaceID=_supportsFaceID - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedSetupFeatures;              //@synthesize supportedSetupFeatures=_supportedSetupFeatures - In the implementation block
+(Class)paymentInstrumentsType;
+(Class)supportedSetupFeaturesType;
-(BOOL)locked;
-(id)dictionaryRepresentation;
-(int)nearby;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(BOOL)hasNearby;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)protocolVersion;
-(void)setHasLocked:(BOOL)arg1 ;
-(id)description;
-(void)setLocked:(BOOL)arg1 ;
-(void)setNearby:(int)arg1 ;
-(void)setHasNearby:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setUserDisabled:(BOOL)arg1 ;
-(BOOL)hasUserDisabled;
-(void)addPaymentInstruments:(id)arg1 ;
-(void)addSupportedSetupFeatures:(id)arg1 ;
-(unsigned long long)paymentInstrumentsCount;
-(void)clearPaymentInstruments;
-(id)paymentInstrumentsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedSetupFeaturesCount;
-(void)clearSupportedSetupFeatures;
-(id)supportedSetupFeaturesAtIndex:(unsigned long long)arg1 ;
-(void)setDefaultPaymentInstrumentIndex:(unsigned)arg1 ;
-(void)setHasDefaultPaymentInstrumentIndex:(BOOL)arg1 ;
-(BOOL)hasDefaultPaymentInstrumentIndex;
-(void)setHasUserDisabled:(BOOL)arg1 ;
-(void)setDeviceDisabled:(BOOL)arg1 ;
-(void)setHasDeviceDisabled:(BOOL)arg1 ;
-(BOOL)hasDeviceDisabled;
-(id)nearbyAsString:(int)arg1 ;
-(int)StringAsNearby:(id)arg1 ;
-(void)setSupportsFaceID:(BOOL)arg1 ;
-(void)setHasSupportsFaceID:(BOOL)arg1 ;
-(BOOL)hasSupportsFaceID;
-(NSMutableArray *)paymentInstruments;
-(void)setPaymentInstruments:(NSMutableArray *)arg1 ;
-(unsigned)defaultPaymentInstrumentIndex;
-(BOOL)supportsFaceID;
-(NSMutableArray *)supportedSetupFeatures;
-(void)setSupportedSetupFeatures:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLocked;
-(BOOL)deviceDisabled;
-(BOOL)hasProtocolVersion;
-(BOOL)userDisabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

