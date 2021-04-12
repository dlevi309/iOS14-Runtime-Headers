/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFActionProviderDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDictionary, NSMapTable, NSSet, NSString;

@interface WFActionRegistry : NSObject <WFActionProviderDelegate> {

	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _stateAccessQueue;
	NSObject*<OS_dispatch_queue> _cacheUpdateAndFillQueue;
	NSArray* _actionProvidersForFilling;
	NSArray* _actionProvidersForLoading;
	NSDictionary* _actionsByIdentifier;
	NSMapTable* _actionsByActionProvider;
	NSDictionary* _actionsByCategory;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateAccessQueue;                     //@synthesize stateAccessQueue=_stateAccessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cacheUpdateAndFillQueue;              //@synthesize cacheUpdateAndFillQueue=_cacheUpdateAndFillQueue - In the implementation block
@property (nonatomic,readonly) NSArray * actionProvidersForFilling;                               //@synthesize actionProvidersForFilling=_actionProvidersForFilling - In the implementation block
@property (nonatomic,readonly) NSArray * actionProvidersForLoading;                               //@synthesize actionProvidersForLoading=_actionProvidersForLoading - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionsByIdentifier;                                //@synthesize actionsByIdentifier=_actionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMapTable * actionsByActionProvider;                              //@synthesize actionsByActionProvider=_actionsByActionProvider - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionsByCategory;                                  //@synthesize actionsByCategory=_actionsByCategory - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSSet * actions; 
@property (nonatomic,readonly) NSSet * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRegistry;
-(id)init;
-(NSString *)description;
-(unsigned long long)state;
-(NSSet *)actions;
-(void)fill;
-(NSSet *)categories;
-(id)createActionWithShortcut:(id)arg1 error:(id*)arg2 ;
-(id)createActionWithIdentifier:(id)arg1 serializedParameters:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)stateAccessQueue;
-(id)handleIntentActionForDonatedIntent:(id)arg1 ;
-(id)createActionWithDonation:(id)arg1 ;
-(void)actionProviderDidChange:(id)arg1 updatedActions:(id)arg2 removedActions:(id)arg3 addedActions:(id)arg4 ;
-(id)createActionsWithIdentifiers:(id)arg1 serializedParameterArray:(id)arg2 ;
-(id)actionsForCategory:(id)arg1 ;
-(id)actionsForAppWithIdentifier:(id)arg1 ;
-(void)updateCachesAndFill;
-(void)fillActionProviders:(id)arg1 ;
-(void)updateCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)setActions:(id)arg1 forProvider:(id)arg2 ;
-(void)removeActionsWithIdentifiers:(id)arg1 fromActionProvider:(id)arg2 ;
-(void)addActions:(id)arg1 fromActionProvider:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)cacheUpdateAndFillQueue;
-(NSArray *)actionProvidersForFilling;
-(NSArray *)actionProvidersForLoading;
-(NSDictionary *)actionsByIdentifier;
-(NSMapTable *)actionsByActionProvider;
-(NSDictionary *)actionsByCategory;
-(id)residentCompatibleActionsFromActions:(id)arg1 inHome:(id)arg2 ;
-(id)updatedActionForResidentCompatibility:(id)arg1 inHome:(id)arg2 ;
-(id)residentCompatibleActionsForHome:(id)arg1 ;
-(id)residentCompatibleActionsForCategory:(id)arg1 home:(id)arg2 ;
-(id)residentBasedActionsForHome:(id)arg1 residentCompatible:(BOOL)arg2 ;
-(id)suggestionsForHome:(id)arg1 includingRelatedActions:(BOOL)arg2 ;
@end
