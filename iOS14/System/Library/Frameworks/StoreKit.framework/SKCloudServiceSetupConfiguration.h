/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SKCloudServiceSetupConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _targetsFinanceApplication;
	BOOL _forPublicSDK;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                 //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (assign,nonatomic) BOOL targetsFinanceApplication;              //@synthesize targetsFinanceApplication=_targetsFinanceApplication - In the implementation block
@property (assign,nonatomic) BOOL forPublicSDK;                           //@synthesize forPublicSDK=_forPublicSDK - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)targetsFinanceApplication;
-(void)setTargetsFinanceApplication:(BOOL)arg1 ;
-(BOOL)forPublicSDK;
-(void)setForPublicSDK:(BOOL)arg1 ;
@end

