/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEnqueuerProperties.h>

@class NSString, NSNumber, NSTimeZone;

@interface SSVMutablePlayActivityEnqueuerProperties : SSVPlayActivityEnqueuerProperties

@property (nonatomic,copy) NSString * buildVersion; 
@property (nonatomic,copy) NSString * deviceGUID; 
@property (nonatomic,copy) NSString * deviceName; 
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long systemReleaseType; 
@property (assign,getter=isSBEnabled,nonatomic) BOOL SBEnabled; 
@property (assign,nonatomic) unsigned long long storeAccountID; 
@property (nonatomic,copy) NSString * storeFrontID; 
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setSBEnabled:(BOOL)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setDeviceGUID:(NSString *)arg1 ;
-(void)setSystemReleaseType:(long long)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

