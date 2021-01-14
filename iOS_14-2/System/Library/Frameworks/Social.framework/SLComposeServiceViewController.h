/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol SLSheetViewHostProtocol;
@class NSObject, NSMutableArray, UIImage, NSNumber, SLSheetContentView, SLSheetMasklayer, UIAlertController, SLSheetPreviewImageSource, UIView, UIViewController, NSString, SLSheetRootViewController, SLSheetNavigationController, UITextView;

@interface SLComposeServiceViewController : UIViewController <UINavigationControllerDelegate, UITextViewDelegate> {

	NSObject*<SLSheetViewHostProtocol> _hostProxy;
	unsigned long long _unfulfilledItemProviderRepresentations;
	NSMutableArray* _attachments;
	UIImage* _serviceIconImage;
	NSNumber* _charactersRemaining;
	SLSheetContentView* _contentView;
	SLSheetMasklayer* _vignetteLayer;
	UIAlertController* _alertController;
	BOOL _isShowingLocationDeniedAlert;
	BOOL _isPresentingActionViewController;
	BOOL _autoCompletionViewControllerAffectsSheetSize;
	SLSheetPreviewImageSource* _previewImageSource;
	UIView* _maskView;
	BOOL _didFirstSheetActionLoad;
	BOOL _didCallPresentSheet;
	BOOL _triggerPresentationAnimationOnKeyboard;
	BOOL _hasPresentedSheet;
	BOOL _inPostButtonTapped;
	BOOL _waitingForAnimateAlongsideTransitionBlock;
	CGRect _sheetFrameStartingRotation;
	UIViewController* _viewControllerForTrackingSheetSize;
	BOOL _preventSheetPositionChanges;
	BOOL _wasPresented;
	BOOL _suppressKeyboard;
	NSString* _placeholder;
	UIViewController* _autoCompletionViewController;
	NSMutableArray* _constraints;
	SLSheetRootViewController* _sheetRootViewController;
	SLSheetNavigationController* _navigationController;
	unsigned long long _maxImageAttachmentSize;

}

