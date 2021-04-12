/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/RMExtensionConfigurationSubscriberRequestHandling.h>
#import <libobjc.A.dylib/RMExtensionStatusPublisherRequestHandling.h>

@class RMExtensionConfigurationSubscriber, RMExtensionStatusPublisher, NSString;

@interface RMExtensionRequestHandler : NSObject <NSExtensionRequestHandling, RMExtensionConfigurationSubscriberRequestHandling, RMExtensionStatusPublisherRequestHandling> {

	RMExtensionConfigurationSubscriber* _configurationSubscriber;
	RMExtensionStatusPublisher* _statusPublisher;

}

@property (nonatomic,readonly) RMExtensionConfigurationSubscriber * configurationSubscriber;              //@synthesize configurationSubscriber=_configurationSubscriber - In the implementation block
@property (nonatomic,readonly) RMExtensionStatusPublisher * statusPublisher;                              //@synthesize statusPublisher=_statusPublisher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)fetchThenApplyConfigurationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithConfigurationSubscriber:(id)arg1 statusPublisher:(id)arg2 ;
-(RMExtensionConfigurationSubscriber *)configurationSubscriber;
-(RMExtensionStatusPublisher *)statusPublisher;
@end
