/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <libobjc.A.dylib/IXAppInstallCoordinatorObserver.h>

@protocol IXInitiatingOrUpdatingCoordinator;
@class NSString, IXAppInstallCoordinator;

@interface _IXSimpleInstallerDelegate : NSObject <IXAppInstallCoordinatorObserver> {

	/*^block*/id _completion;
	NSString* _bundleID;
	IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator> _coordinator;

}

@property (nonatomic,copy) id completion;                                                                          //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setCoordinator:(IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator>)arg1 ;
-(IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator>)coordinator;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 ;
@end

