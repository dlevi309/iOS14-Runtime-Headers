/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/TSUiOSMemoryWarningFlushable.h>

@class EDWorksheet, NSMutableArray, EDCollection, NSString, NSRecursiveLock;

@interface EDRowBlocks : NSObject <TSUiOSMemoryWarningFlushable> {

	EDWorksheet* mWorksheet;
	NSMutableArray* mRowBlocks;
	EDCollection* mFormulas;
	unsigned mMaxPopulatedRow;
	unsigned mMaxPopulatedColumn;
	NSString* mFileName;
	int mLockCount;
	NSRecursiveLock* mSaveLoadLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)load;
-(void)lock;
-(void)unlock;
-(void)save;
-(void)flush;
-(EDCellHeader*)cellWithRowNumber:(unsigned)arg1 columnNumber:(int)arg2 ;
-(unsigned long long)rowBlockCount;
-(unsigned)maxPopulatedRow;
-(id)rowBlockForRowNumber:(unsigned)arg1 currentRowBlock:(id)arg2 createIfNil:(BOOL)arg3 ;
-(unsigned long long)expectedIndexOfRowBlockForRowNumber:(unsigned)arg1 ;
-(id)rowBlockAtIndex:(unsigned long long)arg1 ;
-(void)updateMaxPopulatedRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(BOOL)spaceForRowNumber:(unsigned)arg1 rowBlock:(id)arg2 ;
-(id)rowBlockForRowNumber:(unsigned)arg1 currentRowBlock:(id)arg2 ;
-(id)initWithWorksheet:(id)arg1 ;
-(void)removeRowBlockAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfRowBlockForRowNumber:(unsigned)arg1 ;
-(unsigned)maxPopulatedColumn;
-(id)formulas;
-(id)fileNameForPersistingRowBlocksWithIndex:(unsigned long long)arg1 ;
-(id)fileNameForPersistingRowBlocks;
-(Class)classForFormulaType:(unsigned char)arg1 ;
-(unsigned char)formulaTypeForFormula:(id)arg1 ;
@end

