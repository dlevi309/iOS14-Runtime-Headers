/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _CDInteractionStore;

@interface _CDSocialInteractionAdvisor : NSObject {

	_CDInteractionStore* _store;

}

@property (retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(_CDInteractionStore *)store;
-(id)initWithStore:(id)arg1 ;
-(id)recentPredicateForDate:(id)arg1 lambda:(float)arg2 lookAheadWeeks:(int)arg3 ;
-(id)inSeedPredicateForSeed:(id)arg1 ;
-(id)keyForModelWithSettings:(id)arg1 ;
-(void)tuneUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 ;
-(id)rankContacts:(id)arg1 withSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(id)adviseInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
@end

