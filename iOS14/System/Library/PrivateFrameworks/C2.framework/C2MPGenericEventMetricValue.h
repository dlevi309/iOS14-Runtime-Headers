/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class C2MPError, NSString;

@interface C2MPGenericEventMetricValue : PBCodable <NSCopying> {

	unsigned long long _dateValue;
	double _doubleValue;
	C2MPError* _errorValue;
	NSString* _stringValue;
	SCD_Struct_C21 _has;

}

@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                        //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasDateValue; 
@property (assign,nonatomic) unsigned long long dateValue;              //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorValue; 
@property (nonatomic,retain) C2MPError * errorValue;                    //@synthesize errorValue=_errorValue - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)dateValue;
-(double)doubleValue;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)stringValue;
-(BOOL)hasDoubleValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(void)setDateValue:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDateValue;
-(void)setErrorValue:(C2MPError *)arg1 ;
-(void)setHasDateValue:(BOOL)arg1 ;
-(BOOL)hasErrorValue;
-(C2MPError *)errorValue;
@end

