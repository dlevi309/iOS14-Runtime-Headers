/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistorySync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _downloadRecordCount;
	unsigned _uploadRecordCount;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasUploadRecordCount; 
@property (assign,nonatomic) unsigned uploadRecordCount;                //@synthesize uploadRecordCount=_uploadRecordCount - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadRecordCount; 
@property (assign,nonatomic) unsigned downloadRecordCount;              //@synthesize downloadRecordCount=_downloadRecordCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setUploadRecordCount:(unsigned)arg1 ;
-(void)setDownloadRecordCount:(unsigned)arg1 ;
-(void)setHasUploadRecordCount:(BOOL)arg1 ;
-(BOOL)hasUploadRecordCount;
-(void)setHasDownloadRecordCount:(BOOL)arg1 ;
-(BOOL)hasDownloadRecordCount;
-(unsigned)uploadRecordCount;
-(unsigned)downloadRecordCount;
@end

