/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <libobjc.A.dylib/PLAssetContainerListChangeObserver.h>
#import <libobjc.A.dylib/PUSessionInfoObserver.h>

@class PUPhotosPickerViewControllerSpec, PUPhotosPickerSessionInfo, PUTabbedLibraryViewController, PHPhotosPickerOptions, NSString;

@interface PUPhotosPickerViewController : UIViewController <UITabBarControllerDelegate, PLAssetContainerListChangeObserver, PUSessionInfoObserver> {

	PUPhotosPickerViewControllerSpec* _spec;
	PUPhotosPickerSessionInfo* _photosPickerSessionInfo;
	BOOL _needsToSetupOptions;
	int _currentContentMode;
	/*^block*/id _completionHandler;
	PUTabbedLibraryViewController* __tabbedLibraryViewController;
	PHPhotosPickerOptions* _photosPickerOptions;

}

@property (setter=_setTabbedLibraryViewController:,nonatomic,retain) PUTabbedLibraryViewController * _tabbedLibraryViewController;              //@synthesize _tabbedLibraryViewController=__tabbedLibraryViewController - In the implementation block
@property (nonatomic,retain) PHPhotosPickerOptions * photosPickerOptions;                                                                       //@synthesize photosPickerOptions=_photosPickerOptions - In the implementation block
@property (assign,nonatomic) int currentContentMode;                                                                                            //@synthesize currentContentMode=_currentContentMode - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(id)initWithSpec:(id)arg1 targetAlbum:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(unsigned long long)supportedInterfaceOrientations;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(void)didReceiveMemoryWarning;
-(id)initWithSpec:(id)arg1 targetAlbumName:(id)arg2 options:(id)arg3 ;
-(id)initWithSpec:(id)arg1 targetAlbumName:(id)arg2 ;
-(void)sessionInfoStatusDidChange:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(void)loadView;
-(id)_initWithSpec:(id)arg1 targetAlbum:(id)arg2 orTargetAlbumName:(id)arg3 options:(id)arg4 ;
-(int)currentContentMode;
-(void)setCurrentContentMode:(int)arg1 ;
-(void)_setTabbedLibraryViewController:(id)arg1 ;
-(PHPhotosPickerOptions *)photosPickerOptions;
-(void)setPhotosPickerOptions:(PHPhotosPickerOptions *)arg1 ;
-(PUTabbedLibraryViewController *)_tabbedLibraryViewController;
-(void)dealloc;
-(long long)_preferredWhitePointAdaptivityStyle;
@end

