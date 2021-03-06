/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandalonePaymentCredential, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandalonePaymentRemoteCredential : PBCodable <NSCopying> {

	NSString* _identifier;
	NSString* _passURL;
	NPKProtoStandalonePaymentCredential* _paymentCredential;
	NPKProtoStandalonePaymentPass* _paymentPass;
	NSString* _productIdentifier;
	unsigned _rank;
	NSString* _statusDescription;
	NSString* _summaryMetadataDescription;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NPKProtoStandalonePaymentCredential * paymentCredential;              //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPassURL; 
@property (nonatomic,retain) NSString * passURL;                                                   //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSummaryMetadataDescription; 
@property (nonatomic,retain) NSString * summaryMetadataDescription;                                //@synthesize summaryMetadataDescription=_summaryMetadataDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusDescription; 
@property (nonatomic,retain) NSString * statusDescription;                                         //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentPass; 
@property (nonatomic,retain) NPKProtoStandalonePaymentPass * paymentPass;                          //@synthesize paymentPass=_paymentPass - In the implementation block
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) unsigned rank;                                                        //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) BOOL hasProductIdentifier; 
@property (nonatomic,retain) NSString * productIdentifier;                                         //@synthesize productIdentifier=_productIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setRank:(unsigned)arg1 ;
-(BOOL)hasIdentifier;
-(NSString *)summaryMetadataDescription;
-(NSString *)passURL;
-(BOOL)hasRank;
-(void)mergeFrom:(id)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(id)description;
-(unsigned long long)hash;
-(void)setStatusDescription:(NSString *)arg1 ;
-(unsigned)rank;
-(void)setPassURL:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NPKProtoStandalonePaymentPass *)paymentPass;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPaymentPass:(NPKProtoStandalonePaymentPass *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)statusDescription;
-(NPKProtoStandalonePaymentCredential *)paymentCredential;
-(BOOL)hasPaymentPass;
-(void)setPaymentCredential:(NPKProtoStandalonePaymentCredential *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasRank:(BOOL)arg1 ;
-(BOOL)hasProductIdentifier;
-(void)setSummaryMetadataDescription:(NSString *)arg1 ;
-(BOOL)hasPassURL;
-(BOOL)hasSummaryMetadataDescription;
-(BOOL)hasStatusDescription;
@end

