/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <AdPlatformsCommon/AdPlatformsCommon-Structs.h>
#import <libobjc.A.dylib/APMetricProtocol.h>

@class NSDate, NSString, NSDictionary;

@interface APMetric : NSObject <APMetricProtocol> {

	BOOL _areNetworkDates;
	long long _route;
	long long _metric;
	NSDate* _timestamp;
	NSString* _contentIdentifier;
	NSString* _contextIdentifier;
	NSString* _identifier;
	NSString* _os;
	NSString* _osVersion;
	NSString* _osBuild;
	NSString* _deviceModel;
	NSString* _clientBundleIdentifier;
	NSString* _deviceIdentifier;
	NSString* _userIdentifier;
	NSDictionary* _properties;
	NSDictionary* _internalProperties;
	long long _options;

}

@property (nonatomic,retain) NSDate * timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * os;                                                //@synthesize os=_os - In the implementation block
@property (nonatomic,retain) NSString * osVersion;                                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,retain) NSString * osBuild;                                           //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                                       //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * clientBundleIdentifier;                            //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * userIdentifier;                                    //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                                    //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL areNetworkDates;                                         //@synthesize areNetworkDates=_areNetworkDates - In the implementation block
@property (nonatomic,readonly) long long route;                                            //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) long long metric;                                           //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) NSString * contentIdentifier;                               //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * contextIdentifier;                               //@synthesize contextIdentifier=_contextIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * internalProperties;                          //@synthesize internalProperties=_internalProperties - In the implementation block
@property (nonatomic,readonly) long long options;                                          //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverDictionaryRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)clientBundleIdentifier;
-(NSString *)userIdentifier;
-(NSString *)deviceModel;
-(NSDictionary *)properties;
-(long long)route;
-(id)_options;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)osBuild;
-(id)_properties;
-(NSDate *)timestamp;
-(long long)metric;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)osVersion;
-(long long)options;
-(NSString *)contentIdentifier;
-(NSString *)description;
-(void)setOsBuild:(NSString *)arg1 ;
-(void)setOs:(NSString *)arg1 ;
-(NSString *)os;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)contextIdentifier;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)initUndefinedDeviceInfo;
-(void)initDeviceInfo;
-(BOOL)validateMetricAndSetupIdentifiers:(id)arg1 ;
-(void)_replaceIdentifierWithIdentifier:(id)arg1 ;
-(id)_serverDictionaryRepresentation;
-(id)_optionsArray;
-(BOOL)areNetworkDates;
-(id)_descriptionWithFormat:(id)arg1 ;
-(id)initWithRoute:(long long)arg1 metric:(long long)arg2 contentIdentifier:(id)arg3 contextIdentifier:(id)arg4 identifier:(id)arg5 properties:(id)arg6 internalProperties:(id)arg7 options:(long long)arg8 ;
-(id)duplicateMetricReplacingIdentifier:(id)arg1 ;
-(NSDictionary *)internalProperties;
-(NSDictionary *)serverDictionaryRepresentation;
-(void)setAreNetworkDates:(BOOL)arg1 ;
@end

