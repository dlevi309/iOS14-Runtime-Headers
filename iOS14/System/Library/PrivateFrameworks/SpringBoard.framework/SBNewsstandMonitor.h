/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/FBProcessManagerObserver.h>
#import <libobjc.A.dylib/FBProcessObserver.h>

@class NSArray, NSString;

@interface SBNewsstandMonitor : NSObject <FBProcessManagerObserver, FBProcessObserver> {

	NSArray* _deniedBundleIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_deniedBundleIdentifiers;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(id)init;
-(void)_handleBackgroundUpdateDenyListChange;
-(void)_addObserverForBackgroundUpdateDenyListChange;
@end

