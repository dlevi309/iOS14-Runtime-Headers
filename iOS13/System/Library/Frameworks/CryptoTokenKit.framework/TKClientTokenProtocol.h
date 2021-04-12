/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol TKClientTokenProtocol <NSObject>
@required
-(void)startSessionWithLAContext:(id)arg1 parameters:(id)arg2 reply:(/*^block*/id)arg3;
-(void)session:(id)arg1 getAdvertisedItemsWithReply:(/*^block*/id)arg2;
-(void)session:(id)arg1 evaluateAccessControl:(id)arg2 forOperation:(id)arg3 reply:(/*^block*/id)arg4;
-(void)session:(id)arg1 getAttributesOfObjectID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)session:(id)arg1 objectID:(id)arg2 operation:(long long)arg3 data:(id)arg4 algorithms:(id)arg5 parameters:(id)arg6 reply:(/*^block*/id)arg7;
-(void)session:(id)arg1 createObjectWithAttributes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)session:(id)arg1 deleteObjectWithObjectID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endSession:(id)arg1 reply:(/*^block*/id)arg2;

@end
