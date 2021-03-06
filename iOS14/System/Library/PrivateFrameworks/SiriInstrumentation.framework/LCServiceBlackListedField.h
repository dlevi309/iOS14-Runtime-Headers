/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LCServiceBlackListedField : PBCodable {

	BOOL _hasFullyQualifiedPath;
	NSString* _fullyQualifiedPath;

}

@property (nonatomic,copy) NSString * fullyQualifiedPath;              //@synthesize fullyQualifiedPath=_fullyQualifiedPath - In the implementation block
@property (assign,nonatomic) BOOL hasFullyQualifiedPath;               //@synthesize hasFullyQualifiedPath=_hasFullyQualifiedPath - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFullyQualifiedPath:(NSString *)arg1 ;
-(NSString *)fullyQualifiedPath;
-(BOOL)hasFullyQualifiedPath;
-(void)setHasFullyQualifiedPath:(BOOL)arg1 ;
@end

