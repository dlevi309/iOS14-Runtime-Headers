/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSURL, NSString, NSArray;

@interface DMFOpenURLRequest : DMFTaskRequest {

	BOOL _lockInApp;
	NSURL* _url;
	NSString* _URLDisplayName;
	NSArray* _handlingBundleIdentifiers;

}

@property (nonatomic,copy) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLDisplayName;                        //@synthesize URLDisplayName=_URLDisplayName - In the implementation block
@property (assign,nonatomic) BOOL lockInApp;                                 //@synthesize lockInApp=_lockInApp - In the implementation block
@property (nonatomic,copy) NSArray * handlingBundleIdentifiers;              //@synthesize handlingBundleIdentifiers=_handlingBundleIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setLockInApp:(BOOL)arg1 ;
-(NSString *)URLDisplayName;
-(NSArray *)handlingBundleIdentifiers;
-(void)setURLDisplayName:(NSString *)arg1 ;
-(void)setHandlingBundleIdentifiers:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)lockInApp;
@end

