/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariSetAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _category;
	int _formProperty;
	SCD_Struct_WB7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCategory; 
@property (assign,nonatomic) int category;                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasFormProperty; 
@property (assign,nonatomic) int formProperty;                          //@synthesize formProperty=_formProperty - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCategory:(int)arg1 ;
-(unsigned long long)timestamp;
-(void)setFormProperty:(int)arg1 ;
-(int)formProperty;
-(void)mergeFrom:(id)arg1 ;
-(int)category;
-(void)setHasFormProperty:(BOOL)arg1 ;
-(BOOL)hasFormProperty;
-(id)formPropertyAsString:(int)arg1 ;
-(int)StringAsFormProperty:(id)arg1 ;
-(void)setHasCategory:(BOOL)arg1 ;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(id)description;
-(BOOL)hasCategory;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

