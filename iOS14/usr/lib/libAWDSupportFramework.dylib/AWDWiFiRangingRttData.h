/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiRangingRttData : PBCodable <NSCopying> {

	unsigned _bitErrorRate;
	unsigned _channel;
	unsigned _coreId;
	unsigned _flags;
	unsigned _losPeakRatio;
	unsigned _peerBitErrorRate;
	unsigned _peerCoreId;
	unsigned _peerLosPeakRatio;
	unsigned _peerPhyError;
	unsigned _peerSnr;
	unsigned _phyError;
	int _rssi;
	unsigned _rtt;
	unsigned _snr;
	unsigned _status;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                         //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasRtt; 
@property (assign,nonatomic) unsigned rtt;                           //@synthesize rtt=_rtt - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                               //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasSnr; 
@property (assign,nonatomic) unsigned snr;                           //@synthesize snr=_snr - In the implementation block
@property (assign,nonatomic) BOOL hasCoreId; 
@property (assign,nonatomic) unsigned coreId;                        //@synthesize coreId=_coreId - In the implementation block
@property (assign,nonatomic) BOOL hasLosPeakRatio; 
@property (assign,nonatomic) unsigned losPeakRatio;                  //@synthesize losPeakRatio=_losPeakRatio - In the implementation block
@property (assign,nonatomic) BOOL hasBitErrorRate; 
@property (assign,nonatomic) unsigned bitErrorRate;                  //@synthesize bitErrorRate=_bitErrorRate - In the implementation block
@property (assign,nonatomic) BOOL hasPhyError; 
@property (assign,nonatomic) unsigned phyError;                      //@synthesize phyError=_phyError - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasPeerSnr; 
@property (assign,nonatomic) unsigned peerSnr;                       //@synthesize peerSnr=_peerSnr - In the implementation block
@property (assign,nonatomic) BOOL hasPeerLosPeakRatio; 
@property (assign,nonatomic) unsigned peerLosPeakRatio;              //@synthesize peerLosPeakRatio=_peerLosPeakRatio - In the implementation block
@property (assign,nonatomic) BOOL hasPeerCoreId; 
@property (assign,nonatomic) unsigned peerCoreId;                    //@synthesize peerCoreId=_peerCoreId - In the implementation block
@property (assign,nonatomic) BOOL hasPeerBitErrorRate; 
@property (assign,nonatomic) unsigned peerBitErrorRate;              //@synthesize peerBitErrorRate=_peerBitErrorRate - In the implementation block
@property (assign,nonatomic) BOOL hasPeerPhyError; 
@property (assign,nonatomic) unsigned peerPhyError;                  //@synthesize peerPhyError=_peerPhyError - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                       //@synthesize channel=_channel - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)rtt;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(BOOL)hasSnr;
-(unsigned)flags;
-(int)rssi;
-(void)setChannel:(unsigned)arg1 ;
-(unsigned)snr;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)channel;
-(BOOL)hasStatus;
-(id)description;
-(void)setSnr:(unsigned)arg1 ;
-(BOOL)hasRtt;
-(unsigned)coreId;
-(BOOL)hasChannel;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasFlags;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRtt:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasSnr:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)status;
-(void)setHasFlags:(BOOL)arg1 ;
-(void)setHasRtt:(BOOL)arg1 ;
-(void)setCoreId:(unsigned)arg1 ;
-(void)setHasCoreId:(BOOL)arg1 ;
-(BOOL)hasCoreId;
-(void)setLosPeakRatio:(unsigned)arg1 ;
-(void)setHasLosPeakRatio:(BOOL)arg1 ;
-(BOOL)hasLosPeakRatio;
-(void)setBitErrorRate:(unsigned)arg1 ;
-(void)setHasBitErrorRate:(BOOL)arg1 ;
-(BOOL)hasBitErrorRate;
-(void)setPhyError:(unsigned)arg1 ;
-(void)setHasPhyError:(BOOL)arg1 ;
-(BOOL)hasPhyError;
-(void)setPeerSnr:(unsigned)arg1 ;
-(void)setHasPeerSnr:(BOOL)arg1 ;
-(BOOL)hasPeerSnr;
-(void)setPeerLosPeakRatio:(unsigned)arg1 ;
-(void)setHasPeerLosPeakRatio:(BOOL)arg1 ;
-(BOOL)hasPeerLosPeakRatio;
-(void)setPeerCoreId:(unsigned)arg1 ;
-(void)setHasPeerCoreId:(BOOL)arg1 ;
-(BOOL)hasPeerCoreId;
-(void)setPeerBitErrorRate:(unsigned)arg1 ;
-(void)setHasPeerBitErrorRate:(BOOL)arg1 ;
-(BOOL)hasPeerBitErrorRate;
-(void)setPeerPhyError:(unsigned)arg1 ;
-(void)setHasPeerPhyError:(BOOL)arg1 ;
-(BOOL)hasPeerPhyError;
-(unsigned)losPeakRatio;
-(unsigned)bitErrorRate;
-(unsigned)phyError;
-(unsigned)peerSnr;
-(unsigned)peerLosPeakRatio;
-(unsigned)peerCoreId;
-(unsigned)peerBitErrorRate;
-(unsigned)peerPhyError;
@end
