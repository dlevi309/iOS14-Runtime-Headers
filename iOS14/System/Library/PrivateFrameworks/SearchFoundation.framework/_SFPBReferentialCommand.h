/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBReferentialCommand.h>
@class NSString, NSData;


@protocol _SFPBReferentialCommand <NSObject>
@property (nonatomic,copy) NSString * referenceIdentifier; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(NSString *)referenceIdentifier;
-(id)initWithDictionary:(id)arg1;
-(void)setReferenceIdentifier:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBReferentialCommand : PBCodable <_SFPBReferentialCommand, NSSecureCoding> {

	NSString* _referenceIdentifier;

}

@property (nonatomic,copy) NSString * referenceIdentifier;              //@synthesize referenceIdentifier=_referenceIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)referenceIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReferenceIdentifier:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

