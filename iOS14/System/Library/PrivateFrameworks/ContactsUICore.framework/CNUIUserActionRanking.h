/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionRanking.h>

@protocol CNUIUserActionRanking <NSObject>
@required
-(id)selectRecentActionItems:(id)arg1 schedulerProvider:(id)arg2;
-(id)sortActionItems:(id)arg1 schedulerProvider:(id)arg2;

@end


@protocol CNUIInteractionAdvisor;
@class NSString;

@interface CNUIUserActionRanking : NSObject <CNUIUserActionRanking> {

	id<CNUIInteractionAdvisor> _interactionAdvisor;

}

@property (nonatomic,readonly) id<CNUIInteractionAdvisor> interactionAdvisor;              //@synthesize interactionAdvisor=_interactionAdvisor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)advisorSettingsForSortingAddresses:(id)arg1 actionType:(id)arg2 ;
+(id)constrainMechanismsForActionType:(id)arg1 ;
+(id)sortKeyWithUsername:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)advisorSettingsForIdentifyingMostRecentAction:(id)arg1 actionType:(id)arg2 ;
-(id)init;
-(id)initWithInteractionAdvisor:(id)arg1 ;
-(id<CNUIInteractionAdvisor>)interactionAdvisor;
-(id)selectRecentActionItems:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)sortActionItems:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)sortKeysByRankingAddresses:(id)arg1 actionType:(id)arg2 scheduler:(id)arg3 ;
-(id)selectMostRecentActionFromItems:(id)arg1 ;
@end

