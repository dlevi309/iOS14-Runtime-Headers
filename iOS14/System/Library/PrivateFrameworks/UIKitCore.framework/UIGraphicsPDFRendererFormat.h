/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRendererFormat.h>

@class NSDictionary, NSURL, NSMutableData;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat {

	NSDictionary* _documentInfo;
	NSURL* _outputURL;
	NSMutableData* _pdfData;

}

@property (retain) NSURL * outputURL;                                //@synthesize outputURL=_outputURL - In the implementation block
@property (retain) NSMutableData * pdfData;                          //@synthesize pdfData=_pdfData - In the implementation block
@property (nonatomic,copy) NSDictionary * documentInfo;              //@synthesize documentInfo=_documentInfo - In the implementation block
-(void)setDocumentInfo:(NSDictionary *)arg1 ;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(void)setPdfData:(NSMutableData *)arg1 ;
-(NSDictionary *)documentInfo;
-(NSMutableData *)pdfData;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

