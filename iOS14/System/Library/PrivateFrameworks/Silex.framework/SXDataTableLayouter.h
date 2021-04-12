/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXDataTableDataSource;
#import <Silex/Silex-Structs.h>
@class SXDataTableBlueprint, NSMutableDictionary;

@interface SXDataTableLayouter : NSObject {

	id<SXDataTableDataSource> _dataSource;
	double _currentWidth;
	SXDataTableBlueprint* _blueprint;
	NSMutableDictionary* _minimumColumnWidths;
	NSMutableDictionary* _intendedColumnWidths;

}

@property (nonatomic,retain) SXDataTableBlueprint * blueprint;                        //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * minimumColumnWidths;               //@synthesize minimumColumnWidths=_minimumColumnWidths - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * intendedColumnWidths;              //@synthesize intendedColumnWidths=_intendedColumnWidths - In the implementation block
@property (nonatomic,readonly) id<SXDataTableDataSource> dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) double currentWidth;                                   //@synthesize currentWidth=_currentWidth - In the implementation block
-(SXDataTableBlueprint *)blueprint;
-(id)initWithDataSource:(id)arg1 ;
-(id<SXDataTableDataSource>)dataSource;
-(void)setBlueprint:(SXDataTableBlueprint *)arg1 ;
-(void)reset;
-(id)blueprintForWidth:(double)arg1 ;
-(id)layoutDataTableForWidth:(double)arg1 ;
-(NSMutableDictionary *)minimumColumnWidths;
-(NSMutableDictionary *)intendedColumnWidths;
-(double)totalColumnDividerWidth;
-(double)totalTableBorderWidth;
-(id)columnWidthsForWidth:(double)arg1 resultingTableWidth:(double*)arg2 ;
-(id)rowHeightsForColumnWidths:(id)arg1 ;
-(id)blueprintUsingRowHeights:(id)arg1 columnWidths:(id)arg2 andTableWidth:(double)arg3 ;
-(UIEdgeInsets)tableInsets;
-(double)minimumWidthForColumnAtIndex:(unsigned long long)arg1 ;
-(double)intendedPercentualWidthForColumnAtIndex:(unsigned long long)arg1 ;
-(double)totalTableBorderHeight;
-(double)currentWidth;
-(void)setMinimumColumnWidths:(NSMutableDictionary *)arg1 ;
-(void)setIntendedColumnWidths:(NSMutableDictionary *)arg1 ;
@end
