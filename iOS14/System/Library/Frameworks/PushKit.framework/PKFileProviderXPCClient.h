/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
*/


@protocol PKFileProviderXPCClient
@optional
-(void)fileProviderRegistrationFailed;

@required
-(void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg1;
-(void)fileProviderPayloadReceived:(id)arg1;

@end

