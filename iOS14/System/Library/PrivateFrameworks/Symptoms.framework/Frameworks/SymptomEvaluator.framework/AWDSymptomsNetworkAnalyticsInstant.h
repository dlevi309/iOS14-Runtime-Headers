/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkAnalyticsInstant : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _connAttempts;
	unsigned long long _connSuccess;
	unsigned long long _cumulInternetOutageSecs;
	unsigned long long _lastReportedL2TxFail;
	unsigned long long _lastReportedL2TxFrames;
	unsigned long long _lastReportedL2TxReTry;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _rttMinUsecs;
	unsigned long long _timestamp;
	unsigned _arpThreshold;
	unsigned _dnsServers;
	NSString* _identifier;
	int _lastReportedLQM;
	unsigned _lastReportedRSSI;
	int _networkType;
	unsigned _penalizedDnsServers;
	unsigned _rxSignalThreshold;
	BOOL _arpThresholded;
	BOOL _hasInternetConn;
	BOOL _rxSignalThresholded;
	BOOL _supportsIPv4;
	BOOL _supportsIPv6;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                         //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasHasInternetConn; 
@property (assign,nonatomic) BOOL hasInternetConn;                                    //@synthesize hasInternetConn=_hasInternetConn - In the implementation block
@property (assign,nonatomic) BOOL hasCumulInternetOutageSecs; 
@property (assign,nonatomic) unsigned long long cumulInternetOutageSecs;              //@synthesize cumulInternetOutageSecs=_cumulInternetOutageSecs - In the implementation block
@property (assign,nonatomic) BOOL hasConnAttempts; 
@property (assign,nonatomic) unsigned long long connAttempts;                         //@synthesize connAttempts=_connAttempts - In the implementation block
@property (assign,nonatomic) BOOL hasConnSuccess; 
@property (assign,nonatomic) unsigned long long connSuccess;                          //@synthesize connSuccess=_connSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                            //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                           //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                              //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                             //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasRttMinUsecs; 
@property (assign,nonatomic) unsigned long long rttMinUsecs;                          //@synthesize rttMinUsecs=_rttMinUsecs - In the implementation block
@property (assign,nonatomic) BOOL hasDnsServers; 
@property (assign,nonatomic) unsigned dnsServers;                                     //@synthesize dnsServers=_dnsServers - In the implementation block
@property (assign,nonatomic) BOOL hasPenalizedDnsServers; 
@property (assign,nonatomic) unsigned penalizedDnsServers;                            //@synthesize penalizedDnsServers=_penalizedDnsServers - In the implementation block
@property (assign,nonatomic) BOOL hasRxSignalThreshold; 
@property (assign,nonatomic) unsigned rxSignalThreshold;                              //@synthesize rxSignalThreshold=_rxSignalThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasRxSignalThresholded; 
@property (assign,nonatomic) BOOL rxSignalThresholded;                                //@synthesize rxSignalThresholded=_rxSignalThresholded - In the implementation block
@property (assign,nonatomic) BOOL hasArpThreshold; 
@property (assign,nonatomic) unsigned arpThreshold;                                   //@synthesize arpThreshold=_arpThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasArpThresholded; 
@property (assign,nonatomic) BOOL arpThresholded;                                     //@synthesize arpThresholded=_arpThresholded - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsIPv4; 
@property (assign,nonatomic) BOOL supportsIPv4;                                       //@synthesize supportsIPv4=_supportsIPv4 - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsIPv6; 
@property (assign,nonatomic) BOOL supportsIPv6;                                       //@synthesize supportsIPv6=_supportsIPv6 - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedRSSI; 
@property (assign,nonatomic) unsigned lastReportedRSSI;                               //@synthesize lastReportedRSSI=_lastReportedRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedLQM; 
@property (assign,nonatomic) int lastReportedLQM;                                     //@synthesize lastReportedLQM=_lastReportedLQM - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedL2TxFrames; 
@property (assign,nonatomic) unsigned long long lastReportedL2TxFrames;               //@synthesize lastReportedL2TxFrames=_lastReportedL2TxFrames - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedL2TxReTry; 
@property (assign,nonatomic) unsigned long long lastReportedL2TxReTry;                //@synthesize lastReportedL2TxReTry=_lastReportedL2TxReTry - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedL2TxFail; 
@property (assign,nonatomic) unsigned long long lastReportedL2TxFail;                 //@synthesize lastReportedL2TxFail=_lastReportedL2TxFail - In the implementation block
-(BOOL)supportsIPv6;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setLastReportedRSSI:(unsigned)arg1 ;
-(unsigned long long)connAttempts;
-(void)setSupportsIPv4:(BOOL)arg1 ;
-(unsigned)dnsServers;
-(int)networkType;
-(void)setLastReportedL2TxFail:(unsigned long long)arg1 ;
-(void)setSupportsIPv6:(BOOL)arg1 ;
-(BOOL)hasPacketsOut;
-(void)setNetworkType:(int)arg1 ;
-(unsigned long long)bytesOut;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(BOOL)hasBytesIn;
-(BOOL)hasBytesOut;
-(id)dictionaryRepresentation;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(unsigned long long)packetsOut;
-(unsigned long long)lastReportedL2TxFail;
-(unsigned)lastReportedRSSI;
-(void)setHasInternetConn:(BOOL)arg1 ;
-(unsigned long long)bytesIn;
-(void)setHasArpThreshold:(BOOL)arg1 ;
-(BOOL)supportsIPv4;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(BOOL)hasArpThresholded;
-(BOOL)hasCumulInternetOutageSecs;
-(unsigned)arpThreshold;
-(void)setLastReportedL2TxFrames:(unsigned long long)arg1 ;
-(unsigned)penalizedDnsServers;
-(unsigned long long)lastReportedL2TxFrames;
-(void)setArpThresholded:(BOOL)arg1 ;
-(void)setHasLastReportedLQM:(BOOL)arg1 ;
-(void)setHasLastReportedL2TxFail:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasArpThresholded:(BOOL)arg1 ;
-(void)setArpThreshold:(unsigned)arg1 ;
-(unsigned long long)packetsIn;
-(unsigned long long)timestamp;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(void)setHasCumulInternetOutageSecs:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(void)setCumulInternetOutageSecs:(unsigned long long)arg1 ;
-(void)setRxSignalThreshold:(unsigned)arg1 ;
-(unsigned long long)lastReportedL2TxReTry;
-(void)setHasHasInternetConn:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRxSignalThreshold;
-(BOOL)hasLastReportedLQM;
-(void)setHasConnSuccess:(BOOL)arg1 ;
-(BOOL)rxSignalThresholded;
-(BOOL)hasInternetConn;
-(BOOL)hasLastReportedL2TxFrames;
-(void)setHasRxSignalThreshold:(BOOL)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(void)setLastReportedL2TxReTry:(unsigned long long)arg1 ;
-(BOOL)hasLastReportedL2TxFail;
-(BOOL)hasHasInternetConn;
-(void)setHasLastReportedRSSI:(BOOL)arg1 ;
-(void)setHasLastReportedL2TxFrames:(BOOL)arg1 ;
-(id)description;
-(void)setHasConnAttempts:(BOOL)arg1 ;
-(void)setHasRttMinUsecs:(BOOL)arg1 ;
-(int)lastReportedLQM;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(void)setRxSignalThresholded:(BOOL)arg1 ;
-(id)networkTypeAsString:(int)arg1 ;
-(unsigned long long)cumulInternetOutageSecs;
-(BOOL)hasConnSuccess;
-(void)setHasDnsServers:(BOOL)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(BOOL)hasRxSignalThresholded;
-(void)setHasRxSignalThresholded:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasLastReportedL2TxReTry:(BOOL)arg1 ;
-(unsigned long long)rttMinUsecs;
-(BOOL)hasTimestamp;
-(unsigned)rxSignalThreshold;
-(BOOL)hasLastReportedL2TxReTry;
-(BOOL)hasPenalizedDnsServers;
-(BOOL)hasLastReportedRSSI;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasConnAttempts;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasPenalizedDnsServers:(BOOL)arg1 ;
-(BOOL)hasArpThreshold;
-(void)setDnsServers:(unsigned)arg1 ;
-(unsigned long long)connSuccess;
-(BOOL)arpThresholded;
-(BOOL)hasSupportsIPv4;
-(BOOL)hasDnsServers;
-(void)setConnAttempts:(unsigned long long)arg1 ;
-(void)setHasSupportsIPv4:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(void)setConnSuccess:(unsigned long long)arg1 ;
-(BOOL)hasSupportsIPv6;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLastReportedLQM:(int)arg1 ;
-(void)setRttMinUsecs:(unsigned long long)arg1 ;
-(void)setPenalizedDnsServers:(unsigned)arg1 ;
-(void)setHasSupportsIPv6:(BOOL)arg1 ;
-(BOOL)hasRttMinUsecs;
-(BOOL)hasPacketsIn;
@end

