/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface PKProtobufPaymentInstrument : PBCodable <NSCopying> {

	double _ingestedDate;
	long long _peerPaymentAccountBalance;
	NSMutableArray* _associatedWebDomains;
	NSString* _displayName;
	NSString* _issuerCountryCode;
	NSData* _manifestHash;
	NSString* _organizationName;
	NSString* _passID;
	NSMutableArray* _paymentApplications;
	NSString* _peerPaymentAccountCurrency;
	unsigned _peerPaymentAccountState;
	NSString* _primaryAccountIdentifier;
	NSString* _primaryAccountNumberSuffix;
	BOOL _hasAssociatedPeerPaymentAccount;
	BOOL _supportsAutomaticSelection;
	SCD_Struct_PK16 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasPassID; 
@property (nonatomic,retain) NSString * passID;                                    //@synthesize passID=_passID - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentApplications;                 //@synthesize paymentApplications=_paymentApplications - In the implementation block
@property (assign,nonatomic) BOOL hasIngestedDate; 
@property (assign,nonatomic) double ingestedDate;                                  //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAccountNumberSuffix; 
@property (nonatomic,retain) NSString * primaryAccountNumberSuffix;                //@synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix - In the implementation block
@property (nonatomic,readonly) BOOL hasManifestHash; 
@property (nonatomic,retain) NSData * manifestHash;                                //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAccountIdentifier; 
@property (nonatomic,retain) NSString * primaryAccountIdentifier;                  //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * associatedWebDomains;                //@synthesize associatedWebDomains=_associatedWebDomains - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsAutomaticSelection; 
@property (assign,nonatomic) BOOL supportsAutomaticSelection;                      //@synthesize supportsAutomaticSelection=_supportsAutomaticSelection - In the implementation block
@property (nonatomic,readonly) BOOL hasIssuerCountryCode; 
@property (nonatomic,retain) NSString * issuerCountryCode;                         //@synthesize issuerCountryCode=_issuerCountryCode - In the implementation block
@property (assign,nonatomic) BOOL hasHasAssociatedPeerPaymentAccount; 
@property (assign,nonatomic) BOOL hasAssociatedPeerPaymentAccount;                 //@synthesize hasAssociatedPeerPaymentAccount=_hasAssociatedPeerPaymentAccount - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerPaymentAccountCurrency; 
@property (nonatomic,retain) NSString * peerPaymentAccountCurrency;                //@synthesize peerPaymentAccountCurrency=_peerPaymentAccountCurrency - In the implementation block
@property (assign,nonatomic) BOOL hasPeerPaymentAccountBalance; 
@property (assign,nonatomic) long long peerPaymentAccountBalance;                  //@synthesize peerPaymentAccountBalance=_peerPaymentAccountBalance - In the implementation block
@property (assign,nonatomic) BOOL hasPeerPaymentAccountState; 
@property (assign,nonatomic) unsigned peerPaymentAccountState;                     //@synthesize peerPaymentAccountState=_peerPaymentAccountState - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                          //@synthesize organizationName=_organizationName - In the implementation block
+(Class)paymentApplicationsType;
+(Class)associatedWebDomainsType;
-(id)dictionaryRepresentation;
-(NSString *)organizationName;
-(NSString *)passID;
-(BOOL)hasPassID;
-(void)mergeFrom:(id)arg1 ;
-(void)addAssociatedWebDomains:(id)arg1 ;
-(unsigned long long)paymentApplicationsCount;
-(void)clearPaymentApplications;
-(id)paymentApplicationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)associatedWebDomainsCount;
-(void)clearAssociatedWebDomains;
-(id)associatedWebDomainsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIngestedDate:(BOOL)arg1 ;
-(BOOL)hasIngestedDate;
-(BOOL)hasPrimaryAccountNumberSuffix;
-(BOOL)hasPrimaryAccountIdentifier;
-(void)setHasSupportsAutomaticSelection:(BOOL)arg1 ;
-(BOOL)hasIssuerCountryCode;
-(BOOL)hasSupportsAutomaticSelection;
-(void)setHasHasAssociatedPeerPaymentAccount:(BOOL)arg1 ;
-(BOOL)hasHasAssociatedPeerPaymentAccount;
-(void)setHasPeerPaymentAccountBalance:(BOOL)arg1 ;
-(void)setHasPeerPaymentAccountState:(BOOL)arg1 ;
-(BOOL)hasPeerPaymentAccountState;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(double)ingestedDate;
-(BOOL)hasManifestHash;
-(void)setPaymentApplications:(NSMutableArray *)arg1 ;
-(void)setAssociatedWebDomains:(NSMutableArray *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(void)setIssuerCountryCode:(NSString *)arg1 ;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(void)setHasAssociatedPeerPaymentAccount:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)issuerCountryCode;
-(BOOL)hasOrganizationName;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(void)copyTo:(id)arg1 ;
-(void)setIngestedDate:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)paymentApplications;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setSupportsAutomaticSelection:(BOOL)arg1 ;
-(void)setPeerPaymentAccountState:(unsigned)arg1 ;
-(BOOL)hasPeerPaymentAccountBalance;
-(BOOL)hasPeerPaymentAccountCurrency;
-(NSString *)peerPaymentAccountCurrency;
-(void)setPeerPaymentAccountBalance:(long long)arg1 ;
-(void)addPaymentApplications:(id)arg1 ;
-(void)setPeerPaymentAccountCurrency:(NSString *)arg1 ;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(NSMutableArray *)associatedWebDomains;
-(unsigned)peerPaymentAccountState;
-(BOOL)supportsAutomaticSelection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(long long)peerPaymentAccountBalance;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(NSData *)manifestHash;
-(NSString *)primaryAccountNumberSuffix;
@end

