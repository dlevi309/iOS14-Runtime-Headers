/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol SUClientInterfaceDelegate <NSObject>
@optional
-(void)clientInterfaceDidFinishLoading:(id)arg1;
-(void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
-(void)clientInterface:(id)arg1 financeInterruptionResolved:(BOOL)arg2;
-(void)clientInterface:(id)arg1 overrideCreditCardPresentationFromViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)clientInterface:(id)arg1 overrideRedeemCameraPerformAction:(long long)arg2 withObject:(id)arg3;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(long long)arg3;
-(void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(BOOL)arg3;
-(id)previewOverlayForClientInterface:(id)arg1;
-(void)returnToLibraryForClientInterface:(id)arg1;
-(id)scriptInterfaceForClientInterface:(id)arg1;
-(id)tabBarControllerForClientInterface:(id)arg1;

@end

