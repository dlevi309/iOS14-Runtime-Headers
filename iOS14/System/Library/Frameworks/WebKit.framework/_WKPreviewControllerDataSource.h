/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/ARQuickLookWebKitItemDelegate.h>

@class NSString;

@interface _WKPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource, ARQuickLookWebKitItemDelegate> {

	RetainPtr<NSItemProvider>* _itemProvider;
	RetainPtr<ARQuickLookWebKitItem>* _item;
	URL* _originatingPageURL;
	URL* _downloadedURL;
	SystemPreviewController* _previewController;
	/*^block*/id _completionHandler;
	NSString* _mimeType;

}

@property (copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) NSString * mimeType;                               //@synthesize mimeType=_mimeType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finish:(URL*)arg1 ;
-(NSString *)mimeType;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithSystemPreviewController:(SystemPreviewController*)arg1 MIMEType:(id)arg2 originatingPageURL:(URL*)arg3 ;
-(id)completionHandler;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)failWithError:(id)arg1 ;
-(void)dealloc;
-(void)previewItem:(id)arg1 didReceiveMessage:(id)arg2 ;
@end

