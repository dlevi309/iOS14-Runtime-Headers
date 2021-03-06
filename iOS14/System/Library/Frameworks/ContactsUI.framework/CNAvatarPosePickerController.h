/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerVariantListControllerDelegate.h>

@protocol CNAvatarPosePickerControllerDelegate;
@class CNPhotoPickerVariantsManager, CNPhotoPickerAnimojiProviderItem, CNPhotoPickerVariantListController;

@interface CNAvatarPosePickerController : NSObject <CNPhotoPickerVariantListControllerDelegate> {

	id<CNAvatarPosePickerControllerDelegate> _delegate;
	long long _numberOfItemsPerRow;
	CNPhotoPickerVariantsManager* _variantsManager;
	CNPhotoPickerAnimojiProviderItem* _originalProviderItem;
	CNPhotoPickerVariantListController* _posePickerController;
	CGSize _desiredContentSize;

}

@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                         //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) CNPhotoPickerAnimojiProviderItem * originalProviderItem;                //@synthesize originalProviderItem=_originalProviderItem - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantListController * posePickerController;              //@synthesize posePickerController=_posePickerController - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarPosePickerControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long numberOfItemsPerRow;                                          //@synthesize numberOfItemsPerRow=_numberOfItemsPerRow - In the implementation block
@property (assign,nonatomic) CGSize desiredContentSize;                                              //@synthesize desiredContentSize=_desiredContentSize - In the implementation block
-(id<CNAvatarPosePickerControllerDelegate>)delegate;
-(void)setDelegate:(id<CNAvatarPosePickerControllerDelegate>)arg1 ;
-(long long)numberOfItemsPerRow;
-(CNPhotoPickerVariantListController *)posePickerController;
-(void)setPosePickerController:(CNPhotoPickerVariantListController *)arg1 ;
-(void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg1 ;
-(id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2 ;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(CGSize)desiredContentSize;
-(id)initWithAnimojiProviderItem:(id)arg1 variantsManager:(id)arg2 ;
-(void)setNumberOfItemsPerRow:(long long)arg1 ;
-(void)setDesiredContentSize:(CGSize)arg1 ;
-(id)posePickerViewController;
-(CNPhotoPickerAnimojiProviderItem *)originalProviderItem;
-(void)setOriginalProviderItem:(CNPhotoPickerAnimojiProviderItem *)arg1 ;
@end

