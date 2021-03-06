/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol WebUIDelegate <NSObject>
@optional
-(void)webViewShow:(id)arg1;
-(void)webViewClose:(id)arg1;
-(void)webView:(id)arg1 printFrameView:(id)arg2;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(void)webViewRunModal:(id)arg1;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(void)webViewFocus:(id)arg1;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
-(id)webViewFirstResponder:(id)arg1;
-(void)webView:(id)arg1 setStatusText:(id)arg2;
-(void)webViewUnfocus:(id)arg1;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;
-(id)webView:(id)arg1 createWebViewModalDialogWithRequest:(id)arg2;
-(void)webView:(id)arg1 makeFirstResponder:(id)arg2;
-(id)webViewStatusText:(id)arg1;
-(BOOL)webViewAreToolbarsVisible:(id)arg1;
-(void)webView:(id)arg1 setToolbarsVisible:(BOOL)arg2;
-(BOOL)webViewIsStatusBarVisible:(id)arg1;
-(void)webView:(id)arg1 setStatusBarVisible:(BOOL)arg2;
-(BOOL)webViewIsResizable:(id)arg1;
-(void)webView:(id)arg1 setResizable:(BOOL)arg2;
-(void)webView:(id)arg1 setFrame:(CGRect)arg2;
-(CGRect*)webViewFrame:(id)arg1;
-(float)webViewHeaderHeight:(id)arg1;
-(BOOL)webView:(id)arg1 runBeforeUnloadConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;
-(float)webViewFooterHeight:(id)arg1;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(BOOL)arg3;
-(void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;
-(void)webView:(id)arg1 drawHeaderInRect:(CGRect)arg2;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
-(void)webView:(id)arg1 setContentRect:(CGRect)arg2;
-(BOOL)webView:(id)arg1 shouldPerformAction:(SEL)arg2 fromSender:(id)arg3;
-(void)webView:(id)arg1 drawFooterInRect:(CGRect)arg2;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2;
-(CGRect*)webViewContentRect:(id)arg1;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3;

@end

