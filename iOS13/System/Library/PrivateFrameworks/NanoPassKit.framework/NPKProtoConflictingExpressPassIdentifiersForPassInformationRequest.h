/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationRequest : PBRequest <NSCopying> {

	NSData* _expressPassInformation;
	NSMutableArray* _referenceExpressPassesInformations;

}

@property (nonatomic,readonly) BOOL hasExpressPassInformation; 
@property (nonatomic,retain) NSData * expressPassInformation;                                  //@synthesize expressPassInformation=_expressPassInformation - In the implementation block
@property (nonatomic,retain) NSMutableArray * referenceExpressPassesInformations;              //@synthesize referenceExpressPassesInformations=_referenceExpressPassesInformations - In the implementation block
+(Class)referenceExpressPassesInformationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addReferenceExpressPassesInformation:(id)arg1 ;
-(void)setExpressPassInformation:(NSData *)arg1 ;
-(unsigned long long)referenceExpressPassesInformationsCount;
-(void)clearReferenceExpressPassesInformations;
-(id)referenceExpressPassesInformationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExpressPassInformation;
-(NSData *)expressPassInformation;
-(NSMutableArray *)referenceExpressPassesInformations;
-(void)setReferenceExpressPassesInformations:(NSMutableArray *)arg1 ;
@end

