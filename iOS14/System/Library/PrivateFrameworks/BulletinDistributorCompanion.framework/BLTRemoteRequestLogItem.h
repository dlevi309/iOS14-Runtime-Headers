/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSString, NSDate, NSNumber, NSUUID;

@interface BLTRemoteRequestLogItem : NSObject {

	NSString* _idsTransmitIdentifier;
	NSString* _idsResponseIdentifier;
	id _requestDescription;
	NSDate* _cacheDate;
	NSNumber* _sequenceNumber;
	NSUUID* _sessionIdentifier;
	unsigned long long _sessionState;

}

@property (nonatomic,copy) NSString * idsTransmitIdentifier;               //@synthesize idsTransmitIdentifier=_idsTransmitIdentifier - In the implementation block
@property (nonatomic,copy) NSString * idsResponseIdentifier;               //@synthesize idsResponseIdentifier=_idsResponseIdentifier - In the implementation block
@property (nonatomic,copy) id requestDescription;                          //@synthesize requestDescription=_requestDescription - In the implementation block
@property (nonatomic,retain) NSDate * cacheDate;                           //@synthesize cacheDate=_cacheDate - In the implementation block
@property (nonatomic,retain) NSNumber * sequenceNumber;                    //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                   //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long sessionState;              //@synthesize sessionState=_sessionState - In the implementation block
+(id)remoteRequestLogItemWithIDSTransmitIdentifier:(id)arg1 IDSResponseIdentifier:(id)arg2 requestDescription:(id)arg3 sequenceNumber:(id)arg4 sessionIdentifier:(id)arg5 sessionState:(unsigned long long)arg6 ;
-(void)setSequenceNumber:(NSNumber *)arg1 ;
-(unsigned long long)sessionState;
-(void)setSessionState:(unsigned long long)arg1 ;
-(NSNumber *)sequenceNumber;
-(id)requestDescription;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)sessionIdentifier;
-(id)description;
-(void)setRequestDescription:(id)arg1 ;
-(void)setIdsTransmitIdentifier:(NSString *)arg1 ;
-(void)setIdsResponseIdentifier:(NSString *)arg1 ;
-(void)setCacheDate:(NSDate *)arg1 ;
-(NSString *)idsTransmitIdentifier;
-(NSString *)idsResponseIdentifier;
-(NSDate *)cacheDate;
@end

