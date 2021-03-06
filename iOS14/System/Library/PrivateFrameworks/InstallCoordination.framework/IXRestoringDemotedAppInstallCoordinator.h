/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/IXAppInstallCoordinator.h>
#import <libobjc.A.dylib/IXCoordinatorWithUserDataPromise.h>
#import <libobjc.A.dylib/IXCoordinatorWithImportance.h>

@class NSString;

@interface IXRestoringDemotedAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithUserDataPromise, IXCoordinatorWithImportance>

@property (nonatomic,readonly) BOOL hasUserDataPromise; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
+(id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2 ;
+(void)enumerateCoordinatorsUsingBlock:(/*^block*/id)arg1 ;
+(BOOL)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)validInstallTypes;
@end

