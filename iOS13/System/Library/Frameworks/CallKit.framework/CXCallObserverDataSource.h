/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

@class NSDictionary;


@protocol CXCallObserverDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * callUUIDToCallMap; 
@required
-(void)invalidate;
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;
-(NSDictionary *)callUUIDToCallMap;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2;

@end

