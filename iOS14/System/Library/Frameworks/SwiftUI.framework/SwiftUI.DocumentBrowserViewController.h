/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <DocumentManager/UIDocumentBrowserViewController.h>
#import <UIKit/UIDocumentBrowserViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@interface SwiftUI.DocumentBrowserViewController : UIDocumentBrowserViewController <UIDocumentBrowserViewControllerDelegate, UIViewControllerTransitioningDelegate> {

	 documentConfigurations;
	 rootModifier;
	 configurationMap;

}
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)documentBrowser:(id)arg1 didImportDocumentAtURL:(id)arg2 toDestinationURL:(id)arg3 ;
-(void)documentBrowser:(id)arg1 didRequestDocumentCreationWithHandler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(void)documentBrowser:(id)arg1 failedToImportDocumentAtURL:(id)arg2 error:(id)arg3 ;
-(id)initForOpeningContentTypes:(id)arg1 ;
-(id)initForOpeningFilesWithContentTypes:(id)arg1 ;
@end

