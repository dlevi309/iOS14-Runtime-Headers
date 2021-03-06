/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsPortraitConnector <NSObject>
@required
-(BOOL)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4 error:(id*)arg5 block:(/*^block*/id)arg6;
-(id)locationQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
-(void)locationStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)connectionsStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(id)rankedNamedEntitiesWihQuery:(id)arg1 error:(id*)arg2;
-(void)namedEntityStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(id)namedEntityQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
-(BOOL)iterRankedLocationsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3;

@end

