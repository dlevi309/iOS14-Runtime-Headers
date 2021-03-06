/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoRetrievePaymentTransactionsResponse : PBCodable <NSCopying> {

	NSMutableArray* _transactionPassIDs;
	NSMutableArray* _transactionsBytes;

}

@property (nonatomic,retain) NSMutableArray * transactionsBytes;               //@synthesize transactionsBytes=_transactionsBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionPassIDs;              //@synthesize transactionPassIDs=_transactionPassIDs - In the implementation block
+(Class)transactionsBytesType;
+(Class)transactionPassIDsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addTransactionsBytes:(id)arg1 ;
-(void)addTransactionPassIDs:(id)arg1 ;
-(unsigned long long)transactionsBytesCount;
-(void)clearTransactionsBytes;
-(id)transactionsBytesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transactionPassIDsCount;
-(void)clearTransactionPassIDs;
-(id)transactionPassIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transactionsBytes;
-(void)setTransactionsBytes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transactionPassIDs;
-(void)setTransactionPassIDs:(NSMutableArray *)arg1 ;
@end

