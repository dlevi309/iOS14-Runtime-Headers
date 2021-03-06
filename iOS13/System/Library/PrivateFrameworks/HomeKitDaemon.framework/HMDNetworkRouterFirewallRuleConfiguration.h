/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDate, NSArray, NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging> {

	BOOL _fullAccessLAN;
	BOOL _fullAccessWAN;
	HMDNetworkRouterFirewallRuleAccessoryIdentifier* _accessoryIdentifier;
	NSDate* _lastModifiedTime;
	NSArray* _lanRules;
	NSArray* _wanRules;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedTime;                                                          //@synthesize lastModifiedTime=_lastModifiedTime - In the implementation block
@property (nonatomic,readonly) NSArray * lanRules;                                                                 //@synthesize lanRules=_lanRules - In the implementation block
@property (getter=hasFullAccessToLAN,nonatomic,readonly) BOOL fullAccessLAN;                                       //@synthesize fullAccessLAN=_fullAccessLAN - In the implementation block
@property (nonatomic,readonly) NSArray * wanRules;                                                                 //@synthesize wanRules=_wanRules - In the implementation block
@property (getter=hasFullAccessToWAN,nonatomic,readonly) BOOL fullAccessWAN;                                       //@synthesize fullAccessWAN=_fullAccessWAN - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)__decodeNetworkDeclarationsFromJSONDictionary:(id)arg1 networkDeclarations:(id*)arg2 ;
+(BOOL)__decodeFullAccessFromNetworkDeclarations:(id)arg1 key:(id)arg2 fullAccess:(BOOL*)arg3 ;
+(id)__decodeRulesFromNetworkDeclarations:(id)arg1 key:(id)arg2 class:(Class)arg3 required:(BOOL)arg4 ;
-(id)attributeDescriptions;
-(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)accessoryIdentifier;
-(NSDictionary *)prettyJSONDictionary;
-(BOOL)hasFullAccessToLAN;
-(NSArray *)lanRules;
-(BOOL)hasFullAccessToWAN;
-(NSArray *)wanRules;
-(id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2 ;
-(NSDate *)lastModifiedTime;
-(id)initWithAccessoryIdentifier:(id)arg1 lastModifiedTime:(id)arg2 fullAccessLAN:(BOOL)arg3 lanRules:(id)arg4 fullAccessWAN:(BOOL)arg5 wanRules:(id)arg6 ;
@end

