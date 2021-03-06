/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBWillSendLightsAndSirensRequest : PBRequest <NSCopying> {

	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;
	BOOL _systemApp;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasPublisherBulletinID; 
@property (nonatomic,retain) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) BOOL hasSystemApp; 
@property (assign,nonatomic) BOOL systemApp;                              //@synthesize systemApp=_systemApp - In the implementation block
-(id)dictionaryRepresentation;
-(void)setSectionID:(NSString *)arg1 ;
-(BOOL)hasRecordID;
-(NSString *)sectionID;
-(void)setRecordID:(NSString *)arg1 ;
-(void)setSystemApp:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(NSString *)recordID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)publisherBulletinID;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSectionID;
-(BOOL)hasPublisherBulletinID;
-(BOOL)systemApp;
-(BOOL)hasSystemApp;
-(void)setHasSystemApp:(BOOL)arg1 ;
@end

