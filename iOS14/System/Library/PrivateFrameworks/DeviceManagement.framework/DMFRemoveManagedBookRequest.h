/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSNumber, NSString;

@interface DMFRemoveManagedBookRequest : DMFTaskRequest {

	NSNumber* _iTunesStoreID;
	NSString* _persistentID;

}

@property (nonatomic,copy) NSNumber * iTunesStoreID;              //@synthesize iTunesStoreID=_iTunesStoreID - In the implementation block
@property (nonatomic,copy) NSString * persistentID;               //@synthesize persistentID=_persistentID - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setPersistentID:(NSString *)arg1 ;
-(NSNumber *)iTunesStoreID;
-(void)setITunesStoreID:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)persistentID;
-(id)initWithCoder:(id)arg1 ;
@end

