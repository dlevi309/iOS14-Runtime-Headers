/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgStateMapRestore : PBCodable <NSCopying> {

	NSMutableArray* _targetLayouts;

}

@property (nonatomic,retain) NSMutableArray * targetLayouts; 
+(BOOL)isValid:(id)arg1 ;
+(Class)targetLayoutType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addTargetLayout:(id)arg1 ;
-(unsigned long long)targetLayoutsCount;
-(void)clearTargetLayouts;
-(id)targetLayoutAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)targetLayouts;
-(void)setTargetLayouts:(NSMutableArray *)arg1 ;
@end

