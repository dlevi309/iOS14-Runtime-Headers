/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNUIUserActionTargetDiscovering, CNUIUserActionRanking, CNUIDefaultUserActionFetcher, CNUIUserActionDiscoveringEnvironment;
@interface CNUIUserActionDisambiguationModeler : NSObject {

	id<CNUIUserActionTargetDiscovering> _targetDiscoveringHelper;
	id<CNUIUserActionRanking> _rankingHelper;
	id<CNUIDefaultUserActionFetcher> _defaultActionFetcher;
	id<CNUIUserActionDiscoveringEnvironment> _discoveringEnvironment;

}

@property (nonatomic,retain) id<CNUIUserActionTargetDiscovering> targetDiscoveringHelper;                  //@synthesize targetDiscoveringHelper=_targetDiscoveringHelper - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionRanking> rankingHelper;                                      //@synthesize rankingHelper=_rankingHelper - In the implementation block
@property (nonatomic,retain) id<CNUIDefaultUserActionFetcher> defaultActionFetcher;                        //@synthesize defaultActionFetcher=_defaultActionFetcher - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionDiscoveringEnvironment> discoveringEnvironment;              //@synthesize discoveringEnvironment=_discoveringEnvironment - In the implementation block
+(id)descriptorForRequiredKeys;
-(void)setContactStore:(id)arg1 ;
-(id)schedulerProvider;
-(id)init;
-(id)thirdPartyActionsForContactProperty:(id)arg1 ;
-(id)thirdPartyTargetsForActionTypes:(id)arg1 ;
-(id)initWithDiscoveringEnvironment:(id)arg1 ;
-(id)modelsWithContact:(id)arg1 actionType:(id)arg2 ;
-(id<CNUIUserActionTargetDiscovering>)targetDiscoveringHelper;
-(id)initWithTargetDiscoveringHelper:(id)arg1 rankingHelper:(id)arg2 defaultActionFetcher:(id)arg3 discoveringEnvironment:(id)arg4 ;
-(id<CNUIUserActionDiscoveringEnvironment>)discoveringEnvironment;
-(void)setDiscoveringEnvironment:(id<CNUIUserActionDiscoveringEnvironment>)arg1 ;
-(id)discoverActionsForContact:(id)arg1 actionType:(id)arg2 ;
-(id)defaultActionFromActions:(id)arg1 ;
-(id)recentActionsFromActions:(id)arg1 ;
-(id)modelsWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 sorts:(BOOL)arg4 throttles:(BOOL)arg5 ;
-(id)_discoverActionsForContact:(id)arg1 actionType:(id)arg2 ;
-(id<CNUIDefaultUserActionFetcher>)defaultActionFetcher;
-(id<CNUIUserActionRanking>)rankingHelper;
-(id)sortActionsOnModel:(id)arg1 ;
-(id)targetsChangedObservableForActionType:(id)arg1 ;
-(id)defaultActionChangedObservable;
-(void)setTargetDiscoveringHelper:(id<CNUIUserActionTargetDiscovering>)arg1 ;
-(void)setRankingHelper:(id<CNUIUserActionRanking>)arg1 ;
-(void)setDefaultActionFetcher:(id<CNUIDefaultUserActionFetcher>)arg1 ;
@end

