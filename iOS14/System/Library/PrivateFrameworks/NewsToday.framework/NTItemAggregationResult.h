/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface NTItemAggregationResult : NSObject <NSCopying> {

	NSDictionary* _aggregatedItemsBySectionDescriptor;
	NSDictionary* _slotAllocationByDynamicSlotItemID;
	NSArray* _unusedSectionDescriptors;
	double _headlineScale;
	double _slotsUsed;

}

@property (nonatomic,copy) NSDictionary * aggregatedItemsBySectionDescriptor;              //@synthesize aggregatedItemsBySectionDescriptor=_aggregatedItemsBySectionDescriptor - In the implementation block
@property (nonatomic,copy) NSDictionary * slotAllocationByDynamicSlotItemID;               //@synthesize slotAllocationByDynamicSlotItemID=_slotAllocationByDynamicSlotItemID - In the implementation block
@property (nonatomic,copy) NSArray * unusedSectionDescriptors;                             //@synthesize unusedSectionDescriptors=_unusedSectionDescriptors - In the implementation block
@property (assign,nonatomic) double slotsUsed;                                             //@synthesize slotsUsed=_slotsUsed - In the implementation block
@property (assign,nonatomic) double headlineScale;                                         //@synthesize headlineScale=_headlineScale - In the implementation block
@property (nonatomic,readonly) unsigned long long itemCount; 
-(id)init;
-(unsigned long long)itemCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)slotAllocationByDynamicSlotItemID;
-(void)setSlotAllocationByDynamicSlotItemID:(NSDictionary *)arg1 ;
-(NSDictionary *)aggregatedItemsBySectionDescriptor;
-(double)headlineScale;
-(NSArray *)unusedSectionDescriptors;
-(id)initWithAggregatedItemsBySectionDescriptor:(id)arg1 slotAllocationByDynamicSlotItemID:(id)arg2 unusedSectionDescriptors:(id)arg3 ;
-(void)setHeadlineScale:(double)arg1 ;
-(double)sectionOverheadSlotCostWithInfo:(id)arg1 ;
-(double)headlineSlotCostWithSlotCost:(double)arg1 ;
-(id)copyWithHeadlineScale:(double)arg1 ;
-(double)slotCostWithInfo:(id)arg1 ;
-(void)setAggregatedItemsBySectionDescriptor:(NSDictionary *)arg1 ;
-(void)setUnusedSectionDescriptors:(NSArray *)arg1 ;
-(double)slotsUsed;
-(void)setSlotsUsed:(double)arg1 ;
@end
