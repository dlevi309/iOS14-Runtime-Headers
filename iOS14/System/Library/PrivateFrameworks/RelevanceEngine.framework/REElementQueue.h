/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REOrderingArray, NSMutableSet, NSArray;

@interface REElementQueue : NSObject {

	REOrderingArray* _relevantElements;
	NSMutableSet* _hiddenElements;
	long long _maximumRelevantElementsCount;

}

@property (assign,nonatomic) long long maximumRelevantElementsCount;              //@synthesize maximumRelevantElementsCount=_maximumRelevantElementsCount - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) long long visibleCount; 
@property (nonatomic,readonly) NSArray * allElements; 
-(long long)count;
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(long long)visibleCount;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)removeElement:(id)arg1 ;
-(NSArray *)allElements;
-(id)initWithMaximumRelevantElementsCount:(long long)arg1 comparators:(id)arg2 ;
-(void)setMaximumRelevantElementsCount:(long long)arg1 ;
-(long long)maximumRelevantElementsCount;
-(void)addElement:(id)arg1 hidden:(BOOL)arg2 ;
-(void)updatePositionForElement:(id)arg1 hidden:(BOOL)arg2 ;
-(long long)indexOfElement:(id)arg1 ;
-(BOOL)containsElement:(id)arg1 ;
-(void)updateAllElements;
@end

