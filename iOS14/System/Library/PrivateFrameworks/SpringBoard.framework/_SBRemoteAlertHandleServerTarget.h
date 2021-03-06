/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleServiceServerInterface.h>

@protocol SBSRemoteAlertHandleServiceServerInterface;
@class BSServiceConnection;

@interface _SBRemoteAlertHandleServerTarget : NSObject <SBSRemoteAlertHandleServiceServerInterface> {

	BSServiceConnection* _connection;
	id<SBSRemoteAlertHandleServiceServerInterface> _proxyInterface;

}

@property (nonatomic,__weak,readonly) BSServiceConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<SBSRemoteAlertHandleServiceServerInterface> proxyInterface;              //@synthesize proxyInterface=_proxyInterface - In the implementation block
+(id)currentTarget;
-(id<SBSRemoteAlertHandleServiceServerInterface>)proxyInterface;
-(void)setProxyInterface:(id<SBSRemoteAlertHandleServiceServerInterface>)arg1 ;
-(BSServiceConnection *)connection;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(oneway void)activateRemoteAlertHandleWithID:(id)arg1 activationContext:(id)arg2 ;
-(id)remoteAlertHandleContextsForDefinition:(id)arg1 allowsCreationValue:(id)arg2 configurationContext:(id)arg3 ;
-(id)createRemoteAlertHandleContextWithDefinition:(id)arg1 configurationContext:(id)arg2 ;
-(oneway void)invalidateRemoteAlertHandleWithID:(id)arg1 ;
-(id)initWithConnection:(id)arg1 proxyInterface:(id)arg2 ;
@end

