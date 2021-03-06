/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HMPBMetadataCategory : PBCodable <NSCopying> {

	NSString* _desc;
	int _number;
	NSString* _type;
	SCD_Struct_HM1 _has;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasDesc; 
@property (nonatomic,retain) NSString * desc;              //@synthesize desc=_desc - In the implementation block
@property (assign,nonatomic) BOOL hasNumber; 
@property (assign,nonatomic) int number;                   //@synthesize number=_number - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)number;
-(void)setNumber:(int)arg1 ;
-(BOOL)hasType;
-(NSString *)desc;
-(void)setDesc:(NSString *)arg1 ;
-(BOOL)hasDesc;
-(void)setHasNumber:(BOOL)arg1 ;
-(BOOL)hasNumber;
@end

