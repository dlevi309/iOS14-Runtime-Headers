/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSOperationQueue, NSDictionary;

@interface MPStoreContentReporter : NSObject {

	NSOperationQueue* _operationQueue;
	NSDictionary* _reportConcernBagDictionary;

}
+(id)sharedReporter;
-(id)init;
-(id)_reportConcernBagDictionary;
-(void)submitReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteComment:(id)arg1 activityID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deletePost:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performWithBag:(/*^block*/id)arg1 ;
-(id)reportsForType:(long long)arg1 contentID:(id)arg2 aucType:(id)arg3 commentText:(id)arg4 ;
-(id)baseURLStringForReport;
-(id)_dictionariesForType:(long long)arg1 ;
-(id)_deleteCommentURLComponentsFromBag:(id)arg1 ;
-(id)_deletePostURLComponentsFromBag:(id)arg1 ;
@end

