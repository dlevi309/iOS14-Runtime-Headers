/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTPreferencesFeedUpdate : NSObject
+(id)_numberFormatter;
+(void)_setRevisionString:(id)arg1 forKey:(id)arg2 ;
+(void)_removeRevisionStringForKey:(id)arg1 ;
+(void)setCompanionLastFetchedDate:(id)arg1 forFeedURL:(id)arg2 ;
+(void)removeCompanionLastFetchedDateForFeedURL:(id)arg1 ;
+(void)incrementCompanionRevisionNumberForFeedURL:(id)arg1 ;
+(void)removeCompanionRevisionNumberForFeedURL:(id)arg1 ;
+(void)setCompanionSubscriptionSyncRevisionString:(id)arg1 ;
+(void)removeCompanionSubscriptionSyncRevisionString;
+(void)setCompanionPlaylistRevisionString:(id)arg1 ;
+(void)removeCompanionPlaylistRevisionString;
+(void)setCompanionUPPSyncRevisionString:(id)arg1 ;
+(void)removeCompanionUPPSyncRevisionString;
+(id)getCompanionRevisionNumberForFeedURL:(id)arg1 ;
+(id)getCompanionSubscriptionSyncRevisionNumber;
+(id)getCompanionPlaylistRevisionNumber;
+(id)getCompanionUPPSyncRevisionNumber;
+(id)getCompanionLastFetchedDateForFeedURL:(id)arg1 ;
+(void)setGizmoLastFetchedDate:(id)arg1 forFeedURL:(id)arg2 ;
+(void)removeGizmoLastFetchedDateForFeedURL:(id)arg1 ;
+(id)getGizmoLastFetchedDateForFeedURL:(id)arg1 ;
+(void)setGizmoRevisionNumber:(id)arg1 forFeedURL:(id)arg2 ;
+(void)removeGizmoRevisionNumberForFeedURL:(id)arg1 ;
+(id)getGizmoRevisionNumberForFeedURL:(id)arg1 ;
+(void)setStartDate:(id)arg1 forOngoingFetchOfFeedURL:(id)arg2 ;
+(void)removeStartDateForOngoingFetchOfFeedURL:(id)arg1 ;
+(id)getStartDateForOngoingFetchOfFeedURL:(id)arg1 ;
+(void)setCompanionRevisionNumber:(id)arg1 forOngoingFetchOfFeedURL:(id)arg2 ;
+(void)removeCompanionRevisionNumberForOngoingFetchOfFeedURL:(id)arg1 ;
+(id)getCompanionRevisionNumberForOngoingFetchOfFeedURL:(id)arg1 ;
@end
