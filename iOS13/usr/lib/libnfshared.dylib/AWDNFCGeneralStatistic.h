/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNFCGeneralStatistic : PBCodable <NSCopying> {

	unsigned long long _startTimestamp;
	unsigned long long _timestamp;
	unsigned _seCounterMeasureLevel;
	unsigned _totalAPNReceived;
	unsigned _totalAccessTransaction;
	unsigned _totalAuthECommerce;
	unsigned _totalBurnoutTimerCounter;
	unsigned _totalCEEnable;
	unsigned _totalCEEnabledWithMissingTransactionEndEvent;
	unsigned _totalCEEnabledWithNoFieldDetected;
	unsigned _totalCardProvisioned;
	unsigned _totalDynamicPackages;
	unsigned _totalDynamicRFParametersUpdate;
	unsigned _totalExpressFelicaTransaction;
	unsigned _totalFailureWithMissingTransactionEndEvent;
	unsigned _totalFailureWithTransactionEndEventErrors;
	unsigned _totalFelicaEMoneyTransaction;
	unsigned _totalFelicaTransitTransaction;
	unsigned _totalGenericAExpressTransaction;
	unsigned _totalLPEMCounter;
	unsigned _totalPTDatabaseCorruption;
	unsigned _totalPTKeyDeletionFailed;
	unsigned _totalPTKeys;
	unsigned _totalPeerPaymentRequest;
	unsigned _totalPeerPaymentRequestFailure;
	unsigned _totalPlasticCardModeEnable;
	unsigned _totalRestrictModeEntered;
	unsigned _totalSuccessfulCardIngestion;
	unsigned _totalSuccessfulCardIngestionWithSessionToken;
	unsigned _totalSuccessfulVAS;
	unsigned _totalTransactionEndEvent;
	unsigned _totalTransientDeactiveTimeout;
	unsigned _totalVASActivation;
	unsigned _totalVASSignup;
	unsigned _totalVASTransactionException;
	BOOL _hasAccessExpressTransactionEnable;
	BOOL _hasAttackLogs;
	BOOL _hasFelicaExpressTransactionEnable;
	BOOL _hasGenericAExpressEnable;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) unsigned long long startTimestamp;                                  //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalCEEnable; 
