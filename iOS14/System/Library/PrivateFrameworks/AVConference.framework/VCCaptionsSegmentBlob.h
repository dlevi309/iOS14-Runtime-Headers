/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VCCaptionsSegmentBlob : PBCodable <NSCopying> {

	unsigned _confidence;
	NSString* _text;
	BOOL _hasSpaceAfter;
	SCD_Struct_VC93 _has;

}

@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) unsigned confidence;                //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasHasSpaceAfter; 
@property (assign,nonatomic) BOOL hasSpaceAfter;                 //@synthesize hasSpaceAfter=_hasSpaceAfter - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) NSString * text;                    //@synthesize text=_text - In the implementation block
-(BOOL)hasText;
-(unsigned)confidence;
-(id)dictionaryRepresentation;
-(void)setText:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setConfidence:(unsigned)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(NSString *)text;
-(BOOL)hasConfidence;
-(unsigned long long)hash;
-(BOOL)hasSpaceAfter;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSpaceAfter:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasHasSpaceAfter:(BOOL)arg1 ;
-(BOOL)hasHasSpaceAfter;
@end

