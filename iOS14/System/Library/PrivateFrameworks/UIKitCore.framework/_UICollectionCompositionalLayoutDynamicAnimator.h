/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIDynamicAnimator.h>

@class NSMutableDictionary, NSArray, NSSet;

@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator {

	/*^block*/id _invalidationHandler;
	NSMutableDictionary* _itemBehaviors;

}

@property (nonatomic,readonly) NSArray * visibleItems; 
@property (nonatomic,readonly) NSArray * visibleItemBehaviors; 
@property (nonatomic,readonly) NSSet * visibleItemIdentifiers; 
-(id)initWithReferenceSystem:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
-(NSArray *)visibleItems;
-(BOOL)_animatorStep:(double)arg1 ;
-(id)behaviorForIdentifier:(id)arg1 ;
-(NSSet *)visibleItemIdentifiers;
-(void)removeItemBehaviorForIdentifier:(id)arg1 ;
-(NSArray *)visibleItemBehaviors;
-(void)updateAllItemsFromCurrentState;
-(void)addItemBehavior:(id)arg1 ;
@end