@property (assign,nonatomic) unsigned totalCEEnable;                                             //@synthesize totalCEEnable=_totalCEEnable - In the implementation block
@property (assign,nonatomic) BOOL hasTotalCardProvisioned; 
@property (assign,nonatomic) unsigned totalCardProvisioned;                                      //@synthesize totalCardProvisioned=_totalCardProvisioned - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTransientDeactiveTimeout; 
@property (assign,nonatomic) unsigned totalTransientDeactiveTimeout;                             //@synthesize totalTransientDeactiveTimeout=_totalTransientDeactiveTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAPNReceived; 
@property (assign,nonatomic) unsigned totalAPNReceived;                                          //@synthesize totalAPNReceived=_totalAPNReceived - In the implementation block
@property (assign,nonatomic) BOOL hasTotalRestrictModeEntered; 
@property (assign,nonatomic) unsigned totalRestrictModeEntered;                                  //@synthesize totalRestrictModeEntered=_totalRestrictModeEntered - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTransactionEndEvent; 
@property (assign,nonatomic) unsigned totalTransactionEndEvent;                                  //@synthesize totalTransactionEndEvent=_totalTransactionEndEvent - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFailureWithTransactionEndEventErrors; 
@property (assign,nonatomic) unsigned totalFailureWithTransactionEndEventErrors;                 //@synthesize totalFailureWithTransactionEndEventErrors=_totalFailureWithTransactionEndEventErrors - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFailureWithMissingTransactionEndEvent; 
@property (assign,nonatomic) unsigned totalFailureWithMissingTransactionEndEvent;                //@synthesize totalFailureWithMissingTransactionEndEvent=_totalFailureWithMissingTransactionEndEvent - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAuthECommerce; 
@property (assign,nonatomic) unsigned totalAuthECommerce;                                        //@synthesize totalAuthECommerce=_totalAuthECommerce - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVASActivation; 
@property (assign,nonatomic) unsigned totalVASActivation;                                        //@synthesize totalVASActivation=_totalVASActivation - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSuccessfulVAS; 
@property (assign,nonatomic) unsigned totalSuccessfulVAS;                                        //@synthesize totalSuccessfulVAS=_totalSuccessfulVAS - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVASSignup; 
@property (assign,nonatomic) unsigned totalVASSignup;                                            //@synthesize totalVASSignup=_totalVASSignup - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVASTransactionException; 
@property (assign,nonatomic) unsigned totalVASTransactionException;                              //@synthesize totalVASTransactionException=_totalVASTransactionException - In the implementation block
@property (assign,nonatomic) BOOL hasTotalExpressFelicaTransaction; 
@property (assign,nonatomic) unsigned totalExpressFelicaTransaction;                             //@synthesize totalExpressFelicaTransaction=_totalExpressFelicaTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFelicaEMoneyTransaction; 
@property (assign,nonatomic) unsigned totalFelicaEMoneyTransaction;                              //@synthesize totalFelicaEMoneyTransaction=_totalFelicaEMoneyTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFelicaTransitTransaction; 
@property (assign,nonatomic) unsigned totalFelicaTransitTransaction;                             //@synthesize totalFelicaTransitTransaction=_totalFelicaTransitTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasHasFelicaExpressTransactionEnable; 
@property (assign,nonatomic) BOOL hasFelicaExpressTransactionEnable;                             //@synthesize hasFelicaExpressTransactionEnable=_hasFelicaExpressTransactionEnable - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSuccessfulCardIngestion; 
@property (assign,nonatomic) unsigned totalSuccessfulCardIngestion;                              //@synthesize totalSuccessfulCardIngestion=_totalSuccessfulCardIngestion - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSuccessfulCardIngestionWithSessionToken; 
@property (assign,nonatomic) unsigned totalSuccessfulCardIngestionWithSessionToken;              //@synthesize totalSuccessfulCardIngestionWithSessionToken=_totalSuccessfulCardIngestionWithSessionToken - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPlasticCardModeEnable; 
@property (assign,nonatomic) unsigned totalPlasticCardModeEnable;                                //@synthesize totalPlasticCardModeEnable=_totalPlasticCardModeEnable - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAccessTransaction; 
@property (assign,nonatomic) unsigned totalAccessTransaction;                                    //@synthesize totalAccessTransaction=_totalAccessTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasHasAccessExpressTransactionEnable; 
@property (assign,nonatomic) BOOL hasAccessExpressTransactionEnable;                             //@synthesize hasAccessExpressTransactionEnable=_hasAccessExpressTransactionEnable - In the implementation block
@property (assign,nonatomic) BOOL hasHasAttackLogs; 
@property (assign,nonatomic) BOOL hasAttackLogs;                                                 //@synthesize hasAttackLogs=_hasAttackLogs - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDynamicPackages; 
@property (assign,nonatomic) unsigned totalDynamicPackages;                                      //@synthesize totalDynamicPackages=_totalDynamicPackages - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPeerPaymentRequest; 
@property (assign,nonatomic) unsigned totalPeerPaymentRequest;                                   //@synthesize totalPeerPaymentRequest=_totalPeerPaymentRequest - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPeerPaymentRequestFailure; 
@property (assign,nonatomic) unsigned totalPeerPaymentRequestFailure;                            //@synthesize totalPeerPaymentRequestFailure=_totalPeerPaymentRequestFailure - In the implementation block
@property (assign,nonatomic) BOOL hasHasGenericAExpressEnable; 
@property (assign,nonatomic) BOOL hasGenericAExpressEnable;                                      //@synthesize hasGenericAExpressEnable=_hasGenericAExpressEnable - In the implementation block
@property (assign,nonatomic) BOOL hasTotalGenericAExpressTransaction; 
@property (assign,nonatomic) unsigned totalGenericAExpressTransaction;                           //@synthesize totalGenericAExpressTransaction=_totalGenericAExpressTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDynamicRFParametersUpdate; 
@property (assign,nonatomic) unsigned totalDynamicRFParametersUpdate;                            //@synthesize totalDynamicRFParametersUpdate=_totalDynamicRFParametersUpdate - In the implementation block
@property (assign,nonatomic) BOOL hasTotalCEEnabledWithNoFieldDetected; 
@property (assign,nonatomic) unsigned totalCEEnabledWithNoFieldDetected;                         //@synthesize totalCEEnabledWithNoFieldDetected=_totalCEEnabledWithNoFieldDetected - In the implementation block
@property (assign,nonatomic) BOOL hasTotalCEEnabledWithMissingTransactionEndEvent; 
@property (assign,nonatomic) unsigned totalCEEnabledWithMissingTransactionEndEvent;              //@synthesize totalCEEnabledWithMissingTransactionEndEvent=_totalCEEnabledWithMissingTransactionEndEvent - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPTKeys; 
@property (assign,nonatomic) unsigned totalPTKeys;                                               //@synthesize totalPTKeys=_totalPTKeys - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPTDatabaseCorruption; 
@property (assign,nonatomic) unsigned totalPTDatabaseCorruption;                                 //@synthesize totalPTDatabaseCorruption=_totalPTDatabaseCorruption - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPTKeyDeletionFailed; 
@property (assign,nonatomic) unsigned totalPTKeyDeletionFailed;                                  //@synthesize totalPTKeyDeletionFailed=_totalPTKeyDeletionFailed - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLPEMCounter; 
@property (assign,nonatomic) unsigned totalLPEMCounter;                                          //@synthesize totalLPEMCounter=_totalLPEMCounter - In the implementation block
@property (assign,nonatomic) BOOL hasSeCounterMeasureLevel; 
@property (assign,nonatomic) unsigned seCounterMeasureLevel;                                     //@synthesize seCounterMeasureLevel=_seCounterMeasureLevel - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBurnoutTimerCounter; 
@property (assign,nonatomic) unsigned totalBurnoutTimerCounter;                                  //@synthesize totalBurnoutTimerCounter=_totalBurnoutTimerCounter - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStartTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)startTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(void)setTotalCEEnable:(unsigned)arg1 ;
-(void)setTotalCardProvisioned:(unsigned)arg1 ;
-(void)setTotalTransientDeactiveTimeout:(unsigned)arg1 ;
-(void)setTotalAPNReceived:(unsigned)arg1 ;
-(void)setTotalRestrictModeEntered:(unsigned)arg1 ;
-(void)setTotalTransactionEndEvent:(unsigned)arg1 ;
-(void)setTotalFailureWithTransactionEndEventErrors:(unsigned)arg1 ;
-(void)setTotalAuthECommerce:(unsigned)arg1 ;
-(void)setTotalVASActivation:(unsigned)arg1 ;
-(void)setTotalSuccessfulVAS:(unsigned)arg1 ;
-(void)setTotalVASSignup:(unsigned)arg1 ;
-(void)setTotalVASTransactionException:(unsigned)arg1 ;
-(void)setTotalExpressFelicaTransaction:(unsigned)arg1 ;
-(void)setTotalFelicaEMoneyTransaction:(unsigned)arg1 ;
-(void)setTotalFelicaTransitTransaction:(unsigned)arg1 ;
-(void)setTotalSuccessfulCardIngestion:(unsigned)arg1 ;
-(void)setTotalSuccessfulCardIngestionWithSessionToken:(unsigned)arg1 ;
-(void)setTotalPlasticCardModeEnable:(unsigned)arg1 ;
-(void)setTotalAccessTransaction:(unsigned)arg1 ;
-(void)setHasAttackLogs:(BOOL)arg1 ;
-(void)setTotalPeerPaymentRequest:(unsigned)arg1 ;
-(void)setTotalPeerPaymentRequestFailure:(unsigned)arg1 ;
-(void)setTotalGenericAExpressTransaction:(unsigned)arg1 ;
-(void)setTotalDynamicRFParametersUpdate:(unsigned)arg1 ;
-(void)setTotalLPEMCounter:(unsigned)arg1 ;
-(void)setTotalPTKeys:(unsigned)arg1 ;
-(void)setTotalPTDatabaseCorruption:(unsigned)arg1 ;
-(void)setTotalPTKeyDeletionFailed:(unsigned)arg1 ;
-(void)setTotalBurnoutTimerCounter:(unsigned)arg1 ;
-(void)setHasTotalCEEnable:(BOOL)arg1 ;
-(BOOL)hasTotalCEEnable;
-(void)setHasTotalCardProvisioned:(BOOL)arg1 ;
-(BOOL)hasTotalCardProvisioned;
-(void)setHasTotalTransientDeactiveTimeout:(BOOL)arg1 ;
-(BOOL)hasTotalTransientDeactiveTimeout;
-(void)setHasTotalAPNReceived:(BOOL)arg1 ;
-(BOOL)hasTotalAPNReceived;
-(void)setHasTotalRestrictModeEntered:(BOOL)arg1 ;
-(BOOL)hasTotalRestrictModeEntered;
-(void)setHasTotalTransactionEndEvent:(BOOL)arg1 ;
-(BOOL)hasTotalTransactionEndEvent;
-(void)setHasTotalFailureWithTransactionEndEventErrors:(BOOL)arg1 ;
-(BOOL)hasTotalFailureWithTransactionEndEventErrors;
-(void)setTotalFailureWithMissingTransactionEndEvent:(unsigned)arg1 ;
-(void)setHasTotalFailureWithMissingTransactionEndEvent:(BOOL)arg1 ;
-(BOOL)hasTotalFailureWithMissingTransactionEndEvent;
-(void)setHasTotalAuthECommerce:(BOOL)arg1 ;
-(BOOL)hasTotalAuthECommerce;
-(void)setHasTotalVASActivation:(BOOL)arg1 ;
-(BOOL)hasTotalVASActivation;
-(void)setHasTotalSuccessfulVAS:(BOOL)arg1 ;
-(BOOL)hasTotalSuccessfulVAS;
-(void)setHasTotalVASSignup:(BOOL)arg1 ;
-(BOOL)hasTotalVASSignup;
-(void)setHasTotalVASTransactionException:(BOOL)arg1 ;
-(BOOL)hasTotalVASTransactionException;
-(void)setHasTotalExpressFelicaTransaction:(BOOL)arg1 ;
-(BOOL)hasTotalExpressFelicaTransaction;
-(void)setHasTotalFelicaEMoneyTransaction:(BOOL)arg1 ;
-(BOOL)hasTotalFelicaEMoneyTransaction;
-(void)setHasTotalFelicaTransitTransaction:(BOOL)arg1 ;
-(BOOL)hasTotalFelicaTransitTransaction;
-(void)setHasFelicaExpressTransactionEnable:(BOOL)arg1 ;
-(void)setHasHasFelicaExpressTransactionEnable:(BOOL)arg1 ;
-(BOOL)hasHasFelicaExpressTransactionEnable;
-(void)setHasTotalSuccessfulCardIngestion:(BOOL)arg1 ;
-(BOOL)hasTotalSuccessfulCardIngestion;
-(void)setHasTotalSuccessfulCardIngestionWithSessionToken:(BOOL)arg1 ;
-(BOOL)hasTotalSuccessfulCardIngestionWithSessionToken;
-(void)setHasTotalPlasticCardModeEnable:(BOOL)arg1 ;
-(BOOL)hasTotalPlasticCardModeEnable;
-(void)setHasTotalAccessTransaction:(BOOL)arg1 ;
-(BOOL)hasTotalAccessTransaction;
-(void)setHasAccessExpressTransactionEnable:(BOOL)arg1 ;
-(void)setHasHasAccessExpressTransactionEnable:(BOOL)arg1 ;
-(BOOL)hasHasAccessExpressTransactionEnable;
-(void)setHasHasAttackLogs:(BOOL)arg1 ;
-(BOOL)hasHasAttackLogs;
-(void)setTotalDynamicPackages:(unsigned)arg1 ;
-(void)setHasTotalDynamicPackages:(BOOL)arg1 ;
-(BOOL)hasTotalDynamicPackages;
-(void)setHasTotalPeerPaymentRequest:(BOOL)arg1 ;
-(BOOL)hasTotalPeerPaymentRequest;
-(void)setHasTotalPeerPaymentRequestFailure:(BOOL)arg1 ;
-(BOOL)hasTotalPeerPaymentRequestFailure;
-(void)setHasGenericAExpressEnable:(BOOL)arg1 ;
-(void)setHasHasGenericAExpressEnable:(BOOL)arg1 ;
-(BOOL)hasHasGenericAExpressEnable;
-(void)setHasTotalGenericAExpressTransaction:(BOOL)arg1 ;
-(BOOL)hasTotalGenericAExpressTransaction;
-(void)setHasTotalDynamicRFParametersUpdate:(BOOL)arg1 ;
-(BOOL)hasTotalDynamicRFParametersUpdate;
-(void)setTotalCEEnabledWithNoFieldDetected:(unsigned)arg1 ;
-(void)setHasTotalCEEnabledWithNoFieldDetected:(BOOL)arg1 ;
-(BOOL)hasTotalCEEnabledWithNoFieldDetected;
-(void)setTotalCEEnabledWithMissingTransactionEndEvent:(unsigned)arg1 ;
-(void)setHasTotalCEEnabledWithMissingTransactionEndEvent:(BOOL)arg1 ;
-(BOOL)hasTotalCEEnabledWithMissingTransactionEndEvent;
-(void)setHasTotalPTKeys:(BOOL)arg1 ;
-(BOOL)hasTotalPTKeys;
-(void)setHasTotalPTDatabaseCorruption:(BOOL)arg1 ;
-(BOOL)hasTotalPTDatabaseCorruption;
-(void)setHasTotalPTKeyDeletionFailed:(BOOL)arg1 ;
-(BOOL)hasTotalPTKeyDeletionFailed;
-(void)setHasTotalLPEMCounter:(BOOL)arg1 ;
-(BOOL)hasTotalLPEMCounter;
-(void)setSeCounterMeasureLevel:(unsigned)arg1 ;
-(void)setHasSeCounterMeasureLevel:(BOOL)arg1 ;
-(BOOL)hasSeCounterMeasureLevel;
-(void)setHasTotalBurnoutTimerCounter:(BOOL)arg1 ;
-(BOOL)hasTotalBurnoutTimerCounter;
-(unsigned)totalCEEnable;
-(unsigned)totalCardProvisioned;
-(unsigned)totalTransientDeactiveTimeout;
-(unsigned)totalAPNReceived;
-(unsigned)totalRestrictModeEntered;
-(unsigned)totalTransactionEndEvent;
-(unsigned)totalFailureWithTransactionEndEventErrors;
-(unsigned)totalFailureWithMissingTransactionEndEvent;
-(unsigned)totalAuthECommerce;
-(unsigned)totalVASActivation;
-(unsigned)totalSuccessfulVAS;
-(unsigned)totalVASSignup;
-(unsigned)totalVASTransactionException;
-(unsigned)totalExpressFelicaTransaction;
-(unsigned)totalFelicaEMoneyTransaction;
-(unsigned)totalFelicaTransitTransaction;
-(BOOL)hasFelicaExpressTransactionEnable;
-(unsigned)totalSuccessfulCardIngestion;
-(unsigned)totalSuccessfulCardIngestionWithSessionToken;
-(unsigned)totalPlasticCardModeEnable;
-(unsigned)totalAccessTransaction;
-(BOOL)hasAccessExpressTransactionEnable;
-(BOOL)hasAttackLogs;
-(unsigned)totalDynamicPackages;
-(unsigned)totalPeerPaymentRequest;
-(unsigned)totalPeerPaymentRequestFailure;
-(BOOL)hasGenericAExpressEnable;
-(unsigned)totalGenericAExpressTransaction;
-(unsigned)totalDynamicRFParametersUpdate;
-(unsigned)totalCEEnabledWithNoFieldDetected;
-(unsigned)totalCEEnabledWithMissingTransactionEndEvent;
-(unsigned)totalPTKeys;
-(unsigned)totalPTDatabaseCorruption;
-(unsigned)totalPTKeyDeletionFailed;
-(unsigned)totalLPEMCounter;
-(unsigned)seCounterMeasureLevel;
-(unsigned)totalBurnoutTimerCounter;
@end
