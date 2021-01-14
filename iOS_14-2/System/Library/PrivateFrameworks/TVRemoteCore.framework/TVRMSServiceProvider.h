/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRMSServiceProvider <NSObject>
@property (assign,nonatomic,__weak) id<TVRMSServiceProviderDelegate> delegate; 
@required
-(void)beginDiscovery;
-(id<TVRMSServiceProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)endDiscovery;

@end
