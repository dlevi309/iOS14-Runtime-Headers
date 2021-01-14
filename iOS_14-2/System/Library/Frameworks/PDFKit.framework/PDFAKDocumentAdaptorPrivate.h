/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFAKControllerDelegateProtocol;
@class PDFDocument, PDFView, AKController, AKToolbarView;

@interface PDFAKDocumentAdaptorPrivate : NSObject {

	BOOL isTornDown;
	PDFDocument* pdfDocument;
	PDFView* pdfView;
	AKController* akController;
	id<PDFAKControllerDelegateProtocol> pdfAKControllerDelegate;
	AKToolbarView* akToolbarView;
	double modelBaseScaleFactor;

}
@end
