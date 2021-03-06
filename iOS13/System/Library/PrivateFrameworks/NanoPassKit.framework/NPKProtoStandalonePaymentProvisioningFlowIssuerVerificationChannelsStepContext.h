/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentPass, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentPass* _paymentPass;
	NSMutableArray* _verificationChannels;

}

@property (nonatomic,readonly) BOOL hasPaymentPass; 
@property (nonatomic,retain) NPKProtoStandalonePaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) NSMutableArray * verificationChannels;                    //@synthesize verificationChannels=_verificationChannels - In the implementation block
+(Class)verificationChannelsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NPKProtoStandalonePaymentPass *)paymentPass;
-(void)setPaymentPass:(NPKProtoStandalonePaymentPass *)arg1 ;
-(BOOL)hasPaymentPass;
-(NSMutableArray *)verificationChannels;
-(void)setVerificationChannels:(NSMutableArray *)arg1 ;
-(void)addVerificationChannels:(id)arg1 ;
-(unsigned long long)verificationChannelsCount;
-(void)clearVerificationChannels;
-(id)verificationChannelsAtIndex:(unsigned long long)arg1 ;
@end

