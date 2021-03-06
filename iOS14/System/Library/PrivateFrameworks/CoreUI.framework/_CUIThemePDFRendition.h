/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@interface _CUIThemePDFRendition : CUIThemeRendition {

	CGPDFDocumentRef _pdfDocument;

}
-(id)metrics;
-(CGPDFDocumentRef)pdfDocument;
-(int)pixelFormat;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(void)dealloc;
@end