@property (nonatomic,retain) SLSheetContentView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
@property (retain) NSMutableArray * constraints;                                               //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) SLSheetRootViewController * sheetRootViewController;              //@synthesize sheetRootViewController=_sheetRootViewController - In the implementation block
@property (nonatomic,retain) SLSheetNavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) BOOL preventSheetPositionChanges;                                 //@synthesize preventSheetPositionChanges=_preventSheetPositionChanges - In the implementation block
@property (readonly) BOOL wasPresented;                                                        //@synthesize wasPresented=_wasPresented - In the implementation block
@property (assign,nonatomic) BOOL suppressKeyboard;                                            //@synthesize suppressKeyboard=_suppressKeyboard - In the implementation block
@property (readonly) UIView * sheetView; 
@property (assign,nonatomic) unsigned long long maxImageAttachmentSize;                        //@synthesize maxImageAttachmentSize=_maxImageAttachmentSize - In the implementation block
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) NSString * contentText; 
@property (nonatomic,copy) NSString * placeholder;                                             //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) NSNumber * charactersRemaining; 
@property (nonatomic,retain) UIViewController * autoCompletionViewController;                  //@synthesize autoCompletionViewController=_autoCompletionViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)_imageAttachmentLoadDownsamplePreviewQueue;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UITextView *)textView;
-(NSMutableArray *)constraints;
-(void)addAttachment:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)attachments;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)contentText;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setTitle:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)setNavigationController:(SLSheetNavigationController *)arg1 ;
-(id)sheetActions;
-(void)shouldShowNetworkActivityIndicator:(BOOL)arg1 ;
-(BOOL)isContentValid;
-(void)setCharactersRemaining:(NSNumber *)arg1 ;
-(void)pushActionViewController:(id)arg1 ;
-(void)reloadSheetActions;
-(void)validateContent;
-(void)setHostProxy:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)shouldAutorotate;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)text;
-(void)setContentView:(SLSheetContentView *)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(NSString *)placeholder;
-(void)keyboardWillShow:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)setPlaceholderText:(id)arg1 ;
-(SLSheetContentView *)contentView;
-(void)send;
-(void)cancel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_addAttachment:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(SLSheetNavigationController *)navigationController;
-(void)keyboardDidChange:(id)arg1 ;
-(void)pushConfigurationViewController:(id)arg1 ;
-(void)popConfigurationViewController;
-(void)reloadConfigurationItems;
-(BOOL)wasPresented;
-(void)setMaxImageAttachmentSize:(unsigned long long)arg1 ;
-(void)setAutoCompletionViewController:(UIViewController *)arg1 ;
-(void)didSelectPost;
-(id)configurationItems;
-(void)presentationAnimationDidFinish;
-(void)setServiceIconImage:(id)arg1 ;
-(void)postButtonTapped:(id)arg1 ;
-(void)setPostButtonTitle:(id)arg1 ;
-(void)networkActivityIndicatorNotification:(id)arg1 ;
-(void)_performCommonInitialization:(id)arg1 ;
-(void)_setViewControllerForTrackingSheetSize:(id)arg1 ;
-(BOOL)preventSheetPositionChanges;
-(CGRect)sheetFrameForViewController:(id)arg1 ;
-(void)setSheetFrame:(CGRect)arg1 ;
-(void)_positionVignetteForSheetFrame:(CGRect)arg1 ;
-(void)_positionSheetViewForViewController:(id)arg1 ;
-(SLSheetRootViewController *)sheetRootViewController;
-(void)updateSheetForVerticalSizeClass;
-(void)_presentSheet;
-(BOOL)suppressKeyboard;
-(void)_updateContentViewWithCharactersRemaining;
-(void)_loadImageAttachmentData:(id)arg1 ;
-(BOOL)_areAttachmentsReady;
-(void)_imageAttachmentDataDidLoad:(id)arg1 ;
-(void)_downsampleImageAttachment:(id)arg1 ;
-(id)previewImageSource;
-(unsigned long long)maxImageAttachmentSize;
-(id)loadPreviewView;
-(void)_adjustContentViewIntrinsicHeightForPreviewView;
-(long long)_previewDisplayFormat;
-(void)animateSheetCancelWithDuration:(double)arg1 ;
-(void)positionSheetView;
-(void)hideKeyboardAnimated:(BOOL)arg1 ;
-(void)_positionSheetViewAnimatedForViewController:(id)arg1 ;
-(void)setPreventSheetPositionChanges:(BOOL)arg1 ;
-(void)showKeyboardAnimated:(BOOL)arg1 ;
-(UIView *)sheetView;
-(void)_animateVignetteMaskFromSheetFrame:(CGRect)arg1 toSheetFrame:(CGRect)arg2 duration:(double)arg3 ;
-(void)animateCardSendOrientation:(long long)arg1 ;
-(void)_animateCardSendFinished;
-(void)animateSheetPresentationWithDuration:(double)arg1 ;
-(void)_animateSheetPresentationFinished;
-(void)_animateSheetCancelFinished;
-(void)didSelectCancel;
-(void)updateKeyboardSize;
-(void)_presentedViewControllerContentSizeDidChange;
-(CGRect)sheetFrameForViewController:(id)arg1 topSpaceProportion:(double)arg2 topSpaceOffset:(double)arg3 ;
-(CGSize)_intrinsicSheetSize;
-(double)_sheetMinBottomMarginForVerticalSizeClass;
-(void)setSheetRootViewController:(SLSheetRootViewController *)arg1 ;
-(void)setSuppressKeyboard:(BOOL)arg1 ;
-(void)_convertExtensionItemProvidersToAttachments:(id)arg1 ;
-(void)_loadPreviewView;
-(id)initWithServiceIconImage:(id)arg1 ;
-(void)showKeyboardWithAnimationTime:(double)arg1 ;
-(void)hideKeyboardWithAnimationTime:(double)arg1 ;
-(NSNumber *)charactersRemaining;
-(id)URLAttachments;
-(void)createPreviewIfNeeded;
-(void)didSendWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)showLocationDeniedAlertWithTitle:(id)arg1 settingsURL:(id)arg2 ;
-(void)presentSettingsAlertWithTitle:(id)arg1 message:(id)arg2 targetURL:(id)arg3 ;
-(UIViewController *)autoCompletionViewController;
@end
