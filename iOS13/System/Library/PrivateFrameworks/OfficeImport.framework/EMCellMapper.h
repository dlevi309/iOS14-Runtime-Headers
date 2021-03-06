/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class EDReference;

@interface EMCellMapper : CMMapper {

	EDCellHeader* edCell;
	EDReference* edMergedCellReference;
	int rowNumber;
	int firstColumn;
	int lastColumn;
	int columnSpan;
	BOOL firstCellFlag;
	BOOL spreadLeftFlag;
	double columnWidth;

}
+(BOOL)isCellEmpty:(EDCellHeader*)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(int)columnSpan;
-(double)columnWidth;
-(int)firstColumn;
-(int)lastColumn;
-(void)mapRowColSpansAt:(id)arg1 withState:(id)arg2 ;
-(id)mapHyperlink:(id)arg1 at:(id)arg2 ;
-(id)initWithEDCell:(EDCellHeader*)arg1 rowInfo:(EDRowInfo*)arg2 parent:(id)arg3 state:(id)arg4 ;
-(void)setLastColumn:(int)arg1 ;
-(void)setFirstColumn:(int)arg1 ;
-(void)resetColumnSpan:(int)arg1 ;
-(BOOL)isCellEmpty;
-(void)setFirstCellFlag;
-(BOOL)isFirstCell;
-(BOOL)isCellSpreading:(id)arg1 ;
-(BOOL)isCellMerged;
-(void)adjustColumnSpanForGrid:(double*)arg1 columnCount:(unsigned long long)arg2 nextCell:(EDCellHeader*)arg3 withState:(id)arg4 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3 nextCell:(EDCellHeader*)arg4 ;
@end

