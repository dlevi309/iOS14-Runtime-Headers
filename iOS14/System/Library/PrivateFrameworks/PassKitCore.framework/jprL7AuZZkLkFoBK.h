/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSData, NSSet;

@interface jprL7AuZZkLkFoBK : NSObject {

	NSString* _serverEndpointIdentifier;
	NSData* _hostChallenge;
	NSData* _challengeResponse;
	NSString* _seid;
	NSSet* _identities;
	NSString* _phoneNumber;
	NSString* _emailAddress;
	NSString* _FPANSuffix;
	unsigned long long _eventFrequency;

}

@property (nonatomic,retain) NSString * serverEndpointIdentifier;              //@synthesize serverEndpointIdentifier=_serverEndpointIdentifier - In the implementation block
@property (nonatomic,retain) NSData * hostChallenge;                           //@synthesize hostChallenge=_hostChallenge - In the implementation block
@property (nonatomic,retain) NSData * challengeResponse;                       //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,retain) NSString * seid;                                  //@synthesize seid=_seid - In the implementation block
@property (nonatomic,retain) NSSet * identities;                               //@synthesize identities=_identities - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                           //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                          //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * FPANSuffix;                            //@synthesize FPANSuffix=_FPANSuffix - In the implementation block
@property (assign,nonatomic) unsigned long long eventFrequency;                //@synthesize eventFrequency=_eventFrequency - In the implementation block
-(NSString *)seid;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(id)initWithServerEndpointIdentifier:(id)arg1 ;
-(void)setIdentities:(NSSet *)arg1 ;
-(NSString *)phoneNumber;
-(void)setSeid:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSSet *)identities;
-(NSString *)FPANSuffix;
-(NSData *)hostChallenge;
-(void)setHostChallenge:(NSData *)arg1 ;
-(NSData *)challengeResponse;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(NSString *)serverEndpointIdentifier;
-(unsigned long long)eventFrequency;
-(void)setServerEndpointIdentifier:(NSString *)arg1 ;
-(void)setFPANSuffix:(NSString *)arg1 ;
-(void)setEventFrequency:(unsigned long long)arg1 ;
@end

