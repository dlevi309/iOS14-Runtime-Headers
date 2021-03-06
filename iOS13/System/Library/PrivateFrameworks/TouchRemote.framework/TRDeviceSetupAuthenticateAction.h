/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString, NSArray;

@interface TRDeviceSetupAuthenticateAction : TRDeviceSetupAction

@property (nonatomic,readonly) unsigned long long accountType; 
@property (nonatomic,copy,readonly) NSString * accountID; 
@property (nonatomic,copy,readonly) NSString * accountPassword; 
@property (nonatomic,copy,readonly) NSArray * accountTypesWithSharedCredentials; 
@property (nonatomic,readonly) unsigned long long attemptCount; 
@property (nonatomic,copy,readonly) NSString * requestMessage; 
@property (nonatomic,copy,readonly) NSString * failureMessage; 
+(id)actionForFailedAttemptWithOriginalAction:(id)arg1 requestMessage:(id)arg2 failureMessage:(id)arg3 ;
+(id)actionForInitialAttemptWithAccountType:(unsigned long long)arg1 requestMessage:(id)arg2 ;
+(id)actionForFinishedRequestWithOriginalAction:(id)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4 ;
+(id)actionForCancelledRequestWithOriginalAction:(id)arg1 ;
-(id)init;
-(unsigned long long)accountType;
-(unsigned long long)attemptCount;
-(NSString *)accountID;
-(NSString *)requestMessage;
-(NSString *)accountPassword;
-(NSArray *)accountTypesWithSharedCredentials;
-(id)_initWithAccountType:(unsigned long long)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4 attemptCount:(unsigned long long)arg5 requestMessage:(id)arg6 failureMessage:(id)arg7 ;
-(NSString *)failureMessage;
@end

