/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSDictionary;

@interface PKInstallmentPlanProduct : NSObject <NSSecureCoding, NSCopying> {

	BOOL _upgradeEligible;
	NSString* _identifier;
	NSString* _model;
	NSString* _capacity;
	NSString* _color;
	unsigned long long _warrantyYears;
	NSSet* _features;
	NSString* _serialNumber;
	NSDictionary* _iconURLs;
	NSDictionary* _splashImageURLs;

}

@property (nonatomic,copy) NSDictionary * iconURLs;                                      //@synthesize iconURLs=_iconURLs - In the implementation block
@property (nonatomic,copy) NSDictionary * splashImageURLs;                               //@synthesize splashImageURLs=_splashImageURLs - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * model;                                             //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * capacity;                                          //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,copy) NSString * color;                                             //@synthesize color=_color - In the implementation block
@property (assign,getter=isUpgradeEligible,nonatomic) BOOL upgradeEligible;              //@synthesize upgradeEligible=_upgradeEligible - In the implementation block
@property (assign,nonatomic) unsigned long long warrantyYears;                           //@synthesize warrantyYears=_warrantyYears - In the implementation block
@property (nonatomic,copy) NSSet * features;                                             //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                      //@synthesize serialNumber=_serialNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCapacity:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(NSString *)model;
-(NSSet *)features;
-(NSString *)capacity;
-(NSString *)color;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)iconURLs;
-(id)initWithDictionary:(id)arg1 ;
-(void)setFeatures:(NSSet *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setColor:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_imageURLFromImageURLs:(id)arg1 forScale:(double)arg2 suffix:(id)arg3 ;
-(BOOL)isEqualToInstallmentPlanProduct:(id)arg1 ;
-(unsigned long long)warrantyYears;
-(id)iconURLForScale:(double)arg1 suffix:(id)arg2 ;
-(id)splashImageURLForScale:(double)arg1 suffix:(id)arg2 ;
-(BOOL)isUpgradeEligible;
-(void)setUpgradeEligible:(BOOL)arg1 ;
-(void)setWarrantyYears:(unsigned long long)arg1 ;
-(NSDictionary *)splashImageURLs;
-(void)setSplashImageURLs:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIconURLs:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
