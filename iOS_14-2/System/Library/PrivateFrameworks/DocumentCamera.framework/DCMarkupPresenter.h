/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@class ICDocCamDocumentInfo, ICDocCamImageCache, MURemoteViewController, MarkupViewController, UIViewController;

@interface DCMarkupPresenter : NSObject {

	ICDocCamDocumentInfo* _documentInfo;
	ICDocCamImageCache* _imageCache;
	MURemoteViewController* _markupRemoteViewController;
	MarkupViewController* _markupViewController;
	UIViewController* _presentingViewController;
	unsigned long long _inkStyle;
	/*^block*/id _frameBlock;
	/*^block*/id _completionBlock;
	/*^block*/id _startPresentBlock;
	/*^block*/id _dismissCompletionBlock;

}

@property (retain) ICDocCamDocumentInfo * documentInfo;                                        //@synthesize documentInfo=_documentInfo - In the implementation block
@property (retain) ICDocCamImageCache * imageCache;                                            //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) MURemoteViewController * markupRemoteViewController;              //@synthesize markupRemoteViewController=_markupRemoteViewController - In the implementation block
@property (nonatomic,retain) MarkupViewController * markupViewController;                      //@synthesize markupViewController=_markupViewController - In the implementation block
@property (__weak) UIViewController * presentingViewController;                                //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) unsigned long long inkStyle;                                      //@synthesize inkStyle=_inkStyle - In the implementation block
@property (nonatomic,copy) id frameBlock;                                                      //@synthesize frameBlock=_frameBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                 //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id startPresentBlock;                                               //@synthesize startPresentBlock=_startPresentBlock - In the implementation block
@property (nonatomic,copy) id dismissCompletionBlock;                                          //@synthesize dismissCompletionBlock=_dismissCompletionBlock - In the implementation block
+(void)markupDocumentInfo:(id)arg1 imageCache:(id)arg2 fromView:(id)arg3 presentingViewController:(id)arg4 inkStyle:(unsigned long long)arg5 frameBlock:(/*^block*/id)arg6 startPresentBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 dismissCompletionBlock:(/*^block*/id)arg9 ;
+(void)cleanupMarkup;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setDocumentInfo:(ICDocCamDocumentInfo *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(ICDocCamImageCache *)imageCache;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(ICDocCamDocumentInfo *)documentInfo;
-(void)setInkStyle:(unsigned long long)arg1 ;
-(void)setFrameBlock:(id)arg1 ;
-(void)setStartPresentBlock:(id)arg1 ;
-(void)setDismissCompletionBlock:(id)arg1 ;
-(void)presentMarkupFromView:(id)arg1 ;
-(void)presentMarkupViewControllerFromView:(id)arg1 ;
-(void)dismissMarkupViewController;
-(MarkupViewController *)markupViewController;
-(id)dismissCompletionBlock;
-(void)setMarkupViewController:(MarkupViewController *)arg1 ;
-(unsigned long long)inkStyle;
-(void)markupDoneAction:(id)arg1 ;
-(void)markupCancelAction:(id)arg1 ;
-(id)startPresentBlock;
-(MURemoteViewController *)markupRemoteViewController;
-(void)handleReturnedURL:(id)arg1 ;
-(void)setMarkupRemoteViewController:(MURemoteViewController *)arg1 ;
-(id)frameBlock;
@end
