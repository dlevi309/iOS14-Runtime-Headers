/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoPerformProductActionRequest : PBRequest <NSCopying> {

	NSData* _productsActionData;

}

@property (nonatomic,readonly) BOOL hasProductsActionData; 
@property (nonatomic,retain) NSData * productsActionData;               //@synthesize productsActionData=_productsActionData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setProductsActionData:(NSData *)arg1 ;
-(BOOL)hasProductsActionData;
-(NSData *)productsActionData;
@end

