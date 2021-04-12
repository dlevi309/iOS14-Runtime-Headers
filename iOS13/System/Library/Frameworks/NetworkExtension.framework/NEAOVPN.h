/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _toggleEnabled;
	BOOL _allowCaptiveWebSheet;
	BOOL _allowAllCaptiveNetworkPlugins;
	NSDictionary* _interfaceProtocolMapping;
	NSString* _activeInterfaceProtocolKey;
	NSDictionary* _serviceExceptions;
	NSDictionary* _allowedCaptiveNetworkPlugins;

}

@property (getter=isEnabled) BOOL enabled;                                                          //@synthesize enabled=_enabled - In the implementation block
@property (getter=isToggleEnabled) BOOL toggleEnabled;                                              //@synthesize toggleEnabled=_toggleEnabled - In the implementation block
@property (getter=isAllowCaptiveWebSheet) BOOL allowCaptiveWebSheet;                                //@synthesize allowCaptiveWebSheet=_allowCaptiveWebSheet - In the implementation block
@property (getter=isAllowAllCaptiveNetworkPlugins) BOOL allowAllCaptiveNetworkPlugins;              //@synthesize allowAllCaptiveNetworkPlugins=_allowAllCaptiveNetworkPlugins - In the implementation block
@property (copy) NSDictionary * interfaceProtocolMapping;                                           //@synthesize interfaceProtocolMapping=_interfaceProtocolMapping - In the implementation block
@property (copy) NSString * activeInterfaceProtocolKey;                                             //@synthesize activeInterfaceProtocolKey=_activeInterfaceProtocolKey - In the implementation block
@property (copy) NSDictionary * serviceExceptions;                                                  //@synthesize serviceExceptions=_serviceExceptions - In the implementation block
@property (copy) NSDictionary * allowedCaptiveNetworkPlugins;                                       //@synthesize allowedCaptiveNetworkPlugins=_allowedCaptiveNetworkPlugins - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isToggleEnabled;
-(BOOL)isAllowCaptiveWebSheet;
-(BOOL)isAllowAllCaptiveNetworkPlugins;
-(NSDictionary *)interfaceProtocolMapping;
-(NSString *)activeInterfaceProtocolKey;
-(NSDictionary *)serviceExceptions;
-(NSDictionary *)allowedCaptiveNetworkPlugins;
-(void)setToggleEnabled:(BOOL)arg1 ;
-(void)setAllowCaptiveWebSheet:(BOOL)arg1 ;
-(void)setAllowAllCaptiveNetworkPlugins:(BOOL)arg1 ;
-(void)setInterfaceProtocolMapping:(NSDictionary *)arg1 ;
-(void)setActiveInterfaceProtocolKey:(NSString *)arg1 ;
-(void)setServiceExceptions:(NSDictionary *)arg1 ;
-(void)setAllowedCaptiveNetworkPlugins:(NSDictionary *)arg1 ;
@end
