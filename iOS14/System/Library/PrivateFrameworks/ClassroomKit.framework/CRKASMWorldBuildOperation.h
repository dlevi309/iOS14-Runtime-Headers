/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@protocol CRKClassKitCurrentUser;
@class CRKASMRosterProviderConfiguration, NSArray, NSDictionary, NSSet;

@interface CRKASMWorldBuildOperation : CATOperation {

	CRKASMRosterProviderConfiguration* _configuration;
	id<CRKClassKitCurrentUser> _classKitCurrentUser;
	NSArray* _classKitClasses;
	NSDictionary* _classKitLocationsByLocationID;
	NSSet* _manageableLocationIDs;
	NSDictionary* _classKitPersonsByClassID;
	NSDictionary* _trustedClassKitPersonsByClassID;

}

@property (nonatomic,readonly) CRKASMRosterProviderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<CRKClassKitCurrentUser> classKitCurrentUser;                   //@synthesize classKitCurrentUser=_classKitCurrentUser - In the implementation block
@property (nonatomic,retain) NSArray * classKitClasses;                                        //@synthesize classKitClasses=_classKitClasses - In the implementation block
@property (nonatomic,copy) NSDictionary * classKitLocationsByLocationID;                       //@synthesize classKitLocationsByLocationID=_classKitLocationsByLocationID - In the implementation block
@property (nonatomic,copy) NSSet * manageableLocationIDs;                                      //@synthesize manageableLocationIDs=_manageableLocationIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * classKitPersonsByClassID;                            //@synthesize classKitPersonsByClassID=_classKitPersonsByClassID - In the implementation block
@property (nonatomic,copy) NSDictionary * trustedClassKitPersonsByClassID;                     //@synthesize trustedClassKitPersonsByClassID=_trustedClassKitPersonsByClassID - In the implementation block
+(id)makeErrorWithErrorsByObjectID:(id)arg1 ;
-(void)finish;
-(BOOL)isAsynchronous;
-(id)initWithConfiguration:(id)arg1 ;
-(CRKASMRosterProviderConfiguration *)configuration;
-(void)main;
-(void)checkAccountEligibility;
-(void)housekeepKeychain;
-(void)finishWithEmptyResultObject;
-(void)buildCurrentClassKitUser;
-(void)setClassKitCurrentUser:(id<CRKClassKitCurrentUser>)arg1 ;
-(void)buildClassKitClasses;
-(void)setClassKitClasses:(NSArray *)arg1 ;
-(void)buildClassKitLocationsByLocationID;
-(NSArray *)classKitClasses;
-(void)setClassKitLocationsByLocationID:(NSDictionary *)arg1 ;
-(void)buildManageableLocationIDs;
-(id<CRKClassKitCurrentUser>)classKitCurrentUser;
-(NSDictionary *)classKitLocationsByLocationID;
-(void)setManageableLocationIDs:(NSSet *)arg1 ;
-(void)buildAllClassKitPersonsByClassID;
-(void)setTrustedClassKitPersonsByClassID:(NSDictionary *)arg1 ;
-(void)setClassKitPersonsByClassID:(NSDictionary *)arg1 ;
-(id)compileResult;
-(void)housekeepKeychainWithRoster:(id)arg1 ;
-(id)makeHousekeeperWithRoster:(id)arg1 ;
-(NSDictionary *)classKitPersonsByClassID;
-(NSDictionary *)trustedClassKitPersonsByClassID;
-(NSSet *)manageableLocationIDs;
@end

