/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAbstractCommand.h>
@class _SFPBCommandValue, NSData;


@protocol _SFPBAbstractCommand <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) _SFPBCommandValue * value; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)setType:(int)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setValue:(id)arg1;
-(int)type;
-(id)initWithJSON:(id)arg1;
-(_SFPBCommandValue *)value;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBCommandValue, NSData, NSString;

@interface _SFPBAbstractCommand : PBCodable <_SFPBAbstractCommand, NSSecureCoding> {

	int _type;
	_SFPBCommandValue* _value;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _SFPBCommandValue * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(_SFPBCommandValue *)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(_SFPBCommandValue *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

