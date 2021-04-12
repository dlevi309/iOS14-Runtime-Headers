/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@protocol RemoteUIControllerDelegate <NSObject>
@optional
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
-(void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(/*^block*/id)arg4;
-(BOOL)remoteUIController:(id)arg1 objectModel:(id)arg2 shouldDisplayNamedElement:(id)arg3 page:(id)arg4;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
-(void)remoteUIController:(id)arg1 didPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
-(void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
-(void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
-(void)remoteUIControllerDidDismiss:(id)arg1;
-(id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;

@end
