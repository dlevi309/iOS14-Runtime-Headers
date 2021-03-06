/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBStatusBarStateAggregatorPosting.h>
#import <UIKit/UIStatusBarStateProvider.h>

@class SBStatusBarStateAggregator, NSHashTable, NSMutableArray, NSString;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider> {

	SBStatusBarStateAggregator* _stateAggregator;
	NSHashTable* _stateObservers;
	SCD_Struct_SB43 _aggregatorData;
	int _aggregatorActions;
	SCD_Struct_SB43 _lastPost;
	unsigned long long _coalescentBlockDepth;
	BOOL _itemNeedsPost[43];
	BOOL _anyItemNeedsPost;
	BOOL _nonItemDataNeedsPost;
	BOOL _posting;
	NSMutableArray* _stylesWithDetailUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)endCoalescentBlock;
-(void)updateStatusBarItem:(int)arg1 ;
-(BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const SCD_Struct_SB43*)arg3 lastPost:(const SCD_Struct_SB43*)arg4 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB43*)arg1 ;
-(void)getStatusBarData:(SCD_Struct_SB43*)arg1 ;
-(void)beginCoalescentBlock;
-(void)addStatusBarStateObserver:(id)arg1 ;
-(void)removeStatusBarStateObserver:(id)arg1 ;
-(void)dealloc;
-(void)statusBarStateAggregatorDidStartPost:(id)arg1 ;
-(void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const SCD_Struct_SB43*)arg4 ;
-(void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const SCD_Struct_SB43*)arg2 actions:(int)arg3 ;
-(void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const SCD_Struct_SB43*)arg2 ;
-(void)_composePostActionsFromAggregatorActions:(int*)arg1 ;
-(void)_didFinishPost;
-(BOOL)_shouldPostForUpdatesToNonItemData:(const SCD_Struct_SB43*)arg1 ;
-(void)_didChangeDoubleHeightStatusStringForStyle:(long long)arg1 ;
@end

