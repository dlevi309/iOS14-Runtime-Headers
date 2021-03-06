/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAccountRegistry, NSString;

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging> {

	int _transportType;
	HMDAccountRegistry* _accountRegistry;
	long long _qualityOfService;

}

@property (nonatomic,readonly) int transportType;                                 //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) HMDAccountRegistry * accountRegistry;              //@synthesize accountRegistry=_accountRegistry - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure; 
@property (nonatomic,readonly) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(unsigned long long)restriction;
+(id)remoteMessageFromMessage:(id)arg1 secure:(BOOL)arg2 accountRegistry:(id)arg3 ;
+(id)remoteMessageTransportsForProductInfo:(id)arg1 ;
-(BOOL)isSecure;
-(id)init;
-(void)start;
-(int)transportType;
-(long long)qualityOfService;
-(BOOL)canSendMessage:(id)arg1 ;
-(id)initWithAccountRegistry:(id)arg1 ;
-(id)remoteMessageFromMessage:(id)arg1 ;
-(HMDAccountRegistry *)accountRegistry;
-(id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2 ;
-(BOOL)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2 ;
-(void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1 ;
-(long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3 ;
@end

