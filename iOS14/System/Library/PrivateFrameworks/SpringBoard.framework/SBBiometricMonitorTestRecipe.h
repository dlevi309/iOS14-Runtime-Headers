/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class SBBiometricMonitorUI, SBBiometricMonitorTestRecipeDummyDataSource, NSString;

@interface SBBiometricMonitorTestRecipe : NSObject <SBTestRecipe> {

	SBBiometricMonitorUI* _monitorUI;
	SBBiometricMonitorTestRecipeDummyDataSource* _dataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
@end

