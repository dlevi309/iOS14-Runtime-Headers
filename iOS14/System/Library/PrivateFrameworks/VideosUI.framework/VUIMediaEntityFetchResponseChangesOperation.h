/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError;

@interface VUIMediaEntityFetchResponseChangesOperation : VUIAsynchronousOperation {

	NSArray* _fetchResponseChanges;
	NSError* _error;
	NSArray* _latestFetchResponses;
	NSArray* _currentFetchResponses;

}

@property (nonatomic,copy) NSArray * fetchResponseChanges;               //@synthesize fetchResponseChanges=_fetchResponseChanges - In the implementation block
@property (nonatomic,copy) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSArray * latestFetchResponses;               //@synthesize latestFetchResponses=_latestFetchResponses - In the implementation block
@property (nonatomic,copy) NSArray * currentFetchResponses;              //@synthesize currentFetchResponses=_currentFetchResponses - In the implementation block
+(id)_changeSetFromCurrentMediaEntities:(id)arg1 toLatestMediaEntities:(id)arg2 ;
-(void)executionDidBegin;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setCurrentFetchResponses:(NSArray *)arg1 ;
-(NSArray *)fetchResponseChanges;
-(void)_preloadMediaEntityMetadata;
-(NSArray *)currentFetchResponses;
-(NSArray *)latestFetchResponses;
-(id)_mediaEntitiesChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2 ;
-(id)_groupingChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2 ;
-(void)setFetchResponseChanges:(NSArray *)arg1 ;
-(void)_preloadMetadataForFetchResponse:(id)arg1 ;
-(id)_groupingChangeSetWithCurrentGrouping:(id)arg1 latestGrouping:(id)arg2 ;
-(id)initWithLatestFetchResponses:(id)arg1 currentFetchResponses:(id)arg2 ;
-(void)setLatestFetchResponses:(NSArray *)arg1 ;
@end

