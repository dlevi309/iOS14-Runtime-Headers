/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFSettingsPersistable.h>

@class NSString, NSDictionary;

@interface WFSettingsProxy : NSObject <WFSettingsPersistable> {

	BOOL _customProxy;
	BOOL _authenticated;
	BOOL _autoConfigured;
	BOOL _autoDiscoveryEnabled;
	NSString* _server;
	NSString* _port;
	NSString* _username;
	NSString* _password;
	NSString* _autoConfigureURL;
	NSDictionary* _items;

}

@property (nonatomic,copy) NSString * server;                                  //@synthesize server=_server - In the implementation block
@property (nonatomic,copy) NSString * port;                                    //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSString * username;                                //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * autoConfigureURL;                        //@synthesize autoConfigureURL=_autoConfigureURL - In the implementation block
@property (nonatomic,retain) NSDictionary * items;                             //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL customProxy;                                 //@synthesize customProxy=_customProxy - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                               //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,nonatomic) BOOL autoConfigured;                              //@synthesize autoConfigured=_autoConfigured - In the implementation block
@property (assign,nonatomic) BOOL autoDiscoveryEnabled;                        //@synthesize autoDiscoveryEnabled=_autoDiscoveryEnabled - In the implementation block
@property (nonatomic,copy) NSString * password;                                //@synthesize password=_password - In the implementation block
@property (getter=isAutomatic,nonatomic,readonly) BOOL automatic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProxyConfiguration;
+(id)offConfig;
-(void)setPort:(NSString *)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(NSString *)port;
-(void)setUsername:(NSString *)arg1 ;
-(void)setItems:(NSDictionary *)arg1 ;
-(void)setServer:(NSString *)arg1 ;
-(id)protocol;
-(BOOL)isAutomatic;
-(NSString *)password;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)items;
-(BOOL)authenticated;
-(NSString *)username;
-(NSString *)description;
-(NSString *)server;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)autoConfigureURL;
-(BOOL)customProxy;
-(id)initDefaultConfig;
-(BOOL)autoConfigured;
-(BOOL)autoDiscoveryEnabled;
-(id)initWithManualServer:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4 ;
-(id)initWithAutoConfigureURL:(id)arg1 ;
-(void)setAutoConfigureURL:(NSString *)arg1 ;
-(void)setCustomProxy:(BOOL)arg1 ;
-(void)setAutoConfigured:(BOOL)arg1 ;
-(void)setAutoDiscoveryEnabled:(BOOL)arg1 ;
@end
