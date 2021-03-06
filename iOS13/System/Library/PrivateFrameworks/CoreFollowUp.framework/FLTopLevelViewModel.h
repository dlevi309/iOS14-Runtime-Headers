/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/FLViewModel.h>

@class FLFollowUpController, FLItemChangeObserver, NSString;

@interface FLTopLevelViewModel : NSObject <FLViewModel> {

	FLFollowUpController* _controller;
	FLItemChangeObserver* _observer;
	NSString* _bundleIdentifier;
	NSString* _localizedDeviceRowTitle;

}

@property (nonatomic,copy) NSString * localizedDeviceRowTitle;              //@synthesize localizedDeviceRowTitle=_localizedDeviceRowTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_prefixFromBundleIdentifier:(id)arg1 ;
+(id)redirectURLForItem:(id)arg1 withAction:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)groups;
-(id)allPendingItems;
-(void)setItemChangeHandler:(/*^block*/id)arg1 ;
-(void)refreshItems:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)refreshItemsForItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 controller:(id)arg2 ;
-(id)extensionToItemMapFromItems:(id)arg1 ;
-(void)_refreshItemsWithExtensionToItemMap:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)localizedDeviceRowTitle;
-(void)mapItemsToGroups:(id)arg1 ;
-(BOOL)allPendingItemsContains:(id)arg1 ;
-(void)setLocalizedDeviceRowTitle:(NSString *)arg1 ;
@end

