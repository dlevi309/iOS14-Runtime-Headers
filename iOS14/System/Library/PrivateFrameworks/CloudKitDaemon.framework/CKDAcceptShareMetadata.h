/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSURL, CKRecordID, NSString, NSData;

@interface CKDAcceptShareMetadata : NSObject {

	BOOL _acceptedInProcess;
	NSURL* _shareURL;
	CKRecordID* _shareRecordID;
	NSString* _etag;
	NSData* _publicPCSData;
	NSString* _publicPCSEtag;
	NSData* _publicKey;
	unsigned long long _publicKeyVersion;
	NSData* _oonProtectionInfo;
	NSString* _oonParticipantID;
	NSData* _dugongInvitationProtectionInfo;

}

@property (nonatomic,retain) NSURL * shareURL;                                     //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,retain) CKRecordID * shareRecordID;                           //@synthesize shareRecordID=_shareRecordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                                      //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) NSData * publicPCSData;                               //@synthesize publicPCSData=_publicPCSData - In the implementation block
@property (nonatomic,retain) NSString * publicPCSEtag;                             //@synthesize publicPCSEtag=_publicPCSEtag - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                                   //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,nonatomic) unsigned long long publicKeyVersion;                  //@synthesize publicKeyVersion=_publicKeyVersion - In the implementation block
@property (nonatomic,retain) NSData * oonProtectionInfo;                           //@synthesize oonProtectionInfo=_oonProtectionInfo - In the implementation block
@property (nonatomic,retain) NSString * oonParticipantID;                          //@synthesize oonParticipantID=_oonParticipantID - In the implementation block
@property (nonatomic,retain) NSData * dugongInvitationProtectionInfo;              //@synthesize dugongInvitationProtectionInfo=_dugongInvitationProtectionInfo - In the implementation block
@property (assign,nonatomic) BOOL acceptedInProcess;                               //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
-(NSData *)publicKey;
-(NSURL *)shareURL;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSString *)etag;
-(CKRecordID *)shareRecordID;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
-(BOOL)acceptedInProcess;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(unsigned long long)publicKeyVersion;
-(void)setPublicKeyVersion:(unsigned long long)arg1 ;
-(NSData *)publicPCSData;
-(void)setPublicPCSData:(NSData *)arg1 ;
-(void)setPublicPCSEtag:(NSString *)arg1 ;
-(NSString *)publicPCSEtag;
-(NSData *)dugongInvitationProtectionInfo;
-(NSData *)oonProtectionInfo;
-(NSString *)oonParticipantID;
-(void)setOonProtectionInfo:(NSData *)arg1 ;
-(void)setOonParticipantID:(NSString *)arg1 ;
-(void)setDugongInvitationProtectionInfo:(NSData *)arg1 ;
@end
