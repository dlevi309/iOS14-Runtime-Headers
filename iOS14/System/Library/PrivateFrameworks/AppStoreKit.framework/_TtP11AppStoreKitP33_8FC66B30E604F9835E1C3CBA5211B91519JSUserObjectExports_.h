/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

@class NSString, NSNumber;


@protocol _TtP11AppStoreKitP33_8FC66B30E604F9835E1C3CBA5211B91519JSUserObjectExports_ <JSExport>
@property (readonly,nonatomic) NSString * firstName; 
@property (readonly,nonatomic) NSString * lastName; 
@property (readonly,nonatomic) NSString * accountIdentifier; 
@property (readonly,nonatomic) NSString * dsid; 
@property (readonly,nonatomic) BOOL isManagedAppleID; 
@property (readonly,nonatomic) BOOL isUnderThirteen; 
@property (readonly,nonatomic) NSNumber * userAgeIfAvailable; 
@required
-(BOOL)isManagedAppleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)dsid;
-(id)cookiesForUrl:(id)arg1;
-(NSString *)accountIdentifier;
-(NSNumber *)userAgeIfAvailable;
-(BOOL)isUnderThirteen;
-(id)cookieForUrlWithName:(id)arg1 :(id)arg2;

@end

