/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoRelevantPassTuple : PBCodable <NSCopying> {

	NSString* _passID;
	NSString* _relevantText;

}

@property (nonatomic,retain) NSString * passID;                    //@synthesize passID=_passID - In the implementation block
@property (nonatomic,readonly) BOOL hasRelevantText; 
@property (nonatomic,retain) NSString * relevantText;              //@synthesize relevantText=_relevantText - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(NSString *)passID;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)hasRelevantText;
@end

