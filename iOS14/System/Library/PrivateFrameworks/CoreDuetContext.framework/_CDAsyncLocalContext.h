/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/


@protocol _CDAsyncLocalContext <_CDLocalContext,_CDAsyncContext>
@required
-(void)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5;
-(void)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)setObject:(id)arg1 forContextualKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4;

@end

