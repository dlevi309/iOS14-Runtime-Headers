/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest : DMFTaskRequest {

	BOOL _deleteFeedback;
	BOOL _managedAppsOnly;
	BOOL _advanceTransientStates;
	unsigned long long _type;
	NSArray* _bundleIdentifiers;
	NSNumber* _storeItemIdentifier;
	NSURL* _manifestURL;
	NSArray* _propertyKeys;

}

@property (assign,nonatomic) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;                 //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL deleteFeedback;                       //@synthesize deleteFeedback=_deleteFeedback - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;              //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * manifestURL;                         //@synthesize manifestURL=_manifestURL - In the implementation block
@property (assign,nonatomic) BOOL managedAppsOnly;                      //@synthesize managedAppsOnly=_managedAppsOnly - In the implementation block
@property (assign,nonatomic) BOOL advanceTransientStates;               //@synthesize advanceTransientStates=_advanceTransientStates - In the implementation block
@property (nonatomic,copy) NSArray * propertyKeys;                      //@synthesize propertyKeys=_propertyKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
-(NSNumber *)storeItemIdentifier;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(NSArray *)arg1 ;
-(BOOL)deleteFeedback;
-(void)setDeleteFeedback:(BOOL)arg1 ;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
-(BOOL)managedAppsOnly;
-(BOOL)advanceTransientStates;
-(void)setManagedAppsOnly:(BOOL)arg1 ;
-(void)setAdvanceTransientStates:(BOOL)arg1 ;
-(NSArray *)bundleIdentifiers;
@end

