/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/ATXActionPredictionInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, ATXCacheReader, NSObject;

@interface ATXActionPredictionClient : NSObject <ATXActionPredictionInterface> {

	NSXPCConnection* _xpcConnection;
	NSString* _cacheBasePath;
	ATXCacheReader* _cacheReader;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(void)dealloc;
-(void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(/*^block*/id)arg6 ;
-(void)shouldDisplayDailyRoutineForContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getActionPredictionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 limit:(unsigned long long)arg6 reply:(/*^block*/id)arg7 ;
-(void)sendFeedbackWithResponse:(id)arg1 ;
-(id)initWithCacheBasePath:(id)arg1 ;
-(id)actionPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2 ;
@end

