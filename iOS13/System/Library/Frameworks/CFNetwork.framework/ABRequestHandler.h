/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/AuthBrokerQuery.h>

@interface ABRequestHandler : NSObject <AuthBrokerQuery> {

	AuthBrokerAuthenticator* authenticator;

}
-(id)init;
-(void)fetchProxyCredential:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

