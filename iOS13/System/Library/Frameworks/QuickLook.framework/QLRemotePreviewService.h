/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLRemotePreviewService <NSObject>
@required
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)invalidateService;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2;
-(void)previewWillAppear:(BOOL)arg1;
-(void)previewDidAppear:(BOOL)arg1;
-(void)previewWillDisappear:(BOOL)arg1;
-(void)previewDidDisappear:(BOOL)arg1;
-(void)setHostViewControllerProxy:(id)arg1;
-(void)previewControllerWantsFullScreen:(BOOL)arg1;
-(void)previewControllerDidUpdateTitle:(id)arg1;
-(void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
-(void)getPrinterProxyWithCompletionHandler:(/*^block*/id)arg1;

@end

