/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSArray;

@interface CHTopDownStrokeSplit : NSObject {

	NSArray* _strokeGroup1;
	NSArray* _strokeGroup2;
	double _transitionTime;
	NSArray* _orderedStrokes;
	NSArray* _orderedStrokesGroup1;
	NSArray* _orderedStrokesGroup2;
	long long _substrokeCount1;
	long long _substrokeCount2;
	CGRect _groupBounds1;
	CGRect _groupBounds2;

}

@property (nonatomic,retain,readonly) NSArray * strokeGroup1;                      //@synthesize strokeGroup1=_strokeGroup1 - In the implementation block
@property (nonatomic,retain,readonly) NSArray * strokeGroup2;                      //@synthesize strokeGroup2=_strokeGroup2 - In the implementation block
@property (nonatomic,readonly) CGRect groupBounds1;                                //@synthesize groupBounds1=_groupBounds1 - In the implementation block
@property (nonatomic,readonly) CGRect groupBounds2;                                //@synthesize groupBounds2=_groupBounds2 - In the implementation block
@property (nonatomic,readonly) double transitionTime;                              //@synthesize transitionTime=_transitionTime - In the implementation block
@property (nonatomic,retain,readonly) NSArray * orderedStrokes;                    //@synthesize orderedStrokes=_orderedStrokes - In the implementation block
@property (nonatomic,retain,readonly) NSArray * orderedStrokesGroup1;              //@synthesize orderedStrokesGroup1=_orderedStrokesGroup1 - In the implementation block
@property (nonatomic,retain,readonly) NSArray * orderedStrokesGroup2;              //@synthesize orderedStrokesGroup2=_orderedStrokesGroup2 - In the implementation block
@property (nonatomic,readonly) long long substrokeCount1;                          //@synthesize substrokeCount1=_substrokeCount1 - In the implementation block
@property (nonatomic,readonly) long long substrokeCount2;                          //@synthesize substrokeCount2=_substrokeCount2 - In the implementation block
+(id)writingDirectionOrderedStrokes:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 ;
-(void)dealloc;
-(NSArray *)orderedStrokes;
-(long long)_substrokeCountForStrokes:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 ;
-(id)initWithStrokes:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 splitIndex:(long long)arg3 ;
-(NSArray *)strokeGroup1;
-(NSArray *)strokeGroup2;
-(CGRect)groupBounds1;
-(CGRect)groupBounds2;
-(double)transitionTime;
-(NSArray *)orderedStrokesGroup1;
-(NSArray *)orderedStrokesGroup2;
-(long long)substrokeCount1;
-(long long)substrokeCount2;
@end
