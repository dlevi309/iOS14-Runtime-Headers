/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class UIImage, CNContactPickerViewController, CNContact, UIImagePickerController, NSString;

@interface UIAssignToContactActivity : UIActivity <CNContactPickerDelegate, CNContactViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	UIImage* _image;
	CNContactPickerViewController* _peoplePicker;
	CNContact* _person;
	UIImagePickerController* _imagePickerController;

}

@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * peoplePicker;                 //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (nonatomic,retain) CNContact * person;                                           //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) UIImagePickerController * imagePickerController;              //@synthesize imagePickerController=_imagePickerController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_xpcAttributes;
+(BOOL)_isCapabilityBasedActivity;
-(CNContact *)person;
-(void)_cleanup;
-(void)setImage:(UIImage *)arg1 ;
-(id)activityType;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(UIImagePickerController *)imagePickerController;
-(UIImage *)image;
-(void)setImagePickerController:(UIImagePickerController *)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)_willPresentAsFormSheet;
-(id)_systemImageName;
-(id)_embeddedActivityViewController;
-(void)setPerson:(CNContact *)arg1 ;
-(CNContactPickerViewController *)peoplePicker;
-(void)setPeoplePicker:(CNContactPickerViewController *)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(id)activityTitle;
-(id)activityViewController;
@end

