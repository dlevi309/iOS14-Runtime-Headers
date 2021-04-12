/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface NPKProtoSetExpressPassResponse : PBCodable <NSCopying> {

	NSData* _actualExpressPassInformation;
	NSString* _actualUniqueID;
	NSMutableArray* _currentExpressPassesInformations;
	NSMutableArray* _currentUniqueIDs;
	BOOL _cancelled;
	BOOL _needsUnlock;
	BOOL _pending;
	BOOL _success;
	SCD_Struct_NP9 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                                   //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                                   //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled;                                                 //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsUnlock; 
@property (assign,nonatomic) BOOL needsUnlock;                                               //@synthesize needsUnlock=_needsUnlock - In the implementation block
@property (nonatomic,readonly) BOOL hasActualUniqueID; 
@property (nonatomic,retain) NSString * actualUniqueID;                                      //@synthesize actualUniqueID=_actualUniqueID - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentUniqueIDs;                              //@synthesize currentUniqueIDs=_currentUniqueIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasActualExpressPassInformation; 
@property (nonatomic,retain) NSData * actualExpressPassInformation;                          //@synthesize actualExpressPassInformation=_actualExpressPassInformation - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentExpressPassesInformations;              //@synthesize currentExpressPassesInformations=_currentExpressPassesInformations - In the implementation block
+(Class)currentExpressPassesInformationType;
+(Class)currentUniqueIDsType;
-(BOOL)success;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCancelled;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(id)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)addCurrentExpressPassesInformation:(id)arg1 ;
-(void)setActualExpressPassInformation:(NSData *)arg1 ;
-(unsigned long long)currentExpressPassesInformationsCount;
-(void)clearCurrentExpressPassesInformations;
-(id)currentExpressPassesInformationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActualExpressPassInformation;
-(NSData *)actualExpressPassInformation;
-(NSMutableArray *)currentExpressPassesInformations;
-(void)setCurrentExpressPassesInformations:(NSMutableArray *)arg1 ;
-(void)setNeedsUnlock:(BOOL)arg1 ;
-(BOOL)needsUnlock;
-(NSString *)actualUniqueID;
-(void)addCurrentUniqueIDs:(id)arg1 ;
-(void)setActualUniqueID:(NSString *)arg1 ;
-(unsigned long long)currentUniqueIDsCount;
-(void)clearCurrentUniqueIDs;
-(id)currentUniqueIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasNeedsUnlock:(BOOL)arg1 ;
-(BOOL)hasNeedsUnlock;
-(BOOL)hasActualUniqueID;
-(NSMutableArray *)currentUniqueIDs;
-(void)setCurrentUniqueIDs:(NSMutableArray *)arg1 ;
@end
