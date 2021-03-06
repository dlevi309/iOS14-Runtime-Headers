/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>

@class NSMutableArray, NSData, NSArray;

@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory {

	NSMutableArray* _accessoryServers;
	long long _certificationStatus;
	NSData* _setupHash;
	long long _awd_linkType;

}

@property (copy,readonly) NSArray * accessoryServers; 
@property (nonatomic,readonly) unsigned long long transportTypes; 
@property (assign,nonatomic) long long certificationStatus;                    //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (nonatomic,retain) NSData * setupHash;                               //@synthesize setupHash=_setupHash - In the implementation block
@property (nonatomic,readonly) long long awd_linkType;                         //@synthesize awd_linkType=_awd_linkType - In the implementation block
-(BOOL)isReachable;
-(long long)associationOptions;
-(void)identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)certificationStatus;
-(void)setCertificationStatus:(long long)arg1 ;
-(unsigned long long)transportTypes;
-(NSData *)setupHash;
-(void)setSetupHash:(NSData *)arg1 ;
-(BOOL)hasBTLELink;
-(id)preferredAccessoryServer;
-(BOOL)hasIPLink;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2 ;
-(id)dumpDescription;
-(long long)awd_linkType;
-(NSArray *)accessoryServers;
-(id)initWithAccessoryServer:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)addAccessoryServer:(id)arg1 ;
-(void)removeAccessoryServer:(id)arg1 ;
@end

