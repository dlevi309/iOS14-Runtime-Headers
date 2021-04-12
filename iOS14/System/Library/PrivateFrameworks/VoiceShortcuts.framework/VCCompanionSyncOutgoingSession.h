/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VCCompanionSyncSession.h>

@class NSMutableArray, NSDictionary;

@interface VCCompanionSyncOutgoingSession : VCCompanionSyncSession {

	NSMutableArray* _pendingChanges;
	NSDictionary* _metadata;
	NSMutableArray* _sentChanges;
	NSMutableArray* _syncedChanges;

}

@property (nonatomic,copy,readonly) NSDictionary * metadata;                                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingChanges;                                       //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sentChanges;                                          //@synthesize sentChanges=_sentChanges - In the implementation block
@property (nonatomic,readonly) NSMutableArray * syncedChanges;                                        //@synthesize syncedChanges=_syncedChanges - In the implementation block
@property (assign,nonatomic,__weak) id<VCCompanionSyncOutgoingSessionDelegate> delegate; 
@property (nonatomic,readonly) double progress; 
+(long long)direction;
-(double)progress;
-(unsigned)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 successfullySynced:(id)arg2 ;
-(NSDictionary *)metadata;
-(NSMutableArray *)pendingChanges;
-(id)initWithSYSession:(id)arg1 service:(id)arg2 syncDataHandlers:(id)arg3 changeSet:(id)arg4 metadata:(id)arg5 ;
-(NSMutableArray *)sentChanges;
-(NSMutableArray *)syncedChanges;
@end
