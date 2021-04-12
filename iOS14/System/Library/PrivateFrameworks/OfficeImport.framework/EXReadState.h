/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCXReadState.h>

@protocol TCCancelDelegate;
@class EDSheet, OCPPackagePart, NSMutableArray, EDReference, EXOfficeArtState, EXOAVState, NSMutableDictionary, ECColumnWidthConvertor, EDWorkbook, EDResources, CXNamespace;

@interface EXReadState : OCXReadState {

	unsigned mCurrentSheetIndex;
	EDSheet* mCurrentSheet;
	unsigned long long mCellStyleXfsOffset;
	double mDefaultColumnWidth;
	double mDefaultRowHeight;
	OCPPackagePart* mCurrentPart;
	OCPPackagePart* mWorkbookPart;
	map<long, unsigned long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned long> > >* mSharedFormulasMap;
	NSMutableArray* mArrayedFormulas;
	EDReference* mSheetDimension;
	EXOfficeArtState* mOfficeArtState;
	EXOAVState* mOAVState;
	BOOL mMaxColumnsWarned;
	BOOL mMaxRowsWarned;
	BOOL mIsPredefinedTableStylesRead;
	NSMutableDictionary* mReferenceForCommentTextBox;
	BOOL mIsPredefinedDxfsBeingRead;
	xmlNs* mRelationshipNS;
	ECColumnWidthConvertor* mColumnWidthConvertor;
	NSMutableArray* mLegacyDrawables;
	EDWorkbook* mWorkbook;
	EDResources* mResources;
	id<TCCancelDelegate> mCancelDelegate;
	CXNamespace* mEXSpreadsheetMLNamespace;
	CXNamespace* mEXSpreadsheetDrawingNamespace;
	CXNamespace* mEXSpreadsheetRelationsNamespace;
	unsigned mCurrentRowMinColumnIndex;
	unsigned mCurrentRowMaxColumnIndex;

}

@property (nonatomic,readonly) id<TCCancelDelegate> cancelDelegate; 
@property (nonatomic,retain) CXNamespace * EXSpreadsheetMLNamespace; 
@property (nonatomic,retain) CXNamespace * EXSpreadsheetDrawingNamespace; 
@property (nonatomic,retain) CXNamespace * EXSpreadsheetRelationsNamespace; 
-(id)resources;
-(double)defaultRowHeight;
-(id)currentPart;
-(void)setResources:(id)arg1 ;
-(BOOL)isCancelled;
-(void)setCurrentPart:(id)arg1 ;
-(id)currentSheet;
-(id)workbook;
-(id)columnWidthConvertor;
-(double)defaultColumnWidth;
-(void)setCurrentSheet:(id)arg1 ;
-(void)reportWarning:(id)arg1 ;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)oavState;
-(id)officeArtState;
-(id<TCCancelDelegate>)cancelDelegate;
-(void)setWorkbook:(id)arg1 ;
-(void)setOfficeArtState:(id)arg1 ;
-(void)setCurrentSheetIndex:(unsigned)arg1 ;
-(void)setDefaultColumnWidth:(double)arg1 ;
-(void)setDefaultRowHeight:(double)arg1 ;
-(CXNamespace *)EXSpreadsheetMLNamespace;
-(void)resetForNewSheet;
-(BOOL)isPredefinedDxfsBeingRead;
-(void)setEXSpreadsheetMLNamespace:(CXNamespace *)arg1 ;
-(void)setEXSpreadsheetDrawingNamespace:(CXNamespace *)arg1 ;
-(void)setEXSpreadsheetRelationsNamespace:(CXNamespace *)arg1 ;
-(id)initWithWorkbookPart:(id)arg1 cancelDelegate:(id)arg2 ;
-(unsigned)currentSheetIndex;
-(unsigned)currentRowMinColumnIndex;
-(void)setCurrentRowMinColumnIndex:(unsigned)arg1 ;
-(unsigned)currentRowMaxColumnIndex;
-(void)setCurrentRowMaxColumnIndex:(unsigned)arg1 ;
-(unsigned long long)cellStyleXfsOffset;
-(void)setCellStyleXfsOffset:(unsigned long long)arg1 ;
-(id)workbookPart;
-(unsigned long long)sharedBaseFormulaIndexWithIndex:(long long)arg1 ;
-(void)addSharedBaseFormulaIndex:(unsigned long long)arg1 withIndex:(long long)arg2 ;
-(id)arrayedFormulas;
-(id)sheetDimension;
-(void)setSheetDimension:(id)arg1 ;
-(void)setTextBox:(id)arg1 author:(id)arg2 forReference:(id)arg3 ;
-(id)textBoxForReference:(id)arg1 ;
-(id)authorForReference:(id)arg1 ;
-(BOOL)isPredefinedTableStylesRead;
-(void)setPredefinedTableStylesRead:(BOOL)arg1 ;
-(void)setPredefinedDxfsBeingRead:(BOOL)arg1 ;
-(xmlNs*)relationshipNameSpaceForWorkbook;
-(void)relationshipNameSpaceForWorkbook:(xmlNs*)arg1 ;
-(id)legacyDrawables;
-(void)reportWorksheetWarning:(id)arg1 ;
-(CXNamespace *)EXSpreadsheetDrawingNamespace;
-(CXNamespace *)EXSpreadsheetRelationsNamespace;
@end
