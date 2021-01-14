/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBChainableModifierQuery.h>
#import <libobjc.A.dylib/SBChainableModifierContext.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SBChainableModifierDelegate;
@class SBChainableModifierMethodCache, NSString, SBModifierCacheCoordinator;

@interface SBChainableModifier : NSObject <BSDescriptionProviding, SBChainableModifierQuery, SBChainableModifierContext, NSCopying> {

	BOOL _hasNotifiedChildrenDidMoveToParent;
	SBChainableModifierMethodCache* _queryCache;
	SBChainableModifierMethodCache* _contextCache;
	SBChainableModifier* _parentModifier;
	id<SBChainableModifierDelegate> _delegate;
	long long _state;
	SBChainableModifier* _previousContextModifier;
	SBChainableModifier* _nextQueryModifier;
	long long _modifierLevel;
	NSString* _key;

}

@property (assign,nonatomic) SBChainableModifier * parentModifier;                              //@synthesize parentModifier=_parentModifier - In the implementation block
@property (assign,nonatomic) SBChainableModifier * previousContextModifier;                     //@synthesize previousContextModifier=_previousContextModifier - In the implementation block
@property (nonatomic,retain) SBChainableModifier * nextQueryModifier;                           //@synthesize nextQueryModifier=_nextQueryModifier - In the implementation block
@property (nonatomic,retain) SBModifierCacheCoordinator * queryCacheCoordinator; 
@property (nonatomic,retain) SBModifierCacheCoordinator * contextCacheCoordinator; 
@property (assign,nonatomic) long long state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long modifierLevel;                                           //@synthesize modifierLevel=_modifierLevel - In the implementation block
@property (nonatomic,copy) NSString * key;                                                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) id<SBChainableModifierDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)queryProtocol;
+(Class)makeDynamicSubclassWithDescriptor:(id)arg1 implementation:(id)arg2 forSelector:(SEL)arg3 ofProtocol:(id)arg4 ;
+(id)contextProtocol;
+(id)baseClassForQueryProtocol;
+(id)newEventResponse;
+(void)_initalizeIMPCaching;
+(id)newQueryCache;
+(id)newContextCache;
+(id)querySelectors;
+(id)newCacheWithSelectorList:(id)arg1 subsequentMethodCacheFunc:(/*function pointer*/void*)arg2 cachingDictionary:(id)arg3 ;
+(id)contextSelectors;
+(void)verifyModifierImplementsAllMethodsOfProtocol:(id)arg1 ;
-(id)succinctDescription;
-(id)init;
-(id<SBChainableModifierDelegate>)delegate;
-(id)handleEvent:(id)arg1 ;
-(id)loggingCategory;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDelegate:(id<SBChainableModifierDelegate>)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(NSString *)description;
-(NSString *)key;
-(id)_handleEvent:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)dealloc;
-(void)performTransactionWithTemporaryChildModifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_insertModifier:(id)arg1 afterModifier:(id)arg2 queryResponse:(unsigned long long)arg3 contextResponse:(unsigned long long)arg4 ;
-(SBChainableModifier *)previousContextModifier;
-(void)provideNextQueryImplementation:(id)arg1 forSelector:(SEL)arg2 ;
-(void)providePreviousContextImplementation:(id)arg1 forSelector:(SEL)arg2 ;
-(void)addChildModifier:(id)arg1 ;
-(SBChainableModifier *)parentModifier;
-(id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3 ;
-(void)addChildModifier:(id)arg1 atLevel:(long long)arg2 key:(id)arg3 ;
-(id)childModifierByKey:(id)arg1 ;
-(BOOL)completesWhenChildrenComplete;
-(BOOL)containsChildModifier:(id)arg1 ;
-(void)removeChildModifier:(id)arg1 ;
-(void)verifyInternalIntegrityAfterHandlingEvent:(id)arg1 ;
-(void)enumerateChildModifiersWithBlock:(/*^block*/id)arg1 ;
-(BOOL)runsInternalVerificationAfterEventDispatch;
-(void)setParentModifier:(SBChainableModifier *)arg1 ;
-(SBChainableModifier *)nextQueryModifier;
-(void)setPreviousContextModifier:(SBChainableModifier *)arg1 ;
-(void)_notifyChildrenDidMoveToParentIfNeeded;
-(id)_forwardEvent:(id)arg1 toChildModifier:(id)arg2 ;
-(unsigned long long)childModifierCount;
-(BOOL)_anyDescendentImplementsAnyQueryMethod;
-(BOOL)_anyDescendentImplementsAnyContextMethod;
-(void)_addChildModifier:(id)arg1 atLevel:(long long)arg2 key:(id)arg3 queryResponse:(unsigned long long)arg4 contextResponse:(unsigned long long)arg5 ;
-(long long)modifierLevel;
-(void)setModifierLevel:(long long)arg1 ;
-(id)_lastDeepChildModifier;
-(void)_removeChildModifier:(id)arg1 queryResponse:(unsigned long long)arg2 contextResponse:(unsigned long long)arg3 ;
-(void)setNextQueryModifier:(SBChainableModifier *)arg1 ;
-(SBModifierCacheCoordinator *)queryCacheCoordinator;
-(SBModifierCacheCoordinator *)contextCacheCoordinator;
-(void)setQueryCacheCoordinator:(SBModifierCacheCoordinator *)arg1 ;
-(void)setContextCacheCoordinator:(SBModifierCacheCoordinator *)arg1 ;
@end
