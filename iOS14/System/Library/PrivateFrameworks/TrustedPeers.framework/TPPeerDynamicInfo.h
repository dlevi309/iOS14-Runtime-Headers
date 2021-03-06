/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


#import <TrustedPeers/TrustedPeers-Structs.h>
@class NSSet, NSDictionary, NSData;

@interface TPPeerDynamicInfo : NSObject {

	unsigned long long _clock;
	NSSet* _includedPeerIDs;
	NSSet* _excludedPeerIDs;
	NSDictionary* _dispositions;
	NSSet* _preapprovals;
	NSData* _data;
	NSData* _sig;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * sig;                             //@synthesize sig=_sig - In the implementation block
@property (nonatomic,retain) NSDictionary * dispositions;              //@synthesize dispositions=_dispositions - In the implementation block
@property (nonatomic,readonly) unsigned long long clock;               //@synthesize clock=_clock - In the implementation block
@property (nonatomic,readonly) NSSet * includedPeerIDs;                //@synthesize includedPeerIDs=_includedPeerIDs - In the implementation block
@property (nonatomic,readonly) NSSet * excludedPeerIDs;                //@synthesize excludedPeerIDs=_excludedPeerIDs - In the implementation block
@property (nonatomic,readonly) NSSet * preapprovals;                   //@synthesize preapprovals=_preapprovals - In the implementation block
+(id)dynamicInfoPBWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5 ;
+(id)dynamicInfoWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5 signingKeyPair:(id)arg6 error:(id*)arg7 ;
+(id)dynamicInfoWithData:(id)arg1 sig:(id)arg2 ;
-(unsigned long long)clock;
-(id)dictionaryRepresentation;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(NSData *)sig;
-(void)setSig:(NSData *)arg1 ;
-(NSData *)data;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithObj:(id)arg1 data:(id)arg2 sig:(id)arg3 ;
-(BOOL)checkSignatureWithKey:(id)arg1 ;
-(BOOL)isEqualToPeerDynamicInfo:(id)arg1 ;
-(NSSet *)includedPeerIDs;
-(NSSet *)excludedPeerIDs;
-(NSDictionary *)dispositions;
-(void)setDispositions:(NSDictionary *)arg1 ;
-(NSSet *)preapprovals;
@end

