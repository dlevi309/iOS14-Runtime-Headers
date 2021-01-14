/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPFieldActionDeleteListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionReplaceListRange;

@interface CKDPFieldAction : PBCodable <NSCopying> {

	CKDPFieldActionDeleteListRange* _deleteListRange;
	CKDPFieldActionInsertIntoList* _insertIntoList;
	CKDPFieldActionReplaceListRange* _replaceListRange;

}

@property (nonatomic,readonly) BOOL hasInsertIntoList; 
@property (nonatomic,retain) CKDPFieldActionInsertIntoList * insertIntoList;                  //@synthesize insertIntoList=_insertIntoList - In the implementation block
@property (nonatomic,readonly) BOOL hasDeleteListRange; 
@property (nonatomic,retain) CKDPFieldActionDeleteListRange * deleteListRange;                //@synthesize deleteListRange=_deleteListRange - In the implementation block
@property (nonatomic,readonly) BOOL hasReplaceListRange; 
@property (nonatomic,retain) CKDPFieldActionReplaceListRange * replaceListRange;              //@synthesize replaceListRange=_replaceListRange - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInsertIntoList:(CKDPFieldActionInsertIntoList *)arg1 ;
-(void)setReplaceListRange:(CKDPFieldActionReplaceListRange *)arg1 ;
-(void)setDeleteListRange:(CKDPFieldActionDeleteListRange *)arg1 ;
-(BOOL)hasInsertIntoList;
-(BOOL)hasDeleteListRange;
-(BOOL)hasReplaceListRange;
-(CKDPFieldActionInsertIntoList *)insertIntoList;
-(CKDPFieldActionDeleteListRange *)deleteListRange;
-(CKDPFieldActionReplaceListRange *)replaceListRange;
@end
