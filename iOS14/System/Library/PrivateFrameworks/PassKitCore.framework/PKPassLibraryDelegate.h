/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKPassLibraryDelegate <NSObject>
@optional
-(void)passLibraryReceivedInterruption;
-(void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
-(void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;

@end

