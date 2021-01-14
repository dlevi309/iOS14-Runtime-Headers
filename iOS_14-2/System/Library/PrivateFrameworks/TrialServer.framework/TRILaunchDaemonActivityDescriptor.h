/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _supportedTaskCapabilities;

}

@property (nonatomic,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedTaskCapabilities;              //@synthesize supportedTaskCapabilities=_supportedTaskCapabilities - In the implementation block
+(id)launchDaemonActivityDescriptorWithName:(id)arg1 supportedTaskCapabilities:(unsigned long long)arg2 ;
+(id)retryFailuresDescriptor;
+(id)cellularDescriptor;
+(id)inexpensiveNetworkingDescriptor;
+(id)postUpgradeDescriptor;
+(id)taskQueueDescriptor;
+(id)clientTriggeredCellularDescriptor;
+(id)clientTriggeredWifiDescriptor;
-(id)init;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithReplacementName:(id)arg1 ;
-(id)initWithName:(id)arg1 supportedTaskCapabilities:(unsigned long long)arg2 ;
-(unsigned long long)supportedTaskCapabilities;
-(BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)arg1 ;
-(id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)arg1 ;
@end
