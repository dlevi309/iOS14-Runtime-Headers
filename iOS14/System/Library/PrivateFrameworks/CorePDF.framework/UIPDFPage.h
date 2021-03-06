/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, UIPDFSelection, UIPDFDocument, UIImage, NSMutableArray;

@interface UIPDFPage : NSObject {

	CGPDFPageRef _cgPage;
	unsigned long long _pageNumber;
	NSString* _stringInReadingOrder;
	UIPDFSelection* _selection;
	os_unfair_lock_s _lock;
	UIPDFDocument* _document;
	unsigned long long _pageIndex;
	UIImage* _pageImage;
	NSMutableArray* _annotations;

}

@property (readonly) CGPDFPageRef CGPage;                        //@synthesize cgPage=_cgPage - In the implementation block
@property (readonly) unsigned long long pageNumber;              //@synthesize pageNumber=_pageNumber - In the implementation block
@property (readonly) unsigned long long pageIndex;               //@synthesize pageIndex=_pageIndex - In the implementation block
@property (readonly) CGRect cropBox; 
@property (readonly) UIPDFDocument * document;                   //@synthesize document=_document - In the implementation block
@property (retain) UIImage * pageImage;                          //@synthesize pageImage=_pageImage - In the implementation block
@property (retain) UIPDFSelection * selection;                   //@synthesize selection=_selection - In the implementation block
-(id)annotations;
-(void)refresh;
-(void)addAnnotation:(id)arg1 ;
-(id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setSelection:(UIPDFSelection *)arg1 ;
-(unsigned long long)rotation;
-(void)setDocument:(UIPDFDocument *)arg1 ;
-(CGSize)size;
-(void)removeAnnotation:(id)arg1 ;
-(unsigned long long)pageIndex;
-(CGPDFPageRef)CGPage;
-(UIPDFSelection *)selection;
-(id)string;
-(CGRect)cropBox;
-(UIPDFDocument *)document;
-(unsigned long long)pageNumber;
-(void)dealloc;
-(void)clearAnnotations;
-(unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(CGRect)mediaBox;
-(void)removeAllAnnotations;
-(id)initWithCGPDFPage:(CGPDFPageRef)arg1 ;
-(void)setPageImage:(UIImage *)arg1 ;
-(UIImage *)pageImage;
-(id)annotationIn:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(id)initWithDocument:(id)arg1 pageNumber:(unsigned long long)arg2 ;
-(id)getImageIfAvailable;
-(void)deliverImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5 ;
-(CGRect)cropBoxAccountForRotation;
-(CGRect)mediaBoxAccountForRotation;
-(id)copyPage;
@end

