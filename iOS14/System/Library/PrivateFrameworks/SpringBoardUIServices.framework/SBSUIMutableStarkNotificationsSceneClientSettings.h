/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SBSUIStarkNotificationsSceneClientSettings.h>

@class NSString;

@interface SBSUIMutableStarkNotificationsSceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>

@property (assign,getter=isDisplayingNotification,nonatomic) BOOL displayingNotification; 
@property (assign,nonatomic) BOOL shouldBorrowScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDisplayingNotification;
-(BOOL)shouldBorrowScreen;
-(void)setDisplayingNotification:(BOOL)arg1 ;
-(void)setShouldBorrowScreen:(BOOL)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

