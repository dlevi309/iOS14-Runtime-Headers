/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIApplicationSceneSettings.h>
#import <UIKit/UICarPlayApplicationSceneSettings.h>

@protocol UICarPlayApplicationSceneSettings <NSObject>
@property (nonatomic,readonly) BOOL disableFiveRowKeyboards; 
@required
-(BOOL)disableFiveRowKeyboards;

@end


@class NSString;

@interface UICarPlayApplicationSceneSettings : UIApplicationSceneSettings <UICarPlayApplicationSceneSettings>

@property (nonatomic,readonly) BOOL disableFiveRowKeyboards; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)disableFiveRowKeyboards;
@end

